#ifndef GUARD_grade_h
#define GUARD_grade_h

#include <vector>
#include "Student_info.h"

double median(std::vector<double>);

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);

double average_grade(const Student_info&);
double grade_aux(const Student_info&);
double optimistic_median(const Student_info&);

double average_analysis(const std::vector<Student_info>&);
double median_analysis(const std::vector<Student_info>&);
double optimistic_median_analysis(const std::vector<Student_info>&);
double analysis(const std::vector<Student_info>&, double (const Student_info&));

bool did_all_hw(const Student_info&);

#endif
