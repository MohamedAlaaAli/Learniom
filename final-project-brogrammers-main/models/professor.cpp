#include "professor.h"
#include <algorithm>

/*! 
 *  \brief     Professpr Class Features.
 *  \details   This class is used to link the data of Professors to the database.
 *  \author    Fady Mohsen
 *  \copyright Brogrammers.
 */


static int code=0;
Professor::Professor(
        std::string name,
        std::string email,
        std::string phone,
        std::string department,
        std::string phd,
        std::string honors,
        std::string additional,
        std::string graduated_from,
        int age,
        std::string birth,
        std::string joined_on)
        : User(name, email, phone, department, age)
{
    this->phd = phd;
    this->honors = honors;
    this->additional = additional;
    this->graduated_from = graduated_from;
    this->joined_on = joined_on;
    this->birth = birth;
    this->ID = ++code;

}


    /*! 
 *  \brief Get the Professor's ID
 *  \param NULL
 *  \return Professor's ID
 */
int Professor :: get_id(){
    return this->ID;
}


/*! 
 *  \brief Get the Professor's PHD Name
 *  \param NULL
 *  \return Professor's PHD Name
 */
std::string Professor :: get_phd(){
    return phd;
}


/*! 
 *  \brief Get the Professor's Honors
 *  \param NULL
 *  \return Professor's Honors
 */
std::string Professor :: get_honors(){
    return honors;
}



std::string Professor :: get_additional(){
    return additional;
}


/*! 
 *  \brief Get the Professor's Graduation University
 *  \param NULL
 *  \return Professor's Graduation University
 */

std::string Professor :: get_graduated_from(){
    return graduated_from;
}


/*! 
 *  \brief Get the Professor's Joining Date
 *  \param NULL
 *  \return Professor's Joining Date
 */
std::string Professor :: get_joined_on(){
    return joined_on;
}

/*! 
 *  \brief Get the Professor's Date of Birth
 *  \param NULL
 *  \return Professor's Date of Birth
 */
std::string Professor :: get_birth(){
    return birth;
}

/*! 
 *  \brief Get the Professor's courses
 *  \param NULL
 *  \return Professor's courses
 */
std::vector<std::string> Professor::get_courses()
{
    return this->courses;
}


/*! 
 *  \brief Organize the Professor's Courses
 *  \param Course To add Courses that each professor is the lecturer of it
 *  \return Nothing to be returned
 */
void Professor::set_courses(std::string course)
{
    this->courses.push_back(course);
}




/*!
 *  \brief Remove the course from the Professor profile
 *  \param Course_Name
 *  \return Nothing to be returned
 */

void Professor::unenroll(std::string course)
{
    courses.erase(std::remove(courses.begin(), courses.end(), course), courses.end());
}
