#include <QApplication>
#include <QCalendarWidget>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QCalendarWidget calendar;
    calendar.setSelectionMode(QCalendarWidget::SingleSelection);
    calendar.setNavigationBarVisible(true);
    calendar.setFirstDayOfWeek(Qt::Monday);
    calendar.setGridVisible(true);

    calendar.show();

    return app.exec();
}
