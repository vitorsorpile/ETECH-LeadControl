#include "menu.h"
#include "Lead.h"

#include <QApplication>
#include <QList>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    menu w;
//    QObject::connect(w.cl, SIGNAL(on_buttonBox_accepted()), &w, SLOT(test()));
    w.show();
    return a.exec();
}
