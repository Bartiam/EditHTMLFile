#include "MainWindow.h"

// ���������� ������������ ������ � ���������� ������������� ����;
MainWindow::MainWindow(QMainWindow* parent)
{
	// ��������� ������������� ����;
	setParent(parent);
}
// ���������� ����� ������������� HTML ��������;
void MainWindow::showHTML()
{
	// ��������� HTML �������� � webEngineView;
	webEngineView->setHtml(plainTextEdit->toPlainText());
}
