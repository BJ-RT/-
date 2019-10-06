自制：
#include <iostream>
#include <vector>

using namespace std;

void binarysearch(vector<int> input, int search)
{
	int low = 0;
	int high = input.size()-1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (input[mid] == search)
		{
			cout << "查找成功" << input[mid] << endl;
			return;
		}
		else if (input[mid] > search)
			high = mid - 1;
		else
			low = mid + 1;
	}
	cout << "未找到" << endl;
}

int main()
{
	vector<int> input;
	int temp;
	cout << "输入：" << endl;
	while (!cin.eof())
	{
		cin >> temp;
		input.push_back(temp);
	}
	input.pop_back();

	cin.clear();

	int search;
		cout << "输入查找的数字：" << endl;
		cin >> search;
		binarysearch(input, search);
	return 0;
}


他人：
#include "iostream"
using namespace std;

void binarySearch(int data_array[], int element, int len)
{
    int low = 0;
    int high = len;
    while (low <= high)
    {
        int mid = (low + high)/2; 
        int guess = data_array[mid];

        if (guess == element)
        {
            cout<<"Element found at "<<mid<<" th index"<<endl ;
            return ;
        }
        else if (guess > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout<<"Element Not Found"<<endl ;
    return ; //number not found
}
int main()
{
    int data_array[] = {2,10,23,44,100,121};
    int length = sizeof(data_array) / sizeof(int);

    binarySearch(data_array, 3, length) ;  // not found case
    binarySearch(data_array, 2, length) ; // found at corner case
    binarySearch(data_array, 44, length) ; //found at middle case
    return 0;
}

