//#pragma once
//#include <cstring>
//#include <string>
//#include <valarray>
//
//using std::string;
//using std::valarray;
//
//class Student
//{
//private:
//	typedef valarray<double> ArrayDb;
//
//	string name;
//	valarray<double> scores;
//	std::ostream& arr_out(std::ostream& os) const;
//
//public:
//	Student() : name("Null Student"), scores() {};
//	explicit Student(const string& s) : name(s), scores() {};
//	explicit Student(int n) : name("Nully"), scores(n) {};
//	// explicit 的作用是关闭本构造函数所可能导致的隐式类型转换，并不影响其他构造函数
//	Student(const std::string& s, int n)
//		: name(s), scores(n) {}
//	Student(const std::string& s, const ArrayDb& a)
//		: name(s), scores(a) {}
//	Student(const char* str, const double* pd, int n)
//		: name(str), scores(pd, n) {}
//	~Student() {}
//
//	double Average() const;
//	double& operator[](int i);
//	double operator[](int i) const;
//	const std::string& Name() const;
//
//
//	// input
//	friend std::istream& operator>>(std::istream& is,
//		Student& stu);  // 1 word
//	friend std::istream& getline(std::istream& is,
//		Student& stu);     // 1 line
//	// output
//	friend std::ostream& operator<<(std::ostream& os,
//		const Student& stu);
//};
//
