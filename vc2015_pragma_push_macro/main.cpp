#define PUSH_MACRO(name)    __pragma(push_macro(#name)) // error C2059: syntax error: ')'
#define POP_MACRO(name)	    __pragma(pop_macro(#name))  // error C2059: syntax error: ')'

PUSH_MACRO(min)
POP_MACRO(min)

int main()
{
	return 0;
}
