#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}


void print_comb()

{
char a;
char b;
char c;

c = '0';
b = '1';
a = '2';

   while ((c != '7' || b != '9' || a != '9') && (c <= '9' || b <= '9' || a <= '9')) 
    {
	if ((c < b) && (b < a))
		{
			putchar(c);
			putchar(b);
			putchar(a);
			putchar(';');
			putchar(' ');
		}
		a++;
	if(a > '9')
		{
			b++;
			c = '0';
		if(b > '9')
			{
				b = '0';
				c++;
			}
		}
     } 
}
int main(void)
{
print_comb();
return(0);
}
