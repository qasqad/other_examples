using System;
using System.Windows.Forms;
using System.IO;
using System.Xml.Serialization;

namespace CSharpStudents
{
    public partial class Form1 : Form
    {
        // Создаем список студентов
        Students studentList = new Students();

        // Бакалавр и магистр для передачи в другую форму
        public Bachelor bach;
        public Master mast;

        // Для чтения
        Read reader;

        // Для поиска
        FirsNameSearch studentSearchFirstName;
        SecondNameSearch studentSearchSecondName;
        FacultySearch studentSearchFaculty;
        DiplomaSearch studentDiplomaSearch;

        public Form1()
        {
            InitializeComponent();
            FormView();
        }

/// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// ВНЕШНИЙ ВИД ФОРМЫ
/// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Отображение на форме при выбранном студенте
        private void BachelorView()
        {
            firstNameTextBox.Visible = true;
            secondNameTextBox.Visible = true;
            facultyTextBox.Visible = true;
            diplomaLabel.Visible = false;
            diplomaTextBox.Visible = false;
        }

        // Отображение на форме при выбранном магистре
        private void MasterView()
        {
            firstNameTextBox.Visible = true;
            secondNameTextBox.Visible = true;
            facultyTextBox.Visible = true;
            diplomaLabel.Visible = true;
            diplomaTextBox.Visible = true;
        }

        // Заполнение соответствующих полей на форме
        private void StudentOnForm(Student stud)
        {
            firstNameTextBox.Text = stud.firstName;
            secondNameTextBox.Text = stud.secondName;
            facultyTextBox.Text = stud.faculty;
            if (stud.GetType().ToString() == "CSharpStudents.Bachelor")
            {
                BachelorView();
                return;
            }
            else
            {
                MasterView();
                diplomaTextBox.Text = ((Master)stud).diploma;
                return;
            }
        }

        // Запрещаем кнопки сохранения, просмотра, редактироания и удаления
        void BlockButtonsForZeroStudents()
        {
            сохранитьToolStripMenuItem1.Enabled = false;
            сохранитьКакToolStripMenuItem.Enabled = false;
            предыдущийToolStripMenuItem.Enabled = false;
            следующийToolStripMenuItem.Enabled = false;
            рToolStripMenuItem.Enabled = false;
            удалитьToolStripMenuItem.Enabled = false;
        }

        // Разрешаем кнопки сохранения, просмотра, редактироания и удаления
        void UnblockButtonsForStudents()
        {
            сохранитьToolStripMenuItem1.Enabled = true;
            сохранитьКакToolStripMenuItem.Enabled = true;
            предыдущийToolStripMenuItem.Enabled = true;
            следующийToolStripMenuItem.Enabled = true;
            рToolStripMenuItem.Enabled = true;
            удалитьToolStripMenuItem.Enabled = true;
            открытьToolStripMenuItem.Enabled = true;
            добавитьToolStripMenuItem.Enabled = true;
        }

        // Разлок кнопок предыдущий, следующий
        void UnblockPrevNextButtons()
        {
            prevStudentButton.Enabled = true;
            nextStudentButton.Enabled = true;
        }

        // Рвзлок кнопок предыдущий, следующий из меню
        void UnblockMenuPrevNextButtons()
        {
            предыдущийToolStripMenuItem.Enabled = true;
            следующийToolStripMenuItem.Enabled = true;
        }

        // Блокируем кнопки перелистывания
        void BlockPrevNextButtons()
        {
            // Блокируем кнопки предыдущего и следуещего, если в списке один или ноль студентов
            if (studentList.Count() == 1 || studentList.Count() == 0)
            {
                prevStudentButton.Enabled = false;
                nextStudentButton.Enabled = false;
            }
            // Если стоим на первом, блокируем кнопку предыдущего
            else if (!reader.IfHasPrev())
            {
                prevStudentButton.Enabled = false;
                nextStudentButton.Enabled = true;
            }
            // Если стоим на последнем, блокируем кнопку следующего
            else if (!reader.IfHasNext())
            {
                nextStudentButton.Enabled = false;
                prevStudentButton.Enabled = true;
            }
            // Если где-то посередине, делаем доступными все кнопки
            else
            {
                prevStudentButton.Enabled = true;
                nextStudentButton.Enabled = true;
            }
        }

