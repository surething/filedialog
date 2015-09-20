#include <QtWidgets/QApplication>

#include "MyDialog.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	
	MyDialog d;
	d.RunDialog();
	
	return app.exec();
}