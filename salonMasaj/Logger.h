#ifndef _LOGGER_H_
#define _LOGGER_H_
#include <iostream>

class Logger
{
private:
	const int SleepTime = 200;

	Logger() {}
	Logger(Logger const&);         // don't implement
	void operator=(Logger const&); // don't implement

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
	static Logger& getInstance()
	{
		static Logger instance;
		return instance;
	}

	template<typename Arg1>
	std::string Write(const Arg1& arg1);

	template<typename Arg1, typename... Args>
	std::string Write(const Arg1& arg1, const Args&... args);

	template<typename Arg1>
	std::string WriteLine(const Arg1& arg1);

	template<typename Arg1, typename... Args>
	std::string WriteLine(const Arg1& arg1, const Args&... args);
};

template <typename Arg1>
std::string Logger::Write(const Arg1& arg1)
{
	auto temp = static_cast<std::ostringstream&>(DoLog(std::ostringstream(), arg1)).str();
	Sleep(SleepTime);
	std::cout << temp;
	return temp;
}

template <typename Arg1, typename ... Args>
std::string Logger::Write(const Arg1& arg1, const Args&... args)
{
	auto temp = static_cast<std::ostringstream&>(DoLog(std::ostringstream(), arg1, args...)).str();
	Sleep(SleepTime);
	std::cout << temp;
	return temp;
}

template <typename Arg1>
std::string Logger::WriteLine(const Arg1& arg1)
{
	auto temp = static_cast<std::ostringstream&>(DoLog(std::ostringstream(), arg1)).str();
	Sleep(SleepTime);
	std::cout << temp << "\n";
	return temp;
}

template <typename Arg1, typename ... Args>
std::string Logger::WriteLine(const Arg1& arg1, const Args&... args)
{
	auto temp = static_cast<std::ostringstream&>(DoLog(std::ostringstream(), arg1, args...)).str();
	Sleep(SleepTime);
	std::cout << temp << "\n";
	return temp;
}

#endif // !_LOGGER_H_
