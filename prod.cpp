#include "prod.h"

prod::prod(){
	name_prod="";
	price_prod=-1;
	count_prod=-1;
	time_in=-1;
}
void prod::set_name(string name){
	name_prod=name;
}
string prod::get_name(){
	return name_prod;
}
void prod::set_price(int price){
	price_prod=price;
}
int prod::get_price(){
	return price_prod;
}
void prod::set_count(int count){
	count_prod=count;
}
int prod::get_count(){
	return count_prod;
}
void prod::set_time(int time){
	time_in=time;
}
int prod::get_time(){
	return time_in;
}
void prod::read(istream& in){
        in>>name_prod;
        in>>price_prod;
        in>>count_prod;
        in>>time_in;
}
void prod::printf(ostream& out){
        out<<name_prod<<" "<<price_prod<<" "<<count_prod<<" "<<time_in<<endl;
}
ostream& operator << (ostream& out, prod& arr){
        arr.printf(out);
        return(out);
}
istream& operator >> (istream& in, prod& arr){
        arr.read(in);
        return(in);
}
