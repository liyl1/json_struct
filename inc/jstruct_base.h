#pragma once
#include <list>
#include <string>


/************************************************************************/
/*			the base struct where save struct fields information        */
/************************************************************************/
struct jstruct_base
{
public:
	~jstruct_base();

	bool from_json(std::string);

private:
	bool from_json_(void*);

protected:
	void register_field(const type_info*, std::string, std::string, std::string, void*, void*, int);

private:
	std::list<void*> fields_info;
};
