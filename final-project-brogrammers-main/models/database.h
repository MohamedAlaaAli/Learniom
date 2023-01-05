#ifndef DATABASE_H
#define DATABASE_H

#include"admin.h"
#include "student.h"
#include "professor.h"
#include "course.h"


/*!
 * \brief       This Class has the used database (Professors, Students, Admins and Courses)
 */

class Database {
public:
    std::vector<Admin*> admins;
    std::vector<Student*> students;
    std::vector<Professor*> professors;
    std::vector<Course*> courses;

    Database();

    // For testing
    std::vector<Student*> get_students_mock_data() {
        return {
            new Student("Amir Hesham", "amirhesham65@gmail.com", "01013708540", "SBE", 20, 2025),
            new Student("Karim Hesham", "testthing@gmail.com", "01013708540", "CMP", 20, 2025),
            new Student("Mohamed Alaa", "moalaaaaaaa@gmail.com", "01013708540", "SBE", 20, 2025),
            new Student("John Doe", "amirhesham65@gmail.com", "01013708540", "SBE", 20, 2025),
            new Student("Jane Doe", "amirhesham65@gmail.com", "01013708540", "CMP", 20, 2025)
        };
    };

    std::vector<Professor*> get_professors_mock_data() {
        return {
            new Professor("Ahmed Hesham", "ahmedhesham5@gmail.com", "01013708540", "SBE", "Data Structures", "", "", "Cairo University", 30, "test", "03/30/2019"),
            new Professor("Sherif Sami", "shsami@gmail.com", "01013708540", "SBE", "Measurements", "", "", "Cairo University", 30, "test", "03/30/2019"),
            new Professor("Tamer Basha", "tamerbasha65@gmail.com", "01013708540", "SBE", "Digital Signals", "", "", "Cairo University", 30, "test", "03/30/2019"),
            new Professor("Samah Tantawi", "samahtantawi@gmail.com", "01013708540", "SBE", "Maths", "", "", "Cairo University", 30, "test", "03/30/2019"),
        };
    };

};

#endif // DATABASE_H
