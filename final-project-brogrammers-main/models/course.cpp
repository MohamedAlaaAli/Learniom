#include <algorithm>
#include "course.h"



/*! 
 *  \brief     Course Class Features.
 *  \details   This class is used to link the data of Courses to either students or professors.
 *  \author    Muhanned Abdallah & Omar Mahmoud
 *  \copyright Brogrammers.
 */




// code to be added
// week day to be edited
// type to be edited
Course::Course(int ID,
        std::string name,
        std::string department,
        std::string type,
        std::string hall,
        std::string day,
        QTime start_time,
        QTime end_time,
        int academic_year,
        int count_student)
{
    this->name = name;
    this->code = 001;
    this->department = department,
    this->type = type;
    this->hall = hall;
    this->day = day;
    this->start_time = start_time;
    this->end_time = end_time;
    this->academic_year = academic_year;
    this->ID = ID;
    this->count_student = count_student;

    students = std::vector<Student*>();
    professors = std::vector<Professor*>();
    students_grades = std::map<Student*, float>();
};


    /*! 
 *  \brief Get the Course's Name
 *  \param NULL
 *  \return course's Name
 */
std::string Course::get_name() const {
    return name;
}


    /*! 
 *  \brief Get the course's Code
 *  \param NULL
 *  \return course's Code
 */
std::string Course::get_code() const {
    return code;
}


    /*! 
 *  \brief Get the course's Department
 *  \param NULL
 *  \return course's Department
 */
std::string Course::get_department() const {
    return department;
}


    /*! 
 *  \brief Get the course's Type
 *  \param NULL
 *  \return course's Type
 */
std::string Course::get_type() const {
    return type;
}


    /*! 
 *  \brief Get the course's Hall (Lecture Place)
 *  \param NULL
 *  \return course's Hall
 */
std::string Course::get_hall() const {
    return hall;
}



    /*! 
 *  \brief Get the course's Academic Year
 *  \param NULL
 *  \return course's Academic Year
 */
int Course::get_academic_year() const {
    return academic_year;
}


    /*! 
 *  \brief Get the course's ID
 *  \param NULL
 *  \return course's ID
 */
int Course::get_ID() const {
    return ID;
}

    /*! 
 *  \brief Counting the student numbers in the course
 *  \param NULL
 *  \return Number of students
 */
// to be edited later
int Course::get_num_std() const {
    return count_student;

}



    /*! 
 *  \brief Unenroll the Student from a certain course
 *  \param NULL
 *  \return Nothiing to be returned
 */

void Course::dismiss_course()
{
    for (Student* stud: students) {
        stud->unenroll(name);
    }
}


    /*! 
 *  \brief Get the Course's Day
 *  \param NULL
 *  \return course's Day
 */
std::string Course::get_day() const {
    return day;
}


    /*! 
 *  \brief Get the course's Start Time in the Semester
 *  \param NULL
 *  \return course's Speciality
 */
QTime Course::get_start_time() const {
    return start_time;
}


    /*! 
 *  \return Nothing to be returend
 */
void Course::add_student(Student* student) {
    students.push_back(student);
    qDebug() << "REEE";
}


    /*! 
 *  \return Nothing to be returend
 */
void Course::delete_student(Student* student) {
    students.erase(std::remove(students.begin(), students.end(), student), students.end());
}


    /*! 
 *  The Student Name if found, else Nothing to be returend
 */
Student* Course::find_student_by_name(std::string name) {
    for (int i = 0; i < students.size(); i++) {
        Student* curr = students[i];
        if (curr->getName() == name) {
            return curr;
        }
    }
    return NULL;
}



    /*! 
 *  \brief Edit the Grade of a student
 *  \param student We want to edit his/her grade
 *  \param grade    That will be edited
 *  \return Nothing to be returned
 */
void Course::edit_student_grade(Student* student, float grade) {
    students_grades[student] = grade;
}


    /*! 
 *  \brief Adding New Professors in the Professor's Vector
 *  \param New_Professor That entered the Course
 *  \return Nothing to be returend
 */
void Course::add_professor(Professor* professor){
    professors.push_back(professor);
}


    /*! 
 *  \brief Deleting a Professsor From the Prfessor's Vector
 *  \param Deleted_Professor That will be removed from the Course
 *  \return Nothing to be returend
 */
void Course::delete_professor(Professor* professor) {
    professors.erase(std::remove(professors.begin(), professors.end(), professor), professors.end());
}


    /*! 
 *  \brief Search for the Professor by his/her name
 *  \param Professor_Name as a search parameter
 *  \return  Nothing to be returend
 */
Professor* Course::find_professor_by_name(std::string name){
    for (int i = 0; i < professors.size(); i++) {
        Professor* curr = professors[i];
        if (curr->getName() == name) {
            return curr;
        }
    }
    return NULL;
}


    /*! 
 *  \brief Organize the Students in their Database
 *  \param Student to be organized in the vector
 *  \return Nothing
 */
void::Course::set_students(Student* student)
{
    this->students.push_back(student);
}


    /*! 
 *  \brief Organize the Grades in their Database
 *  \param Grade to be organized in the vector
 *  \return Nothing
 */
void::Course::set_students_to_grades(Student* student, float grade)
{
    this->students_grades[student] = grade;
}