        // Отображение на форме при поиске
        private void SearchView()
        {
            BlockPrevNextButtons();
            BlockButtonsForZeroStudents();
            searchButton.Text = "Покинуть поиск";
            searchButton.Visible = true;
            searchTypeComboBox.Enabled = false;
            searchTextBox.Enabled = false;
            открытьToolStripMenuItem.Enabled = false;
            добавитьToolStripMenuItem.Enabled = false;
        }

        // Вид при доступном поиске
        private void AllowSearchView()
        {
            searchButton.Text = "Поиск";
            searchButton.Visible = true;
            searchButton.Enabled = true;

            searchTypeComboBox.Enabled = true;
            searchTextBox.Enabled = true;
        }

        // Вид при недоступном поиске
        private void NonAllowSearchView()
        {
            searchButton.Text = "Поиск";
            searchButton.Visible = true;
            searchButton.Enabled = true;

            searchTypeComboBox.Enabled = false;
            searchTextBox.Enabled = false;
        }

        // Делаем все недоступным
        private void EnableFalseAll()
        {
            prevStudentButton.Enabled = false;
            nextStudentButton.Enabled = false;
            searchTypeComboBox.Enabled = false;
            searchTextBox.Enabled = false;
            searchButton.Enabled = false;
        }

        // Забота о внешнем виде формы
        private void FormView()
        {
            EnableFalseAll();
            BlockPrevNextButtons();
            AllowSearchView();

            if (studentList.studentsList.Count == 0)
            {
                // Если нет никого, делаем формочку как при наличии бакалавра
                BachelorView();
                BlockButtonsForZeroStudents();
                NonAllowSearchView();       
                firstNameTextBox.Text = "";
                secondNameTextBox.Text = "";
                facultyTextBox.Text = "";
                diplomaTextBox.Text = "";
                return;
            }

            // Отображаем студента
            UnblockButtonsForStudents();
            StudentOnForm(reader.TakeCurrentStudent());
        }

/// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// ДОБАВЛЕНИЕ, РЕДАКТИРОВАНИЕ И УДАЛЕНИЕ СООТВЕТСТВУЮЩЕЙ ПЕРСОНЫ
/// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        
        bool ifNeedSave = false;

        // Добавление бакалавра
        private void бакалаврToolStripMenuItem_Click(object sender, EventArgs e)
        {
            workWithStudents form = new workWithStudents();

            // Владельцем формы назначаем эту
            form.Tag = this;

            // Говорим, что бакалавр
            form.ifBachelor = true;

            form.BachelorCreate();
            form.ShowDialog();

            // Добавляем бакалавра, если ок
            if (form.DialogResult == DialogResult.OK && form.ifBachelor)
            {
                studentList.Add(bach);

                if (reader is null)
                    reader = new Read(studentList);

                ifNeedSave = true;
            }

            FormView();
        }

        // Добавление магистра
        private void магистрToolStripMenuItem_Click(object sender, EventArgs e)
        {
            workWithStudents form = new workWithStudents();

            // Владельцем формы назначаем эту
            form.Tag = this;

            form.MasterCreate();
            form.ShowDialog();

            // Добавляем магистра, если ок
            if (form.DialogResult == DialogResult.OK && !form.ifBachelor)
            {
                studentList.Add(mast);

                if (reader is null)
                    reader = new Read(studentList);

                ifNeedSave = true;
            }

            FormView();
        }
        
        // Редактируем бакалавра/магистра, на которм стоим
        private void рToolStripMenuItem_Click(object sender, EventArgs e)
        {
            workWithStudents form = new workWithStudents();

            // Владельцем формы назначаем эту
            form.Tag = this;

            // Говорим, что бакалавр
            if (reader.TakeCurrentStudent().GetType().ToString() == "CSharpStudents.Bachelor")
            {
                form.ifEditBachelor = true;
                bach = (Bachelor)reader.TakeCurrentStudent();
                form.BachelorEdit();
                form.ShowDialog();
            }
            else
            {
                mast = (Master)reader.TakeCurrentStudent();
                form.MasterEdit();
                form.ShowDialog();
            }

            // Заменяем студента, если ок
            if (form.DialogResult == DialogResult.OK && form.ifEditBachelor)
            {
                reader.ChangeCurrentStudent(bach);
                ifNeedSave = true;
            }

            // Заменяем бакалавра, если ок
            if (form.DialogResult == DialogResult.OK && !form.ifEditBachelor)
            {
                reader.ChangeCurrentStudent(mast);
                ifNeedSave = true;
            }

            FormView();
        }

