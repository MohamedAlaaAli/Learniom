#include "user.h"

/*! 
 *  \brief     User Class Features.
 *  \details   This class is used to link the data of Users to the database.
 *  \author    Amir Hesham
 *  \copyright Brogrammers.
 */


User::User(std::string name, std::string email, std::string phone, std::string department, int age)
{
    this->name = name;
    this->email = email;
    this->phone = phone;
    this->department = department;
    this->age = age;
}



User::User(std::string name, std::string email, std::string phone, int age)
{
    this->name = name;
    this->email = email;
    this->phone = phone;
    this->age = age;
}




/*!
 *  \brief Get the User's Name
 *  \param NULL
 *  \return User's Name
 */
std::string User::getName() const {
    return name;
}


/*!
 *  \brief Get the User's Email
 *  \param NULL
 *  \return User's Email
 */
std::string User::getEmail() const
{
    return email;
}


/*!
 *  \brief Get the User's Phone
 *  \param NULL
 *  \return User's Phone
 */
std::string User::getPhone() const
{
    return phone;
}


/*!
 *  \brief Get the User's Department
 *  \param NULL
 *  \return User's Department
 */
std::string User::getDepartment() const
{
    return department;
}


/*!
 *  \brief Get the User's Age
 *  \param NULL
 *  \return User's Age
 */
int User::getAge() const
{
    return age;
}



