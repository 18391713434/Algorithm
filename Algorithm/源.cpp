#include<iostream>
int main() {
	using namespace std;


	int sum = 0;
	cout << "������һ�����ֺ�������Ŀ�Ŀո�";
	int i;
	while (cin >> i)
	{
	
		sum += i;
		while( cin.peek() == ' ' )
		{
			cin.get();
		}
		if( cin.peek() == '\n' )
		{
			break;

		}




	}


	cout << "�����" << sum << endl;
	
	return 0;
}
