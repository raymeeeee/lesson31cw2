#pragma once
#include "Product.h"

namespace Products {
    namespace Fun {
        class Toy :
            public Product
        {
        protected:
            string material; // "NA#XXXX" - natural | "NN#XXXX" - not natural; XXXX - code of material
        public:
			Toy() {
				material = "undefined";
			};
			Toy(string name, string manufacturer, float price, int age, string material) : Product(name, manufacturer, price, age) {
				this->material = material;
			};

			void setMaterial(string material) { this->material = material; };

			string getMaterial() const{ return material; };

			void show()const override {
				cout << "Name: " << name;
				cout << "Manufacturer: " << manufacturer;
				cout << "Material: " << material;
				cout << "Price: " << price;
				cout << "Age restriction: " << age;
			};
			float calcPrice()const override {
				float total = price;
				if (material.find("NA") != -1) {
					total *= 1.1;
				}
				if (age <= 3) {
					total *= 1.1;
				}
				return total;
			};
        };
    };
};

