#include "MainWindow.h"
#include "../ui_editFile.h"
#include <QApplication>

int main(int argc, char** argv)
{
	QApplication app(argc, argv);
	// �������� �������� ����;
	MainWindow window(nullptr);
	// �������� ui �������;
	Ui::MainWindow ui;
	// ��������� �������� ���� ui �������;
	ui.setupUi(&window);
	// ������������� ui ���������� � ���������� �������� ����;
	window.plainTextEdit = ui.plainTextEdit;
	window.webEngineView = ui.webEngineView;
	
	// ��������� ����� ����;
	window.setWindowTitle("EditHTMLfile");
	// ��������� �������� ����;
	window.show();
	return app.exec();
}