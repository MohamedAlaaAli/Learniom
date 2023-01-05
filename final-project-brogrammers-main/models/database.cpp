#include "database.h"


/*! 
 *  \brief     Database Class Components of the Application.
 *  \details   This class helps in adding or deleting (admins, students, professors and courses)
 *  \author    Mohammed Alaa & Amir Hesham
 *  \copyright Brogrammers.
 */

Database::Database() {
    /*! 
 *  \brief     - Vector to manage adding or deleting admins
 */
    admins = std::vector<Admin*>();


        /*! 
 *  \brief     - Vector to manage adding or deleting Students
 */
    students = std::vector<Student*>();

           /*! 
 *  \brief     - Vector to manage adding or deleting Professors
 */
    professors = std::vector<Professor*>();

           /*! 
 *  \brief     - Vector to manage adding or deleting Courses
 */
    courses = std::vector<Course*>();
}
