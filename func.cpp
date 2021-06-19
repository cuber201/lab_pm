#include "func.h"

using namespace std;

func::func(char*file){
	file_n= file;
	size= -1;
	arr= nullptr;
}
func::~func(){
	delete [] arr;
}

void func::load(){
	ifstream f(file_n);
	f>>size;
	arr = new prod[size];
	if(!f){
		cout<<"error"<<endl;
	}
	else{
		for (int i=0;i<size;i++){
			f>>arr[i];
		}
	}
	f.close();
}

void func::save(){
	ofstream f(file_n,ios_base::out |ios_base::trunc);
	f<<size<<endl;
	for (int i=0;i<size;i++){
		f<<arr[i];
	}
	f.close();
}
void func::add(){
	cout<<"-------------------------"<< endl;
	string name_p;
	int price;
	int count;
	int time;
	cout<<"Введите название продукта:";
	cin>>name_p;
	cout<<"Введите цену продукта:";
	cin>>price;
	cout<<"Введите количество продукта на складе:";
	cin>>count;
	cout<<"Введите време продукта на складе:";
	cin>>time;
	prod* temp = new prod[size];
	for (int i=0;i<size;i++){
	temp[i]=arr[i];
	}
	delete [] arr;
	size++;
	arr = new prod[size];
	for (int i=0;i<size-1;i++){
	arr[i]=temp[i];
	}
	arr[size-1].set_name(name_p);
	arr[size-1].set_price(price);
	arr[size-1].set_count(count);
	arr[size-1].set_time(time);
}
void func::prod_delete(){
	int id;
        cout<<"-------------------------"<< endl;
        cout<<"Выберите номер элемента от 1 до "<<size<<":";
        cin>>id;
        id--;
        prod* temp = new prod[size];
        for (int i=0;i<size;i++){
                temp[i]=arr[i];
        }
        size--;
        delete [] arr;
        arr = new prod[size];
        for (int i=0;i<size;i++){
        if(i<id){
                arr[i]=temp[i];
                }
        else{
                arr[i]=temp[i+1];
                }
        }
        delete [] temp;

}
void func::print(){
	cout<<"-------------------------"<< endl;
	cout<<"Продукт"<<"\t"<<"Цена"<<"\t"<<"Количество"<<"\t"<<"Време на складе"<<endl;
	for (int i=0;i<size;i++){
	cout<<"#"<<i+1<<endl;
	cout<<arr[i].get_name()<<"\t";
	cout<<arr[i].get_price()<<"\t";
	cout<<arr[i].get_count()<<"\t";
	cout<<arr[i].get_time()<<endl;
	}

}
void func::search(){
	int id;
	cout<<"-------------------------"<< endl;
	cout<<"Выберите номер элемента от 1 до "<<size<<":";
	cin>>id;
	cout<<"#"<<id<<endl;
	cout<<arr[id-1].get_name()<<"\t";
        cout<<arr[id-1].get_price()<<"\t";
        cout<<arr[id-1].get_count()<<"\t";
        cout<<arr[id-1].get_time()<<endl;
}
void func::change(){
	cout<<"-------------------------"<< endl;
	cout<<"Выберите номер элемента от 1 до "<<size<<":";
	int id;
	cin>>id;
	id--;
	string name_p;
        int price;
        int count;
        int time;
        cout<<"Введите название продукта:";
        cin>>name_p;
        cout<<"Введите цену продукта:";
        cin>>price;
        cout<<"Введите количество продукта на складе:";
        cin>>count;
        cout<<"Введите време продукта на складе:";
        cin>>time;
        arr[id].set_name(name_p);
        arr[id].set_price(price);
        arr[id].set_count(count);
        arr[id].set_time(time);
}
void func::day_up(){
	int day;
	for (int i=0;i<size;i++){
		day=arr[i].get_time()+1;
		arr[i].set_time(day);
	}
}
void menu(){
	cout <<"-------------------------"<< endl
	<< "Выберите действие:" << endl
	<< "(0)Выход из программы" << endl
	<< "(1)Вывод данных" << endl
	<< "(2)Добавление данных" << endl
	<< "(3)Удаление данных" << endl
	<< "(4)Поиск" << endl
	<< "(5)Изменение данных" << endl
	<< "(6)Добавать день на скаладе"<< endl
	<< "Ваш выбор:";
}