        // Удаляем студента/магистра, на которм стоим
        private void удалитьToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Student stud = null;

            if (MessageBox.Show("Вы действительно хотите удалить персону из списка?", "Удаление", MessageBoxButtons.YesNo) == DialogResult.Yes)
            {
                stud = reader.DeleteCurrentStudent();

                ifNeedSave = true;

                FormView();
            }
            else
                return;
        }

/// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// ДВИЖЕНИЕ ПО СПИСКУ СТУДЕНТОВ (ПО КНОПКАМ И НА ФОРМЕ)
/// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Обращаемся к предыдущему студенту
        private void prevStudentButton_Click(object sender, EventArgs e)
        {
            UnblockPrevNextButtons();

            if (searchButton.Text == "Поиск")
            {
                reader.GetPrev();
                FormView();
            }
            if (searchButton.Text == "Покинуть поиск")
            {
                searchPrev();
            }
        }

        // Обращаемся к следуещему студенту
        private void nextStudentButton_Click(object sender, EventArgs e)
        {
            UnblockPrevNextButtons();
            if (searchButton.Text == "Поиск")
            {
                reader.GetNext();
                FormView();
            }
            if (searchButton.Text == "Покинуть поиск")
            {
                searchNext();
            }
        }

        // Обращаемся к предыдущему студенту (с исключением)
        private void предыдущийToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (searchButton.Text == "Поиск")
            {
                try
                { reader.IfHasPrev();
                    reader.GetPrev();
                }
                catch (Exception exception)
                {
                    MessageBox.Show(exception.Message);
                }

                //if (!reader.IfHasPrev())
                //throw new Exception("Обращение к предыдущему студенту невозможно!");
                //else reader.GetPrev();
                //FormView();

                
            }
            else searchPrev();

        }

        // Обращаемся к следующему студенту (с исключением)
        private void следующийToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (searchButton.Text == "Поиск")
            {
                if (!reader.IfHasNext())
                    throw new Exception("Обращение к следующему студенту невозможно!");
                else reader.GetNext();
                FormView();
            }
            else searchNext();
        }

/// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// РАБОТА С ФАЙЛОМ (СОХРАНЕНИЕ, ОТКРЫТИЕ)
/// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Файл и сериализация
        XmlSerializer writer = new XmlSerializer(typeof(Students));
        public FileStream fs;
        string filePath;
        
        // Сохранение изменений
        public bool SaveChanges()
        {
            if (ifNeedSave)
            {
                DialogResult result = MessageBox.Show("Сохранить изменения?", "Сохранение", MessageBoxButtons.YesNoCancel);
                if (result == DialogResult.Yes)
                {
                    DialogResult resultSave = saveFileDialog.ShowDialog();
                    if (resultSave == DialogResult.OK)
                        filePath = saveFileDialog.FileName;
                    if (resultSave == DialogResult.Cancel)
                        return false;

                    fs = File.Create(filePath);

                    writer.Serialize(fs, studentList);

                    fs.Close();
                    MessageBox.Show("Сохранение прошло успешно");

                    ifNeedSave = false;
                }
                else
                    return true;
            }
            return false;
        }

        // Открытие файла
        public void OpenFile()
        {
            if (openFileDialog.ShowDialog() == DialogResult.OK)
                filePath = openFileDialog.FileName;
            else
                return;
            if (File.Exists(filePath))
            {
                fs = File.OpenRead(filePath);

                studentList = (Students)writer.Deserialize(fs);

                // Пихаем студентов в итератор чтения
                reader = new Read(studentList);
                // Меняем отображение на форме
                FormView();

                fs.Close();
            }
        }

        // Сохранение изменений по кнопке в файл-источник
        private void сохранитьToolStripMenuItem1_Click(object sender, EventArgs e)
        {
            // Если такого файла не существовало, предлагаем "Сохранить как..."
            if (filePath is null)
            {
                сохранитьКакToolStripMenuItem_Click(sender, e);
                return;
            }
            fs = File.Create(filePath);
            writer.Serialize(fs, studentList);
            fs.Close();
            MessageBox.Show("Сохранение прошло успешно");
            // Очищаем список студентов
            studentList.Clear();
            // "Чистим" поля
            FormView();
            ifNeedSave = false;
        }

        // Сохранение изменений в новый файл по кнопке
        private void сохранитьКакToolStripMenuItem_Click(object sender, EventArgs e)
        {
            // Сохраняем изменения
            SaveChanges();
            // Очищаем список студентов
            studentList.Clear();
            // "Чистим" поля
            FormView();
        }

        // Открытие файла
        private void открытьToolStripMenuItem_Click(object sender, EventArgs e)
        {
            // Сохранение текущих изменений
            SaveChanges();
            // Очищаем список студентов
            studentList.Clear();
            // Открываем файл
            OpenFile();
            // Отображаем изменения на форме
            FormView();
        }

/// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// ПОИСК ПО ПОЛЮ
/// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        // Поиск нужного студента
        private void searchButton_Click(object sender, EventArgs e)
        {
            if (searchButton.Text == "Покинуть поиск")
                escapeSearch();
            else
            {
                if (searchTextBox.Text == "" || searchTypeComboBox.Text == "")
                {
                    MessageBox.Show("Введите искомое значение");
                    return;
                }

                // Поиск по имени
                if (searchTypeComboBox.Text == "Имя")
                {
                    studentSearchFirstName = new FirsNameSearch(studentList, searchTextBox.Text);
                    Student currStud = studentSearchFirstName.GetFirst();

                    // Если студент найден - выводим его на форму
                    if (currStud != null)
                    {
                        FormView();
                        StudentOnForm(currStud);                      
                        SearchView();
                        UnblockMenuPrevNextButtons();
                        prevStudentButton.Enabled = false;
                    }
                    else
                    {
                        MessageBox.Show("По результатам поиска ничего не найдено");
                        FormView();
                        // "Чистим" поле поиска
                        searchTypeComboBox.SelectedIndex = -1;
                        searchTextBox.Text = "";
                        return;
                    }
                }

                // Поиск по фамилии
                if (searchTypeComboBox.Text == "Фамилия")
                {
                    studentSearchSecondName = new SecondNameSearch(studentList, searchTextBox.Text);
                    Student currStud = studentSearchSecondName.GetFirst();

                    // Если студент найден - выводим его на форму
                    if (currStud != null)
                    {
                        FormView();
                        StudentOnForm(currStud);
                        SearchView();
                        UnblockMenuPrevNextButtons();
                        prevStudentButton.Enabled = false;
                    }
                    else
                    {
                        MessageBox.Show("По результатам поиска ничего не найдено");
                        FormView();
                        // "Чистим" поле поиска
                        searchTypeComboBox.SelectedIndex = -1;
                        searchTextBox.Text = "";
                        return;
                    }
                }

                // Поиск по факультету
                if (searchTypeComboBox.Text == "Факультет")
                {
                    studentSearchFaculty = new FacultySearch(studentList, searchTextBox.Text);
                    Student currStud = studentSearchFaculty.GetFirst();

                    // Если студент найден - выводим его на форму
                    if (currStud != null)
                    {
                        FormView();
                        StudentOnForm(currStud);
                        SearchView();
                        UnblockMenuPrevNextButtons();
                        prevStudentButton.Enabled = false;
                    }
                    else
                    {
                        MessageBox.Show("По результатам поиска ничего не найдено");
                        FormView();
                        // "Чистим" поле поиска
                        searchTypeComboBox.SelectedIndex = -1;
                        searchTextBox.Text = "";
                        return;
                    }
                }

                // Поиск по диплому
                if (searchTypeComboBox.Text == "Диплом")
                {
                    studentDiplomaSearch = new DiplomaSearch(studentList, searchTextBox.Text);
                    Student currStud = studentDiplomaSearch.GetFirst();


                    // Если студент найден - выводим его на форму
                    if (currStud != null)
                    {
                        FormView();
                        StudentOnForm(currStud);
                        SearchView();
                        UnblockMenuPrevNextButtons();
                        prevStudentButton.Enabled = false;
                    }
                    else
                    {
                        MessageBox.Show("По результатам поиска ничего не найдено");
                        FormView();
                        // "Чистим" поле поиска
                        searchTypeComboBox.SelectedIndex = -1;
                        searchTextBox.Text = "";
                        return;
                    }
                }
            }
        }

        // Поиск далее (следующий в результатах поиска)
        private void searchNext()
        {
            // Продолжаем поиск по имени
            if (searchTypeComboBox.Text == "Имя")
            {
                if (studentSearchFirstName.IfHasNext())
                {
                    StudentOnForm(studentSearchFirstName.GetNext());
                    if (!studentSearchFirstName.IfHasNext())
                        nextStudentButton.Enabled = false;
                }
                else
                    throw new Exception("Обращение к следующему студенту невозможно!");
            }

            // Продолжаем поиск по фамилии
            if (searchTypeComboBox.Text == "Фамилия")
            {
                if (studentSearchSecondName.IfHasNext())
                {
                    StudentOnForm(studentSearchSecondName.GetNext());
                    if (!studentSearchSecondName.IfHasNext())
                        nextStudentButton.Enabled = false;
                }
                else
                    throw new Exception("Обращение к следующему студенту невозможно!");
            }

            // Продолжаем поиск по факультету
            if (searchTypeComboBox.Text == "Факультет")
            {
                if (studentSearchFaculty.IfHasNext())
                {
                    StudentOnForm(studentSearchFaculty.GetNext());
                    if (!studentSearchFaculty.IfHasNext())
                        nextStudentButton.Enabled = false;
                }
                else
                    throw new Exception("Обращение к следующему студенту невозможно!");
            }

            // Продолжаем поиск по диплому
            if (searchTypeComboBox.Text == "Диплом")
            {
                if (studentDiplomaSearch.IfHasNext())
                {
                    StudentOnForm(studentDiplomaSearch.GetNext());
                    if (!studentDiplomaSearch.IfHasNext())
                        nextStudentButton.Enabled = false;
                }
                else
                    throw new Exception("Обращение к следующему студенту невозможно!");
            }
        }

        // Поиск далее (следующий в результатах поиска)
        private void searchPrev()
        {
            // Продолжаем поиск по имени
            if (searchTypeComboBox.Text == "Имя")
            {
                if (studentSearchFirstName.IfHasPrev())
                {
                    StudentOnForm(studentSearchFirstName.GetPrev());
                    if (!studentSearchFirstName.IfHasPrev())
                        prevStudentButton.Enabled = false;
                }
                else
                    throw new Exception("Обращение к предыдущему студенту невозможно!");
            }

            // Продолжаем поиск по фамилии
            if (searchTypeComboBox.Text == "Фамилия")
            {
                if (studentSearchSecondName.IfHasPrev())
                {
                    StudentOnForm(studentSearchSecondName.GetPrev());
                    if (!studentSearchSecondName.IfHasPrev())
                        prevStudentButton.Enabled = false;
                }
                else
                    throw new Exception("Обращение к предыдущему студенту невозможно!");
            }

            // Продолжаем поиск по факультету
            if (searchTypeComboBox.Text == "Факультет")
            {
                if (studentSearchFaculty.IfHasPrev())
                {
                    StudentOnForm(studentSearchFaculty.GetPrev());
                    if (!studentSearchFaculty.IfHasPrev())
                        prevStudentButton.Enabled = false;
                }
                else
                    throw new Exception("Обращение к предыдущему студенту невозможно!");
            }

            // Продолжаем поиск по диплому
            if (searchTypeComboBox.Text == "Диплом")
            {
                if (studentDiplomaSearch.IfHasPrev())
                {
                    StudentOnForm(studentDiplomaSearch.GetPrev());
                    if (!studentDiplomaSearch.IfHasPrev())
                        prevStudentButton.Enabled = false;
                }
                else
                    throw new Exception("Обращение к предыдущему студенту невозможно!");
            }
        }

        // Выход из режима поиска
        private void escapeSearch()
        {
            FormView();

            // "Чистим" поле поиска
            searchTypeComboBox.SelectedIndex = -1;
            searchTextBox.Text = "";
        }
    }
}

