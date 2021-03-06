#ifndef ACTION_H
#define ACTION_H

#include <QVariantList>

class Action {
public:
    enum Type {
        ActionEmpty
    };
    Action(Type type = ActionEmpty, const QVariantList& args = QVariantList());
    Type type() const;
    QVariantList args() const;
    QVariant arg(int index) const;

    Type mType;
    QVariantList mArgs;
};



#endif // ACTION_H
