#include "QtCounter.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtCounter w;
	w.show();
	return a.exec();
}
