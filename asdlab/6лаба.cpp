//#include <iostream>
//#include <unordered_set>
//using namespace std;
//
//struct Node {
//    int key;
//    int value;
//    Node* next;
//    Node* prev;
//
//    Node(int k, int v) : key(k), value(v), next(nullptr), prev(nullptr) {}
//};
//
//void Cleaning(Node*& head, unordered_set<int>& usedKeys) {
//    Node* current = head;
//    while (current != nullptr) {
//        Node* temp = current;
//        current = current->next;
//        usedKeys.erase(temp->key);
//        delete temp;
//    }
//    head = nullptr;
//    cout << "������ ������!" << endl;
//}
//
//void Delete(Node*& head, unordered_set<int>& usedKeys, int keyToDelete) {
//    Node* current = head;
//
//    while (current != nullptr && current->key != keyToDelete) {
//        current = current->next;
//    }
//
//    if (current != nullptr) {
//        if (current->prev != nullptr) {
//            current->prev->next = current->next;
//        }
//        else {
//            head = current->next;
//        }
//
//        if (current->next != nullptr) {
//            current->next->prev = current->prev;
//        }
//
//        usedKeys.erase(keyToDelete);
//        delete current;
//        cout << "���� � ������ " << keyToDelete << " ������� ������ �� ������." << endl;
//    }
//    else {
//        cout << "���� � ������ " << keyToDelete << " �� ������ � ������." << endl;
//    }
//}
//
//void New(Node*& head, unordered_set<int>& usedKeys, int key, int value) {
//    if (usedKeys.count(key) > 0) {
//        cout << "������: �� ����� ������������ �������� ��� �����." << endl;
//    }
//    else {
//        usedKeys.insert(key);
//        Node* newNode = new Node(key, value);
//        if (head == nullptr) {
//            head = newNode;
//        }
//        else {
//            newNode->next = head;
//            head->prev = newNode;
//            head = newNode;
//        }
//        cout << "����� ���� � ������ " << key << " � ��������� " << value << " �������� � ������." << endl;
//    }
//}
//
//void ViewList(const Node* head) {
//    const Node* current = head;
//    while (current != nullptr) {
//        cout << "(" << current->key << ", " << current->value << ") ";
//        current = current->next;
//    }
//    cout << endl;
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//
//    Node* myList = nullptr;
//    unordered_set<int> usedKeys;
//
//    int n;
//    cout << "������� ������ ������:" << endl;
//    cin >> n;
//    cout << "������� " << n << " ��������� ������ : " << endl;
//    for (int i = 0; i < n; i++) {
//        int key, value;
//        cout << "������� ���������� ���� ��� ��������: ";
//        cin >> key;
//        cout << "������� �������� ��� ��������: ";
//        cin >> value;
//        New(myList, usedKeys, key, value);
//    }
//
//    int choice;
//    do {
//        cout << "���� ��������:" << endl;
//        cout << "1) ������� ������" << endl;
//        cout << "2) �������� ��������" << endl;
//        cout << "3) ���������� ������ ��������" << endl;
//        cout << "4) �������� ��������� ������" << endl;
//        cout << "0) �����" << endl;
//        cout << "�������� �������� : ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            Cleaning(myList, usedKeys);
//            break;
//        }
//        case 2: {
//            int keyToDelete;
//            cout << "������� ���� ��� �������� ��������: ";
//            cin >> keyToDelete;
//            Delete(myList, usedKeys, keyToDelete);
//            break;
//        }
//        case 3: {
//            int key, value;
//            cout << "������� ���������� ���� ��� ������ ��������: ";
//            cin >> key;
//            cout << "������� �������� ��� ������ ��������: ";
//            cin >> value;
//            New(myList, usedKeys, key, value);
//            break;
//        }
//        case 4: {
//            ViewList(myList);
//            break;
//        }
//        }
//    } while (choice != 0);
//
//    return 0;
//}
