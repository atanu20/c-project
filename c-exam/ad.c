/*#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,r=0;
	printf("enter degits");
	scanf("%d",&n);
	for(i=1;i<10;i++)
	{
		
				r = (pow(10,n-1)*i)+i;
		
		
	printf("%d\n",r);
	}
	return 0;
}*/
#include <stdio.h>

// Function to find all N-digit numbers with equal sum of digits at even
// and odd index digits in Bottom-up manner
void findNdigitNums(char res[], int index, int n, int diff)
{
	// if number is less than N-digit
	if (index < n)
	{
		char d = '0';
		// spcl case - number can't start from 0
		if (index == 0)
			d = '1';

		// consider every valid digit and put it in the current
		// index and recur for next index
		for (; d <= '9'; d++)
		{
			// update difference between odd and even digits
			if (index & 1)
				diff += (d - '0');	// add value to diff if odd digit
			else
				diff -= (d - '0');	// subtract value to diff if even digit

			res[index] = d;
			findNdigitNums(res, index + 1, n, diff);

			// backtrack (or use a temp variable instead of updating diff)
			if (index & 1)
				 diff -= (d - '0');	// subtract value to diff if odd digit
			else
				diff += (d - '0');	// add value to diff if even digit
		}
	}
	// if number becomes N-digit with equal sum of even and odd
	// digits, print it
	else if (index == n && abs(diff) == 0)
		printf("%s ", res);
}

int main(void)
{
	int n = 3;		// N-digit

	// character array to store result
	char res[n + 1];

	// null terminate the array
	res[n] = '\0';

	findNdigitNums(res, 0, n, 0);

	return 0;
}

