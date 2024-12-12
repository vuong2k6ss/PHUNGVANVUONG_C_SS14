#include <stdio.h>

int main()
{
	char text[]="hoc lap trinh C";
	text[0]='H';
	int size = strlen(text);
	for(int i=size;i>=0;i--){
		printf("%c",text[i]);
	}
	return 0;
}

