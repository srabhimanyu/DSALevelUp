#include <iostream>
#include <vector>
using namespace std;

int main() {

// 	vector<int> arr = {1,2,7,10,15};

// 	// O(1)
// 	arr.pop_back();
// 	arr.push_back(16);

// // 	cout << arr.size() <<endl;

    vector<int> arr(10,7);
    arr.push_back(16);

	for(int i=0;i<arr.size();i++)
	    cout << arr[i] << endl;

     for(int x:arr){
        cout << x << ",";
     }


// 	cout << arr.capacity() <<endl;



	return 0;
}
