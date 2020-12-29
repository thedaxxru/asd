#pragma once
#include <iomanip>
#include <iostream>

using namespace std;

class Tech
{
public:
	
	string place="";
	string brand="";
	Tech() {}

	Tech(string _brand, string _place) {
		brand = _brand;
		place = _place;
	}
	virtual void vvod() {
		cout << "Brand: " << endl;
		cin >> brand;
		cout << endl << "Mesto ispolzovaniya: " << endl;
		cin >> place;
		//cout << endl << "tip: " << type << "    " << "Mesto: " << place <<endl;
	}

	virtual void print() {

	}
};

class Fridge : public virtual Tech {
public:
	int height=0;
	int count_p=0;
	Fridge(string _brand, string _place, int _height, int _count_p) :Tech(_brand, _place)
	{
		brand = _brand;
		place = _place;
		height = _height;
		count_p = _count_p;
	}
	Fridge() {}
	void vvod() {
		cout << "Fridge" << endl;
		Tech::vvod();
		cout << "Visota: " << endl;
		cin >> height;
		cout << endl << "kolvo polok: " << endl;
		cin >> count_p;
		cout << endl << "tip: " << brand << "    " << "Mesto: " << place << " Visota: " << height << " kolvo polok: " << count_p << endl;
	}

	virtual void print() override{
		cout << "Fridge Brand: " << brand << endl << "place: " << place << endl << "Fridge height: " << height << endl << "Fridge count: " << count_p << endl << endl;

	}
};


class Microwave : public virtual Tech {
public:
	int voltage; 
	string color;
	Microwave(string _brand, string _place, int _voltage, string _color)
		: Tech(_brand, _place){
		voltage = _voltage;
		color = _color;
	}

	Microwave () {}
	void vvod() {
		cout << "Microwave" << endl;
		Tech::vvod();
		cout << "Voltage: " << endl;
		cin >> voltage;
		cout << endl << "Color: " << endl;
		cin >> color;
		cout << endl << "Brand: "  << brand << " Mesto: " << place << " Voltage: " << voltage << " Color: " << color << endl;
	}

	virtual void print() override {
		cout << "Microwave Brand: " << brand << endl << "place: " << place << endl << "volage: " << voltage << endl << "count: " << color << endl << endl;

	}
};


class TV : public virtual Tech {
public:

	string type_display;
	int diagonal;
	TV(string _brand, string _place, string _type_display, int _diagonal)
		:Tech(_brand, _place){
		type_display = _type_display;
		diagonal = _diagonal;
	}
	void vvod() {
		cout << "TV" << endl;
		Tech::vvod();
		cout << "type display: " << endl;
		cin >> type_display;
		cout << endl << "Diagonal: " << endl;
		cin >> diagonal;
		cout << endl << "Brand: " << brand << " Mesto: " << place << " Type display: " << type_display << " Diagonal: " << diagonal << endl;

	}

	virtual void print() override {
		cout << "TV Brand: " << brand << endl << "place: " << place << endl << "type display: " << type_display << endl << "diagonal: " << diagonal << endl << endl;

	}


};

class Microfridge : public virtual Fridge, public virtual Microwave {

public:
	string desc;
	Microfridge( string _brand, string _place, int _voltage, string _color, int _height, int _count_p, string _desc) {
		desc = _desc;
		brand = _brand;
		place = _place;
		voltage = _voltage;
		color = _color;
		height = _height;
		count_p = _count_p;
		

	}
	Microfridge () {}

	void vvod() {
		cout << "Microfridge" << endl;
		Tech::vvod();
		cout << "voltage: " << endl;
		cin >> voltage;
		cout << endl << "Color: " << endl;
		cin >> color;
		cout << "Visota: " << endl;
		cin >> height;
		cout << endl << "kolvo polok: " << endl;
		cin >> count_p;
		cout << "desc" << endl;
		cin >> desc;
		}

	virtual void print() override {
		cout << "Microfridge Brand: " << brand << endl << "place: " << place << endl << "volage: " << voltage << endl << "color: " << color;
		cout << endl << "Microfridge height: " << height << endl << "count: " << count_p << endl << "Description: " << desc << endl;

	}

};