#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
void Kodyvannya() { //����� ���� ������ ������
string word;
string key = "";
cout << "����i�� �����: ";
getline(cin, word); //�������� ������
for (int i = 0; i < word.length(); i++) {
switch (word[i]) 
{ //���������� ������
case '�':
key += ".- ";
break;
case '�':
key += ".- ";
break;
case '�':
key += "-... ";
break;
case '�':
key += "-... ";
break;
case '�':
key += ".-- ";
break;
case '�':
key += ".-- ";
break;
case '�':
key += ".... ";
break;
case '�':
key += ".... ";
break;
case '�':
key += "--. ";
break;
case '�':
key += "--. ";
break;
case '�':
key += "-.. ";
break;
case '�':
key += "-.. ";
break;
case '�':
key += ". ";
break;
case '�':
key += ". ";
break;
case '�':
key += "..-.. ";
break;
case '�':
key += "..-.. ";
break;
case '�':
key += "...- ";
break;
case '�':
key += "...- ";
break;
case '�':
key += "--.. ";
break;
case '�':
key += "--.. ";
break;
case '�':
key += "-.-- ";
break;
case '�':
key += "-.-- ";
break;
case '�':
key += ".. ";
break;
case '�':
key += ".. ";
break;
case '�':
key += ".---. ";
break;
case '�':
key += ".---. ";
break;
case '�':
key += ".--- ";
break;
case '�':
key += ".--- ";
break;
case '�':
key += "-.- ";
break;
case '�':
key += "-.- ";
break;
case '�':
key += ".-.. ";
break;
case '�':
key += ".-.. ";
break;
case '�':
key += "-- ";
break;
case '�':
key += "-- ";
break;
case '�':
key += "-. ";
break;
case '�':
key += "-. ";
break;
case '�':
key += "--- ";
break;
case '�':
key += "--- ";
break;
case '�':
key += ".--. ";
break;
case '�':
key += ".--. ";
break;
case '�':
key += ".-. ";
break;
case '�':
key += ".-. ";
break;
case '�':
key += "... ";
break;
case '�':
key += "... ";
break;
case '�':
key += "- ";
break;
case '�':
key += "- ";
break;
case '�':
key += "..- ";
break;
case '�':
key += "..- ";
break;
case '�':
key += "..-. ";
break;
case '�':
key += "..-. ";
break;
case '�':
key += "---- ";
break;
case '�':
key += "---- ";
break;
case '�':
key += "-.-. ";
break;
case '�':
key += "-.-. ";
break;
case '�':
key += "---. ";
break;
case '�':
key += "---. ";
break;
case '�':
key += "--.- ";
break;
case '�':
key += "--.- ";
break;
case '�':
key += "--.-- ";
break;
case '�':
key += "--.-- ";
case '�':
key += "..-- ";
break;
case '�':
key += "..-- ";
break;
case '�':
key += ".-.- ";
break;
case '�':
key += ".-.- ";
break;
case '�':
key += "-..- ";
break;
case '�':
key += "-..- ";
break;
}
}
cout << "�����: " + key << endl; //���i� ����� ������������� �� �����
for (int i = 0; i < key.length(); i++) { //����������� ���� �����
if (key[i] == '.') {
Beep(440, 500);
}
else if (key[i] == '-') {
Beep(440, 1000);
}
}
system("pause");
}

void rozkodyvannya() { //����� ���� ����������� �����
    string temp;
    string word = "";
    cout << "����i�� ����� �� �����: ";
    string key;
    getline(cin, key); //�������� ������
    for (int i = 0; i < key.length(); i++) { //�������������
        if (key[i] == ' ' || i == (key.length() - 1)) {
            if (i == (key.length() - 1) && key[i] != ' ')
                temp += key[i];
            if (temp == ".-")
                word += "�";
            else if (temp == "-...")
                word += "�";
            else if (temp == ".--")
                word += "�";
            else if (temp == "....")
                word += "�";
            else if (temp == "--.")
                word += "�";
            else if (temp == "-..")
                word += "�";
            else if (temp == ".")
                word += "�";
            else if (temp == "..-..")
                word += "�";
            else if (temp == "...-")
                word += "�";
            else if (temp == "--..")
                word += "�";
            else if (temp == "-.--")
                word += "�";
            else if (temp == "..")
                word += "�";
            else if (temp == ".---.")
                word += "�";
            else if (temp == ".---")
                word += "�";
            else if (temp == "-.-")
                word += "�";
            else if (temp == ".-..")
                word += "�";
            else if (temp == "--")
                word += "�";
            else if (temp == "-.")
                word += "�";
            else if (temp == "---")
                word += "�";
            else if (temp == ".--.")
                word += "�";
            else if (temp == ".-.")
                word += "�";
            else if (temp == "...")
                word += "�";
            else if (temp == "-")
                word += "�";
            else if (temp == "..-")
                word += "�";
            else if (temp == "..-.")
                word += "�";
            else if (temp == "----")
                word += "�";
            else if (temp == "-.-.")
                word += "�";
            else if (temp == "---.")
                word += "�";
            else if (temp == "--.-")
                word += "�";
            else if (temp == "--.--")
                word += "�";
            else if (temp == "..--")
                word += "�";
            else if (temp == ".-.-")
                word += "�";
            else if (temp == "-..-")
                word += "�";
            temp = "";
        } else {
            temp += key[i];
        }
    }
    cout << "�����: " << word << endl;
    system("pause");
}
int main()
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
int num;
string error;
do {
cout << "1. ����������" << endl << "2. ����������" << endl << "3. ����������"
<< endl << "4. ���i�" << endl << "����i�� ����� ������: "; //���i� ����
cin >> num; //���i� ��������� ����
getline(cin, error); //����� �����
switch (num) {
case 1:
Kodyvannya(); //���������
break;
case 2:
rozkodyvannya(); //������������
break;
case 3:
cout << "����� 1. ��� �����������, ����� ������� ����� ���������� �����, ��� ���������� �� �������� � �����. \n����� 2. ��� ����������� ����� ������� ���������� 2, ���� ���� ������� ������ ����� �� ��������� ����  �����. \n����� 3. ��� ����� � �������� ������� ���������� 4. " << endl;
break;
case 4:
cout << "���i�" << endl;
break;
default:
cout << "�� ������ �� ���, ����� ������" << endl;
break;
}
} while (num != 4);
}


