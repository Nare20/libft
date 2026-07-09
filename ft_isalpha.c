#include "libft.h"
void ft_isalpha(int c){
	if( c >= 'A' && c <= 'Z' or c >= 'a' && c<= 'z')
		return (1);
	return 0;
}

