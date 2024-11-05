////������������ ������
//#include <iostream>
//#include <stack>
//#include <set>
//#include <vector>
//using namespace std;
//
//using IntPair = pair<int, int>;
//bool pushNovoeZnach(stack<IntPair>& s, set<int>& keys, int key, int value) {
//    if (keys.find(key) == keys.end()) {
//        s.push(make_pair(key, value));
//        keys.insert(key);
//        return true;
//    }
//    else {
//        cout << "���� " << key << " ��� ����������. ������� ���������� ����." << endl;
//        return false;
//    }
//}
//bool naitiPoKey(const stack<IntPair>& s, int key, int& value) {
//    stack<IntPair> tempStack = s; 
//    bool found = false;
//
//    while (!tempStack.empty()) {
//        if (tempStack.top().first == key) {
//            found = true;
//            value = tempStack.top().second;
//            break;  
//        }
//        tempStack.pop();
//    }
//
//    return found;
//}
//
//int countElements(const stack<IntPair>& s) {
//    return s.size();
//}
//
//void clearStack(stack<IntPair>& s, set<int>& keys) {
//    while (!s.empty()) {
//        keys.erase(s.top().first);
//        s.pop();
//    }
//}
//
//void udalitElement(stack<IntPair>& s, set<int>& keys) {
//    if (!s.empty()) {
//        int topKey = s.top().first;
//        s.pop();
//        keys.erase(topKey);
//        cout << "������� ������� ������" << endl;
//    }
//    else {
//        cout << "���� ����. ���������� ������� �������." << endl;
//    }
//}
//
//void printStack(const stack<IntPair>& s) {
//    stack<IntPair> tempStack = s;
//
//    if (tempStack.empty()) {
//        cout << "���� ����." << endl;
//    }
//    else {
//        cout << "�������� � �����:" << endl;
//        while (!tempStack.empty()) {
//            int key = tempStack.top().first;
//            int value = tempStack.top().second;
//            cout << "����: " << key << ", ��������: " << value << endl;
//            tempStack.pop();
//        }
//    }
//}
//vector<int> naitiElementaPosition(stack<IntPair> s, int value) {
//    vector<int> positions;
//    int position = 0;
//    int size = s.size();
//
//    while (!s.empty()) {
//        if (s.top().second == value) {
//            positions.push_back(size - 1 - position);
//        }
//        s.pop();
//        position++;
//    }
//
//    return positions;
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    int a;
//    stack<IntPair> Spisok;
//    set<int> keys;
//
//    cout << "������� ���������� ��������� � �����: ";
//    cin >> a;
//    cout << "������� " << a << " ��������� (���� � ��������):" << endl;
//    for (int i = 0; i < a; ++i) {
//        int key, value;
//        cout << "������� ����: ";
//        cin >> key;
//        cout << "������� �������: ";
//        cin >> value;
//        if (pushNovoeZnach(Spisok, keys, key, value)) {
//            cout << "������� ������� ��������." << endl;
//        }
//        else {
//            cout << "���� " << key << " ��� ����������. ������� ���������� ����." << endl;
//            i--;
//        }
//    }
//
//    while (true) {
//        cout << "�������� ���� �� ��������:" << endl;
//        cout << "�������� �1-����� ������� �� �����" << endl;
//        cout << "�������� �2-����� ������� �������� �� ��������" << endl;
//        cout << "�������� �3-��������� ���������� ��������� � �����" << endl;
//        cout << "�������� �4-�������� ����" << endl;
//        cout << "�������� �5-����� �� ���������" << endl;
//        cout << "�������� �6-�������� ��������" << endl;
//        cout << "�������� �7-����� �����" << endl;
//        cout << "�������� �8-�������� ����� ������� � ������" << endl;
//        int choice;
//        cin >> choice;
//        switch (choice) {
//        case 1: {
//            int keyToFind;
//            cout << "������� ���� ��� ������ ��������: ";
//            cin >> keyToFind;
//            int foundValue;
//            if (naitiPoKey(Spisok, keyToFind, foundValue)) {
//                cout << "������ ������� � ������ " << keyToFind << ": " << foundValue << endl;
//            }
//            else {
//                cout << "������� � ������ " << keyToFind << " �� ������ � ������." << endl;
//            }
//            break; }
//        case 2: {
//            int valueToFind;
//            cout << "������� �������� ��� ������ �������: ";
//            cin >> valueToFind;
//            vector<int> positions = naitiElementaPosition(Spisok, valueToFind);
//
//            if (positions.empty()) {
//                cout << "������� � ��������� " << valueToFind << " �� ������ � �����." << endl;
//            }
//            else {
//                cout << "������� �������� � ��������� " << valueToFind << ": ";
//                for (int position : positions) {
//                    cout << position << " ";
//                }
//                if (positions.size() > 1) {
//                    cout << " (������� � ������ ��������� ����� 1)" << endl;
//                }
//                else {
//                    cout << endl;
//                }
//            }
//            break; }
//        case 3: {
//            cout << "���������� ��������� � �����: " << countElements(Spisok) << endl;
//            break;
//        }
//        case 4: {
//            if (!Spisok.empty()) {
//                clearStack(Spisok, keys);
//                cout << "���� ������� ������." << endl;
//            }
//            else {
//                cout << "���� ��� ����, ������ �������." << endl;
//            }
//            break; }
//        case 5: {
//            return 0;
//        }
//        case 6: {
//            udalitElement(Spisok, keys);
//            break;
//        }
//        case 7: {
//            printStack(Spisok);
//            break;
//        }
//        case 8: {
//            int newKey, newValue;
//            cout << "������� ����� ����: ";
//            cin >> newKey;
//            cout << "������� ����� ��������: ";
//            cin >> newValue;
//            if (pushNovoeZnach(Spisok, keys, newKey, newValue)) {
//                cout << "����� ������� ������� ��������." << endl;
//            }
//            else {
//                cout << "���� " << newKey << " ��� ����������. ������� ���������� ����." << endl;
//            }
//            break;
//        }
//        default: {
//            cout << "�������� �����. ���������� �����." << endl;
//        }
//        }
//    }
//
//    return 0;
//}

