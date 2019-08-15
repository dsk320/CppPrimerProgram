#include"pch.h"
#include<iostream>
#include"Sales_item.h"
#include"Sales_data.h"
#include<string>
#include<cctype>
#include<vector>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::vector;
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



	//string line;
	//while (getline(cin, line)) {
	//	if (!line.empty()) {
	//		cout << "the line size:" << line.size() << endl;
	//		auto str_type = line.size();//.size()类型是string::size_type类型，无符号整型数
	//		cout << str_type << endl;
	//	}
	//	else
	//		cout << "error:the line is empty" << endl;
	//}


	//string s("Hello World!!!");
	//decltype(s.size()) punct_cnt = 0;
	//for (auto c : s)
	//	if (ispunct(c))
	//		++punct_cnt;
	//cout << punct_cnt << " punctuation characters in" << s << endl;



	//首单词变大写
	//string line;
	//while (getline(cin, line)) {
	//	 
	//	for (string::size_type fnn = 0; fnn<line.size();++fnn) {
	//		if (islower(line[fnn]) || isupper(line[fnn])) {
	//			for (decltype(line.size()) index = fnn; index != line.size() && !isspace(line[index]); ++index) {
	//				line[index] = toupper(line[index]);
	//			}
	//			cout << line << endl;
	//			break;
	//		}
	//	}
	//}



	//转为16进制，以大于15的数结束循环

	//const string hexdigits = "0123456789ABCDEF";
	//cout << "Enter a series of numbers between 0 and 15"
	//	<< " separated by spaces.Hit ENTER when finished:"
	//	<< endl;
	//string result;
	//string::size_type n=0;
	//while (cin >> n) {
	//	if (n < hexdigits.size()) {
	//		result += hexdigits[n];
	//	}else{
	//		cout << "Your hex number is: " << result << endl;
	//		break;
	//	}
	//	
	//}



	//标准库类型vector
	/*int i;
	vector<int> v1;
	while (cin >> i) {
		v1.push_back(i);

	}*/

	/*string s;
	vector<string> v2;
	while (cin >> s) {
		v2.push_back(s);
	}*/


	//vector<int> v3{ 1,2,3,4,5,6,7,8,9 };
	//for (auto &i : v3) {
	//	i *= i;
	//}
	//for (auto i : v3) {
	//	cout << i << " ";
	//}
	//cout << endl;








	return 0;
}

