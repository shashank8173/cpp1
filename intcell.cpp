#include"IntCell.h"
IntCell(int initialValues):storedValues(initialValue)
{
	
}
int IntCell::read()const
{
	return storedValue;
}
void IntCell::write(int x);
{
	storedValue=x;
}
