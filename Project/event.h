#ifndef EVENT_H
#define EVENT_H

#include <QDate>
#include <QTime>

class Event
{
public:
    QString Sname;
    QString Sposition;
    int iposition;
    QDate date;
    QTime begin;
    QTime end;
    int dayidx; // 星期几
    bool activate;
public:
    Event();
};

#endif // EVENT_H