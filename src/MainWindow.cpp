#include "MainWindow.h"

// ���������� ������������ ������ � ���������� ������������� ����;
MainWindow::MainWindow(QMainWindow* parent)
{
	// ��������� ������������� ����;
	setParent(parent);
}

void MainWindow::showHTML()
{
	webEngineView->setHtml(plainTextEdit->toPlainText());
}
