#ifndef CCHECKBOX_H
#define CCHECKBOX_H


#include "CLabel.h"


class CCheckbox : public CLabel
{
    Q_OBJECT
public:
    explicit CCheckbox(QWidget * parent = 0);

    void setText(const QString & text);
    void setCheckState(enum Qt::CheckState state);

signals:
    void clicked(bool v);

protected:
    virtual void refresh();

private:
    QString text_;

private slots:
    void on_clicked();
};

#endif // CCHECKBOX_H
