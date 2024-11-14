#include <iostream>

using namespace std;

int main()
{
	int temp;
	
	cout << "What is the current temperature" << endl;
	cin >> temp;
	if (temp <32) {
		cout << "Bring heavy jacket" << endl;
	}
	else if(temp >= 32 && temp <=50 ){
		cout << "Bring light jacket" << endl;
	}
	else{
		cout << "Don't bring jacket" << endl;
	}

	return 0;
}
