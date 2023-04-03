#include <stdio.h>
#include <string.h>
#include <wchar.h>

int main(int argc, char **argv)
{
	wchar_t c = L'жа';
  unsigned char* charP = (unsigned char *)&c;
	int i;
	
	printf("Hex code: ");
	for (i = 0; i < sizeof(wchar_t); i++)
	{
		printf("%02x ", charP[i]);
	}
	printf("\n");
	return 0;
}