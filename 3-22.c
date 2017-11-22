#include<stdio.h>
int main()
{
	char subject[12] = "Programming";
	char nick[4] = "Com";
	char nick_1[4] = {'c','o','m','\0'};
	char name[] = "Jirasak";
	printf("%15s%15s%15s%15s",subject,nick,nick_1,name);
	return 0;
	printf("%s\n",subject);
	printf("%s\n",nick);
	printf("%s\n",nick_1);
	printf("%s\n",name);
}
