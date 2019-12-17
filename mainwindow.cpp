#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	ui->textEdit_history->setVisible(historyVisible);
	ui->pushButton_clear_history->setVisible(historyVisible);
	ui->centralwidget->resize(QSize(400,200));
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *key)
{
	int keyCode; // Целочисленный код клавиши
	keyCode=key->key();
	switch (keyCode)
	{
	case Qt::Key_0:
		on_pushButton_0_clicked();
		break;
	case Qt::Key_1:
		on_pushButton_1_clicked();
		break;
	case Qt::Key_2:
		on_pushButton_2_clicked();
		break;
	case Qt::Key_3:
		on_pushButton_3_clicked();
		break;
	case Qt::Key_4:
		on_pushButton_4_clicked();
		break;
	case Qt::Key_5:
		on_pushButton_5_clicked();
		break;
	case Qt::Key_6:
		on_pushButton_6_clicked();
		break;
	case Qt::Key_7:
		on_pushButton_7_clicked();
		break;
	case Qt::Key_8:
		on_pushButton_8_clicked();
		break;
	case Qt::Key_9:
		on_pushButton_9_clicked();
		break;
	case Qt::Key_Backspace:
		on_pushButton_backspace_clicked();
		break;
	case Qt::Key_Period:
		on_pushButton_dot_clicked();
		break;
	case Qt::Key_Plus:
		on_pushButton_add_clicked();
		break;
	case Qt::Key_Minus:
		on_pushButton_sub_clicked();
		break;
	case Qt::Key_Enter:
		on_pushButton_equally_clicked();
		break;
	case::Qt::Key_ParenLeft:
		on_pushButton_bracket_left_clicked();
		break;
	case::Qt::Key_ParenRight:
		on_pushButton_bracket_right_clicked();
		break;
	//case Qt::Key_Escape:
	//on_pushButton_clear_clicked();
	//break;
	}
}

void MainWindow::addTextInLineEdit(QString text)
{
	if(ui->lineEdit_expression->text() == "" || ui->lineEdit_expression->text() == "0")
		ui->lineEdit_expression->setText(text);
	else
		ui->lineEdit_expression->insert(text);
}

void MainWindow::on_pushButton_history_clicked()
{
	historyVisible = !historyVisible;
	ui->textEdit_history->setVisible(historyVisible);
	ui->pushButton_clear_history->setVisible(historyVisible);
}

void MainWindow::on_pushButton_c_clicked()
{
	ui->lineEdit_expression->setText("0");
}

void MainWindow::on_pushButton_0_clicked()
{
	addTextInLineEdit("0");
}

void MainWindow::on_pushButton_1_clicked()
{
	addTextInLineEdit("1");
}

void MainWindow::on_pushButton_2_clicked()
{
	addTextInLineEdit("2");
}

void MainWindow::on_pushButton_3_clicked()
{
	addTextInLineEdit("3");
}

void MainWindow::on_pushButton_4_clicked()
{
	addTextInLineEdit("4");
}

void MainWindow::on_pushButton_5_clicked()
{
	addTextInLineEdit("5");
}

void MainWindow::on_pushButton_6_clicked()
{
	addTextInLineEdit("6");
}

void MainWindow::on_pushButton_7_clicked()
{
	addTextInLineEdit("7");
}

void MainWindow::on_pushButton_8_clicked()
{
	addTextInLineEdit("8");
}

void MainWindow::on_pushButton_9_clicked()
{
	addTextInLineEdit("9");
}

void MainWindow::on_pushButton_dot_clicked()
{
	ui->lineEdit_expression->insert(".");
}

void MainWindow::on_pushButton_add_clicked()
{
	ui->lineEdit_expression->insert("+");
}

void MainWindow::on_pushButton_sub_clicked()
{
	ui->lineEdit_expression->insert("-");
}

void MainWindow::on_pushButton_mul_clicked()
{
	ui->lineEdit_expression->insert("*");
}

void MainWindow::on_pushButton_div_clicked()
{
	ui->lineEdit_expression->insert("/");
}

void MainWindow::on_pushButton_backspace_clicked()
{
	if(ui->lineEdit_expression->text()!="0")
	{
		QString temp;
		temp=ui->lineEdit_expression->text();
		temp.resize(temp.size()-1);
		if(temp!="")
			ui->lineEdit_expression->setText(temp);
		ui->lineEdit_expression->setText("0");
	}
}

void MainWindow::on_pushButton_equally_clicked()
{

}

void MainWindow::on_pushButton_bracket_left_clicked()
{
	addTextInLineEdit("(");
}

void MainWindow::on_pushButton_bracket_right_clicked()
{
	addTextInLineEdit(")");
}

void MainWindow::on_pushButton_exp_clicked()
{
	ui->lineEdit_expression->insert("exp()");
	ui->lineEdit_expression->setCursorPosition(ui->lineEdit_expression->cursorPosition()-1);
}

void MainWindow::on_pushButton_ln_clicked()
{
	ui->lineEdit_expression->insert("ln()");
	ui->lineEdit_expression->setCursorPosition(ui->lineEdit_expression->cursorPosition()-1);
}

void MainWindow::on_pushButton_pi_clicked()
{
	addTextInLineEdit("pi()");
	ui->lineEdit_expression->setCursorPosition(ui->lineEdit_expression->cursorPosition()-1);
}

void MainWindow::on_pushButton_tan_clicked()
{
	addTextInLineEdit("tan()");
	ui->lineEdit_expression->setCursorPosition(ui->lineEdit_expression->cursorPosition()-1);
}

void MainWindow::on_pushButton_ctg_clicked()
{
	addTextInLineEdit("ctg()");
	ui->lineEdit_expression->setCursorPosition(ui->lineEdit_expression->cursorPosition()-1);
}

void MainWindow::on_pushButton_sin_clicked()
{
	addTextInLineEdit("sin()");
	ui->lineEdit_expression->setCursorPosition(ui->lineEdit_expression->cursorPosition()-1);
}

void MainWindow::on_pushButton_cos_clicked()
{
	addTextInLineEdit("cos()");
	ui->lineEdit_expression->setCursorPosition(ui->lineEdit_expression->cursorPosition()-1);
}

void MainWindow::on_pushButton_sqrt_clicked()
{
	addTextInLineEdit("sqrt()");
	ui->lineEdit_expression->setCursorPosition(ui->lineEdit_expression->cursorPosition()-1);
}
