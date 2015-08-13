// GeekDb.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GeekDbManager.h"
#include "GeekDefs.h"

int main()
{
	geek::GeekDbManager m;
	 
	m.CreateDatabase(L"Testdb01", geek::GeekDbType::Sequence);

	/*m.InsertDatabase(L"Testdb01", std::make_pair(L"key1", L"value1"));*/


	m.CreateDatabase(L"Testdb02", geek::GeekDbType::Hashtable);


    return 0;
}

