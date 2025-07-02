#include "Resource.h"

Resource::Resource()
{
	cout << "Created Resource" << endl;
}

void Resource::Share(Resource& other)
{
	*this = other;
}

Resource::~Resource()
{
	cout << "Release Resource" << endl;
}
