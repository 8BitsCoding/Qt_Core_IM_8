#include <QtCore/QCoreApplication>

#include <qmap.h>
#include <qdebug.h>
// The QMap class is a template class that provides a red-black-tree-based dirctionary

// QMap<Key, T> is one of Qt's generic container classes.
// It stores (key, value) pairs and provides fast lookup of the value associated with a key.

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QMap<QString, int> ages;
	ages.insert("Bryan", 44);
	ages.insert("Temmy", 59);
	ages.insert("Rango", 15);

	qInfo() << "Bryan is " << ages["Bryan"] << "years old";
	qInfo() << "Keys : " << ages.keys();

	// Ordered and a little slower
	foreach(QString key, ages.keys()) {
		qInfo() << key << " = " << ages[key];
	}

	return a.exec();
}
