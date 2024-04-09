extern"C"
{
#ifdef TESTLIBRARY_EXPORTS
__declspec(dllexport)
#endif
int return_five()
{
	return 5;
}
}