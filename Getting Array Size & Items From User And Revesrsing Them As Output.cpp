#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
									//Getting Array Size & Items From User And Reversing Them As a Output//
int main(){
	int size;
	cin >> size;
	vector<int> aarr(size);		//int arr[size].
	for (int i = 0; i < size; i++){
		cin >> aarr[i];
	};
	for (int x = 0; x < size / 2; x++){
		swap(aarr[x], aarr[size - x - 1]);
	};
	for (int l = 0; l < size; l++){
		cout << aarr[l] << " ";
	}
	cout << endl;
	system("pause");
	return 0;

}