#include "libft.h"
int main(){
	char str[] = "Hello Nare";
	int t = 5;

	char str2[10101010];
	printf("%s\n ", str);

	ft_memcpy(str2,str,t);
	printf("%s\n",str2);
	return 0;
}

