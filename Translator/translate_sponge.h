#ifndef TRANS_SPONGE_H
#define TRANS_SPONGE_H

#include <QObject>
#include <tolower.h>
#include <QList>

class TRANSLATE_SPONGE
{
private:
    QList<int> spaces;
public:
    void to_sponge(QString str);
    void delete_space(QString str);
    void add_spaces(QString str);
    QString output_sponge;
    QString output_no_spaces;
    QString output_sponge_new;
};

#endif // TRANS_SPONGE_H
