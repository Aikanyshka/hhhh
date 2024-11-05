//#include<iostream>
//using namespace std;
//
//const int maxn = 100;
//
//void initialize(int list[], int& last) {
//    for (int i = 0; i <= last; i++) {
//        list[i] = i;
//    }
//}
//
//void deletePosition(int list[], int& last, int position) {
//    if (position < 0 || position > last) {
//        cout << "Неправильная позиция" << endl;
//        return;
//    }
//
//    for (int i = position; i < last; i++) {
//        list[i] = list[i + 1];
//    }
//    last--;
//}
//
//void insertPosition(int list[], int& last, int position, int value) {
//    if (position < 0 || position > last) {
//        cout << "Неправильная позиция" << endl;
//        return;
//    }
//    else
//    for (int i = last + 1; i > position; i--) {
//        list[i] = list[i - 1];
//    }
//    list[position] = value;
//    last++;
//}
//void insertValue(int list[], int& last, int value) {
//    if (last < maxn - 1) {
//        last++;
//        list[last] = value;
//    }
//    else {
//        cout << "Ошибка: Нельзя добавить новый элемент." << endl;
//    }
//}
//
//void printList(const int list[], int last) {
//    for (int i = 0; i <= last; i++) {
//        cout << list[i] << " ";
//    }
//    cout << endl;
//}
//
//void deleteValue(int list[], int& last, int value) {
//    int position = -1;
//
//    for (int i = 0; i <= last; i++) {
//        if (list[i] == value) {
//            position = i;
//            break;
//        }
//    }
//
//    if (position != -1) {
//        deletePosition(list, last, position);
//    }
//    else {
//        cout << "Ошибка: Значения нет в списке." << endl;
//    }
//}
//
//int findElementPosition(const int list[], int last, int position) {
//    if (position < 0 || position > last) {
//        cout << "Неправильная позиция" << endl;
//        return -1;
//    }
//
//    return list[position];
//}
//
//int findPositionValue(const int list[], int last, int value) {
//    for (int i = 0; i <= last; i++) {
//        if (list[i] == value) {
//            return i;
//        }
//    }
//    return -1; 
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//
//    int list1[maxn];
//    int last = -1;
//    cout << "Введите количество элементов списка: " << endl;
//    cin >> last;
//
//    if (last < 0 || last >= maxn) {
//        cout << "Ошибка: Невозможное количество элементов." << endl;
//        return 1;
//    }
//    initialize(list1, last);
//    cout << "Введите элементы списка: " << endl;
//    for (int i = 0; i <=last; i++) {
//        cin >> list1[i];
//    }
//    int p1;
//    cout << "Удаление по позиции: " << endl;
//    cin >> p1;
//    deletePosition(list1, last, p1);
//    int v1;
//    cout << "Удаление по значению: " << endl;
//    cin >> v1;
//    deleteValue(list1, last, v1);
//    int p2, v2;
//    cout << "Введите позицию и значение для добавления: " << endl;
//    cout << "Позиция для добавления элемента" << endl;
//    cin >> p2;
//    cout << "Значение добавленного элемента" << endl;
//    cin >> v2;
//    insertPosition(list1, last, p2, v2);
//    cout << "Значение добавленного элемента" << endl;
//    cin >> p2;
//    insertValue(list1, last, p2);
//    cout << "Список после удаления и добавления: ";
//    printList(list1, last);
//    int searchPosition;
//    cout << "Поиск по позиции: " << endl;
//    cin >> searchPosition;
//int foundElement = findElementPosition(list1, last, searchPosition);
//    if (foundElement != -1) {
//        cout << "Элемент на позиции " << searchPosition << " равен " << foundElement << endl;
//    }
//    else {
//        cout << "Ошибка: Неправильная позиция для поиска." << endl;
//    }
//    int searchValue;
//    cout << "Поиск по значению: " << endl;
//    cin >> searchValue;
//    int foundPosition = findPositionValue(list1, last, searchValue);
//    if (foundPosition != -1) {
//        cout << "Позиция элемента со значением " << searchValue << " равна " << foundPosition << endl;
//    }
//    else {
//        cout << "Ошибка: Значение не найдено в списке." << endl;
//    }
//    system("pause");
//    return 0;
//}
// 
// 
// 
//#include <iostream>
//using namespace std;
//
//const int maxn = 100;
//
//struct ListItem {
//    int data;
//};
//
//void initializeEmpty(int& last) {
//    last = -1; // Устанавливаем last в -1, чтобы список был пустым
//}
//
//void initializeList(ListItem list[], int& last, int elements[]) {
//initialize:
//    cout << "Введите количество элементов списка: " << endl;
//    cin >> last;
//
//    if (last < 0 || last >= maxn) {
//        cout << "Ошибка: Невозможное количество элементов." << endl;
//        goto initialize;
//        return ;
//    }
//
//    for (int i = 0; i <= last; i++) {
//        list[i].data = elements[i];
//    }
//}
//
//void deletePosition(ListItem list[], int& last, int position) {
//    if (position < 0 || position > last) {
//        cout << "Неправильная позиция" << endl;
//        return;
//    }
//
//    for (int i = position; i < last; i++) {
//        list[i] = list[i + 1];
//    }
//    last--;
//}
//
//void insertPosition(ListItem list[], int& last, int position, int value) {
//    if (position < 0 || position > last) {
//        cout << "Неправильная позиция" << endl;
//        return;
//    }
//    else {
//        for (int i = last + 1; i > position; i--) {
//            list[i] = list[i - 1];
//        }
//        list[position].data = value;
//        last++;
//    }
//}
//
//void insertValue(ListItem list[], int& last, int value) {
//    if (last < maxn - 1) {
//        last++;
//        list[last].data = value;
//    }
//    else {
//        cout << "Ошибка: Нельзя добавить новый элемент." << endl;
//    }
//}
//
//void printList(const ListItem list[], int last) {
//    for (int i = 0; i <= last; i++) {
//        cout << list[i].data << " ";
//    }
//    cout << endl;
//}
//
//void deleteValue(ListItem list[], int& last, int value) {
//    int position = -1;
//
//    for (int i = 0; i <= last; i++) {
//        if (list[i].data == value) {
//            position = i;
//            break;
//        }
//    }
//
//    if (position != -1) {
//        deletePosition(list, last, position);
//    }
//    else {
//        cout << "Ошибка: Значения нет в списке." << endl;
//    }
//}
//
//int findElementPosition(const ListItem list[], int last, int position) {
//    if (position < 0 || position > last) {
//        cout << "Неправильная позиция" << endl;
//        return -1;
//    }
//
//    return list[position].data;
//}
//
//int findPositionValue(const ListItem list[], int last, int value) {
//    for (int i = 0; i <= last; i++) {
//        if (list[i].data == value) {
//            return i;
//        }
//    }
//    return -1;
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//
//    ListItem list1[maxn];
//    int last; 
//    int elements[maxn]; 
//    initializeEmpty(last);
//    cout << "Введите элементы списка: " << endl;
//    for (int i = 0; i <= last; i++) {
//        cin >> elements[i];
//    }
//    initializeList(list1, last, elements);
//    int choice;
//    do {
//        cout << "Меню операций:" << endl;
//        cout << "1. Вставить значение" << endl;
//        cout << "2. Вставить позицию" << endl;
//        cout << "3. Удалить значение" << endl;
//        cout << "4. Удалить позицию" << endl;
//        cout << "5. Найти значение" << endl;
//        cout << "6. Найти позицию" << endl;
//        cout << "0. Выход" << endl;
//        cout << "Выберите операцию: ";
//        cin >> choice;
//        case 1: {
//            insertPosition(list1, last, p2, v2);
//            cout << "Значение добавленного элемента" << endl;
//            cin >> p2;
//            insertValue(list1, last, p2);
//            cout << "Список после удаления и добавления: ";
//            printList(list1, last);
//            break;
//        }
//        case 2: {
//            int p2, v2;
//            cout << "Введите позицию и значение для добавления: " << endl;
//            cout << "Позиция для добавления элемента" << endl;
//            cin >> p2;
//            cout << "Значение добавленного элемента" << endl;
//            cin >> v2;
//            insertPosition(list1, last, p2, v2);
//            cout << "Значение добавленного элемента" << endl;
//            cin >> p2;
//            break;
//        }
//        case 3: {
//            int v1;
//            cout << "Удаление по значению: " << endl;
//            cin >> v1;
//            deleteValue(list1, last, v1);
//            break;
//        }
//        case 4: {
//            int p1;
//            cout << "Удаление по позиции: " << endl;
//            cin >> p1;
//            deletePosition(list1, last, p1);
//            break;
//        }
//        case 5: {
//            int searchValue;
//            cout << "Поиск по значению: " << endl;
//            cin >> searchValue;
//            int foundPosition = findPositionValue(list1, last, searchValue);
//            if (foundPosition != -1) {
//                cout << "Позиция элемента со значением " << searchValue << " равна " << foundPosition << endl;
//            }
//            else {
//                cout << "Ошибка: Значение не найдено в списке." << endl;
//            }
//            break;
//        }
//        case 6: {
//            int searchPosition;
//            cout << "Поиск по позиции: " << endl;
//            cin >> searchPosition;
//            int foundElement = findElementPosition(list1, last, searchPosition);
//            if (foundElement != -1) {
//                cout << "Элемент на позиции " << searchPosition << " равен " << foundElement << endl;
//            }
//            else {
//                cout << "Ошибка: Неправильная позиция для поиска." << endl;
//            }
//            break;
//        }
//        case 0:{
//            break; // Выход
//        default:
//            cout << "Ошибка: Неправильный выбор операции." << endl;
//        }
//    } while (choice != 0);
//    system("pause");
//    return 0;
//}
//#include <iostream>
//using namespace std;
//const int maxn = 100;
//struct ListItem {
//    int data;
//};
//
//void initialize(int& last) {
//    last = -1;
//}
//
//void initializeList(ListItem list[], int& last, int elements[]) {
//    cout << "Введите количество элементов списка: " << endl;
//    cin >> last;
//
//    if (last < 0 || last >= maxn) {
//        cout << "Ошибка: Невозможное количество элементов." << endl;
//        return;
//    }
//
//    for (int i = 0; i <= last; i++) {
//        list[i].data = elements[i];
//    }
//}
//
//void deletePosition(ListItem list[], int& last, int position) {
//    if (position < 0 || position > last) {
//        cout << "Неправильная позиция" << endl;
//        return;
//    }
//
//    for (int i = position; i < last; i++) {
//        list[i] = list[i + 1];
//    }
//    last--;
//}
//
//void insertPosition(ListItem list[], int& last, int position, int value) {
//    if (position < 0 || position > last) {
//        cout << "Неправильная позиция" << endl;
//        return;
//    }
//    else {
//        for (int i = last + 1; i > position; i--) {
//            list[i] = list[i - 1];
//        }
//        list[position].data = value;
//        last++;
//    }
//}
//
//void insertValue(ListItem list[], int& last, int value, int position) {
//    /* if (last < maxn - 1) {
//
//         last++;
//         list[last].data = value;
//     }
//     else {
//         cout << "Ошибка: Нельзя добавить новый элемент." << endl;
//     }*/
//    if (position < 0 || position > last + 1) {
//        cout << "Ошибка" << endl;
//    }
//    else {
//        if (last < maxn - 1) {
//            last++;
//            for (int i = last; i > position; i--) {
//                list[i] = list[i - 1];
//            }
//            list[position].data = value;
//        }
//    }
//}
//
//void printList(const ListItem list[], int last) {
//    for (int i = 0; i <= last; i++) {
//        cout << list[i].data << " "<<endl;
//    }
//}
//
//void deleteValue(ListItem list[], int& last, int value) {
//    int position = -1;
//
//    for (int i = 0; i <= last; i++) {
//        if (list[i].data == value) {
//            position = i;
//            break;
//        }
//    }
//
//    if (position != -1) {
//        deletePosition(list, last, position);
//    }
//    else {
//        cout << "Ошибка: Значения нет в списке." << endl;
//    }
//}
//
//int findElementPosition(const ListItem list[], int last, int position) {
//    if (position < 0 || position > last) {
//        cout << "Неправильная позиция" << endl;
//        return -1;
//    }
//    for (int i = 0; i <= last; i++)
//        if (position !=list[i].data) {
//            cout << "Элемент №  " << i << " не подходит" << endl;
//        }
//
//
//    return list[position].data;
//}
//
//int findPositionValue(const ListItem list[], int last, int value) {
//    for (int i = 0; i <= last; i++) {
//        if (list[i].data == value) {
//            return i;
//        }
//    }
//    return -1;
//}
//void deleteList(ListItem list[], int& last) {
//    last = -1;
//    cout << "Список очищен" << endl;
//}
//void InsertPosleZnacheniya(ListItem list[], int& last, int value, int value2) {
//    int position = -1;
//    for (int i = 0; i <= last; i++) {
//        if (list[i].data == value) {
//            position = i;
//            break;
//        }
//    }
//
//    if (position != -1) {
//        for (int i = last + 1; i > position + 1; i--) {
//            list[i] = list[i - 1];
//        }
//        list[position + 1].data = value2;
//        last++;
//    }
//    else {
//        cout << "Ошибка: Значение для вставки не найдено в списке." << endl;
//    }
//}
//void InsertPeredZnacheniyem(ListItem list[],int&last,int value,int value2) {
//        for (int i = 0; i <= last; i++) {
//        if (list[i].data == value) {
//            for (int j = last + 1; j > i; j--) {
//                list[j] = list[j - 1];
//            }
//            list[i].data = value2;
//            last++;
//            return;
//        }
//    }
//
//    cout << "Ошибка: Значение " << value << " не найдено в списке." << endl;
//}
//void deletePosleZnacheniya(ListItem list[], int& last, int value) {
//    for (int i = 0; i < last; i++) {
//        if (list[i].data == value) {
//            if (i < last - 1) {
//                for (int j = i + 2; j <= last; j++) {
//                    list[j - 1] = list[j];
//                }
//                last--;
//                return;
//            }
//        }
//        cout << "Ошибка: Значение " << value << " не найдено в списке или является последним элементом" << endl;
//    }
//}
//void deletePeredZnacheniyem(ListItem list[],int& last,int value) {
//        for (int i = 1; i <= last; i++) {
//            if (list[i].data == value) {
//                for (int j = i - 1; j < last; j++) {
//                    list[j] = list[j + 1];
//                }
//                last--;
//                return;
//            }
//        }
//
//        cout << "Ошибка: Значение " << value << " не найдено в списке или является первым элементом." << endl;
//    }
//int findMin(const ListItem list[], int last) {
//    if (last < 0) {
//        cout << "Ошибка: Список пуст." << endl;
//        return -1;
//    }
//
//    int minPosition = 0;
//    int minValue = list[0].data;
//
//    for (int i = 1; i <= last; i++) {
//        if (list[i].data < minValue) {
//            minValue = list[i].data;
//            minPosition = i;
//        }
//    }
//
//    return minPosition;
//}
//void sortVozvrast(ListItem list[], int last) {
//    for (int i = 0; i < last; i++) {
//        for (int j = 0; j < last - i; j++) {
//            if (list[j].data > list[j + 1].data) {
//                int temp = list[j].data;
//                list[j].data = list[j + 1].data;
//                list[j + 1].data = temp;
//            }
//        }
//    }
//}
//void sortUbyvaniyu(ListItem list[], int last) {
//    for (int i = 0; i < last; i++) {
//        for (int j = 0; j < last - i; j++) {
//            if (list[j].data < list[j + 1].data) {
//                int temp = list[j].data;
//                list[j].data = list[j + 1].data;
//                list[j + 1].data = temp;
//            }
//        }
//    }
//}
//int main() {
//    setlocale(LC_ALL, "");
//
//    ListItem list1[maxn];
//    int last;
//    int elements[maxn];
//    int choice;
//    cout << "Введите количество элементов списка: " << endl;
//    cin >> last;
//
//    if (last < 0 || last >= maxn) {
//        cout << "Ошибка: Невозможное количество элементов." << endl;
//  
//    }
//
//    for (int i = 0; i <= last; i++) {
//        cout << "Введите элемент " << i << ": ";
//        cin >> elements[i];
//        list1[i].data = elements[i];
//    }
//    do {
//        cout << "Меню операций:" << endl;
//        cout << "Операция №1-Вставить элемент по позиции" << endl;
//        cout << "Операция №2-Вставить элемент по значению" << endl;
//        cout << "Операция №3-Удалить элемент по позиции" << endl;
//        cout << "Операция №4-Удалить элемент по значению" << endl;
//        cout << "Операция №5-Поиск элемента по его позиции" << endl;
//        cout << "Операция №6-Поиск элемента по его значению" << endl;
//        cout << "Операция №7-Очистка списка" << endl;
//        cout << "Операция №8-Добавление нового элемента после заданного значения" << endl;
//        cout << "Операция №9-Добавление нового элемента перед заданным элементом" << endl;
//        cout << "Операция №10-Удаление элемента после заданного элемента" << endl;
//        cout << "Операция №11-Удаление элемента перед заданным элементом" << endl;
//        cout << "Операция №12-Нахождение позиции минимального элемента списка" << endl;
//        cout << "Операция №13-Упорядочивание списка по возврастанию" << endl;
//        cout << "Операция №14-Упорядочивание списка по убыванию" << endl;
//
//        cout << "Выберите операцию: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            int position, value;
//            cout << "Введите позицию и значение для вставки: ";
//            cin >> position >> value;
//            insertPosition(list1, last, position, value);
//            cout << "Список: "<<endl;
//            printList(list1, last);
//            break;
//        }
//        case 2: {
//            int value, position;
//            cout << "Введите значение добавления: ";
//            cin >> value>>position;
//           insertValue(list1, last, value, position);
//            cout << "Список: " << endl;
//            printList(list1, last);
//            break;
//        }
//        case 3: {
//            int position;
//            cout << "Введите позицию для удаления: ";
//            cin >> position;
//            deletePosition(list1, last, position);
//            cout << "Список: " << endl;
//            printList(list1, last);
//            break;
//        }
//        case 4: {
//            int value;
//            cout << "Введите значение для удаления: ";
//            cin >> value;
//            deleteValue(list1, last, value);
//            cout << "Список: " << endl;
//            printList(list1, last);
//            break;
//        }
//        case 5: {
//            int position;
//            cout << "Введите позицию для поиска элемена: ";
//            cin >> position;
//            int foundValue = findElementPosition(list1, last, position);
//            if (foundValue != -1) {
//                cout << "Элемент на позиции " << position << " равен " << foundValue << endl;
//            }
//            else {
//                cout << "Ошибка: Неправильная позиция для поиска." << endl;
//            }
//            cout << "Список: " << endl;
//            printList(list1, last);
//            break;
//        }
//        case 6: {
//            int value;
//            cout << "Введите значение для поиска элемента: ";
//            cin >> value;
//            int foundPosition = findPositionValue(list1, last, value);
//            if (foundPosition != -1) {
//                cout << "Позиция элемента со значением " << value << " равна " << foundPosition << endl;
//            }
//            else {
//                cout << "Ошибка: Значение не найдено в списке." << endl;
//            }
//            cout << "Список: " << endl;
//            printList(list1, last);
//            break;
//        }
//              break;
//
//        case 7: {
//            deleteList(list1, last);
//            break;
//
//        default:
//            cout << "Ошибка: Неправильный выбор операции." << endl;
//        }
//        case 8: {
//            int value;
//            cout << "Введите значения для добавления нового элемента(после):" << endl;
//            cin >> value;
//            int value2;
//            cout << "Элемент добавления:" << endl;
//            cin >> value2;
//            InsertPosleZnacheniya(list1, last, value, value2);
//            cout << "Список: " << endl;
//            printList(list1, last);
//            break;
//        }
//        case 9: {
//            int value;
//            cout << "Введите значения для добавления нового элемента(перед):" << endl;
//            cin >> value;
//            int value2;
//            cout << "Элемент добавления:" << endl;
//            cin >> value2;
//            InsertPeredZnacheniyem(list1, last, value, value2);
//            cout << "Список: " << endl;
//            printList(list1, last);
//            break;
//        }
//        case 10: {
//            int value;
//            cout << "Введите значение, после которого нужно удалить элемент: ";
//            cin >> value;
//            deletePosleZnacheniya(list1, last, value);
//            cout << "Список: " << endl;
//            printList(list1, last);
//            break;
//        }
//        case 11: {
//            int value;
//            cout << "Введите значение, перед которым нужно удалить элемент: ";
//            cin >> value;
//            deletePeredZnacheniyem(list1, last, value);
//            cout << "Список: " << endl;
//            printList(list1, last);
//            break;
//         
//
//        }
//        case 12: {
//            int minPosition = findMin(list1, last);
//            if (minPosition != -1) {
//                cout << "Позиция минимального элемента: " << minPosition << endl;
//            }
//            cout << "Список: " << endl;
//            printList(list1, last);
//            break;
//
//        }
//        case 13: {
//            sortVozvrast(list1, last);
//            cout << "Список отсортирован по возрастанию" << endl;
//            cout << "Список: " << endl;
//            printList(list1, last);
//            break;
//                }
//        case 14: {
//            sortUbyvaniyu(list1, last);
//            cout << "Список отсортирован по убыванию" << endl;
//            cout << "Список: " << endl;
//            printList(list1, last);
//            break;
//        }
//        }
//    } while (choice != 0);
//        return 0;
//}

