#include <QApplication>
#include <QCalendarWidget>
#include <QDateTimeEdit>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QDateTimeEdit editor;

    editor.setCalendarPopup(true);

    QCalendarWidget calendar;
    calendar.setSelectionMode(QCalendarWidget::SingleSelection);
    calendar.setNavigationBarVisible(true);
    calendar.setFirstDayOfWeek(Qt::Monday);
    calendar.setGridVisible(true);

    editor.setCalendarWidget(&calendar);

    editor.show();

    return app.exec();
}
