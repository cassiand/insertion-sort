// Cassian
// week 3 assignment
// creating and implementing insertion sort method


#include <iostream>
#include <vector>


using namespace std;

class arrayInsertion
{
private:
	vector<double> vec;
	int nElems;

public: 
	arrayInsertion(int max) :nElems(0)
	{
		vec.resize(max);
	}

	void insert(double value)
	{
		vec[nElems] = value;
		nElems++;
	}
	void display()
	{
		for (int j = 0; j < nElems; j++)
			cout << vec[j] << " ";
		cout << endl;
	}
	void insertionSort()
	{
		int in, out;
		for (out = 1; out < nElems; out++)
		{
			double num = vec[out];
			in = out;
			while (in > 0 && vec[in - 1] >= num)
			{
				vec[in] = vec[in - 1];
				--in;
			}
			vec[in] = num;
		}
	}
};

int main()
{
	int maxSize = 100;
	arrayInsertion arr(maxSize);
	arr.insert(23);
	arr.insert(54);
	arr.insert(2);
	arr.insert(8);
	arr.insert(3.2);
	arr.insert(14);
	arr.insert(43);
	arr.insert(0);
	arr.insert(9);
	arr.insert(2);

	cout << "Unsorted array: ";
	arr.display();
	arr.insertionSort();
	cout << "Sorted array: ";
	arr.display();

	return 0;

}