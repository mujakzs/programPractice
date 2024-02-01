#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Eneter a number first ";
    cin >> n;
    
    int *nums = new int[n];
    for(int i = 0; i < n; i++)
    {
    	cin >> nums[i];
	}
	
	int max = nums[0];
	for (int i=0; i < n; i++)
	{
		if(nums[i] > max)
		{
			max = nums[i];
		}
		
	}
	cout << endl;
	cout << "The mux number is:" << max;
	

    

}
