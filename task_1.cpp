//#include <iostream>
//#include <vector>
//using namespace std;
//#pragma warning(disable : 4996);
//
//int main() {
//	  //������� 1
//    setlocale(LC_ALL, "Russian");
//    vector<int> vector1(5); 
//
//    for (int i = 0; i < 5; ++i) {
//        cout << "������� ����� " << i + 1 << ": ";
//        cin >> vector1[i];
//    }
//
//    int sum = 0;
//    for (int number : vector1) {
//        sum += number;
//    }
//
//    cout << "����� ���� �����: " << sum << endl;
//
//	  //������� 2
//    int n;
//    cout << "������� ���������� ��������� � �������: ";
//    cin >> n;
//
//    vector<int> vector2(n);
//    cout << "������� �������� �������:\n";
//    for (int i = 0; i < n; ++i) 
//    {
//        cin >> vector2[i];
//    }
//
//    for (int i = 0; i < n - 1; ++i) {
//        for (int j = i + 1; j < n; ++j) {
//            if (vector2[i] > vector2[j]) {
//                swap(vector2[i], vector2[j]);
//            }
//        }
//    }
//
//    cout << "��������������� ������: ";
//    for (int i = 0; i < n; ++i) {
//        cout << vector2[i] << " ";
//    }
//}