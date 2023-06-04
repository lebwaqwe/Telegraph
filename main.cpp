#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
void Kodyvannya() { //Метод який шифруе строку
string word;
string key = "";
cout << "Введiть слово: ";
getline(cin, word); //Введення строки
for (int i = 0; i < word.length(); i++) {
switch (word[i]) 
{ //Шифрування строки
case 'А':
key += ".- ";
break;
case 'а':
key += ".- ";
break;
case 'Б':
key += "-... ";
break;
case 'б':
key += "-... ";
break;
case 'В':
key += ".-- ";
break;
case 'в':
key += ".-- ";
break;
case 'Г':
key += ".... ";
break;
case 'г':
key += ".... ";
break;
case 'Ґ':
key += "--. ";
break;
case 'ґ':
key += "--. ";
break;
case 'Д':
key += "-.. ";
break;
case 'д':
key += "-.. ";
break;
case 'Е':
key += ". ";
break;
case 'е':
key += ". ";
break;
case 'Є':
key += "..-.. ";
break;
case 'є':
key += "..-.. ";
break;
case 'Ж':
key += "...- ";
break;
case 'ж':
key += "...- ";
break;
case 'З':
key += "--.. ";
break;
case 'з':
key += "--.. ";
break;
case 'И':
key += "-.-- ";
break;
case 'и':
key += "-.-- ";
break;
case 'І':
key += ".. ";
break;
case 'і':
key += ".. ";
break;
case 'Ї':
key += ".---. ";
break;
case 'ї':
key += ".---. ";
break;
case 'Й':
key += ".--- ";
break;
case 'й':
key += ".--- ";
break;
case 'К':
key += "-.- ";
break;
case 'к':
key += "-.- ";
break;
case 'Л':
key += ".-.. ";
break;
case 'л':
key += ".-.. ";
break;
case 'М':
key += "-- ";
break;
case 'м':
key += "-- ";
break;
case 'Н':
key += "-. ";
break;
case 'н':
key += "-. ";
break;
case 'О':
key += "--- ";
break;
case 'о':
key += "--- ";
break;
case 'П':
key += ".--. ";
break;
case 'п':
key += ".--. ";
break;
case 'Р':
key += ".-. ";
break;
case 'р':
key += ".-. ";
break;
case 'С':
key += "... ";
break;
case 'с':
key += "... ";
break;
case 'Т':
key += "- ";
break;
case 'т':
key += "- ";
break;
case 'У':
key += "..- ";
break;
case 'у':
key += "..- ";
break;
case 'Ф':
key += "..-. ";
break;
case 'ф':
key += "..-. ";
break;
case 'Х':
key += "---- ";
break;
case 'х':
key += "---- ";
break;
case 'Ц':
key += "-.-. ";
break;
case 'ц':
key += "-.-. ";
break;
case 'Ч':
key += "---. ";
break;
case 'ч':
key += "---. ";
break;
case 'Ш':
key += "--.- ";
break;
case 'ш':
key += "--.- ";
break;
case 'Щ':
key += "--.-- ";
break;
case 'щ':
key += "--.-- ";
case 'Ю':
key += "..-- ";
break;
case 'ю':
key += "..-- ";
break;
case 'Я':
key += ".-.- ";
break;
case 'я':
key += ".-.- ";
break;
case 'Ь':
key += "-..- ";
break;
case 'ь':
key += "-..- ";
break;
}
}
cout << "Морзе: " + key << endl; //Вивiд слова перекладаного на морзе
for (int i = 0; i < key.length(); i++) { //Озвучування коду морзе
if (key[i] == '.') {
Beep(440, 500);
}
else if (key[i] == '-') {
Beep(440, 1000);
}
}
system("pause");
}

void rozkodyvannya() { //Метод який розшифровуе Морзе
    string temp;
    string word = "";
    cout << "Введiть слово на морзе: ";
    string key;
    getline(cin, key); //Введення строки
    for (int i = 0; i < key.length(); i++) { //Розшифрування
        if (key[i] == ' ' || i == (key.length() - 1)) {
            if (i == (key.length() - 1) && key[i] != ' ')
                temp += key[i];
            if (temp == ".-")
                word += "А";
            else if (temp == "-...")
                word += "Б";
            else if (temp == ".--")
                word += "В";
            else if (temp == "....")
                word += "Г";
            else if (temp == "--.")
                word += "Ґ";
            else if (temp == "-..")
                word += "Д";
            else if (temp == ".")
                word += "Е";
            else if (temp == "..-..")
                word += "Є";
            else if (temp == "...-")
                word += "Ж";
            else if (temp == "--..")
                word += "З";
            else if (temp == "-.--")
                word += "И";
            else if (temp == "..")
                word += "І";
            else if (temp == ".---.")
                word += "Ї";
            else if (temp == ".---")
                word += "Й";
            else if (temp == "-.-")
                word += "К";
            else if (temp == ".-..")
                word += "Л";
            else if (temp == "--")
                word += "М";
            else if (temp == "-.")
                word += "Н";
            else if (temp == "---")
                word += "О";
            else if (temp == ".--.")
                word += "П";
            else if (temp == ".-.")
                word += "Р";
            else if (temp == "...")
                word += "С";
            else if (temp == "-")
                word += "Т";
            else if (temp == "..-")
                word += "У";
            else if (temp == "..-.")
                word += "Ф";
            else if (temp == "----")
                word += "Х";
            else if (temp == "-.-.")
                word += "Ц";
            else if (temp == "---.")
                word += "Ч";
            else if (temp == "--.-")
                word += "Ш";
            else if (temp == "--.--")
                word += "Щ";
            else if (temp == "..--")
                word += "Ю";
            else if (temp == ".-.-")
                word += "Я";
            else if (temp == "-..-")
                word += "Ь";
            temp = "";
        } else {
            temp += key[i];
        }
    }
    cout << "Слово: " << word << endl;
    system("pause");
}
int main()
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
int num;
string error;
do {
cout << "1. Закодувати" << endl << "2. Декодувати" << endl << "3. Інструкція"
<< endl << "4. Вихiд" << endl << "Введiть номер пункту: "; //Вивiд меню
cin >> num; //Вибiр параметру меню
getline(cin, error); //Запис рядка
switch (num) {
case 1:
Kodyvannya(); //Кодування
break;
case 2:
rozkodyvannya(); //Розкодування
break;
case 3:
cout << "Пункт 1. Для закодування, треба вводити слова українською мовою, щоб закодувати їх відповідно у морзе. \nПункт 2. Щоб розкодувати слово потрібно натиснусти 2, після чого потрібно ввести слово за допомогою коду  Морзе. \nПункт 3. Щоб вийти з програми потрібно натиснусти 4. " << endl;
break;
case 4:
cout << "Вихiд" << endl;
break;
default:
cout << "Ви обрали не той, номер пункту" << endl;
break;
}
} while (num != 4);
}


