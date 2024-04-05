#include "MainWindow.h"
#include "../ui_editFile.h"
#include <QApplication>

int main(int argc, char** argv)
{
	QApplication app(argc, argv);
	// Создание главного окна;
	MainWindow window(nullptr);
	// Создание ui объекта;
	Ui::MainWindow ui;
	// Установка главного окна ui объекту;
	ui.setupUi(&window);
	// Присванивание ui переменных в переменные главного окна;
	window.plainTextEdit = ui.plainTextEdit;
	window.webEngineView = ui.webEngineView;
	
	// Установка имени окна;
	window.setWindowTitle("EditHTMLfile");
	// Отрисовка главного окна;
	window.show();
	return app.exec();
}