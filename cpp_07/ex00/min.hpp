#pragma once

template <typename T>
T const &min(const T &a, const T &b)
{
	return (a < b ? a : b);
}