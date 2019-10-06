#include <iostream>
#include <vector>

using namespace std;

vector<int> quicksort(vector<int> &input)
{
	if (input.size() < 2)
		return input;

	int p = input[0];
	vector<int> less;
	vector<int> more;

	for (int i = 1; i < input.size(); ++i)
	{
		if (input[i] <= p)
			less.push_back(input[i]);
		else
			more.push_back(input[i]);
	}

	vector<int> sort_less = quicksort(less);
	vector<int> sort_more = quicksort(more);

	sort_less.push_back(p);
	sort_less.insert(sort_less.end(), sort_more.begin(), sort_more.end());
	return sort_less;
}

int main()
{
	vector<int> input;
	cout << "输入未排序：" << endl;
	int i;
	while (!cin.eof())
	{
		cin >> i;
		input.push_back(i);
	}
	input.pop_back();
	vector<int> con = quicksort(input);
	vector<int>::iterator iter = con.begin();
	while (iter != con.end())
	{
		cout << *iter << " ";
		++iter;
	}
}
