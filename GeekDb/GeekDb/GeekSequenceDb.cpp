#include "stdafx.h"
#include "GeekSequenceDb.h"

namespace geek
{
	GeekResult GeekSequenceDb::InsertKeyValue(INPARAM const GeekKeyValue& entry)
	{
		// ...
		return GEEK_SUCCESS;
	}

	GeekResult GeekSequenceDb::UpdateKeyValue(INPARAM const GeekKeyValue& entry)
	{
		//...
		return GEEK_SUCCESS;
	}

	GeekResult GeekSequenceDb::DeleteKeyValue(INPARAM const std::wstring& wszKey)
	{
		return GEEK_SUCCESS;
	}

	GeekResult GeekSequenceDb::QueryKeyValue(
		INPARAM const std::wstring& wszKey,
		OUTPARAM std::vector<GeekKeyValue>& entries)
	{
		return GEEK_SUCCESS;
	}
}