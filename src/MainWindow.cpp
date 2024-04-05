#include "MainWindow.h"

// Реализация конструктора класса с установкой родительского окна;
MainWindow::MainWindow(QMainWindow* parent)
{
	// Установка родительского окна;
	setParent(parent);
}
