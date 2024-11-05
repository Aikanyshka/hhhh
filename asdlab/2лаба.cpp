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
//        cout << "������������ �������" << endl;
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
//        cout << "������������ �������" << endl;
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
//        cout << "������: ������ �������� ����� �������." << endl;
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
//        cout << "������: �������� ��� � ������." << endl;
//    }
//}
//
//int findElementPosition(const int list[], int last, int position) {
//    if (position < 0 || position > last) {
//        cout << "������������ �������" << endl;
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
//    cout << "������� ���������� ��������� ������: " << endl;
//    cin >> last;
//
//    if (last < 0 || last >= maxn) {
//        cout << "������: ����������� ���������� ���������." << endl;
//        return 1;
//    }
//    initialize(list1, last);
//    cout << "������� �������� ������: " << endl;
//    for (int i = 0; i <=last; i++) {
//        cin >> list1[i];
//    }
//    int p1;
//    cout << "�������� �� �������: " << endl;
//    cin >> p1;
//    deletePosition(list1, last, p1);
//    int v1;
//    cout << "�������� �� ��������: " << endl;
//    cin >> v1;
//    deleteValue(list1, last, v1);
//    int p2, v2;
//    cout << "������� ������� � �������� ��� ����������: " << endl;
//    cout << "������� ��� ���������� ��������" << endl;
//    cin >> p2;
//    cout << "�������� ������������ ��������" << endl;
//    cin >> v2;
//    insertPosition(list1, last, p2, v2);
//    cout << "�������� ������������ ��������" << endl;
//    cin >> p2;
//    insertValue(list1, last, p2);
//    cout << "������ ����� �������� � ����������: ";
//    printList(list1, last);
//    int searchPosition;
//    cout << "����� �� �������: " << endl;
//    cin >> searchPosition;
//int foundElement = findElementPosition(list1, last, searchPosition);
//    if (foundElement != -1) {
//        cout << "������� �� ������� " << searchPosition << " ����� " << foundElement << endl;
//    }
//    else {
//        cout << "������: ������������ ������� ��� ������." << endl;
//    }
//    int searchValue;
//    cout << "����� �� ��������: " << endl;
//    cin >> searchValue;
//    int foundPosition = findPositionValue(list1, last, searchValue);
//    if (foundPosition != -1) {
//        cout << "������� �������� �� ��������� " << searchValue << " ����� " << foundPosition << endl;
//    }
//    else {
//        cout << "������: �������� �� ������� � ������." << endl;
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
//    last = -1; // ������������� last � -1, ����� ������ ��� ������
//}
//
//void initializeList(ListItem list[], int& last, int elements[]) {
//initialize:
//    cout << "������� ���������� ��������� ������: " << endl;
//    cin >> last;
//
//    if (last < 0 || last >= maxn) {
//        cout << "������: ����������� ���������� ���������." << endl;
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
//        cout << "������������ �������" << endl;
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
//        cout << "������������ �������" << endl;
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
//        cout << "������: ������ �������� ����� �������." << endl;
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
//        cout << "������: �������� ��� � ������." << endl;
//    }
//}
//
//int findElementPosition(const ListItem list[], int last, int position) {
//    if (position < 0 || position > last) {
//        cout << "������������ �������" << endl;
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
//    cout << "������� �������� ������: " << endl;
//    for (int i = 0; i <= last; i++) {
//        cin >> elements[i];
//    }
//    initializeList(list1, last, elements);
//    int choice;
//    do {
//        cout << "���� ��������:" << endl;
//        cout << "1. �������� ��������" << endl;
//        cout << "2. �������� �������" << endl;
//        cout << "3. ������� ��������" << endl;
//        cout << "4. ������� �������" << endl;
//        cout << "5. ����� ��������" << endl;
//        cout << "6. ����� �������" << endl;
//        cout << "0. �����" << endl;
//        cout << "�������� ��������: ";
//        cin >> choice;
//        case 1: {
//            insertPosition(list1, last, p2, v2);
//            cout << "�������� ������������ ��������" << endl;
//            cin >> p2;
//            insertValue(list1, last, p2);
//            cout << "������ ����� �������� � ����������: ";
//            printList(list1, last);
//            break;
//        }
//        case 2: {
//            int p2, v2;
//            cout << "������� ������� � �������� ��� ����������: " << endl;
//            cout << "������� ��� ���������� ��������" << endl;
//            cin >> p2;
//            cout << "�������� ������������ ��������" << endl;
//            cin >> v2;
//            insertPosition(list1, last, p2, v2);
//            cout << "�������� ������������ ��������" << endl;
//            cin >> p2;
//            break;
//        }
//        case 3: {
//            int v1;
//            cout << "�������� �� ��������: " << endl;
//            cin >> v1;
//            deleteValue(list1, last, v1);
//            break;
//        }
//        case 4: {
//            int p1;
//            cout << "�������� �� �������: " << endl;
//            cin >> p1;
//            deletePosition(list1, last, p1);
//            break;
//        }
//        case 5: {
//            int searchValue;
//            cout << "����� �� ��������: " << endl;
//            cin >> searchValue;
//            int foundPosition = findPositionValue(list1, last, searchValue);
//            if (foundPosition != -1) {
//                cout << "������� �������� �� ��������� " << searchValue << " ����� " << foundPosition << endl;
//            }
//            else {
//                cout << "������: �������� �� ������� � ������." << endl;
//            }
//            break;
//        }
//        case 6: {
//            int searchPosition;
//            cout << "����� �� �������: " << endl;
//            cin >> searchPosition;
//            int foundElement = findElementPosition(list1, last, searchPosition);
//            if (foundElement != -1) {
//                cout << "������� �� ������� " << searchPosition << " ����� " << foundElement << endl;
//            }
//            else {
//                cout << "������: ������������ ������� ��� ������." << endl;
//            }
//            break;
//        }
//        case 0:{
//            break; // �����
//        default:
//            cout << "������: ������������ ����� ��������." << endl;
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
//    cout << "������� ���������� ��������� ������: " << endl;
//    cin >> last;
//
//    if (last < 0 || last >= maxn) {
//        cout << "������: ����������� ���������� ���������." << endl;
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
//        cout << "������������ �������" << endl;
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
//        cout << "������������ �������" << endl;
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
//         cout << "������: ������ �������� ����� �������." << endl;
//     }*/
//    if (position < 0 || position > last + 1) {
//        cout << "������" << endl;
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
//        cout << "������: �������� ��� � ������." << endl;
//    }
//}
//
//int findElementPosition(const ListItem list[], int last, int position) {
//    if (position < 0 || position > last) {
//        cout << "������������ �������" << endl;
//        return -1;
//    }
//    for (int i = 0; i <= last; i++)
//        if (position !=list[i].data) {
//            cout << "������� �  " << i << " �� ��������" << endl;
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
//    cout << "������ ������" << endl;
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
//        cout << "������: �������� ��� ������� �� ������� � ������." << endl;
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
//    cout << "������: �������� " << value << " �� ������� � ������." << endl;
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
//        cout << "������: �������� " << value << " �� ������� � ������ ��� �������� ��������� ���������" << endl;
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
//        cout << "������: �������� " << value << " �� ������� � ������ ��� �������� ������ ���������." << endl;
//    }
//int findMin(const ListItem list[], int last) {
//    if (last < 0) {
//        cout << "������: ������ ����." << endl;
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
//    cout << "������� ���������� ��������� ������: " << endl;
//    cin >> last;
//
//    if (last < 0 || last >= maxn) {
//        cout << "������: ����������� ���������� ���������." << endl;
//  
//    }
//
//    for (int i = 0; i <= last; i++) {
//        cout << "������� ������� " << i << ": ";
//        cin >> elements[i];
//        list1[i].data = elements[i];
//    }
//    do {
//        cout << "���� ��������:" << endl;
//        cout << "�������� �1-�������� ������� �� �������" << endl;
//        cout << "�������� �2-�������� ������� �� ��������" << endl;
//        cout << "�������� �3-������� ������� �� �������" << endl;
//        cout << "�������� �4-������� ������� �� ��������" << endl;
//        cout << "�������� �5-����� �������� �� ��� �������" << endl;
//        cout << "�������� �6-����� �������� �� ��� ��������" << endl;
//        cout << "�������� �7-������� ������" << endl;
//        cout << "�������� �8-���������� ������ �������� ����� ��������� ��������" << endl;
//        cout << "�������� �9-���������� ������ �������� ����� �������� ���������" << endl;
//        cout << "�������� �10-�������� �������� ����� ��������� ��������" << endl;
//        cout << "�������� �11-�������� �������� ����� �������� ���������" << endl;
//        cout << "�������� �12-���������� ������� ������������ �������� ������" << endl;
//        cout << "�������� �13-�������������� ������ �� ������������" << endl;
//        cout << "�������� �14-�������������� ������ �� ��������" << endl;
//
//        cout << "�������� ��������: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            int position, value;
//            cout << "������� ������� � �������� ��� �������: ";
//            cin >> position >> value;
//            insertPosition(list1, last, position, value);
//            cout << "������: "<<endl;
//            printList(list1, last);
//            break;
//        }
//        case 2: {
//            int value, position;
//            cout << "������� �������� ����������: ";
//            cin >> value>>position;
//           insertValue(list1, last, value, position);
//            cout << "������: " << endl;
//            printList(list1, last);
//            break;
//        }
//        case 3: {
//            int position;
//            cout << "������� ������� ��� ��������: ";
//            cin >> position;
//            deletePosition(list1, last, position);
//            cout << "������: " << endl;
//            printList(list1, last);
//            break;
//        }
//        case 4: {
//            int value;
//            cout << "������� �������� ��� ��������: ";
//            cin >> value;
//            deleteValue(list1, last, value);
//            cout << "������: " << endl;
//            printList(list1, last);
//            break;
//        }
//        case 5: {
//            int position;
//            cout << "������� ������� ��� ������ �������: ";
//            cin >> position;
//            int foundValue = findElementPosition(list1, last, position);
//            if (foundValue != -1) {
//                cout << "������� �� ������� " << position << " ����� " << foundValue << endl;
//            }
//            else {
//                cout << "������: ������������ ������� ��� ������." << endl;
//            }
//            cout << "������: " << endl;
//            printList(list1, last);
//            break;
//        }
//        case 6: {
//            int value;
//            cout << "������� �������� ��� ������ ��������: ";
//            cin >> value;
//            int foundPosition = findPositionValue(list1, last, value);
//            if (foundPosition != -1) {
//                cout << "������� �������� �� ��������� " << value << " ����� " << foundPosition << endl;
//            }
//            else {
//                cout << "������: �������� �� ������� � ������." << endl;
//            }
//            cout << "������: " << endl;
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
//            cout << "������: ������������ ����� ��������." << endl;
//        }
//        case 8: {
//            int value;
//            cout << "������� �������� ��� ���������� ������ ��������(�����):" << endl;
//            cin >> value;
//            int value2;
//            cout << "������� ����������:" << endl;
//            cin >> value2;
//            InsertPosleZnacheniya(list1, last, value, value2);
//            cout << "������: " << endl;
//            printList(list1, last);
//            break;
//        }
//        case 9: {
//            int value;
//            cout << "������� �������� ��� ���������� ������ ��������(�����):" << endl;
//            cin >> value;
//            int value2;
//            cout << "������� ����������:" << endl;
//            cin >> value2;
//            InsertPeredZnacheniyem(list1, last, value, value2);
//            cout << "������: " << endl;
//            printList(list1, last);
//            break;
//        }
//        case 10: {
//            int value;
//            cout << "������� ��������, ����� �������� ����� ������� �������: ";
//            cin >> value;
//            deletePosleZnacheniya(list1, last, value);
//            cout << "������: " << endl;
//            printList(list1, last);
//            break;
//        }
//        case 11: {
//            int value;
//            cout << "������� ��������, ����� ������� ����� ������� �������: ";
//            cin >> value;
//            deletePeredZnacheniyem(list1, last, value);
//            cout << "������: " << endl;
//            printList(list1, last);
//            break;
//         
//
//        }
//        case 12: {
//            int minPosition = findMin(list1, last);
//            if (minPosition != -1) {
//                cout << "������� ������������ ��������: " << minPosition << endl;
//            }
//            cout << "������: " << endl;
//            printList(list1, last);
//            break;
//
//        }
//        case 13: {
//            sortVozvrast(list1, last);
//            cout << "������ ������������ �� �����������" << endl;
//            cout << "������: " << endl;
//            printList(list1, last);
//            break;
//                }
//        case 14: {
//            sortUbyvaniyu(list1, last);
//            cout << "������ ������������ �� ��������" << endl;
//            cout << "������: " << endl;
//            printList(list1, last);
//            break;
//        }
//        }
//    } while (choice != 0);
//        return 0;
//}

