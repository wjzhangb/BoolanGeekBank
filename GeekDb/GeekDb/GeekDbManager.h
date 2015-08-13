#pragma once
#include "GeekDb.h"
#include "GeekSequenceDb.h"
#include <string>
#include <map>

namespace geek
{
	class GeekDbManager
	{
	public:
		GeekResult CreateDatabase(
			INPARAM const std::wstring& wszName, 
			INPARAM const GeekDbType dbType
		);

		GeekResult InsertDatabase(
			INPARAM const std::wstring& wszName,
			INPARAM const GeekKeyValue& entry
		);

		GeekResult UpdateDatabase(
			INPARAM const std::wstring& wszName,
			INPARAM const GeekKeyValue& entry
		);

		GeekResult DeleteDatabase(
			INPARAM const std::wstring& wszName,
			INPARAM const std::wstring& wszKey
		);

		GeekResult DisposeDatabase(INPARAM const std::wstring& wszName);

		GeekResult DumpDatabase(
			INPARAM const std::wstring& wszName,
			INPARAM const std::wstring& wszFileName
		);

	private:
		std::map<std::wstring, GeekDb*> m_DbCollection;
	};
}