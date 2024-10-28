#pragma once
#include "Product.h"


namespace Products {
    namespace Fun {
        class Book :
            public Product
        {
        protected:
            string author;
            string genre;
			int pages;
        public:
			Book() {
				author = "undefined";
				genre = "undefined";
				pages = 0;
			};
			Book(string name, string manufacturer, float price, int age, string author, string genre, int pages) : Product(name, manufacturer, price, age) {
				this->author = author;
				this->genre = genre;
				this->pages = pages;
			};

			void setAuthor(string author) { this->author = author; };
			void setGenre(string genre) { this->genre = genre; };
			void setPages(int pages) { this->pages = pages; };

			string getAuthor() const { return author; };
			string getGenre() const { return genre; };
			int getPages() const { return pages; };

			void show()const override {
				cout << "Name: " << name << endl;
				cout << "Manufacturer: " << manufacturer << endl;
				cout << "Author: " << author << endl;
				cout << "Genre: " << genre << endl;
				cout << "Pages: " << pages << endl;
				cout << "Price: " << price << endl;
				cout << "Age restriction: " << age << endl;
			};
			float calcPrice()const override {
				float total = price;
				int amount = pages / 100;
				if (amount > 0) {
					total *= (1+amount*0.05);
				}
				if (age < 10) {
					total *= 1.1;
				}
				return total;
			};
        };
    };
};

