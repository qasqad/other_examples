using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CSharpStudents
{
    public partial class workWithStudents : Form
    {
        public bool ifBachelor;
        public bool ifEditBachelor;

        public workWithStudents()
        {
            InitializeComponent();
        }
        
        public void BachelorCreate()
        {
            diplomaLabel.Visible = false;
            diplomaTextBox.Visible = false;
            this.Text = "Добавление бакалавра";
            insertCreateButton.Text = "Добавить";
        }

        public void MasterCreate()
        {
            this.Text = "Добавление магистра";
            insertCreateButton.Text = "Добавить";
        }

        public void BachelorEdit()
        {
            diplomaLabel.Visible = false;
            diplomaTextBox.Visible = false;
            this.Text = "Редактирование бакалавра";
            insertCreateButton.Text = "Редактировать";

            // Отображаем информацию о редактируемом бакалавре
            firstNameTextBox.Text = ((Form1)this.Tag).bach.firstName;
            secondNameTextBox.Text = ((Form1)this.Tag).bach.secondName;
            facultyTextBox.Text = ((Form1)this.Tag).bach.faculty;
        }

        public void MasterEdit()
        {
            this.Text = "Редактирование магистра";
            insertCreateButton.Text = "Редактировать";

            // Отображаем информацию о редактируемом магистре
            firstNameTextBox.Text = ((Form1)this.Tag).mast.firstName;
            secondNameTextBox.Text = ((Form1)this.Tag).mast.secondName;
            facultyTextBox.Text = ((Form1)this.Tag).mast.faculty;
            diplomaTextBox.Text = ((Form1)this.Tag).mast.diploma;
        }

        // Работа с бакалавром
        private void WorkWithBachelor()
        {
            Bachelor bch = new Bachelor(firstNameTextBox.Text, secondNameTextBox.Text, facultyTextBox.Text);
            // "Передаем" студента в первую форму
            ((Form1)this.Tag).bach = bch;
            this.DialogResult = DialogResult.OK;
        }

        // Работа с магистром
        private void WorkWithMaster()
        {
            Master mst = new Master(firstNameTextBox.Text, secondNameTextBox.Text, facultyTextBox.Text, diplomaTextBox.Text);
            // "Передаем" магистра в первую форму
            ((Form1)this.Tag).mast = mst;
            this.DialogResult = DialogResult.OK;
        }

        // Добавление студента или магистра
        private void insertCreateButton_Click(object sender, EventArgs e)
        {
            if (firstNameTextBox.Text == "" || secondNameTextBox.Text == "" || facultyTextBox.Text == "")
            {
                MessageBox.Show("Все поля должны быть заполнены");
                return;
            }

            if (ifBachelor || ifEditBachelor)
            {              
                WorkWithBachelor();
            }
            else if (diplomaTextBox.Text == "")
            {
                MessageBox.Show("Все поля должны быть заполнены");
                return;
            }
            else
            {
                WorkWithMaster();
            }

            this.Close();
        }
    }
}
