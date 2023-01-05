#include "admin.h"
static int code=0;

/*! 
 *  \brief     Admin Class Features.
 *  \details   This class is used to link the data of Admins to the database.
 *  \author    Hesham Tamer
 *  \copyright Brogrammers.
 */



Admin::Admin(
        std::string name,
        std::string speciality,
        std::string title,
        std::string email,
        std::string password,
        std::string phone,
        std::string biography,
        int age,
        QDateTime creation_date)
        : User(name, email, phone, age)

{
    this->title = title;
    this->biography = biography;
    this->password = password;
    this->speciality = speciality;
    this->creation_date = creation_date;
    this->ID = ++code;
};

    /*! 
 *  \brief Get the Admin's Speciality
 *  \param NULL
 *  \return Admin's Speciality
 */
    std::string Admin::get_speciality() const{
        return title;
    }


/*!
 *  \brief Get the Admin's Title
 *  \param NULL
 *  \return Admin's Title
 */
    std::string Admin::get_title() const{
        return title;
    }


/*!
 *  \brief Get the Admin's Password
 *  \param NULL
 *  \return Admin's Password
 */
    std::string Admin::get_password() const{
        return password;
    }


/*!
 *  \brief Get the Admin's Creation Date
 *  \param NULL
 *  \return Admin's Creation Date
 */
    QDateTime Admin::get_creation_date() {
        return creation_date;

    }


/*!
 *  \brief Get the Admin's Biography
 *  \param NULL
 *  \return Admin's Biography
 */
    std::string Admin::get_biography() const{
        return biography;
    }


/*!
 *  \brief Get the Admin's ID
 *  \param NULL
 *  \return Admin's ID
 */
    int Admin::get_id()
    {
        return this->ID;
    }


/*!
 *  \brief Get the Admin's Date of Birth
 *  \param NULL
 *  \return Admin's Date of Birth by Subtracting the current year from his age
 */
    int Admin::get_dateOfbirth() const
    {
        return 2023-getAge() ; //function to get date of birth
    }



