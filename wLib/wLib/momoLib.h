#pragma once
#ifdef WIN32
#include<Windows.h>
namespace momoLib
{
	//version 1
	void clear() { std::system("cls"); }
}
#endif