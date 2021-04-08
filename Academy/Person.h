#pragma once

#include <string>

using namespace std;

enum Sex {
	Male, Female, Unknown
};
string SexToString(Sex sex)
{
	switch (sex) {
	case Male:
		return "�������";
	case Female:
		return "�������";
	case Unknown:
		return "����������";
	}
}

class Person {
public: 
	string name;
	int age;
	Sex sex;

	string ToString()
	{
		string temp;
		temp = "���: " + name + "\n";
		temp += "�������: " + to_string(age) + "\n";
		temp += "���: " + SexToString(sex) + "\n";
		return temp;

	}
};