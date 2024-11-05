//#include <iostream>
//#include <unordered_set>
//using namespace std;
//struct Head {
//    Head* next;
//};
//
//struct Node {
//    int key;       
//    int value;     
//    Node* next;     
//
//    Node(int k, int v) : key(k), value(v), next(nullptr) {}
//};
//struct Node2 {
//    int key;
//    int value;
//    Node2* next;
//
//    Node2(int k, int v) : key(k), value(v), next(nullptr) {}
//};
//void Konk(Node*& head, Node2*& head2, int choice) {
//    Node* pred = head;
//    Node2* pred2 = head2;
//
//    while (pred->next != nullptr) {
//        pred = pred->next;
//    }
//
//    while (pred2->next != nullptr) {
//        pred2 = pred2->next;
//    }
//
//    if (choice == 1) {
//        if (head2->next != nullptr) {
//            pred->next = reinterpret_cast<Node*>(head2->next);
//            pred = reinterpret_cast<Node*>(pred2);
//            head2 = nullptr;
//            pred2 = nullptr;
//            cout << "������ 2 ������� �������� � ����� ������ 1." << endl;
//        }
//        else {
//            cout << "������� 2 �����." << endl;
//        }
//    }
//    else if (choice == 2) {
//        if (head->next != nullptr) {
//            pred2->next = reinterpret_cast<Node2*>(head->next);
//            pred2 = reinterpret_cast<Node2*>(pred);
//            head = nullptr;
//            pred = nullptr;
//            cout << "������ 1 ������� �������� � ����� ������ 2." << endl;
//        }
//        else {
//            cout << "������� 1 �����." << endl;
//        }
//    }
//    else {
//        cout << "������������ �����. �������� 1 ��� 2." << endl;
//    }
//}
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
//    Node* prev = nullptr;
//
//    while (current != nullptr && current->key != keyToDelete) {
//        prev = current;
//        current = current->next;
//    }
//
//    if (current != nullptr) {
//        if (prev == nullptr) {
//  
//            head = current->next;
//        }
//        else {
//            prev->next = current->next;
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
//       
//            head = newNode;
//        }
//        else {
//        
//            Node* current = head;
//            while (current->next != nullptr) {
//                current = current->next;
//            }
//            current->next = newNode;
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
//void AddAfterValue(Node*& head, unordered_set<int>& usedKeys, int valueAfter, int newKey, int newValue) {
//    Node* current = head;
//
//    vector<Node*> nodesWithSameValue;
//    while (current != nullptr) {
//        if (current->value == valueAfter) {
//            nodesWithSameValue.push_back(current);
//        }
//        current = current->next;
//    }
//
//    if (nodesWithSameValue.empty()) {
//        cout << "������� �� ��������� " << valueAfter << " �� ������ � ������. ����� ������� �� ��������." << endl;
//    }
//    else if (nodesWithSameValue.size() == 1) {
//      
//        Node* node = nodesWithSameValue.front();
//        int uniqueKey = usedKeys.size() + 1;
//        usedKeys.insert(uniqueKey);
//        Node* newNode = new Node(uniqueKey, newValue);
//        newNode->next = node->next;
//        node->next = newNode;
//        cout << "����� ���� � ������ " << uniqueKey << " � ��������� " << newValue
//            << " �������� ����� �������� �� ��������� " << valueAfter << "." << endl;
//    }
//    else {
//       
//        cout << "��������� ��������� �� ��������� " << valueAfter << " �������. �������� ���� ��� ����������:" << endl;
//        for (const auto& node : nodesWithSameValue) {
//            cout << "����: " << node->key << " ��������: " << node->value << endl;
//        }
//        cout << "������� ��������� ���� ��� ���������� ������ ��������: ";
//        cin >> newKey;
//
//        while (usedKeys.count(newKey) > 0) {
//            cout << "������� ����: ";
//            cin >> newKey;
//        }
//
//        usedKeys.insert(newKey);
//        Node* newNode = new Node(newKey, newValue);
//        newNode->next = nodesWithSameValue.front()->next;
//        nodesWithSameValue.front()->next = newNode;
//        cout << "����� ���� � ������ " << newKey << " � ��������� " << newValue
//            << " �������� ����� ���������� �������� �� ��������� " << valueAfter << "." << endl;
//    }
//}
//void AddBeforeValue(Node*& head, unordered_set<int>& usedKeys, int valueBefore, int newKey, int newValue) {
//    Node* current = head;
//    Node* prev = nullptr;
//
//    vector<Node*> nodesWithSameValue;
//    while (current != nullptr) {
//        if (current->value == valueBefore) {
//            nodesWithSameValue.push_back(current);
//        }
//        current = current->next;
//    }
//
//    if (nodesWithSameValue.empty()) {
//        cout << "������� �� ��������� " << valueBefore << " �� ������ � ������. ����� ������� �� ��������." << endl;
//    }
//    else if (nodesWithSameValue.size() == 1) {
//
//        Node* node = nodesWithSameValue.front();
//        int uniqueKey = usedKeys.size() + 1;
//        usedKeys.insert(uniqueKey);
//        Node* newNode = new Node(uniqueKey, newValue);
//        newNode->next = node;
//        if (prev == nullptr) {
//            head = newNode;
//        }
//        else {
//   
//            prev->next = newNode;
//        }
//        cout << "����� ���� � ������ " << uniqueKey << " � ��������� " << newValue
//            << " �������� ����� ��������� �� ��������� " << valueBefore << "." << endl;
//    }
//    else {
//        cout << "��������� ��������� �� ��������� " << valueBefore << " �������. �������� ���� ��� ����������:" << endl;
//        for (const auto& node : nodesWithSameValue) {
//            cout << "����: " << node->key << " ��������: " << node->value << endl;
//        }
//        cout << "������� ��������� ���� ��� ���������� ������ ��������: ";
//        cin >> newKey;
//
//        while (usedKeys.count(newKey) > 0) {
//            cout << "������� ����: ";
//            cin >> newKey;
//        }
//
//        usedKeys.insert(newKey);
//        Node* newNode = new Node(newKey, newValue);
//        newNode->next = nodesWithSameValue.front();
//        if (prev == nullptr) {
// 
//            head = newNode;
//        }
//        else {
//            prev->next = newNode;
//        }
//        cout << "����� ���� � ������ " << newKey << " � ��������� " << newValue
//            << " �������� ����� ��������� ��������� �� ��������� " << valueBefore << "." << endl;
//    }
//}
//void DeleteBeforeValue(Node*& head, unordered_set<int>& usedKeys, int valueBefore) {
//    Node* current = head;
//    Node* prev = nullptr;
//    Node* prevPrev = nullptr;
//
//    while (current != nullptr && current->value != valueBefore) {
//        prevPrev = prev;
//        prev = current;
//        current = current->next;
//    }
//
//    if (current != nullptr && prevPrev != nullptr) {
//        usedKeys.erase(prev->key);
//        prevPrev->next = current;
//        delete prev;
//        cout << "���� ����� ��������� �� ��������� " << valueBefore << " ������� ������ �� ������." << endl;
//    }
//    else {
//        cout << "�� ������� ����� ������� �� ��������� " << valueBefore << " ��� ������� ��������� � ������ ������." << endl;
//    }
//}
//
//void DeleteAfterValue(Node*& head, unordered_set<int>& usedKeys, int valueAfter) {
//    Node* current = head;
//    while (current != nullptr && current->value != valueAfter) {
//        current = current->next;
//    }
//
//    if (current != nullptr && current->next != nullptr) {
//        Node* temp = current->next;
//        current->next = temp->next;
//        usedKeys.erase(temp->key);
//        delete temp;
//        cout << "���� ����� �������� �� ��������� " << valueAfter << " ������� ������ �� ������." << endl;
//    }
//    else {
//        cout << "�� ������� ����� ������� �� ��������� " << valueAfter << " ��� ������� ��������� � ����� ������." << endl;
//    }
//}
//void AddAtPosition(Node*& head, unordered_set<int>& usedKeys, int position, int newKey, int newValue) {
//    if (position < 0) {
//        cout << "������: ������������ �������." << endl;
//        return;
//    }
//
//    if (position == 0) {
// 
//        New(head, usedKeys, newKey, newValue);
//        cout << "����� ���� � ������ " << newKey << " � ��������� " << newValue
//            << " �������� � ������ ������." << endl;
//        return;
//    }
//
//    Node* current = head;
//    Node* prev = nullptr;
//    int currentPosition = 0;
//
//    while (current != nullptr && currentPosition < position) {
//        prev = current;
//        current = current->next;
//        currentPosition++;
//    }
//
//    if (currentPosition == position) {
//       
//        int uniqueKey = usedKeys.size() + 1;
//        usedKeys.insert(uniqueKey);
//
//        Node* newNode = new Node(uniqueKey, newValue);
//        newNode->next = current;
//
//        if (prev == nullptr) {
//          
//            head = newNode;
//        }
//        else {
//            prev->next = newNode;
//        }
//
//        cout << "����� ���� � ������ " << uniqueKey << " � ��������� " << newValue
//            << " �������� �� ������� " << position << "." << endl;
//    }
//    else {
//        cout << "������������ �������." << endl;
//    }
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
//        cout << "5) ���������� ����� ��������� ��������" << endl;
//        cout << "6) ���������� �� ��������� ��������" << endl;
//        cout << "7) �������� ����� �������� ���������" << endl;
//        cout << "8) �������� ����� ��������� ��������" << endl;
//        cout << "9) ���������� �� ��������� �������" << endl;
//        cout << "10)�����������" << endl;
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
//        case 5: {
//            int valueAfter, newKey, newValue;
//            cout << "������� �������� ��������, ����� �������� ����� �������� ����� �������: ";
//            cin >> valueAfter;
//            cout << "������� ���������� ���� ��� ������ ��������: ";
//            cin >> newKey;
//            cout << "������� �������� ��� ������ ��������: ";
//            cin >> newValue;
//            AddAfterValue(myList, usedKeys, valueAfter, newKey, newValue);
//            break;
//        }
//        case 6: {
//            int valueBefore, newKey, newValue;
//            cout << "������� �������� ��������, �� �������� ����� �������� ����� �������: ";
//            cin >> valueBefore;
//            cout << "������� ���������� ���� ��� ������ ��������: ";
//            cin >> newKey;
//            cout << "������� �������� ��� ������ ��������: ";
//            cin >> newValue;
//          
//            AddBeforeValue(myList, usedKeys, valueBefore, newKey, newValue);
//            break;
//        }
//        case 7: {
//            int valueBefore;
//            cout << "������� �������� ��������, ����� ������� ����� ������� �������: ";
//            cin >> valueBefore;
//            DeleteBeforeValue(myList, usedKeys, valueBefore);
//            break;
//        }
//        case 8: {
//            int valueAfter;
//            cout << "������� �������� ��������, ����� �������� ����� ������� �������: ";
//            cin >> valueAfter;
//            DeleteAfterValue(myList, usedKeys, valueAfter);
//            break;
//        }
//
//        case 9: {
//            int position;
//            cout << "������� ������� ��� ���������� ��������: ";
//            cin >> position;
//
//            int newKey, newValue;
//            cout << "������� ���������� ���� ��� ������ ��������: ";
//            cin >> newKey;
//            cout << "������� �������� ��� ������ ��������: ";
//            cin >> newValue;
//
//            AddAtPosition(myList, usedKeys, position, newKey, newValue);
//            break;
//        }
//        case 10: {
//            int konkChoice;
//            cout << "�������� ������ ��� ����������� (1 ��� 2): ";
//            cin >> konkChoice;
//            Konk(myList, myList2, konkChoice);
//            break;
//        }
//
//
//        }
//    } while (choice != 0);
//
//    return 0;
//}
