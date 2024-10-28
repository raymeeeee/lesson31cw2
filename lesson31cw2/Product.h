#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace Products {
	class Product
	{
	protected:
		string name;
		string manufacturer;
		float price;
		int age;
	public:
		Product() { 
			this->name = "undefined";
			this->manufacturer = "undefined";
			this->price = 0;
			this->age = 0;

		};
		Product(string name, string manufacturer, float price, int age) {
			this->name = name;
			this->manufacturer = manufacturer;
			this->price = price;
			this->age = age;
		};
		virtual ~Product() {};

		void setName(string name) { this->name = name; };
		void setManufacturer(string manufacturer) { this->manufacturer = manufacturer; };
		void setPrice(float price) { this->price = price; };
		void setAge(int age) { this->age = age; };

		string getName() const { return name; };
		string getManufacturer() const { return manufacturer; };
		float getPrice() const { return price; };
		int getAge() const { return age; };

		virtual void show()const = 0;
		virtual float calcPrice()const = 0;
		//virtual void saveToFile(std::ofstream& file) const = 0;
		//virtual void loadFromFile(std::ifstream& file) = 0;


	};
};

