#pragma once
#include <string>
#include <utility>

namespace geek
{
	#ifndef INPARAM
	#define INPARAM
	#endif

	#ifndef OUTPARAM
	#define OUTPARAM
	#endif

	// Key: wstring
	// Value : wstring
	typedef std::pair<std::wstring, void*> GeekKeyValue;

	enum GeekDbType
	{
		Sequence,
		Hashtable,
		//...
	};
}