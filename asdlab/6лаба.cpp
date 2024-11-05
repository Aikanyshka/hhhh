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
//    cout << "Список очищен!" << endl;
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
//        cout << "Узел с ключом " << keyToDelete << " успешно удален из списка." << endl;
//    }
//    else {
//        cout << "Узел с ключом " << keyToDelete << " не найден в списке." << endl;
//    }
//}
//
//void New(Node*& head, unordered_set<int>& usedKeys, int key, int value) {
//    if (usedKeys.count(key) > 0) {
//        cout << "Ошибка: Вы ввели неуникальное значение для ключа." << endl;
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
//        cout << "Новый узел с ключом " << key << " и значением " << value << " добавлен в список." << endl;
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
//    cout << "Введите размер списка:" << endl;
//    cin >> n;
//    cout << "Введите " << n << " элементов списка : " << endl;
//    for (int i = 0; i < n; i++) {
//        int key, value;
//        cout << "Введите уникальный ключ для элемента: ";
//        cin >> key;
//        cout << "Введите значение для элемента: ";
//        cin >> value;
//        New(myList, usedKeys, key, value);
//    }
//
//    int choice;
//    do {
//        cout << "Меню операций:" << endl;
//        cout << "1) очистка списка" << endl;
//        cout << "2) удаление элемента" << endl;
//        cout << "3) добавление нового элемента" << endl;
//        cout << "4) просмотр элементов списка" << endl;
//        cout << "0) выход" << endl;
//        cout << "Выберите операцию : ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            Cleaning(myList, usedKeys);
//            break;
//        }
//        case 2: {
//            int keyToDelete;
//            cout << "Введите ключ для удаления элемента: ";
//            cin >> keyToDelete;
//            Delete(myList, usedKeys, keyToDelete);
//            break;
//        }
//        case 3: {
//            int key, value;
//            cout << "Введите уникальный ключ для нового элемента: ";
//            cin >> key;
//            cout << "Введите значение для нового элемента: ";
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
