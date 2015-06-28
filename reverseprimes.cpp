include <stdio.h>
 
#define TRUE 1
#define FALSE 0
 
int check_prime(long long unsigned int a) {
	if(a<2) return FALSE;
	long long unsigned int r = sqrt(a);
	for(int i=2; i<r; i++) {
		if(a%i==0) return FALSE;
	}
	return TRUE;
}
 
int main()
{
	int c = 0, flag_p, flag_rev_p, flag_equal;
	long long unsigned int a = 13, rev, results[1000000];
    while(c < 8600)
    {
    	long long unsigned int reverse = 0;
    	long long unsigned int n = a;
    	
    	if(check_prime(a))
    	{
    		while(n != 0)
			{
				reverse = reverse * 10 + (n % 10);
				n = n / 10;
			}
			if(reverse != a)
			{
    			for(int i = 0; i <= c; i++)
    			{
    				if(results[i] == reverse) goto cont;
    			}
    			if(check_prime(reverse))
    			{
    				results[c] = a;
    				printf("%lld\n", a);
    				c++;
    			}
			}
    	}
    	cont:
    	a += 2;
   	}
    	return 0;
}
