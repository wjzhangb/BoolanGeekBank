#pragma once
#include "GeekDb.h"
#include <vector>

namespace geek
{
	class GeekSequenceDb : public GeekDb
	{
	public:
		GeekResult InsertKeyValue(INPARAM const GeekKeyValue& entry);
		GeekResult UpdateKeyValue(INPARAM const GeekKeyValue& entry);
		GeekResult DeleteKeyValue(INPARAM const std::wstring& wszKey);
		GeekResult QueryKeyValue(
			INPARAM const std::wstring& wszKey,
			OUTPARAM std::vector<GeekKeyValue>& entries
		);

	private:
		std::vector<GeekKeyValue> m_vecDb;
	};
}