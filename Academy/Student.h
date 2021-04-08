#pragma once


#include "Person.h"

enum Faculty { SoftDev, Design };
string FacultyToString(Faculty faculty)
{
	switch (faculty) {
	case SoftDev:
		return "–œŒ";
	case Design:
		return " √Ëƒ";
	}
}


class Student
{
public: 
	Person personal_info;
	double rating;
	Faculty faculty;
};
