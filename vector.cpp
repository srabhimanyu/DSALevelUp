#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> arr = {1,2,7,10,15};

	// O(1)

	arr.push_back(1);

	cout << arr.size() <<endl;

	cout << arr.capacity() <<endl;



	return 0;
}
