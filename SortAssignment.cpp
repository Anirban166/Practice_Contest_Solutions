/*------------------------
-> Author : Anirban Chetia
-> Roll Number : 170103007
-> Branch : CSE
-> Semester : 5th
------------------------*/
#include<iostream>
#include<vector>
using namespace std;

//Functions:
vector<int>SelectionSort(vector<int>array);  //Selection Sort
void swap(int i, int j, vector<int>*array); //Swap function

void swap(int i, int j, vector<int>*array)
{
	int temp = array->at(j); array->at(j) = array->at(i); array->at(i) = temp;
}

//take smallest element at each step
//append it to front, hence sorted array from the start
//slowly increases from the left
vector<int>SelectionSort(vector<int>array)
{
	if (array.empty()) return {};
	int startindex = 0;
	//loop goes till last element - 1 since last position would be in sorted order.
	while (startindex < array.size() - 1)
	{
		int smallestindex = startindex;
		for (int i = startindex + 1; i < array.size(); ++i)
			if (array[smallestindex] > array[i])
				smallestindex = i;
		swap(startindex, smallestindex, &array);
		startindex++;
	}
	return array;
}

int main()
{   
	vector<int>arr = { 1,9,7,4,2 };
	arr=SelectionSort(arr);
	for (auto i : arr) cout << i;
	return 0;
}
