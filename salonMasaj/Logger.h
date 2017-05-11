#ifndef _LOGGER_H_
#define _LOGGER_H_
#include <iostream>

class Logger
{
private:

	template<typename Arg1>
	static std::ostringstream & DoLog(std::ostringstream & stream, const Arg1 & arg1)
	{
		return static_cast<std::ostringstream&>(stream << arg1);
	}

	template<typename Arg1, typename... Args>
	static std::ostringstream & DoLog(std::ostringstream & stream, const Arg1 & arg1, const Args&... args)
	{
		return DoLog(static_cast<std::ostringstream&>(stream << arg1), args...);
	}

public:

	template<typename Arg1>
	static std::string Write(const Arg1 & arg1)
	{
		auto temp = static_cast<std::ostringstream&>(DoLog(std::ostringstream(), arg1)).str();
		std::cout << temp;
		return temp;
	}

	template<typename Arg1, typename... Args>
	static std::string Write(const Arg1 & arg1, const Args&... args)
	{
		auto temp = static_cast<std::ostringstream&>(DoLog(std::ostringstream(), arg1, args...)).str();
		std::cout << temp;
		return temp;
	}

};


#endif // !_LOGGER_H_