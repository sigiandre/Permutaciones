#include<iostream>
#include<sstream>

using namespace std;

void permutaciones(string str, int i, int n) {

	if (i == n - 1) { //base condition
		cout << "base=> " << str << endl;
		return;
	}

	//process each character of ramaining string
	for (int j = i; j < n; j++) {
		swap(str[i], str[j]);
		//recuse for string [i+1,n-1]
		permutaciones(str, i + 1, n);

		//BACKTACK MECHANISM: restore de string to its original state
		swap(str[i], str[j]);
	}
}

int main() {

	string str = "ABCD";
	//..
	permutaciones(str, 0, str.length());
	//..
	system("pause");
	return 0;
}
