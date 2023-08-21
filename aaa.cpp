
#include <iostream>
//#include "solution.h"
using namespace std;
 int findUnique(int *arr, int size)
{
    //Write your code here
     int i,j,c;
        for(i=0;i<size;i++){
            c=0;
            for(j=0;j<size;j++){
                if(arr[i]==arr[j])
                    c++;
            }
            if (c == 1) {
              return arr[i];
            }
        }
}
int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout << findUnique(input, size) << endl;
	}

	return 0;
}