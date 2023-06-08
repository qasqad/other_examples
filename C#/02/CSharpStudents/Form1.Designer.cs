namespace CSharpStudents
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.файлToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.открытьToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.сохранитьToolStripMenuItem1 = new System.Windows.Forms.ToolStripMenuItem();
            this.сохранитьКакToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.просмотрToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.предыдущийToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.следующийToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.студентыToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.добавитьToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.студентToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.магистрToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.рToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.удалитьToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.equalLabel = new System.Windows.Forms.Label();
            this.searchTextBox = new System.Windows.Forms.TextBox();
            this.searchTypeComboBox = new System.Windows.Forms.ComboBox();
            this.searchLabel = new System.Windows.Forms.Label();
            this.nextStudentButton = new System.Windows.Forms.Button();
            this.prevStudentButton = new System.Windows.Forms.Button();
            this.facultyLabel = new System.Windows.Forms.Label();
            this.secondNameLabel = new System.Windows.Forms.Label();
            this.firstNameLabel = new System.Windows.Forms.Label();
            this.facultyTextBox = new System.Windows.Forms.TextBox();
            this.secondNameTextBox = new System.Windows.Forms.TextBox();
            this.firstNameTextBox = new System.Windows.Forms.TextBox();
            this.searchButton = new System.Windows.Forms.Button();
            this.diplomaLabel = new System.Windows.Forms.Label();
            this.diplomaTextBox = new System.Windows.Forms.TextBox();
            this.saveFileDialog = new System.Windows.Forms.SaveFileDialog();
            this.openFileDialog = new System.Windows.Forms.OpenFileDialog();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // menuStrip1
            // 
            this.menuStrip1.ImageScalingSize = new System.Drawing.Size(24, 24);
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.файлToolStripMenuItem,
            this.просмотрToolStripMenuItem,
            this.студентыToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(479, 33);
            this.menuStrip1.TabIndex = 0;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // файлToolStripMenuItem
            // 
            this.файлToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.открытьToolStripMenuItem,
            this.сохранитьToolStripMenuItem1,
            this.сохранитьКакToolStripMenuItem});
            this.файлToolStripMenuItem.Name = "файлToolStripMenuItem";
            this.файлToolStripMenuItem.Size = new System.Drawing.Size(65, 29);
            this.файлToolStripMenuItem.Text = "Файл";
            // 
            // открытьToolStripMenuItem
            // 
            this.открытьToolStripMenuItem.Name = "открытьToolStripMenuItem";
            this.открытьToolStripMenuItem.Size = new System.Drawing.Size(226, 30);
            this.открытьToolStripMenuItem.Text = "Открыть";
            this.открытьToolStripMenuItem.Click += new System.EventHandler(this.открытьToolStripMenuItem_Click);
            // 
            // сохранитьToolStripMenuItem1
            // 
            this.сохранитьToolStripMenuItem1.Name = "сохранитьToolStripMenuItem1";
            this.сохранитьToolStripMenuItem1.Size = new System.Drawing.Size(226, 30);
            this.сохранитьToolStripMenuItem1.Text = "Сохранить";
            this.сохранитьToolStripMenuItem1.Click += new System.EventHandler(this.сохранитьToolStripMenuItem1_Click);
            // 
            // сохранитьКакToolStripMenuItem
            // 
            this.сохранитьКакToolStripMenuItem.Name = "сохранитьКакToolStripMenuItem";
            this.сохранитьКакToolStripMenuItem.Size = new System.Drawing.Size(226, 30);
            this.сохранитьКакToolStripMenuItem.Text = "Сохранить как...";
            this.сохранитьКакToolStripMenuItem.Click += new System.EventHandler(this.сохранитьКакToolStripMenuItem_Click);
            // 
            // просмотрToolStripMenuItem
            // 
            this.просмотрToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.предыдущийToolStripMenuItem,
            this.следующийToolStripMenuItem});
            this.просмотрToolStripMenuItem.Name = "просмотрToolStripMenuItem";
            this.просмотрToolStripMenuItem.Size = new System.Drawing.Size(109, 29);
            this.просмотрToolStripMenuItem.Text = "Просмотр";
            // 
            // предыдущийToolStripMenuItem
            // 
            this.предыдущийToolStripMenuItem.Name = "предыдущийToolStripMenuItem";
            this.предыдущийToolStripMenuItem.Size = new System.Drawing.Size(206, 30);
            this.предыдущийToolStripMenuItem.Text = "Предыдущий";
            this.предыдущийToolStripMenuItem.Click += new System.EventHandler(this.предыдущийToolStripMenuItem_Click);
            // 
            // следующийToolStripMenuItem
            // 
            this.следующийToolStripMenuItem.Name = "следующийToolStripMenuItem";
            this.следующийToolStripMenuItem.Size = new System.Drawing.Size(206, 30);
            this.следующийToolStripMenuItem.Text = "Следующий";
            this.следующийToolStripMenuItem.Click += new System.EventHandler(this.следующийToolStripMenuItem_Click);
            // 
            // студентыToolStripMenuItem
            // 
            this.студентыToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.добавитьToolStripMenuItem,
            this.рToolStripMenuItem,
            this.удалитьToolStripMenuItem});
            this.студентыToolStripMenuItem.Name = "студентыToolStripMenuItem";
            this.студентыToolStripMenuItem.Size = new System.Drawing.Size(100, 29);
            this.студентыToolStripMenuItem.Text = "Студенты";
            // 
            // добавитьToolStripMenuItem
            // 
            this.добавитьToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.студентToolStripMenuItem,
            this.магистрToolStripMenuItem});
            this.добавитьToolStripMenuItem.Name = "добавитьToolStripMenuItem";
            this.добавитьToolStripMenuItem.Size = new System.Drawing.Size(217, 30);
            this.добавитьToolStripMenuItem.Text = "Добавить";
            // 
            // студентToolStripMenuItem
            // 
            this.студентToolStripMenuItem.Name = "студентToolStripMenuItem";
            this.студентToolStripMenuItem.Size = new System.Drawing.Size(172, 30);
            this.студентToolStripMenuItem.Text = "Бакалавр";
            this.студентToolStripMenuItem.Click += new System.EventHandler(this.бакалаврToolStripMenuItem_Click);
            // 
            // магистрToolStripMenuItem
            // 
            this.магистрToolStripMenuItem.Name = "магистрToolStripMenuItem";
            this.магистрToolStripMenuItem.Size = new System.Drawing.Size(172, 30);
            this.магистрToolStripMenuItem.Text = "Магистр";
            this.магистрToolStripMenuItem.Click += new System.EventHandler(this.магистрToolStripMenuItem_Click);
            // 
            // рToolStripMenuItem
            // 
            this.рToolStripMenuItem.Name = "рToolStripMenuItem";
            this.рToolStripMenuItem.Size = new System.Drawing.Size(217, 30);
            this.рToolStripMenuItem.Text = "Редактировать";
            this.рToolStripMenuItem.Click += new System.EventHandler(this.рToolStripMenuItem_Click);
            // 
            // удалитьToolStripMenuItem
            // 
            this.удалитьToolStripMenuItem.Name = "удалитьToolStripMenuItem";
            this.удалитьToolStripMenuItem.Size = new System.Drawing.Size(217, 30);
            this.удалитьToolStripMenuItem.Text = "Удалить";
            this.удалитьToolStripMenuItem.Click += new System.EventHandler(this.удалитьToolStripMenuItem_Click);
            // 
            // equalLabel
            // 
            this.equalLabel.AutoSize = true;
            this.equalLabel.Location = new System.Drawing.Point(231, 428);
            this.equalLabel.Name = "equalLabel";
            this.equalLabel.Size = new System.Drawing.Size(27, 20);
            this.equalLabel.TabIndex = 36;
            this.equalLabel.Text = "==";
            // 
            // searchTextBox
            // 
            this.searchTextBox.Enabled = false;
            this.searchTextBox.Location = new System.Drawing.Point(264, 425);
            this.searchTextBox.Name = "searchTextBox";
            this.searchTextBox.Size = new System.Drawing.Size(179, 26);
            this.searchTextBox.TabIndex = 35;
            // 
            // searchTypeComboBox
            // 
            this.searchTypeComboBox.BackColor = System.Drawing.SystemColors.HighlightText;
            this.searchTypeComboBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.searchTypeComboBox.Enabled = false;
            this.searchTypeComboBox.FormattingEnabled = true;
            this.searchTypeComboBox.Items.AddRange(new object[] {
            "Имя",
            "Фамилия",
            "Факультет",
            "Диплом"});
            this.searchTypeComboBox.Location = new System.Drawing.Point(39, 423);
            this.searchTypeComboBox.Name = "searchTypeComboBox";
            this.searchTypeComboBox.Size = new System.Drawing.Size(179, 28);
            this.searchTypeComboBox.TabIndex = 34;
            // 
            // searchLabel
            // 
            this.searchLabel.AutoSize = true;
            this.searchLabel.Location = new System.Drawing.Point(35, 380);
            this.searchLabel.Name = "searchLabel";
            this.searchLabel.Size = new System.Drawing.Size(59, 20);
            this.searchLabel.TabIndex = 33;
            this.searchLabel.Text = "Поиск:";
            // 
            // nextStudentButton
            // 
            this.nextStudentButton.Location = new System.Drawing.Point(264, 330);
            this.nextStudentButton.Name = "nextStudentButton";
            this.nextStudentButton.Size = new System.Drawing.Size(179, 35);
            this.nextStudentButton.TabIndex = 32;
            this.nextStudentButton.Text = "Следующий   ->";
            this.nextStudentButton.UseVisualStyleBackColor = true;
            this.nextStudentButton.Click += new System.EventHandler(this.nextStudentButton_Click);
            // 
            // prevStudentButton
            // 
            this.prevStudentButton.Location = new System.Drawing.Point(39, 330);
            this.prevStudentButton.Name = "prevStudentButton";
            this.prevStudentButton.Size = new System.Drawing.Size(179, 35);
            this.prevStudentButton.TabIndex = 31;
            this.prevStudentButton.Text = "<-   Предыдущий";
            this.prevStudentButton.UseVisualStyleBackColor = true;
            this.prevStudentButton.Click += new System.EventHandler(this.prevStudentButton_Click);
            // 
            // facultyLabel
            // 
            this.facultyLabel.AutoSize = true;
            this.facultyLabel.Location = new System.Drawing.Point(81, 194);
            this.facultyLabel.Name = "facultyLabel";
            this.facultyLabel.Size = new System.Drawing.Size(98, 20);
            this.facultyLabel.TabIndex = 30;
            this.facultyLabel.Text = "Факультет:";
            // 
            // secondNameLabel
            // 
            this.secondNameLabel.AutoSize = true;
            this.secondNameLabel.Location = new System.Drawing.Point(83, 128);
            this.secondNameLabel.Name = "secondNameLabel";
            this.secondNameLabel.Size = new System.Drawing.Size(85, 20);
            this.secondNameLabel.TabIndex = 29;
            this.secondNameLabel.Text = "Фамилия:";
            // 
            // firstNameLabel
            // 
            this.firstNameLabel.AutoSize = true;
            this.firstNameLabel.Location = new System.Drawing.Point(124, 67);
            this.firstNameLabel.Name = "firstNameLabel";
            this.firstNameLabel.Size = new System.Drawing.Size(44, 20);
            this.firstNameLabel.TabIndex = 28;
            this.firstNameLabel.Text = "Имя:";
            // 
            // facultyTextBox
            // 
            this.facultyTextBox.Enabled = false;
            this.facultyTextBox.Location = new System.Drawing.Point(194, 194);
            this.facultyTextBox.Name = "facultyTextBox";
            this.facultyTextBox.Size = new System.Drawing.Size(147, 26);
            this.facultyTextBox.TabIndex = 27;
            // 
            // secondNameTextBox
            // 
            this.secondNameTextBox.Enabled = false;
            this.secondNameTextBox.Location = new System.Drawing.Point(194, 128);
            this.secondNameTextBox.Name = "secondNameTextBox";
            this.secondNameTextBox.Size = new System.Drawing.Size(147, 26);
            this.secondNameTextBox.TabIndex = 26;
            // 
            // firstNameTextBox
            // 
            this.firstNameTextBox.Enabled = false;
            this.firstNameTextBox.Location = new System.Drawing.Point(194, 67);
            this.firstNameTextBox.Name = "firstNameTextBox";
            this.firstNameTextBox.Size = new System.Drawing.Size(147, 26);
            this.firstNameTextBox.TabIndex = 25;
            // 
            // searchButton
            // 
            this.searchButton.Enabled = false;
            this.searchButton.Location = new System.Drawing.Point(144, 472);
            this.searchButton.Name = "searchButton";
            this.searchButton.Size = new System.Drawing.Size(178, 35);
            this.searchButton.TabIndex = 37;
            this.searchButton.Text = "Поиск";
            this.searchButton.UseVisualStyleBackColor = true;
            this.searchButton.Click += new System.EventHandler(this.searchButton_Click);
            // 
            // diplomaLabel
            // 
            this.diplomaLabel.AutoSize = true;
            this.diplomaLabel.Location = new System.Drawing.Point(106, 264);
            this.diplomaLabel.Name = "diplomaLabel";
            this.diplomaLabel.Size = new System.Drawing.Size(73, 20);
            this.diplomaLabel.TabIndex = 38;
            this.diplomaLabel.Text = "Диплом:";
            // 
            // diplomaTextBox
            // 
            this.diplomaTextBox.Enabled = false;
            this.diplomaTextBox.Location = new System.Drawing.Point(195, 264);
            this.diplomaTextBox.Name = "diplomaTextBox";
            this.diplomaTextBox.Size = new System.Drawing.Size(146, 26);
            this.diplomaTextBox.TabIndex = 39;
            // 
            // openFileDialog
            // 
            this.openFileDialog.FileName = "openFileDialog1";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(479, 532);
            this.Controls.Add(this.diplomaTextBox);
            this.Controls.Add(this.diplomaLabel);
            this.Controls.Add(this.searchButton);
            this.Controls.Add(this.equalLabel);
            this.Controls.Add(this.searchTextBox);
            this.Controls.Add(this.searchTypeComboBox);
            this.Controls.Add(this.searchLabel);
            this.Controls.Add(this.nextStudentButton);
            this.Controls.Add(this.prevStudentButton);
            this.Controls.Add(this.facultyLabel);
            this.Controls.Add(this.secondNameLabel);
            this.Controls.Add(this.firstNameLabel);
            this.Controls.Add(this.facultyTextBox);
            this.Controls.Add(this.secondNameTextBox);
            this.Controls.Add(this.firstNameTextBox);
            this.Controls.Add(this.menuStrip1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.Name = "Form1";
            this.Text = "Студенты";
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem файлToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem просмотрToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem предыдущийToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem следующийToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem студентыToolStripMenuItem;
        private System.Windows.Forms.Label equalLabel;
        private System.Windows.Forms.TextBox searchTextBox;
        private System.Windows.Forms.ComboBox searchTypeComboBox;
        private System.Windows.Forms.Label searchLabel;
        private System.Windows.Forms.Button nextStudentButton;
        private System.Windows.Forms.Button prevStudentButton;
        private System.Windows.Forms.Label facultyLabel;
        private System.Windows.Forms.Label secondNameLabel;
        private System.Windows.Forms.Label firstNameLabel;
        private System.Windows.Forms.TextBox facultyTextBox;
        private System.Windows.Forms.TextBox secondNameTextBox;
        private System.Windows.Forms.TextBox firstNameTextBox;
        private System.Windows.Forms.Button searchButton;
        private System.Windows.Forms.ToolStripMenuItem открытьToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem добавитьToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem рToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem удалитьToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem сохранитьToolStripMenuItem1;
        private System.Windows.Forms.ToolStripMenuItem студентToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem магистрToolStripMenuItem;
        private System.Windows.Forms.Label diplomaLabel;
        private System.Windows.Forms.TextBox diplomaTextBox;
        private System.Windows.Forms.SaveFileDialog saveFileDialog;
        private System.Windows.Forms.OpenFileDialog openFileDialog;
        private System.Windows.Forms.ToolStripMenuItem сохранитьКакToolStripMenuItem;
    }
}

