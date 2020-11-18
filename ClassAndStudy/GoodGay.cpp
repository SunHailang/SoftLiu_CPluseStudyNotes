#include "GoodGay.h"

GoodGay::GoodGay()
{
	this->m_build = new Build;
}

GoodGay::~GoodGay()
{
	delete this->m_build;
	this->m_build = NULL;
}


void GoodGay::Visit()
{
	cout << "Good Gay Visit Build: " << this->m_build->m_sittingRoom << endl;

	// GoodGay 类做 Build 的友元， GoodGay类中就可以访问Build类中的私有成员
	cout << "Good Gay Visit Build: " << this->m_build->m_bedRoom << endl;
}

void GoodGay::Visit2()
{

}