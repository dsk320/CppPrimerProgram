﻿#include"pch.h"
#include<iostream>
#include"Sales_item.h"
#include"Sales_data.h"
#include<string>
#include<cctype>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;
int main() {
	//输入数组之和
	/*int sum = 0, value = 0;
	while (std::cin >> value)
		sum += value;
	std::cout << "the sum is" <<sum<< std::endl;*/



	//std::cerr << "No data" << std::endl;
	//Sales_item item1, item2;
	//std::cin >> item1 >> item2;
	//std::cout << item1 + item2 << std::endl;


	//unsigned i = 10;
	//int j = -1 * i;

	//std::cout << -1*i << std::endl;
	//std::cout << j << std::endl;




	//std::cout << "Hi \x4dO\115!\n";
	//std::cout << "\x4d";


	//unsigned long long a = 18446744073709551615;
	//std::cout << a << std::endl;
//	long double cifang(long double a,int b);
//	long double cinLongDouble=0;
//	int cinInt=0;
//	std::cin >> cinLongDouble>> cinInt;
//	std::cout << cifang(cinLongDouble, cinInt) << std::endl;
//}
//long double cifang(long double a, int b) {
//	long double c=a;
//	for (int i=1; i < b; ++i) {
//		c *= a;
//		
//	}
//	return c;
	//}

	/*double cd = 3.1415926;
	const int &ci = cd;
	std::cout << ci << std::endl;*/


	//int i = 42, *p = &i, *p2 = &i;
	//decltype(*p) c = i;//得到的类型是引用int&
	//decltype((i)) d = i;//引用类型
	//d = 43;
	//std::cout<<c<<std::endl;
	//std::cout << d << std::endl;

	//Sales_data data1, data2;

	//double price = 0;
	//std::cin >> data1.bookNo >> data1.units_sold >> price;
	//data1.revenue = data1.units_sold*price;

	//std::cin >> data2.bookNo >> data2.units_sold >> price;
	//data2.revenue = data2.units_sold*price;
/*第三章 字符串、向量和数组*/
	//string s5 = "    Hello World";
	//string s6("adfg");
	//string s7(10, 'c');
	//string s8 = string(10, 'd');
	//cout << s5 << endl << s6 << endl << s7 << endl<<s8<<endl;
	//cin >> s5>>s6;
	//cout << s5 <<s6<< endl;


	//string word;
	//while (cin >> word) {
	//	cout << word << endl;

	//}



	string line;
	while (getline(cin, line)) {
		if (!line.empty()) {
			cout << "the line size:" << line.size() << endl;
			auto str_type = line.size();//.size()类型是string::size_type类型，无符号整型数
			cout << str_type << endl;
		}
		else
			cout << "error:the line is empty" << endl;
	}


	

	return 0;
}

