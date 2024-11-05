//#include <iostream>
//using namespace std;
//int main() {
//	int* pInt = new int;
//	*pInt = 9;
//	cout << "The value at pInt:" << *pInt << endl;
//	delete pInt;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main() {
//	int SomeVariable = 5;
//	cout << "SomeVariable=" << SomeVariable << "\n";
//	int* pVar = &SomeVariable;
//	*pVar = 9;
//	cout << "SomeVariable:" << *pVar << "\n";
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//	int a;
//	int* b;
//	b = &a;
//	*b = 2;
//	cout << "a=" << a << endl;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "Russian");
//	int a;
//	int& c = a;
//	int* b=&a;
//	c = 7;
//	cout << "Изменненое значение переменной a(ссылка) =" << a << endl;
//	*b = 2;
//	cout << "Изменненое значение переменной а(указатель)=" << a<<endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main() {
//	int* a = new int;
//	*a = 2;
//	cout << "a=" << *a << endl;
//	delete a;
//	*a = 20;
//	cout << "a: " << *a << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int* a = new int;
//	*a = 5;
//	cout << "a=" << *a << endl;
//	delete a;
//	a = NULL; 
//	cout << "a: " << a << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main() {
//	int* b = new int;
//	*b = 10000;
//	cout << "b=" << *b << endl;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int& F38(int& n1, int& n2) {
//    if (n1 > n2)
//        return n1;
//    else return n2;
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    int x = 5, y = 6, z;
//    z = F38(x, y);
//    F38(x, y)++;
//
//
//    cout << "x: " << x << endl;
//    cout << "y: " << y << endl;
//    cout << "z: " << z << endl;
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    int* data = new int[100]; // Выделение памяти для массива из 100 целых чисел
//
//    // Заполнение массива данными
//    for (int i = 0; i < 100; i++) {
//        data[i] = i * 2; // Например, заполняем числами, умноженными на 2
//    }
//
//    cout << "Первый элемент: " << data[0] << endl;
//    cout << "Последний элемент: " << data[99] << endl;
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//	for (int i = 0; i < 10000; i++) {
//		int* b = new int[10000];
//		cout << "b=" << *b << endl;
//	}
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//    while (true) {
//        int* ptr = new int;
//    }
//    return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//string ReplaceChar(string input) {
//    string result;
//    bool CharConstant = false;
//
//    for (char c : input) {
//        if (CharConstant) {
//            if (c == '\'') {
//                CharConstant = false;
//            }
//            else {
//                int decimalCode = static_cast<int>(c);
//                result += to_string(decimalCode);
//            }
//        }
//        else {
//            if (c == '\'') {
//                CharConstant = true;
//            }
//            else {
//                result += c;
//            }
//        }
//    }
//
//    return result;
//}
//
//int main() {
//    string input = "aaa'6'xxx";
//    string output = ReplaceChar(input);
//    cout << output << endl;
//
//    for (char c : output) {
//        if (c >= 32 && c <= 126) {
//            cout << "Character: " << c << ", ASCII code: " << static_cast<int>(c) << endl;
//        }
//    }
//
//    return 0;
//}
//#include <iostream>
//#include <string>
//
//void replaceCharConstants(std::string& input) {
//    std::string result;
//    int i = 0;
//
//    while (i < input.length()) {
//        if (input[i] == '\'') {
//            i++;
//            while (input[i] != '\'' && i < input.length()) {
//                int decimalCode = input[i];
//                result += std::to_string(decimalCode);
//                i++;
//            }
//        }
//        else {
//            result += input[i];
//            i++;
//        }
//    }
//
//    input = result;
//}
//
//int main() {
//
//    std::string input;
//
//    std::cout << "Введите строку с символьными константами: ";
//    std::getline(std::cin, input);
//
//    replaceCharConstants(input);
//
//    std::cout << "Результат замены: " << input << std::endl;
//
//    return 0;
//}


///3

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	int* d = new int;
//	*d = 10;
//	cout << "Значение:" << *d << endl;
//
//	delete d;
//	*d = 15;
//	cout << "Значение:" << *d << endl;
//	return 0;
//}



//3
//#include<iostream>
//using namespace std;
//int main() {
//	int *a = NULL;
//	for (int i = 0; i < 100; i++) {
//		a = new int[100];
//	}
//	delete[]a;
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//string ReplaceConstant(const string& input) {
//    string result;
//    int startIndex = 0;
//    while (startIndex < input.length()) {
//        // здесь ищет место первой одиночной кавычки (обозначает начало символьной константы)
//        size_t quoteStart = input.find_first_of('\'', startIndex);
//
//        if (quoteStart != string::npos) {// если будет текст перед символьной константой и добавляем его к результату
//            result += input.substr(startIndex, quoteStart - startIndex);
//            // находим начало символьной константы и потом находим конец символьной константы
//            size_t quoteEnd = input.find_first_of('\'', quoteStart + 1);
//
//            if (quoteEnd != string::npos) {
//                //убрираем символьную константу
//                string charConstant = input.substr(quoteStart + 1, quoteEnd - quoteStart - 1);
//               //здесь мы преобразуем символьную константу в десятичный код по таблице
//                for (char ch : charConstant) {
//                    result += to_string(static_cast<int>(ch));
//                }
//                startIndex = quoteEnd + 1;
//            }
//            else {// если нет конца символьной константы,то добавляем остаток строки и завершаем цикл
//                cout << "Нет конца символьной константы, результат будет тем же" << endl;
//                result += input.substr(startIndex);
//                break;
//            }
//        }
//        else {
//
//            // если нет одиночной кавычки, то добавляем остаток строки и завершаем цикл
//            //cout << "Если нет одиночной кавычки, то строка не изменится" << endl;
//            result += input.substr(startIndex);
//            break;
//            return 0;
//        }
//    }
//    return result;
//}
//int main() {
//    setlocale(LC_ALL, "");
//    string input;
//    cout << "Введите строчку с символьной константой: " << endl;
//    cout << "(Если нет одиночной кавычки, то строка не изменится)" << endl;
//    getline(cin, input);
//    string output = ReplaceConstant(input);
//    cout << "Результат замены символьной константы на десятичный код: " << output << endl;
//    return 0;
//}