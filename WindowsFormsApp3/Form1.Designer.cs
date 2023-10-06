namespace WindowsFormsApp3
{
    partial class Form1
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
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.nudnam = new System.Windows.Forms.NumericUpDown();
            this.rtbketqua = new System.Windows.Forms.TextBox();
            this.bttinh = new System.Windows.Forms.Button();
            this.label4 = new System.Windows.Forms.Label();
            this.btxoa = new System.Windows.Forms.Button();
            this.txttienbandau = new System.Windows.Forms.TextBox();
            this.txtlaisuat = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.nudnam)).BeginInit();
            this.SuspendLayout();
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(62, 151);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(80, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "Lãi Suất Năm : ";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(62, 181);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(38, 13);
            this.label3.TabIndex = 2;
            this.label3.Text = "Năm : ";
            // 
            // nudnam
            // 
            this.nudnam.Location = new System.Drawing.Point(342, 179);
            this.nudnam.Name = "nudnam";
            this.nudnam.Size = new System.Drawing.Size(120, 20);
            this.nudnam.TabIndex = 5;
            this.nudnam.ValueChanged += new System.EventHandler(this.nudnam_ValueChanged);
            // 
            // rtbketqua
            // 
            this.rtbketqua.Location = new System.Drawing.Point(66, 291);
            this.rtbketqua.Multiline = true;
            this.rtbketqua.Name = "rtbketqua";
            this.rtbketqua.Size = new System.Drawing.Size(633, 127);
            this.rtbketqua.TabIndex = 6;
            // 
            // bttinh
            // 
            this.bttinh.Location = new System.Drawing.Point(620, 145);
            this.bttinh.Name = "bttinh";
            this.bttinh.Size = new System.Drawing.Size(79, 54);
            this.bttinh.TabIndex = 9;
            this.bttinh.Text = "Tính Lãi Suất";
            this.bttinh.UseVisualStyleBackColor = true;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(63, 114);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(89, 13);
            this.label4.TabIndex = 10;
            this.label4.Text = "Số Tiền Ban Đầu";
            // 
            // btxoa
            // 
            this.btxoa.Location = new System.Drawing.Point(620, 112);
            this.btxoa.Name = "btxoa";
            this.btxoa.Size = new System.Drawing.Size(79, 20);
            this.btxoa.TabIndex = 11;
            this.btxoa.Text = "Clear";
            this.btxoa.UseVisualStyleBackColor = true;
            // 
            // txttienbandau
            // 
            this.txttienbandau.Location = new System.Drawing.Point(342, 112);
            this.txttienbandau.Name = "txttienbandau";
            this.txttienbandau.Size = new System.Drawing.Size(120, 20);
            this.txttienbandau.TabIndex = 12;
            // 
            // txtlaisuat
            // 
            this.txtlaisuat.Location = new System.Drawing.Point(342, 143);
            this.txtlaisuat.Name = "txtlaisuat";
            this.txtlaisuat.Size = new System.Drawing.Size(120, 20);
            this.txtlaisuat.TabIndex = 13;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(339, 32);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(84, 13);
            this.label1.TabIndex = 14;
            this.label1.Text = "TÍNH LÃI SUẤT";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.txtlaisuat);
            this.Controls.Add(this.txttienbandau);
            this.Controls.Add(this.btxoa);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.bttinh);
            this.Controls.Add(this.rtbketqua);
            this.Controls.Add(this.nudnam);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Name = "Form1";
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.nudnam)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.NumericUpDown nudnam;
        private System.Windows.Forms.TextBox rtbketqua;
        private System.Windows.Forms.Button bttinh;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Button btxoa;
        private System.Windows.Forms.TextBox txttienbandau;
        private System.Windows.Forms.TextBox txtlaisuat;
        private System.Windows.Forms.Label label1;
    }
}

