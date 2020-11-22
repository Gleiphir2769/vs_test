//#include "Student.h"
//#include <iostream>
//
//using std::istream;
//using std::ostream;
//
//// friends
//// use String version of operator>>()
//istream& operator>>(istream& is, Student& stu) {
//    is >> (string&)stu;
//    return is;
//}
//
//// use string friend getline(ostream &, const string &)
//istream& getline(istream& is, Student& stu) {
//    getline(is, (string&)stu);
//    return is;
//}
//
//// use string version of operator<<()
//ostream& operator<<(ostream& os, const Student& stu) {
//    os << "Scores for " << (const string&)stu << ":\n";
//    stu.arr_out(os);  // use private method for scores
//    return os;
//}