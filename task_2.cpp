//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() 
//{
//	  //������� 1
//    setlocale(LC_ALL, "Russian");
//    string str;
//    cout << "������� ������: ";
//    getline(cin, str);
//
//    for (int i = str.length() - 1; i >= 0; i--) 
//    {
//        cout << str[i];
//    }
//
//    //������� 2
//    cout << "\n������� ������: ";
//    getline(cin, str);
//    int len = str.length();
//    bool isPalindrome = true;
//    for (int i = 0; i < len / 2; i++)
//    {
//        if (str[i] != str[len - i - 1]) 
//        {
//            isPalindrome = false;
//            break;
//        }
//    }
//    if (isPalindrome)
//        cout << str << " - ���������" << endl;
//    else
//        cout << str << " - �� ���������" << endl;
//}