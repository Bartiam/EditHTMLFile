#pragma once
#include <QMainWindow>

class MainWindow : public QMainWindow
{
	// ������ ��� �������� moc ��������;
	Q_OBJECT

public:
	// �������� ������������ ������ � ���������� ������������� ����;
	MainWindow(QMainWindow* parent);
};