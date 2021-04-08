#pragma once


#include "Person.h"

enum Faculty { SoftDev, Design };
string FacultyToString(Faculty faculty)
{
	switch (faculty) {
	case SoftDev:
		return "���";
	case Design:
		return "����";
	}
}


class Student
{
public: 
	Person personal_info;
	double rating;
	Faculty faculty;
};
