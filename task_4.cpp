//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main() 
//{
//    //������� 1
//    setlocale(LC_ALL, "Russian");
//    int n;
//    cout << "������� ���������� ��������� � �������: ";
//    cin >> n;
//    queue<int> q;
//    cout << "������� �������� �������: \n";
//    for (int i = 0; i < n; i++) 
//    {
//        int x;
//        cin >> x;
//        q.push(x);
//    }
//    q.pop();
//    cout << "����� �������: ";
//    while (!q.empty()) 
//    {
//        cout << q.front() << " ";
//        q.pop();
//    }
//
//    //������� 2
//    if (q.empty()) 
//        cout << "\n������� �����" << endl;
//    else 
//        cout << "������� �� �����" << endl;
//}