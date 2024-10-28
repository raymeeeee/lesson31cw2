#pragma once
#include "Toy.h"
#include "Book.h"
#include "Clothing.h"
#include <vector>
#include <algorithm>
#include <ctime>

class Lottery
{
protected:
	vector<Products::Product*> lottery;
public:
	Lottery() {};
	~Lottery() {
		for (auto i : lottery)
		{
			delete i;
		}
	};

	void addProduct(Products::Product* product) {
		lottery.push_back(product);
	};

	void generateWinner() {
		if (lottery.size() != 0) {
			int winner = rand() % lottery.size();
			lottery[winner]->show();
			cout << "=========================" << endl;
			cout << "Money equivalent: " << lottery[winner]->calcPrice() << endl;

			delete lottery[winner];
			lottery.erase(lottery.begin() + winner);
		}
		
	}

	void showList()const {
		int index = 0;
		for (auto i : lottery)
		{
			cout << "#" << ++index << endl;
			i->show();
			cout << endl;
		}
	}



};

