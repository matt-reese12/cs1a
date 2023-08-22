/*************************************************************************
 * AUTHOR : Matthew Reese *
 * STUDENT ID : 1186159 *
 * LAB #1 : IDEOne *
 * CLASS : CS1A *
 * SECTION : TTh 1:30PM - 3:50PM *
 * DUE DATE : 8/24/2023 *
 *************************************************************************/

#include <iostream>
#include <iomanip>

int main ()
{
  // Using in main for better conventions
  using namespace std;
  /**********************************************************************
  * CONSTANTS
  * --------------------------------------------------------------------
  * PROGRAMMER : Programmer's Name
  * CLASS : Student's Course
  * SECTION : Class Days and Time
  * LAB_NUM : Lab Number
  * LAB_NAME : Title of the Lab
  *********************************************************************/
  const char PROGRAMMER[14] = "Matthew Reese";
  const char CLASS[5] = "CS1A";
  const char SECTION[20] = "TTh 1:30PM - 3:50PM";
  const int LAB_NUM = 1;
  const char LAB_NAME[7] = "IDEOne";
  
  cout << left;
  cout << "**************************************************";
  cout << "\n* PROGRAMMED BY : " << PROGRAMMER;
  cout << "\n* " << setw(14) << "CLASS" << ": " << CLASS;
  cout << "\n* " << setw(14) << "SECTION" << ": " << SECTION;
  cout << "\n* LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
  cout << "\n**************************************************\n\n";
  cout << right;
  
  return 0;
}
