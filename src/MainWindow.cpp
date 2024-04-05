#include "MainWindow.h"

// Реализация конструктора класса с установкой родительского окна;
MainWindow::MainWindow(QMainWindow* parent)
{
	// Установка родительского окна;
	setParent(parent);
}
// Реализация слота показывающего HTML страницу;
void MainWindow::showHTML()
{
	// Установка HTML страницы в webEngineView;
	webEngineView->setHtml(plainTextEdit->toPlainText());
}
