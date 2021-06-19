#include "func.h"
#include "iostream"
using namespace std;

int main(int argc,char*argv[]){
	menu();
	func fn(argv[1]);
	//cout<<argv[1]<<endl;
	fn.load();
	//fn.print();
	int state;
	cin>>state;
	while (state !=0){
		switch(state){
			case 1:
				fn.print();
				menu();
				cin>>state;
				break;
			case 2:
				fn.add();
				fn.save();
				menu();
				cin>>state;
				break;
			case 3:
				fn.prod_delete();
				fn.save();
				menu();
				cin>>state;
				break;
			case 4:
				fn.search();
				menu();
				cin>>state;
				break;
			case 5:
				fn.change();
				fn.save();
				menu();
				cin>>state;
				break;
			case 6:
				fn.day_up();
				fn.save();
				menu();
				cin>>state;
		}
	}
	cout<<"Close"<<endl;
}
