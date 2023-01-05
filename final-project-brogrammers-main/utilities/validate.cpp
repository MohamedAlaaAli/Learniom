
 #include "validate.h"


    /*! 
 *  \brief Check the Validation of Names
 *  \param Name Should be not empty and doesn't contains any numbers
 */
bool validate :: name_validate(const QString name ,QString& message){
    if(is_empty(name) || contain_number(name)){
        message = "invalid name";
        return false;
    }
   return true;
}



    /*! 
 *  \brief Check the Validation of Departments
 *  \param Name Should be not empty and the Department written is from the list of allowed departments
 */
bool validate :: department_validate(QString department ,QString& message){
    if(is_empty(department)){
        message = "invalid department";
        return false;
    }
    return true;
}

    /*! 
 *  \brief Check the Validation of Email
 *  \param Name Should be not empty as well as email rules (start with letters and may be contain numbers after letters then '@' symbol and complete the email)
 */
bool validate :: email_validate(QString email ,QString& message){
    QRegularExpression regExp("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b");
    regExp.setPatternOptions(QRegularExpression::CaseInsensitiveOption);
    QRegularExpressionMatch match = regExp.match(email);
    bool hasMatch = match.hasMatch();
    if(!hasMatch){
        message = "invalid email";
        return false;
    }
    return true;
}


    /*! 
 *  \brief Check the Validation of Phone
 *  \param Name Should be not empty and only numbers allowed to be entered
 */
bool validate :: phone_validate(QString phone ,QString& message){
    if(is_empty(phone)){
        message = "invalid phone";
        return false;
    }
    return true;
}


    /*! 
 *  \brief Check the Validation of Title
 *  \param Name Should be not empty
 */
bool validate :: title_validate(QString title ,QString& message){
    if(is_empty(title)){
        message = "invalid title";
        return false;
    }
    return true;
}


    /*! 
 *  \brief Check the Validation of Biography
 *  \param Name Should be not empty
 */
bool validate :: biography_validate(QString biography ,QString& message){
    if(is_empty(biography)) {
        message = "invalid biography";
        return false;
    }
    return true;
}


    /*! 
 *  \brief Check the Validation of Password
 *  \param Name Should be not empty and follows the password rules
 */
bool validate :: password_validate(QString password ,QString& message){
    if(is_empty(password)){
        message = "invlaid passowrd";
        return false;
    }
    return true;
}



    /*! 
 *  \brief Check the Validation of Password
 *  \param Name Should be not empty and follows the types of courses
 */
bool validate :: type_validate(QString type ,QString& message){
    if(is_empty(type)){
        message = "invalid type";
        return false;
    }
    return true;
}



    /*! 
 *  \brief Check the Validation of Password
 *  \param Name Should be not empty and follows the halls names
 */
bool validate :: hall_validate(QString hall, QString& message){
    if(is_empty(hall)){
        message = "invalid name";
        return false;
    }
    return true;
}


    /*! 
 *  \brief Check the Validation of Password
 *  \param Name Should be not empty and follows the Courses (Available) names
 */
bool validate :: course_name_validate(QString name, QString& message){
    if(is_empty(name)){
        message = "invalid name";
        return false;
    }
    return true;
}
