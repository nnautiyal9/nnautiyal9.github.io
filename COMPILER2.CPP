#include <iostream>
using namespace std;
void subString(char str[], int n)  
{ 
    // Pick starting point 
    for (int len = 1; len <= n; len++)  
    {     
        // Pick ending point 
        for (int i = 0; i <= n - len; i++)  
        { 
            //  Print characters from current 
            // starting point to current ending 
            // point.   
            int j = i + len - 1;             
            for (int k = i; k <= j; k++)  
                cout << str[k]; 
              
            cout << endl; 
        } 
    } 
void main(int argc, char const *argv[])
{
	cin>>numberOfStates;
	for(i = 1; i <= numberOfStates; i++)
		for(j = 1; j <= 2; j++)
			cin>>state[i][j];
		


	return 0;
}