//
// Guards.h
//


#ifndef Poco_CppUnit_Guards_INCLUDED
#define Poco_CppUnit_Guards_INCLUDED


// Prevent copy construction and assignment for a class
#define REFERENCEOBJECT(className) \
private: \
	className(const className& other); \
	className& operator = (const className& other);


#endif // Poco_CppUnit_Guards_INCLUDED
