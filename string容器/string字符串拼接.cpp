//#include <iostream>
//#include <string>
//
//using namespace std;
//// string 拼接
///*
//* string& operator+=(const char* str); 					 // 重载 += 操作符
//* string& operator+=(const char c);                         // 重载 += 操作符
//* string& operator+=(const string& str);                  // 重载 += 操作符
//* string& append(const char* s);                            // 把字符串 s 连接到当前字符串结尾
//* string& append(const char* s, int n);                   // 把字符串 s 的前 n 个字符连接到当前字符串结尾
//* string& append(const string &s);                          // 同 operator+=(const string& str);
//* string& append(const string &s, int pos, int n);  // 字符串 s 中从 pos 开始的 n 个字符连接到字符串结尾
//*/
//int main()
//{
//	string str1 = "I";
//	// 重载 += 操作符
//	str1 += " Love ";
//	// 重载 += 操作符
//	str1 += 'C';
//	string str2("++");
//	// 重载 += 操作符
//	str1 += str2;
//	//把字符串 s 连接到当前字符串结尾
//	str1.append(", Python");
//	//把字符串 s 的前 n 个字符连接到当前字符串结尾
//	str1.append(", C#...", 4);
//	string str3(", C, Java");
//	str1.append(str3);
//	// 字符串 s 中从 pos 开始的 n 个字符连接到字符串结尾
//	string str4(".., MySql;...");
//	str1.append(str4, 2, 8);
//	cout << "str1= " << str1 << endl;
//
//	system("pause");
//	return 0;
//}