//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	//������� 1
//	setlocale(LC_ALL, "Russian");
//	stack<int> s;
//	int n;
//	cout << "������� ���������� ��������� � �����: \n";
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		cout << "������� ������� " << i + 1 << ": ";
//		cin >> x;
//		s.push(x);
//	}
//	s.pop();
//	cout << "����� ����: ";
//	while (!s.empty())
//	{
//		cout << s.top() << " ";
//		s.pop();
//	}
//
//	//������� 2
//	if (s.empty())
//		cout << "\n���� ����" << endl;
//	else
//		cout << "���� �� ����" << endl;
//}