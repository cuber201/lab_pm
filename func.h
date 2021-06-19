#ifndef FUNC_H
#define FUNC_H
#include <fstream>
#include "prod.h"

using namespace std;

class func{
private:
	char* file_n;
	int size;
	prod* arr;
public:
	func(char*file);
	~func();
	void load();
	void save();
	void add();
	void prod_delete();
	void print();
	void search();
	void change();
	void day_up();
};
void menu();
#endif
