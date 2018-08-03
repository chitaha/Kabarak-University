/**
 * (a op1 b) op2 (c op3 d)
 * x = (a op1 b)
 * y = (c op3 d)
 * z = ((a op1 b) op2 (c op3 d)) OR (x op2 y)
 */

#include <stdio.h>

int main()
{
	int op1, op2, op3;
	int a, b, c, d, x, y, z;

	printf("Please enter op1 (and=1,or=2,xor=3,nor=4,nand=5,implication=6): \n");
    scanf("%d", &op1);
    printf("Please enter op2 (and=1,or=2,xor=3,nor=4,nand=5,implication=6): \n");
    scanf("%d", &op2);
    printf("Please enter op3 (and=1,or=2,xor=3,nor=4,nand=5,implication=6): \n");
    scanf("%d", &op3);

    printf("\nHere is your truth table: \n\n");
    printf("%c    %c    %c    %c    %s\n", 'a', 'b', 'c', 'd', "answer");

	for (a = 0; a <= 1; a ++)
    {
        for (b = 0; b <= 1; b ++)
        {
        	for (c = 0; c <= 1; c ++)
        	{
        		for (d = 0; d <= 1; d++)
        		{
        			if (op1 == 1)
						x = (a && b);     // and
					if (op1 == 2)
						x = (a || b);     // or
					if (op1 == 3)
						x = (a ^ b);      // xor
					if (op1 == 4)
						x = !(a || b);    // nor
					if (op1 == 5)
						x = !(a && b);    // nand
					if (op1 == 6)
						x = (!a||b);        // implication
					if (op3 == 1)
						y = (c && d);
					if (op3 == 2)
						y = (c || d);
					if (op3 == 3)
						y = (c ^ d);
					if (op3 == 4)
						y = !(c || d);
					if (op3 == 5)
						y = !(c && d);
					if (op3 == 6)
						y = (!c||d);        
					if (op2 == 1)
						z = (x && y);
					if (op2 == 2)
						z = (x || y);
					if (op2 == 3)
						z = (x ^ y);
					if (op2 == 4)
						z = !(x || y);
					if (op2 == 5)
						z = !(x && y);
					if (op2 == 6)
						z = (!x||y);        
			        printf("%d    %d    %d    %d    %d\n", a, b, c, d, z);
			    }
		    }
        }
    }
	
	return 0;
}