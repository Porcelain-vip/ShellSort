#include<iostream>

template<typename Type>
void ShellSort(Type a[], int n)
{
	for (int incr = n/2; incr != 0; incr/=2)
		for (int i = incr; i != n; ++i)
			for (int j = i - incr; j >= 0 && a[j] > a[j + incr]; j -= incr)
				std::swap(a[j], a[j + incr]);
}

int main()
{
	using std::cin; using std::cout; using std::endl;
	const int max = 10; int a[max];
	cout << "Please enter 10 numbers as you want: ";
	for (int i = 0; i != max; ++i) cin >> a[i];
	ShellSort<int>(a, max);
	cout << "After sorting: ";
	for (auto&i : a)cout << i << "   "; cout << endl;
	return 0;
}