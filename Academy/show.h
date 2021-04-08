#pragma once

#include <iostream>

#include "Student.h"
#include "Teacher.h"
#include "Manager.h"

using namespace std;

void ShowStudent(Student student)
{
	cout << "=== ���������� � �������� ===" << endl;
	cout << student.personal_info.ToString();
	cout << "�������: " << student.rating << endl;
	cout << "���������: " << FacultyToString(student.faculty) << endl;
	cout << "-----------------------------------------" << endl;
}