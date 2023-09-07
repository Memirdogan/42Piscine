#include <unistd.h>

int repeat(char c)
{
	int repeat;
	
	if(c >= 'A' && c<='Z')
		repeat = c - 'A' + 1;
	else if(c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return(repeat);
}

int main(int ac,char **av)
{
	int count;
	if(ac == 2)
	{
		while(*av[1])
		{
			count = repeat(*av[1]);
			while(count--)
			{
				write(1,av[1],1);
			}
			av[1]++;
		}
	}
	write(1,"\n",1);
}
