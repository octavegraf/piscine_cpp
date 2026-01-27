#pragma once

template <typename T>
T const &max(const T &a, const T &b)
{
	return (a > b ? a : b);
}