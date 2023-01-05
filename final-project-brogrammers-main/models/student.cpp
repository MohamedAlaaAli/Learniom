#include "student.h"
#include <algorithm>
static int code=0;


/*! 
 *  \brief     Student Class Features.
 *  \details   This class is used to link the data of Students to the database.
 *  \author    Amir Hesham & Mohammed Alaa
 *  \copyright Brogrammers.
 */





Student::Student(
        std::string name,
        std::string email,
        std::string phone,
        std::string department,
        int age,
        int graduation_year)
        : User(name, email, phone, department, age)
{
    this->graduation_year = graduation_year;
    this->ID = ++code;
};


/*!
 *  \brief Get the Student's Graduation Year
 *  \param NULL
 *  \return Student's Graduation Year
 */
int Student::getGraduation_year() const
{
    return graduation_year;
}



/*!
 *  \brief Get the Student's ID
 *  \param NULL
 *  \return Student's ID
 */
int Student::get_id()
{
    return this->ID;
}


/*!
 *  \brief Get the Student's Courses
 *  \param NULL
 *  \return Student's Courses (the courses which the student enrolled in)
 */
std::vector<std::string> Student::get_courses()
{
    return this->courses;
}


/*!
 *  \brief Add a new Course to the student profile
 *  \param course that will be taken by student in this semester
 *  \return Student's courses Vector
 */
void Student::set_courses(std::string course)
{
    this->courses.push_back(course);
}


/*!
 *  \brief Show the student's Grades
 *  \param NULL
 *  \return All the student's grades
 */
std::map<std::string, float> Student::get_courses_grades()
{
    return this->courses_grades;
}


/*!
 *  \brief Organizing the courses with its crospoinding grade
 *  \param course to be linked with a particular grade 
 *  \param grade to be added with a particular course
 *  \return Student's course with its grade of the student
 */
void Student::set_courses_grades(std::string course , float grade)
{
    this->courses_grades[course] = grade;
}




/*!
 *  \brief Remove the course from the student profile
 *  \param Course_Name
 *  \return Nothing to be returned
 */


void Student::unenroll(std::string courseName)
{
courses.erase(std::remove(courses.begin(), courses.end(), courseName), courses.end());
courses_grades.erase(courseName);
}




/*!
 *  \brief Adding the course to the student profile
 *  \param Course_Name
 *  \return Nothing to be returned
 */

void Student::enroll(std::string courseName){
    courses.push_back(courseName);
    courses_grades[courseName] = -1;
}

