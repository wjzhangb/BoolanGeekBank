#pragma once
#include "GeekDefs.h"
#include "GeekErrorCode.h"
#include <vector>

namespace geek
{
	class GeekDb
	{
	public:
		virtual GeekResult InsertKeyValue(INPARAM const GeekKeyValue& entry) = 0;
		virtual GeekResult UpdateKeyValue(INPARAM const GeekKeyValue& entry) = 0;
		virtual GeekResult DeleteKeyValue(INPARAM const std::wstring& wszKey) = 0;
		virtual GeekResult QueryKeyValue(
			INPARAM const std::wstring& wszKey, 
			OUTPARAM std::vector<GeekKeyValue>& entries
		) = 0;
	};
}