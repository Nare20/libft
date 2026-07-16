#include <stdio.h>
void *ft_memcpy(void *dest, void *src,size_t n){
	unsigned char *d = (unsigned char*)dest;
	unsigned char *s = (unsigned char*)src;
	size_t i;
	i = 0;
	while( i < n){
		d[i] = s[i];
		i ++;}
	return dest;
}
