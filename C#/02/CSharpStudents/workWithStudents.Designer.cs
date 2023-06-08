namespace CSharpStudents
{
    partial class workWithStudents
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.firstNameLabel = new System.Windows.Forms.Label();
            this.secondNameLabel = new System.Windows.Forms.Label();
            this.facultyLabel = new System.Windows.Forms.Label();
            this.diplomaLabel = new System.Windows.Forms.Label();
            this.firstNameTextBox = new System.Windows.Forms.TextBox();
            this.secondNameTextBox = new System.Windows.Forms.TextBox();
            this.facultyTextBox = new System.Windows.Forms.TextBox();
            this.diplomaTextBox = new System.Windows.Forms.TextBox();
            this.insertCreateButton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // firstNameLabel
            // 
            this.firstNameLabel.AutoSize = true;
            this.firstNameLabel.Location = new System.Drawing.Point(74, 59);
            this.firstNameLabel.Name = "firstNameLabel";
            this.firstNameLabel.Size = new System.Drawing.Size(44, 20);
            this.firstNameLabel.TabIndex = 0;
            this.firstNameLabel.Text = "Имя:";
            // 
            // secondNameLabel
            // 
            this.secondNameLabel.AutoSize = true;
            this.secondNameLabel.Location = new System.Drawing.Point(74, 106);
            this.secondNameLabel.Name = "secondNameLabel";
            this.secondNameLabel.Size = new System.Drawing.Size(85, 20);
            this.secondNameLabel.TabIndex = 1;
            this.secondNameLabel.Text = "Фамилия:";
            // 
            // facultyLabel
            // 
            this.facultyLabel.AutoSize = true;
            this.facultyLabel.Location = new System.Drawing.Point(73, 158);
            this.facultyLabel.Name = "facultyLabel";
            this.facultyLabel.Size = new System.Drawing.Size(98, 20);
            this.facultyLabel.TabIndex = 2;
            this.facultyLabel.Text = "Факультет:";
            // 
            // diplomaLabel
            // 
            this.diplomaLabel.AutoSize = true;
            this.diplomaLabel.Location = new System.Drawing.Point(74, 209);
            this.diplomaLabel.Name = "diplomaLabel";
            this.diplomaLabel.Size = new System.Drawing.Size(73, 20);
            this.diplomaLabel.TabIndex = 3;
            this.diplomaLabel.Text = "Диплом:";
            // 
            // firstNameTextBox
            // 
            this.firstNameTextBox.Location = new System.Drawing.Point(196, 57);
            this.firstNameTextBox.Name = "firstNameTextBox";
            this.firstNameTextBox.Size = new System.Drawing.Size(212, 26);
            this.firstNameTextBox.TabIndex = 4;
            // 
            // secondNameTextBox
            // 
            this.secondNameTextBox.Location = new System.Drawing.Point(196, 103);
            this.secondNameTextBox.Name = "secondNameTextBox";
            this.secondNameTextBox.Size = new System.Drawing.Size(212, 26);
            this.secondNameTextBox.TabIndex = 5;
            // 
            // facultyTextBox
            // 
            this.facultyTextBox.Location = new System.Drawing.Point(196, 155);
            this.facultyTextBox.Name = "facultyTextBox";
            this.facultyTextBox.Size = new System.Drawing.Size(212, 26);
            this.facultyTextBox.TabIndex = 6;
            // 
            // diplomaTextBox
            // 
            this.diplomaTextBox.Location = new System.Drawing.Point(196, 206);
            this.diplomaTextBox.Name = "diplomaTextBox";
            this.diplomaTextBox.Size = new System.Drawing.Size(212, 26);
            this.diplomaTextBox.TabIndex = 7;
            // 
            // insertCreateButton
            // 
            this.insertCreateButton.Location = new System.Drawing.Point(109, 267);
            this.insertCreateButton.Name = "insertCreateButton";
            this.insertCreateButton.Size = new System.Drawing.Size(275, 35);
            this.insertCreateButton.TabIndex = 8;
            this.insertCreateButton.UseVisualStyleBackColor = true;
            this.insertCreateButton.Click += new System.EventHandler(this.insertCreateButton_Click);
            // 
            // workWithStudents
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(527, 358);
            this.Controls.Add(this.insertCreateButton);
            this.Controls.Add(this.diplomaTextBox);
            this.Controls.Add(this.facultyTextBox);
            this.Controls.Add(this.secondNameTextBox);
            this.Controls.Add(this.firstNameTextBox);
            this.Controls.Add(this.diplomaLabel);
            this.Controls.Add(this.facultyLabel);
            this.Controls.Add(this.secondNameLabel);
            this.Controls.Add(this.firstNameLabel);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.Name = "workWithStudents";
            this.Text = "workWithStudents";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label firstNameLabel;
        private System.Windows.Forms.Label secondNameLabel;
        private System.Windows.Forms.Label facultyLabel;
        private System.Windows.Forms.Label diplomaLabel;
        private System.Windows.Forms.TextBox firstNameTextBox;
        private System.Windows.Forms.TextBox secondNameTextBox;
        private System.Windows.Forms.TextBox facultyTextBox;
        private System.Windows.Forms.TextBox diplomaTextBox;
        private System.Windows.Forms.Button insertCreateButton;
    }
}