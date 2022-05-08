#pragma once

#include <vector>
#include <string>
#include <unordered_map>

namespace Engine
{
	using Int = int32_t;
	using Int32 = int32_t;
	using Int64 = int64_t;
	using UInt = uint32_t;
	using UInt32 = uint32_t;
	using UInt64 = uint64_t;

	using String = std::string;

	template <typename T>
	using Array = std::vector<T>;

	template <typename K, typename T>
	using Map = std::unordered_map<K, T>;

	using UUID = std::string;

	template <typename T>
	using UUIDMap = std::unordered_map<UUID, T>;
}