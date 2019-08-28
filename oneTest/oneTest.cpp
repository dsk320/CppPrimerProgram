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





	//vector<unsigned> scores(11, 0);
	//unsigned grade;
	//while (cin >> grade) {
	//	if (grade <= 100) {
	//		++scores[grade / 10];
	//	}
	//}
	//for (auto i : scores) {
	//	cout << i << " ";
	//}
	//cout << endl;



	//vector<string> words;
	//string word;
	//while (cin >> word) {
	//	if (!word.empty()) {
	//		words.push_back(word);
	//	}
	//}
	//for (auto s : words) {
	//	for (char& c : s) {
	//		c=toupper(c);
	//	}
	//	cout << s<<endl;
	//}



	//迭代器

	//转换成大写
	//string ss = "some string";
	//if (ss.begin() != ss.end()) {
	//	auto it = ss.begin();
	//	*it = toupper(*it);
	//}
	//cout << ss << endl;
	//for (auto it = ss.begin(); it != ss.end() && !isspace(*it); ++it) {
	//	*it = toupper(*it);
	//}
	//cout << ss << endl;



	//箭头运算符（->）:it->men等于(*it).men
	//vector<string> v5;
	//string s5;
	//while (cin >> s5) {
	//	v5.push_back(s5);

	//}
	//for (auto it = v5.begin(); it != v5.end(); ++it) {
	//	for (auto &c : *it) {
	//		c=toupper(c);
	//	}
	//		
	//	cout << *it << " ";
	//}
	//cout << endl;


	//string迭代器
	//string s6 = "1asfdasd";
	//auto it = s6.begin();
	//it += 3;
	//cout << *(it += 1) << endl;
	//cout << (it < s6.end()) << endl;

	//取迭代器中间值
	//string s7;
	//cout << "请输入字符串" << endl;
	//while (cin >> s7)
		//if (s7.size() % 2 == 1) {
		//	auto mid = s7.begin() + s7.size() / 2;
		//	cout << *mid << endl;
		//}
		//else if (s7.size() % 2 == 0) {
		//	auto mid = s7.begin() + s7.size() / 2;
		//	cout << *(mid-1) << " " << *mid << endl;
		//}

	
	//数组

	//char c1[5];//数组维度[]必须是常量表达式
	//char c2[] = "hello";//字符串字面值初始化字符数组时结尾自动加空字符/n
	//cout << sizeof(c2) << endl;

	//复杂数组，阅读方式从内到外
	//int* ip = NULL;
	//int* ptrs[10] = { ip };//ptrs是含有10个整型指针的数组,数组存放的是对象，所以不能存在引用数组int& refs[10]={}
	//int arr[10];
	//int(*Parray)[10] = &arr;//Parray指向数组，指向一个存放10个整型的数组
	//int(&arrRef)[10] = arr;//arrRef引用数组，引用一个存放10个整型的数组
	//int* (*prps)[10] =  &ptrs ;//指向一个指针数组，这个指针数组存放10个整型指针
	//int* (&arry)[10] = ptrs;//引用一个指针数组，这个指针数组存放10个整型指针


	//指针和数组,auto得到类型和值；decltype得到类型，未初始化值。
	int ia[] = { 1,2,3,4 };
	auto ia2(ia);
	*ia2 = 11;
	cout << ia[0] << endl;

	decltype(ia) ia3 = { 3,1,2 };
	cout << sizeof(ia) << endl;

	int i = 1;
	decltype((i)) i2 = i;
	i2 = 2;
	cout << i << endl;



	return 0;
}

