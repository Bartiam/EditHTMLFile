#include "MainWindow.h"

// Реализация конструктора класса с установкой родительского окна;
MainWindow::MainWindow(QMainWindow* parent)
{
	// Установка родительского окна;
	setParent(parent);
}

void MainWindow::showHTML()
{
	webEngineView->setHtml(plainTextEdit->toPlainText());
}
