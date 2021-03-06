// C++. In file PushString_i.h
#include "PushString.hh" // *.hh files are generated by the idl compiler.

class PushString_i : public _sk_PushString //_sk_PushString is the skeleton
{
public:
	PushString_i(const char * theName); // the constructor
	virtual ~PushString_i();				// the destructor
	// here we define the implementation of pushStr, which was declared as a
	// Pure Virtual Function in PushString.hh.  All PVFs in the abstract
	// base class must be declared here and defined in the implementaion.
	virtual CORBA::Boolean pushStr(const char * inStr)
		throw(CORBA::SystemException);
};
