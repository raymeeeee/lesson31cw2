#pragma once
#include "Product.h"

namespace Products {
    namespace Sport {
        class Clothing :
            public Product
        {
        protected:
            string kind;
            string size;
        public:
            Clothing() {
                kind = "undefined";
                size = "undefined";
            };
            Clothing(string name, string manufacturer, float price, int age, string kind, string size) : Product(name, manufacturer, price, age) {
                this->kind = kind;
                this->size = size;
            };

            void setKind(string kind) { this->kind = kind; };
            void setSize(string size) { this->size = size; };

            string getKind() { return kind; };
            string getSize() { return size; };

            void show()const override {
                cout << "Name: " << name << endl;
                cout << "Manufacturer: " << manufacturer << endl;
                cout << "Kind: " << kind << endl;
                cout << "Size: " << size << endl;
                cout << "Price: " << price << endl;
                cout << "Age restriction: " << age << endl;
            };

            float calcPrice()const override {
                float total = price;
                if (size.find("X") != -1) {
                    total *= (1+size.find("X")*0.05);
                }
                if (age < 10) {
                    total *= 1.1;
                }
                return total;
            }

        };
    };
}

