#ifndef PROD_H
#define PROD_H
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class prod{
private:
	string name_prod;
	int price_prod;
	int count_prod;
	int time_in;

public:
	prod();
	void set_name(string name);
	string get_name();
	void set_price(int price);
	int get_price();
	void set_count(int count);
	int get_count();
	void set_time(int time);
	int get_time();
	void read(istream& in);
	void printf(ostream& out);
};
ostream& operator<<(ostream& out,prod& arr);
istream& operator>>(istream& in,prod& arr);
#endif
