#include <stdio.h>
#include <string.h>
int main()
{
	char line[50];
	scanf("%s", line);
	int N = strlen(line);
	int yes=0;
	for(int i=0;i<N;i++){
        if( line[i]==line[N-1-i] )yes++;
	}
	if(yes==N) printf("�������Oyes����,�O�j��\n");
	else printf("���O�������Oyes,�N���O�j��\n");
}