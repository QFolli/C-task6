//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main()
//{
//   //������� 1
//    setlocale(LC_ALL, "Russian");
//    int n;
//    cout << "������� ���������� ��������� � �������: ";
//    cin >> n;
//    int* arr = new int[n];
//    cout << "������� �������� �������: \n";
//    for (int i = 0; i < n; i++)
//        cin >> arr[i];
//    sort(arr, arr + n, greater<int>());
//    cout << "��������������� ������: ";
//    for (int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    delete[] arr;
//
//
//	  //������� 2
//    int temp;
//    vector<int> v;
//    cout << "\n������� ���������� ��������� � �������: ";
//    cin >> n;
//    cout << "������� �������� �������: \n";
//    for (int i = 0; i < n; i++) 
//    {
//        cin >> temp;
//        v.push_back(temp);
//    }
//
//    int count = std::count_if(v.begin(), v.end(), [](int i) {return i > 5; });
//    cout << "���������� ���������, ������� 5: " << count << endl;
//
//}