#include <iostream>

using namespace std;

int main()
{
	int i = 500;
	int sum = 0;
	do
	{
		sum = sum + i;
		i++;
	}
	while (i<=1500);

	cout << sum << endl;

	return 0;
}


// #include <iostream>
// using namespace std;

// int main() 
// {
//     int number = 500, sum = 0;
    
//     do 
//     {
//         sum += number;
//         number++;
//     }
//     while(number <= 1500);

//     cout<<"Total sum = "<< sum << endl;
    
//     return 0;
// }