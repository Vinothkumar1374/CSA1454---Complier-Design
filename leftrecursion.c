#include<stdio.h>
#include<string.h>
int main(){
	char g[100],temp[100], alpha[100], beta[100];
	int i, j,c;
	printf("Enter the production: ");
	scanf("%s", &g);
	printf("\n");
	int len = strlen(g);
	int count=0;
	if(g[0]==g[3])
	{
		for ( i = 0; i < len; i++) {
        if (g[i] == '|') {
            count = 1;
        }
        else if (count) {
            printf("%c -> %c%c'",g[0], g[i], g[0]);
        }
    }
    printf("\n");
    printf("%c'->",g[0]);
    for ( i = 4; i < len; i++) 
	{	
        if (g[i] == '|') {
            break;
        }
        else
        printf("%c", g[i]);
    }
    printf("%c'",g[0]);
    printf("\n%c'->epsilon",g[0]);
	}
	printf("CORRECT GRAMMER");
	return 0;
}

