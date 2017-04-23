#ifndef _SCRIPTMANAGER_H_
#define _SCRIPTMANAGER_H_

#include "utils.h"
#include "patron.h"
#include "client.h"

class Action
{

public:

	virtual void doSomething(const int, const std::string&, const std::string&) = 0;
};

class ScriptManager : public Action
{

 private:

	 std::ifstream input;

 public:

	 ScriptManager()
	 {
		input.open("actionScript.txt");
	 }

	 ~ScriptManager()
	 {
		input.close();
	 }

	 void doSomething(const int timeMomment, const std::string& entity, const std::string& action) override
	 {
		if (entity != "client")
		{
			if (entity == "patron")
			{
				if (action == "angajeaza")
				{

				}

				if (action == "concediaza")
				{

				}
			}

			if (entity == "maseuza")
			{
				if (action == "maseaza")
				{

				}
			}

			if (entity == "bodyguard")
			{

				if (action == "bate")
				{

				}

				if (action == "daafara")
				{

				}
			}

			if (entity == "femeieserv")
			{
				if (action == "matura")
				{

				}

				if (action == "spala")
				{

				}

				if (action == "curata")
				{

				}

				if (action == "schimbalenjerie") 
				{

				}
			}
		}
		else
		{
			if (action == "")
			{

			}
		}

	 }
};


#endif // !_SCRIPTMANAGER_H_
