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
//            cout << "Список 2 успешно добавлен в конец списка 1." << endl;
//        }
//        else {
//            cout << "Очередь 2 пуста." << endl;
//        }
//    }
//    else if (choice == 2) {
//        if (head->next != nullptr) {
//            pred2->next = reinterpret_cast<Node2*>(head->next);
//            pred2 = reinterpret_cast<Node2*>(pred);
//            head = nullptr;
//            pred = nullptr;
//            cout << "Список 1 успешно добавлен в конец списка 2." << endl;
//        }
//        else {
//            cout << "Очередь 1 пуста." << endl;
//        }
//    }
//    else {
//        cout << "Неправильный выбор. Выберите 1 или 2." << endl;
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
//    cout << "Список очищен!" << endl;
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
//        cout << "Элемент со значением " << valueAfter << " не найден в списке. Новый элемент не добавлен." << endl;
//    }
//    else if (nodesWithSameValue.size() == 1) {
//      
//        Node* node = nodesWithSameValue.front();
//        int uniqueKey = usedKeys.size() + 1;
//        usedKeys.insert(uniqueKey);
//        Node* newNode = new Node(uniqueKey, newValue);
//        newNode->next = node->next;
//        node->next = newNode;
//        cout << "Новый узел с ключом " << uniqueKey << " и значением " << newValue
//            << " добавлен после элемента со значением " << valueAfter << "." << endl;
//    }
//    else {
//       
//        cout << "Несколько элементов со значением " << valueAfter << " найдено. Выберите ключ для добавления:" << endl;
//        for (const auto& node : nodesWithSameValue) {
//            cout << "Ключ: " << node->key << " Значение: " << node->value << endl;
//        }
//        cout << "Введите выбранный ключ для добавления нового элемента: ";
//        cin >> newKey;
//
//        while (usedKeys.count(newKey) > 0) {
//            cout << "Введите ключ: ";
//            cin >> newKey;
//        }
//
//        usedKeys.insert(newKey);
//        Node* newNode = new Node(newKey, newValue);
//        newNode->next = nodesWithSameValue.front()->next;
//        nodesWithSameValue.front()->next = newNode;
//        cout << "Новый узел с ключом " << newKey << " и значением " << newValue
//            << " добавлен после выбранного элемента со значением " << valueAfter << "." << endl;
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
//        cout << "Элемент со значением " << valueBefore << " не найден в списке. Новый элемент не добавлен." << endl;
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
//        cout << "Новый узел с ключом " << uniqueKey << " и значением " << newValue
//            << " добавлен перед элементом со значением " << valueBefore << "." << endl;
//    }
//    else {
//        cout << "Несколько элементов со значением " << valueBefore << " найдено. Выберите ключ для добавления:" << endl;
//        for (const auto& node : nodesWithSameValue) {
//            cout << "Ключ: " << node->key << " Значение: " << node->value << endl;
//        }
//        cout << "Введите выбранный ключ для добавления нового элемента: ";
//        cin >> newKey;
//
//        while (usedKeys.count(newKey) > 0) {
//            cout << "Введите ключ: ";
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
//        cout << "Новый узел с ключом " << newKey << " и значением " << newValue
//            << " добавлен перед выбранным элементом со значением " << valueBefore << "." << endl;
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
//        cout << "Узел перед элементом со значением " << valueBefore << " успешно удален из списка." << endl;
//    }
//    else {
//        cout << "Не удалось найти элемент со значением " << valueBefore << " или элемент находится в начале списка." << endl;
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
//        cout << "Узел после элемента со значением " << valueAfter << " успешно удален из списка." << endl;
//    }
//    else {
//        cout << "Не удалось найти элемент со значением " << valueAfter << " или элемент находится в конце списка." << endl;
//    }
//}
//void AddAtPosition(Node*& head, unordered_set<int>& usedKeys, int position, int newKey, int newValue) {
//    if (position < 0) {
//        cout << "Ошибка: Некорректная позиция." << endl;
//        return;
//    }
//
//    if (position == 0) {
// 
//        New(head, usedKeys, newKey, newValue);
//        cout << "Новый узел с ключом " << newKey << " и значением " << newValue
//            << " добавлен в начало списка." << endl;
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
//        cout << "Новый узел с ключом " << uniqueKey << " и значением " << newValue
//            << " добавлен на позицию " << position << "." << endl;
//    }
//    else {
//        cout << "Неправильная позиция." << endl;
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
//    cout << "введите размер списка:" << endl;
//    cin >> n;
//    cout << "введите " << n << " элементов списка : " << endl;
//    for (int i = 0; i < n; i++) {
//        int key, value;
//        cout << "введите уникальный ключ для элемента: ";
//        cin >> key;
//        cout << "введите значение для элемента: ";
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
//        cout << "5) добавление после заданного значения" << endl;
//        cout << "6) добавление до заданного значения" << endl;
//        cout << "7) удаление перед заданным значением" << endl;
//        cout << "8) удаление после заданного значения" << endl;
//        cout << "9) добавление на указанную позицию" << endl;
//        cout << "10)объединение" << endl;
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
//        case 5: {
//            int valueAfter, newKey, newValue;
//            cout << "Введите значение элемента, после которого нужно добавить новый элемент: ";
//            cin >> valueAfter;
//            cout << "Введите уникальный ключ для нового элемента: ";
//            cin >> newKey;
//            cout << "Введите значение для нового элемента: ";
//            cin >> newValue;
//            AddAfterValue(myList, usedKeys, valueAfter, newKey, newValue);
//            break;
//        }
//        case 6: {
//            int valueBefore, newKey, newValue;
//            cout << "Введите значение элемента, до которого нужно добавить новый элемент: ";
//            cin >> valueBefore;
//            cout << "Введите уникальный ключ для нового элемента: ";
//            cin >> newKey;
//            cout << "Введите значение для нового элемента: ";
//            cin >> newValue;
//          
//            AddBeforeValue(myList, usedKeys, valueBefore, newKey, newValue);
//            break;
//        }
//        case 7: {
//            int valueBefore;
//            cout << "Введите значение элемента, перед которым нужно удалить элемент: ";
//            cin >> valueBefore;
//            DeleteBeforeValue(myList, usedKeys, valueBefore);
//            break;
//        }
//        case 8: {
//            int valueAfter;
//            cout << "Введите значение элемента, после которого нужно удалить элемент: ";
//            cin >> valueAfter;
//            DeleteAfterValue(myList, usedKeys, valueAfter);
//            break;
//        }
//
//        case 9: {
//            int position;
//            cout << "Введите позицию для добавления элемента: ";
//            cin >> position;
//
//            int newKey, newValue;
//            cout << "Введите уникальный ключ для нового элемента: ";
//            cin >> newKey;
//            cout << "Введите значение для нового элемента: ";
//            cin >> newValue;
//
//            AddAtPosition(myList, usedKeys, position, newKey, newValue);
//            break;
//        }
//        case 10: {
//            int konkChoice;
//            cout << "Выберите список для объединения (1 или 2): ";
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
