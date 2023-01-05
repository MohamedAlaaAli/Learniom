#ifndef VALIDATE_H
#define VALIDATE_H
#include<iostream>
#include <QString>
#include <string.h>
#include <QValidator>
#include <QRegularExpression>
#include <QValidator>
static QString default_message = "error happened";
class validate
{

private:
    bool is_empty(QString data)
    {
        return data.trimmed().isEmpty();
    }

    bool contain_number(QString name)
    {
        std::string name_str = name.toStdString();
        if(name_str.size()<3)
            return false;
        for(int i = 0; i < (int)name_str.size(); i++){
            if(!isalpha(name_str[i]))
                return false;
        }
        return true;
    }

    bool contain_letter(QString phone){
        std::string phone_str = phone.toStdString();
        if(phone_str.size() != 11)
            return false;
        if(phone_str.substr(0, 2) != "01")
            return false;
        for(int i = 0;i < (int)phone_str.size(); i++){
            if(!isdigit(phone_str[i]))
                return false;
        }
        return true;
    }


public:

    bool name_validate(const QString name ,QString& message = default_message);

    bool department_validate(QString department ,QString& message = default_message);

    bool email_validate(QString email ,QString& message = default_message);

    bool phone_validate(QString phone ,QString& message = default_message);

    bool title_validate(QString title ,QString& message = default_message);

    bool biography_validate(QString biography ,QString& message = default_message);

    bool password_validate(QString password ,QString& message = default_message);

    bool type_validate(QString type ,QString& message = default_message);

    bool hall_validate(QString hall, QString& message = default_message);

    bool course_name_validate(QString name, QString& message = default_message);


};













#endif // VALIDATE_H
