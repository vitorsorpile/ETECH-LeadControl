#include "menu.h"
#include "Lead.h"

#include <QApplication>
#include <QList>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QList<Lead*> leads;

    menu w;

    w.show();
    return a.exec();
}
