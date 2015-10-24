#include "foo.h"
#include <QApplication>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	FooEdit foo;
	foo.show();
	return app.exec();
}
