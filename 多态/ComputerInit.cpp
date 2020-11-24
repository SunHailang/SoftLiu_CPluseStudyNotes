#include<iostream>

using namespace std;

// 电脑组装
// 抽象CPU类
class CPU
{
public:
	virtual void calculate() = 0;
};
// 抽象显卡类
class VideoCard
{
public:
	virtual void display() = 0;
};
// 抽象内存条类
class Memory
{
public:
	virtual void storage() = 0;
};

class Computer
{
public:
	Computer(CPU* _cpu, VideoCard* _videocard, Memory* _memory)
	{
		this->m_cpu = _cpu;
		this->m_videocard = _videocard;
		this->m_memory = _memory;
	}
	~Computer()
	{
		if (this->m_cpu != NULL)
		{
			delete this->m_cpu;
			this->m_cpu = NULL;
		}
		if (this->m_videocard != NULL)
		{
			delete this->m_videocard;
			this->m_videocard = NULL;
		}
		if (this->m_memory != NULL)
		{
			delete this->m_memory;
			this->m_memory = NULL;
		}
		cout << "~Computer" << endl;
	}
	// 提供工作的函数
	void Work()
	{
		// 让具体零件工作
		m_cpu->calculate();
		m_videocard->display();
		m_memory->storage();
	}

private:
	CPU * m_cpu;
	VideoCard * m_videocard;
	Memory * m_memory;

};

class InterCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "Inter CPU Start." << endl;
	}
};

class InterVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Inter VideoCard Start." << endl;
	}
};

class InterMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Inter Memory Start." << endl;
	}
};


void test01()
{
	CPU* interCPU = new InterCPU();
	VideoCard* interVideoCard = new InterVideoCard();
	Memory* interMemory = new InterMemory();

	Computer* interComputer = new Computer(interCPU, interVideoCard, interMemory);
	interComputer->Work();
	delete interComputer;
}

int main()
{
	test01();

	system("pause");
	return 0;
}