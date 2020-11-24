#include<iostream>
#include<string>
// 包含头文件
#include<fstream> 

using namespace std;

void testTextWrite()
{
	// 1. 包含头文件 fstream
	// 2. 创建流对象
	ofstream ofs;
	// 3. 指定打开方式
	ofs.open("test.txt", ios::trunc | ios::out);
	// 4. 写内容
	ofs << "Name:Tom" << endl;
	ofs << "Age:18" << endl;
	// 5. 关闭问件
	ofs.close();
}

void testTextRead()
{
	// 1. 包含头文件 fstream
	// 2. 创建流对象
	ifstream ifs;
	// 3. 指定打开方式
	ifs.open("test.txt", ios::in);
	// 判断是否打开成功
	if (!ifs.is_open())
	{
		// 没有打开成功
		cout << "file open failed." << endl;
		return;
	}
	// 4. 读文件
	// 第一种方式：
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}
	// 第二种方式
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}
	// 第三种方式
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}
	// 第四种方式 -- 不推荐
	//char c;
	//while ((c = ifs.get()) != EOF) // EOF end of File
	//{
	//	cout << c;
	//}

	// 5. 关闭问件
	ifs.close();
}

class Person
{
public:
	char Name[64];
	int Age;
};

void testBinaryWrite()
{
	// 1. 包含头文件
	// 2. 创建流对象
	ofstream ofs("person.txt", ios::out | ios::binary);
	// 3. 打开文件
	//ofs.open("person.txt", ios::out | ios::binary);
	// 4. 写文件
	Person p = { "Jack", 18 };
	ofs.write((const char *)&p, sizeof(Person));
	// 5. 关闭问件
	ofs.close();
	cout << "Write Binary Success." << endl;
}

void testBinaryRead()
{
	// 1. 包含头文件
	// 2. 创建流对象
	ifstream ifs("person.txt", ios::in | ios::binary);
	// 3. 打开文件
	//ofs.open("person.txt", ios::out | ios::binary);
	// 判断文件是否已打开
	if (!ifs.is_open())
	{
		cout << "File Open Failed." << endl;
		return;
	}
	// 4. 读文件
	Person p;
	ifs.read((char *)&p, sizeof(Person));
	// 5. 关闭问件
	ifs.close();

	cout << "Person Name:" << p.Name << "  Age:" << p.Age << endl;

	cout << "Read Binary Success." << endl;
}

int main()
{
	//testTextWrite();
	//testTextRead();

	//testBinaryWrite();
	testBinaryRead();

	system("pause");
	return 0;
}