///����������� ������ ���� ����
//#include <iostream>
//#include <stack>
//#include <set>
//#include <vector>
//using namespace std;
//using IntPair = pair<int, int>;
//const int MAX_ELEMENTS = 5; 
//
//void init(stack<IntPair>& s, set<int>& keys) {
//    while (!s.empty()) {
//        s.pop();
//    }
//    keys.clear();
//    cout << "���� ���������������." << endl;
//}
//bool pushNovoeZnach(stack<IntPair>& s, set<int>& keys, int key, int value) {
//    if (keys.find(key) == keys.end()) {
//        if (s.size() >= MAX_ELEMENTS) {
//            cout << "���������� ������������ ���������� ���������. ������ �������� ������ ���������." << endl;
//            return false;
//        }
//        s.push(make_pair(key, value));
//        keys.insert(key);
//        return true;
//    }
//    else {
//        cout << "���� " << key << " ��� ����������. ������� ���������� ����." << endl;
//        return false;
//    }
//}
//
//void initializeStack(stack<IntPair>& s, set<int>& keys, int count) {
//    if (s.size()> MAX_ELEMENTS) {
//        cout << "������ ���������������� ������ ���������, ��� ������������ ���������� (" << MAX_ELEMENTS << ")." << endl;
//        return;
//    }
//    for (int i = 0; i < count; ++i) {
//        int key, value;
//        cout << "������� ���� " << i + 1 << ": ";
//        cin >> key;
//        cout << "������� ������� " << i + 1 << ": ";
//        cin >> value;
//        pushNovoeZnach(s, keys, key, value);
//    }
//    cout << "�������� ������� ����������������." << endl;
//}
//
//
//bool naitiPoKey(const stack<IntPair>& s, int key, int& value) {
//    stack<IntPair> tempStack = s; 
//    bool found = false;
//
//    while (!tempStack.empty()) {
//        if (tempStack.top().first == key) {
//            found = true;
//            value = tempStack.top().second;
//            break;  
//        }
//        tempStack.pop();
//    }
//
//    return found;
//}
//
//int countElements(const stack<IntPair>& s) {
//    return s.size();
//}
//
//void clearStack(stack<IntPair>& s, set<int>& keys) {
//    while (!s.empty()) {
//        keys.erase(s.top().first);
//        s.pop();
//    }
//}
//
//void udalitElement(stack<IntPair>& s, set<int>& keys) {
//    if (!s.empty()) {
//        int topKey = s.top().first;
//        s.pop();
//        keys.erase(topKey);
//        cout << "������� ������� ������" << endl;
//    }
//    else {
//        cout << "���� ����. ���������� ������� �������." << endl;
//    }
//}
//
//void printStack(const stack<IntPair>& s) {
//    stack<IntPair> tempStack = s;
//
//    if (tempStack.empty()) {
//        cout << "���� ����." << endl;
//    }
//    else {
//        cout << "�������� � �����:" << endl;
//        while (!tempStack.empty()) {
//            int key = tempStack.top().first;
//            int value = tempStack.top().second;
//            cout << "����: " << key << ", ��������: " << value << endl;
//            tempStack.pop();
//        }
//    }
//}
//vector<int> naitiElementaPosition(stack<IntPair> s, int value) {
//    vector<int> positions;
//    int position = 0;
//    int size = s.size();
//
//    while (!s.empty()) {
//        if (s.top().second == value) {
//            positions.push_back(size - 1 - position);
//        }
//        s.pop();
//        position++;
//    }
//
//    return positions;
//}
//
//
//int main() {
//    setlocale(LC_ALL, "");
//    int a;
//    stack<IntPair> Spisok;
//    set<int> keys;
//    cout << "������� ���������� ��������� � �����: ";
//    cin >> a;
//
//    if (a > MAX_ELEMENTS) {
//        cout << "���������� ��������� ��������� ������������ ���������� �������� (" << MAX_ELEMENTS << ")." << endl;
//        return 1;
//    }
//    cout << "������� " << a << " ��������� (���� � ��������):" << endl;
//    for (int i = 0; i < a; ++i) {
//        int key, value;
//        cout << "������� ����: ";
//        cin >> key;
//        cout << "������� �������: ";
//        cin >> value;
//        if (pushNovoeZnach(Spisok, keys, key, value)) {
//            cout << "������� ������� ��������." << endl;
//        }
//        else {
//            //cout << "���� " << key << " ��� ����������. ������� ���������� ����." << endl;
//            i--;
//        }
//    }
//    while (true) {
//        cout << "�������� ���� �� ��������:" << endl;
//        cout << "�������� �1-����� ������� �� �����" << endl;
//        cout << "�������� �2-����� ������� �������� �� ��������" << endl;
//        cout << "�������� �3-��������� ���������� ��������� � �����" << endl;
//        cout << "�������� �4-�������� ����" << endl;
//        cout << "�������� �5-����� �� ���������" << endl;
//        cout << "�������� �6-�������� ��������" << endl;
//        cout << "�������� �7-����� �����" << endl;
//        cout << "�������� �8-�������� ����� ������� � ������" << endl;
//        cout << "�������� �9 - ������������� ���������" << endl;
//        int choice;
//        cin >> choice;
//        switch (choice) {
//        case 1: {
//            int keyToFind;
//            cout << "������� ���� ��� ������ ��������: ";
//            cin >> keyToFind;
//            int foundValue;
//            if (naitiPoKey(Spisok, keyToFind, foundValue)) {
//                cout << "������ ������� � ������ " << keyToFind << ": " << foundValue << endl;
//            }
//            else {
//                cout << "������� � ������ " << keyToFind << " �� ������ � ������." << endl;
//            }
//            break; }
//        case 2: {
//            int valueToFind;
//            cout << "������� �������� ��� ������ �������: ";
//            cin >> valueToFind;
//            vector<int> positions = naitiElementaPosition(Spisok, valueToFind);
//
//            if (positions.empty()) {
//                cout << "������� � ��������� " << valueToFind << " �� ������ � �����." << endl;
//            }
//            else {
//                cout << "������� �������� � ��������� " << valueToFind << ": ";
//                for (int position : positions) {
//                    cout << position << " ";
//                }
//                if (positions.size() > 1) {
//                    cout << " (������� � ������ ��������� ����� 1)" << endl;
//                }
//                else {
//                    cout << endl;
//                }
//            }
//            break; }
//        case 3: {
//            cout << "���������� ��������� � �����: " << countElements(Spisok) << endl;
//            break;
//        }
//        case 4: {
//            if (!Spisok.empty()) {
//                clearStack(Spisok, keys);
//                cout << "���� ������� ������." << endl;
//            }
//            else {
//                cout << "���� ��� ����, ������ �������." << endl;
//            }
//            break; }
//        case 5: {
//            return 0;
//        }
//        case 6: {
//            udalitElement(Spisok, keys);
//            break;
//        }
//        case 7: {
//            printStack(Spisok);
//            break;
//        }
//        case 8: {
//            int newKey, newValue;
//            cout << "������� ����� ����: ";
//            cin >> newKey;
//            cout << "������� ����� ��������: ";
//            cin >> newValue;
//            if (pushNovoeZnach(Spisok, keys, newKey, newValue)) {
//                cout << "����� ������� ������� ��������." << endl;
//            }
//            else {
//                cout << "���� " << newKey << " ��� ����������. ������� ���������� ����." << endl;
//            }
//            break;
//        }
//        case 9: {
//            int newCount;
//            cout << "������� ���������� ��������� ��� �������������: ";
//            cin >> newCount;
//            if (newCount > MAX_ELEMENTS - Spisok.size()) {
//                cout << "������ ���������������� ������, ��� ������������ ���������� ��������� ����� ������� ���������� ���������." << endl;
//            }
//            else {
//                initializeStack(Spisok, keys, newCount);
//            }
//            break;
//        }
//        default: {
//            cout << "�������� �����. ���������� �����." << endl;
//        }
//        }
//    }
//
//    return 0;
//}
//
//
//   
