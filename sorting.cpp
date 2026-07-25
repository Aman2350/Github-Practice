#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& a) {
	size_t n = a.size();
	for (size_t i = 0; i < n; ++i) {
		bool swapped = false;
		for (size_t j = 0; j + 1 < n - i; ++j) {
			if (a[j] > a[j+1]) {
				swap(a[j], a[j+1]);
				swapped = true;
			}
		}
		if (!swapped) break;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	if (!(cin >> n)) {
		// No input provided — demonstrate with a sample array
		vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
		cout << "Before: ";
		for (int x : arr) cout << x << " ";
		cout << "\n";
		bubbleSort(arr);
		cout << "After: ";
		for (int x : arr) cout << x << " ";
		cout << "\n";
		return 0;
	}

	vector<int> arr(n);
	for (int i = 0; i < n; ++i) cin >> arr[i];
	bubbleSort(arr);
	for (int i = 0; i < n; ++i) {
		if (i) cout << " ";
		cout << arr[i];
	}
	cout << "\n";
	return 0;
}