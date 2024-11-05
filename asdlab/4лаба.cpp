//////#1 обычная очередь
//#include <iostream>
//#include <queue>
//#include <unordered_set>
//using namespace std;
//void Cleaning(queue<pair<int, int>>& q) {
//    while (!q.empty()) {
//        q.pop();
//    }
//    cout << "Очередь очищена!" << endl;
//}
//
//void Destruction(queue<pair<int, int>>& q) {
//    while (!q.empty()) {
//        q.pop();
//    }
//
//    cout << "Очередь уничтожена!" << endl;
//
//}
//void New(queue<pair<int, int>>& q, unordered_set<int>& usedKeys) {
//    int key;
//    cout << "Введите уникальный ключ для нового элемента: ";
//    cin >> key;
//
//    if (usedKeys.count(key) > 0) {
//        cout << "Ошибка: Вы ввели неуникальное значение для ключа." << endl;
//    }
//    else {
//        usedKeys.insert(key);
//
//        int b;
//        cout << "Введите значение для нового элемента: ";
//        cin >> b;
//
//        q.push(make_pair(key, b));
//        cout << "Новый элемент добавлен в очередь." << endl;
//    }
//}
//void Delete(queue<pair<int, int>>& q, unordered_set<int>& usedKeys) {
//    if (!q.empty()) {
//        int keyToRemove = q.front().first;
//        q.pop();
//        usedKeys.erase(keyToRemove);
//        cout << "Первый элемент успешно удален из очереди." << endl;
//    }
//    else {
//        cout << "Очередь пуста. Удаление невозможно." << endl;
//    }
//}
//void Kolichestvo(const queue<pair<int, int>>& q) {
//    cout << "Количество элементов в очереди: " << q.size() << endl;
//}
//void NaityKluch(const queue<pair<int, int>>& q) {
//    int searchKey;
//    cout << "Введите ключ для поиска элемента: ";
//    cin >> searchKey;
//
//    bool found = false;
//    queue<pair<int, int>> tempQueue = q;
//
//    while (!tempQueue.empty()) {
//        if (tempQueue.front().first == searchKey) {
//            cout << "Элемент с ключом " << searchKey << " найден. Значение: " << tempQueue.front().second << endl;
//            found = true;
//            break;
//        }
//        tempQueue.pop();
//    }
//
//    if (!found) {
//        cout << "Элемент с ключом " << searchKey << " не найден." << endl;
//    }
//}
//void SearchByValue(const queue<pair<int, int>>& q) {
//    int searchValue;
//    cout << "Введите значение для поиска позиции: ";
//    cin >> searchValue;
//
//    int position = 0;
//    bool found = false;
//    queue<pair<int, int>> tempQueue = q;
//
//    while (!tempQueue.empty()) {
//        if (tempQueue.front().second == searchValue) {
//            cout << "Элемент со значением " << searchValue << " найден на позиции " << position << "." << endl;
//            found = true;
//            break;
//        }
//        tempQueue.pop();
//        position++;
//    }
//
//    if (!found) {
//        cout << "Элемент со значением " << searchValue << " не найден в очереди." << endl;
//    }
//}
//void FindMinMax(const queue<pair<int, int>>& q) {
//    if (q.empty()) {
//        cout << "Очередь пуста. Невозможно найти минимальное и максимальное значения." << endl;
//        return;
//    }
//
//    int minVal = INT_MAX;
//    int maxVal = INT_MIN;
//    queue<pair<int, int>> tempQueue = q;
//
//    while (!tempQueue.empty()) {
//        int currentValue = tempQueue.front().second;
//        minVal = min(minVal, currentValue);
//        maxVal = max(maxVal, currentValue);
//        tempQueue.pop();
//    }
//
//    cout << "Минимальное значение: " << minVal << endl;
//    cout << "Максимальное значение: " << maxVal << endl;
//}
//void ViewQueue(const queue<pair<int, int>>& q) {
//    if (q.empty()) {
//        cout << "Очередь пуста." << endl;
//        return;
//    }
//
//    cout << "Элементы очереди: ";
//    queue<pair<int, int>> tempQueue = q;
//
//    while (!tempQueue.empty()) {
//        cout << "(" << tempQueue.front().first << ", " << tempQueue.front().second << ") ";
//        tempQueue.pop();
//    }
//
//    cout << endl;
//}
//int main() {
//    setlocale(LC_ALL, "");
//    queue<pair<int, int>> ocered; 
//
//    unordered_set<int> usedKeys;
//
//    int choice;
//    int n;
//    cout << "Введите размер очереди:" << endl;
//    cin >> n;
//    do {
//        cout << "Меню операций:" << endl;
//        cout << "Операция №1: Выполнить инициализацию очереди " << endl;
//        cout << "Операция №2: Выполнить очистку очереди" << endl;
//        cout << "Операция №3: Выполнить уничтожение очереди" << endl;
//        cout << "Операция №4: Выполнить добавление нового элемента" << endl;
//        cout << "Операция №5: Выполнить удаление элемента" << endl;
//        cout << "Операция №6: Вывести количество элементов в очереди" << endl;
//        cout << "Операция №7: Выполнить поиск элемента по ключу" << endl;
//        cout << "Операция №8: Выполнить поиск позиции элемента по значению" << endl;
//        cout << "Операция №9: Выполнить поиск максимального и минимального значения" << endl;
//        cout << "Операция №10: Просмотреть элементы очереди" << endl;
//        cout << "Выберите операцию: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            cout << "Введите " << n << " элементов очереди : " << endl;
//            for (int i = 0; i < n; i++) {
//                int key;
//                cout << "Введите уникальный ключ для элемента: ";
//                cin >> key;
//
//                if (usedKeys.count(key) > 0) {
//                    cout << "Ошибка: Вы ввели неуникальное значение для ключа." << endl;
//
//                    i--;
//                }
//                else {
//                    usedKeys.insert(key);
//
//                    int b;
//                    cout << "Введите значение для элемента: ";
//                    cin >> b;
//
//                    ocered.push(make_pair(key, b));
//                }
//            }
//            cout << "Очередь инициализирована." << endl;
//            break;
//        }
//        case 2: {
//            Cleaning(ocered);
//            usedKeys.clear();
//            break;
//        }
//        case 3: {
//            Destruction(ocered);
//            usedKeys.clear();
//            break;
//
//        }
//        case 4: {
//            New(ocered, usedKeys);
//            break;
//        }
//        case 5: {
//            Delete(ocered, usedKeys);
//            break;
//        }
//
//
//        case 6: {
//            Kolichestvo(ocered);
//            break;
//        }
//        case 7: {
//            NaityKluch(ocered);
//            break;
//        }
//        case 8: {
//            SearchByValue(ocered);
//            break;
//        }
//        case 9: {
//            FindMinMax(ocered);
//            break;
//        }
//        case 10: {
//            ViewQueue(ocered);
//            break;
//        }
//        }
//    } while (choice != 0);
//
//    return 0;
//}

//////кольцевая
//#include <iostream>
//#include <unordered_set>
//using namespace std;
//struct Queue {
//    int item;
//    Queue* next;
//};
//
//struct CircularQueue {
//    Queue* Pbeg;
//    Queue* Pend;
//    unordered_set<int> usedKeys;
//
//    CircularQueue() : Pbeg(nullptr), Pend(nullptr) {}
//};
//
//void init_queue(CircularQueue& cq, int capacity) {
//    cq.Pbeg = nullptr;
//    cq.Pend = nullptr;
//    cq.usedKeys.clear();
//}
//
//void Cleaning(CircularQueue& cq) {
//    while (cq.Pbeg != nullptr) {
//        int keyToRemove = cq.Pbeg->item;
//        cq.Pbeg = cq.Pbeg->next;
//        cq.usedKeys.erase(keyToRemove);
//    }
//    cout << "Очередь очищена!" << endl;
//}
//
//void Destruction(CircularQueue& cq) {
//    Cleaning(cq);
//    cq.Pbeg = cq.Pend = nullptr;
//    cq.usedKeys.clear();
//    cout << "Очередь уничтожена!" << endl;
//}
//
//void New(CircularQueue& ocered) {
//    int key;
//    cout << "Введите уникальный ключ для нового элемента: ";
//    cin >> key;
//
//    if (ocered.usedKeys.count(key) > 0) {
//        cout << "Ошибка: Вы ввели неуникальное значение для ключа." << endl;
//    }
//    else {
//        ocered.usedKeys.insert(key);
//
//        int b;
//        cout << "Введите значение для нового элемента: ";
//        cin >> b;
////
//       Queue* pv = new Queue;
//        pv->item = b;
//        pv->next = nullptr;
//
//        if (ocered.Pbeg == nullptr) {
//            ocered.Pbeg = ocered.Pend = pv;
//        }
//        else {
//            ocered.Pend->next = pv;
//            ocered.Pend = pv;
//        }
//
//        cout << "Новый элемент добавлен в очередь." << endl;
//    }
//}
//
//void Delete(CircularQueue& cq) {
//    if (cq.Pbeg == nullptr) {
//        cout << "Очередь пуста. Удаление невозможно." << endl;
//    }
//    else {
//        int keyToRemove = cq.Pbeg->item;
//        Queue* pv = cq.Pbeg;
//        cq.Pbeg = cq.Pbeg->next;
//        delete pv;
//        cq.usedKeys.erase(keyToRemove);
//        cout << "Первый элемент успешно удален из очереди." << endl;
//    }
//}
//
//void Kolichestvo(const CircularQueue& cq) {
//    int count = 0;
//    Queue* pv = cq.Pbeg;
//    while (pv != nullptr) {
//        count++;
//        pv = pv->next;
//    }
//    cout << "Количество элементов в очереди: " << count << endl;
//}
//
//void ViewQueue(Queue* Pbeg, Queue* Pend) {
//    if (Pbeg == nullptr) {
//        cout << "Очередь пуста." << endl;
//        return;
//    }
//
//    cout << "Элементы очереди: ";
//    Queue* pv = Pbeg;
//
//    while (pv != nullptr) {
//        cout<< pv->item << " Адрес: " << pv << " " << endl;
//        pv = pv->next;
//    }
//
//    cout << endl;
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    CircularQueue ocered;
//
//    int choice;
//    int n;
//    cout << "Введите размер очереди:" << endl;
//    cin >> n;
//
//    init_queue(ocered, n);
//
//    do {
//        cout << "Меню операций:" << endl;
//        cout << "Операция №1: Выполнить инициализацию очереди " << endl;
//        cout << "Операция №2: Выполнить очистку очереди" << endl;
//        cout << "Операция №3: Выполнить уничтожение очереди" << endl;
//        cout << "Операция №4: Выполнить добавление нового элемента" << endl;
//        cout << "Операция №5: Выполнить удаление элемента" << endl;
//        cout << "Операция №6: Вывести количество элементов в очереди" << endl;
//        cout << "Операция №7: Просмотреть элементы очереди" << endl;
//        cout << "Выберите операцию (0 - завершить): ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            cout << "Введите " << n << " элементов очереди : " << endl;
//            for (int i = 0; i < n; i++) {
//                int key;
//                cout << "Введите уникальный ключ для элемента: ";
//                cin >> key;
//
//                if (ocered.usedKeys.count(key) > 0) {
//                    cout << "Ошибка: Вы ввели неуникальное значение для ключа." << endl;
//                    i--;
//                }
//                else {
//                    ocered.usedKeys.insert(key);
//                    int b;
//                    cout << "Введите значение для элемента: ";
//                    cin >> b;
//
//                    Queue* pv = new Queue;
//                    pv->item = b;
//                    pv->next = nullptr;
//
//                    if (ocered.Pbeg == nullptr) {
//                        ocered.Pbeg = ocered.Pend = pv;
//                    }
//                    else {
//                        ocered.Pend->next = pv;
//                        ocered.Pend = pv;
//                    }
//                }
//            }
//            cout << "Очередь инициализирована." << endl;
//            break;
//        }
//        case 2: {
//            Cleaning(ocered);
//            ocered.usedKeys.clear();
//            break;
//        }
//        case 3: {
//            Destruction(ocered);
//            ocered.usedKeys.clear();
//            break;
//        }
//        case 4: {
//            New(ocered);
//            break;
//        }
//        case 5: {
//            Delete(ocered);
//            break;
//        }
//        case 6: {
//            Kolichestvo(ocered);
//            break;
//        }
//        case 7: {
//            ViewQueue(ocered.Pbeg, ocered.Pend);
//            break;
//        }
//        }
//    } while (choice != 0);
//
//    return 0;
//}

//
//
//
//
//////sceplenie
//#include <iostream>
//#include <queue>
//#include <unordered_set>
//using namespace std;
//
//struct Queue {
//    int key;
//    int value;
//};
//
//void InitializeQueue(queue<Queue>& q, unordered_set<int>& usedKeys) {
//    int n;
//    cout << "Введите размер очереди: ";
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int key;
//        cout << "Введите уникальный ключ для элемента: ";
//        cin >> key;
//
//        if (usedKeys.count(key) > 0) {
//            cout << "Ошибка: Вы ввели неуникальное значение для ключа." << endl;
//            i--;
//        }
//        else {
//            usedKeys.insert(key);
//
//            int value;
//            cout << "Введите значение для элемента: ";
//            cin >> value;
//
//            q.push({ key, value });
//        }
//    }
//    cout << "Очередь инициализирована." << endl;
//}
//
//bool hasDuplicateKeys(const queue<Queue>& q1, const queue<Queue>& q2) {
//    unordered_set<int> keys;
//
//    queue<Queue> temp1 = q1;
//    while (!temp1.empty()) {
//        keys.insert(temp1.front().key);
//        temp1.pop();
//    }
//
//    queue<Queue> temp2 = q2;
//    while (!temp2.empty()) {
//        if (keys.count(temp2.front().key) > 0) {
//            return true;
//        }
//        temp2.pop();
//    }
//
//    return false;
//}
//
//void ConcatenateQueues(queue<Queue>& q1, queue<Queue>& q2) {
//    if (hasDuplicateKeys(q1, q2)) {
//        cout << "Ошибка: Конкатенация не может быть выполнена из-за дублирующихся ключей." << endl;
//        return;
//    }
//
//    while (!q2.empty()) {
//        q1.push(q2.front());
//        q2.pop();
//    }
//}
//
//void Cleaning(queue<Queue>& q, unordered_set<int>& usedKeys) {
//    while (!q.empty()) {
//        q.pop();
//    }
//    usedKeys.clear();
//    cout << "Очередь очищена!" << endl;
//}
//
//void Delete(queue<Queue>& q, unordered_set<int>& usedKeys) {
//    if (!q.empty()) {
//        int keyToRemove = q.front().key;
//        q.pop();
//        usedKeys.erase(keyToRemove);
//        cout << "Первый элемент успешно удален из очереди." << endl;
//    }
//    else {
//        cout << "Очередь пуста. Удаление невозможно." << endl;
//    }
//}
//
//void Kolichestvo(const queue<Queue>& q) {
//    cout << "Количество элементов в очереди: " << q.size() << endl;
//}
//
//void SearchByKey(const queue<Queue>& q) {
//    int searchKey;
//    cout << "Введите ключ для поиска элемента: ";
//    cin >> searchKey;
//
//    bool found = false;
//    queue<Queue> tempQueue = q;
//
//    while (!tempQueue.empty()) {
//        if (tempQueue.front().key == searchKey) {
//            cout << "Элемент с ключом " << searchKey << " найден. Значение: " << tempQueue.front().value << endl;
//            found = true;
//            break;
//        }
//        tempQueue.pop();
//    }
//
//    if (!found) {
//        cout << "Элемент с ключом " << searchKey << " не найден." << endl;
//    }
//}
//
//void SearchByValue(const queue<Queue>& q) {
//    int searchValue;
//    cout << "Введите значение для поиска позиции: ";
//    cin >> searchValue;
//
//    int position = 0;
//    bool found = false;
//    queue<Queue> tempQueue = q;
//
//    while (!tempQueue.empty()) {
//        if (tempQueue.front().value == searchValue) {
//            cout << "Элемент со значением " << searchValue << " найден на позиции " << position << "." << endl;
//            found = true;
//            break;
//        }
//        tempQueue.pop();
//        position++;
//    }
//
//    if (!found) {
//        cout << "Элемент со значением " << searchValue << " не найден в очереди." << endl;
//    }
//}
//
//void FindMinMax(const queue<Queue>& q) {
//    if (q.empty()) {
//        cout << "Очередь пуста. Невозможно найти минимальное и максимальное значения." << endl;
//        return;
//    }
//
//    int minVal = INT_MAX;
//    int maxVal = INT_MIN;
//    queue<Queue> tempQueue = q;
//
//    while (!tempQueue.empty()) {
//        int currentValue = tempQueue.front().value;
//        minVal = min(minVal, currentValue);
//        maxVal = max(maxVal, currentValue);
//        tempQueue.pop();
//    }
//
//    cout << "Минимальное значение: " << minVal << endl;
//    cout << "Максимальное значение: " << maxVal << endl;
//}
//
//void ViewQueue(const queue<Queue>& q) {
//    if (q.empty()) {
//        cout << "Очередь пуста." << endl;
//        return;
//    }
//
//    cout << "Элементы очереди: " << endl;
//    queue<Queue> tempQueue = q;
//
//    while (!tempQueue.empty()) {
//        // Output the address of the current element
//        cout << "Ключ: " << tempQueue.front().key << ", ";
//        cout << "Значение: " << tempQueue.front().value << ", ";
//        cout << "Адрес: " << &tempQueue.front() << endl;
//        tempQueue.pop();
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    queue<Queue> ocered1;
//    queue<Queue> ocered2;
//
//    unordered_set<int> usedKeys1;
//    unordered_set<int> usedKeys2;
//
//    int choice;
//    do {
//        cout << " " << endl;
//        cout << "Меню операций:" << endl;
//        cout << "Операция №1: Выполнить инициализацию первой очереди" << endl;
//        cout << "Операция №2: Выполнить инициализацию второй очереди" << endl;
//        cout << "Операция №3: Выполнить очистку первой очереди" << endl;
//        cout << "Операция №4: Выполнить очистку второй очереди" << endl;
//        cout << "Операция №5: Выполнить сцепление (конкатенацию) двух очередей" << endl;
//        cout << "Операция №6: Вывести элементы первой очереди" << endl;
//        cout << "Операция №7: Вывести элементы второй очереди" << endl;
//        cout << "Операция №8: Выполнить поиск позиции элемента по значению" << endl;
//        cout << "Операция №9: Выполнить поиск максимального и минимального значения" << endl;
//        cout << "Операция №10: Просмотреть элементы очереди" << endl;
//        cout << " "<<endl;
//
//        cout << "Выберите операцию: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            InitializeQueue(ocered1, usedKeys1);
//            break;
//        }
//        case 2: {
//            InitializeQueue(ocered2, usedKeys2);
//            break;
//        }
//        case 3: {
//            Cleaning(ocered1, usedKeys1);
//            break;
//        }
//        case 4: {
//            Cleaning(ocered2, usedKeys2);
//            break;
//        }
//        case 5: {
//            ConcatenateQueues(ocered1, ocered2);
//            break;
//        }
//        case 6: {
//            ViewQueue(ocered1);
//            break;
//        }
//        case 7: {
//            ViewQueue(ocered2);
//            break;
//        }
//        case 8: {
//            SearchByValue(ocered1);
//            break;
//        }
//        case 9: {
//            FindMinMax(ocered1);
//            break;
//        }
//        case 10: {
//            ViewQueue(ocered1);
//            break;
//        }
//        case 11: {
//            Delete(ocered1, usedKeys1);
//            break;
//        }
//        }
//    } while (choice != 0);
//
//    return 0;
//}

#include <iostream>
#include <unordered_set>
using namespace std;

// Forward declarations of all functions used in the code
struct Queue;
struct CircularQueue;
void init_queue(CircularQueue& cq);
void Cleaning(CircularQueue& cq);
void Destruction(CircularQueue& cq);
void New(CircularQueue& ocered);
void Delete(CircularQueue& cq);
void Kolichestvo(const CircularQueue& cq);
void ViewQueue(Queue* Pbeg);

struct Queue {
    int item;
    int key;
    Queue* next;
};

struct CircularQueue {
    Queue* Pbeg;
    Queue* Pend;
    unordered_set<int> usedKeys;

    CircularQueue() : Pbeg(nullptr), Pend(nullptr) {}
};

void init_queue(CircularQueue& cq) {
    cq.Pbeg = nullptr;
    cq.Pend = nullptr;
    cq.usedKeys.clear();
}

void Cleaning(CircularQueue& cq) {
    while (cq.Pbeg != nullptr) {
        Delete(cq);  // Use the Delete function for cleaning
    }
    cout << "Очередь очищена!" << endl;
}

void Destruction(CircularQueue& cq) {
    Cleaning(cq);
    cq.Pbeg = cq.Pend = nullptr;
    cq.usedKeys.clear();
    cout << "Очередь уничтожена!" << endl;
}

void New(CircularQueue& ocered) {
    int key;
    cout << "Введите уникальный ключ для нового элемента: ";
    cin >> key;

    if (ocered.usedKeys.count(key) > 0) {
        cout << "неуникальное значение для ключа" << endl;
    }
    else {
        ocered.usedKeys.insert(key);

        int b;
        cout << "Введите значение для нового элемента: ";
        cin >> b;

        Queue* pv = new Queue;
        pv->item = b;
        pv->key = key;

        if (ocered.Pbeg == nullptr) {
            ocered.Pbeg = ocered.Pend = pv;
            pv->next = ocered.Pbeg;
        }
        else {
            ocered.Pend->next = pv;
            pv->next = ocered.Pbeg;
            ocered.Pend = pv;
        }

        cout << "Новый элемент добавлен в очередь." << endl;
    }
}

void Delete(CircularQueue& cq) {
    if (cq.Pbeg == nullptr) {
        cout << "Очередь пуста. Удаление невозможно." << endl;
        return;
    }

    Queue* pv = cq.Pbeg;  // Pointer to the node to be deleted
    if (cq.Pbeg == cq.Pend) { // If there is only one element
        cq.Pbeg = nullptr; // Set Pbeg to nullptr
        cq.Pend = nullptr; // Set Pend to nullptr
    }
    else {
        // Find the last node to update its next pointer
        Queue* temp = cq.Pbeg;
        while (temp->next != cq.Pbeg) {
            temp = temp->next;
        }
        cq.Pbeg = cq.Pbeg->next; // Move Pbeg to the next node
        temp->next = cq.Pbeg; // Update the last node's next pointer
    }

    int keyToRemove = pv->key;
    delete pv; // Free the memory
    cq.usedKeys.erase(keyToRemove); // Remove the key from the set
    cout << "Первый элемент успешно удален из очереди." << endl;
}

void Kolichestvo(const CircularQueue& cq) {
    int count = 0;
    Queue* pv = cq.Pbeg;
    if (pv == nullptr) return;
    do {
        count++;
        pv = pv->next;
    } while (pv != cq.Pbeg);
    cout << "Количество элементов в очереди: " << count << endl;
}

void ViewQueue(Queue* Pbeg) {
    if (Pbeg == nullptr) {
        cout << "Очередь пуста." << endl;
        return;
    }

    cout << "Элементы очереди: " << endl;
    Queue* pv = Pbeg;

    do {
        cout << "Значение: " << pv->item
            << ", Уникальный ключ: " << pv->key
            << ", Адрес: " << pv << endl; // Show memory address
        pv = pv->next;
    } while (pv != Pbeg);

    cout << endl;
}

int main() {
    setlocale(LC_ALL, "");
    CircularQueue ocered;

    int choice;
    int n;
    cout << "Введите размер очереди:" << endl;
    cin >> n;

    init_queue(ocered);

    do {
        cout << "Меню операций:" << endl;
        cout << "Операция №1: Выполнить инициализацию очереди " << endl;
        cout << "Операция №2: Выполнить очистку очереди" << endl;
        cout << "Операция №3: Выполнить уничтожение очереди" << endl;
        cout << "Операция №4: Выполнить добавление нового элемента" << endl;
        cout << "Операция №5: Выполнить удаление элемента" << endl;
        cout << "Операция №6: Вывести количество элементов в очереди" << endl;
        cout << "Операция №7: Просмотреть элементы очереди" << endl;
        cout << "Выберите операцию (0 - завершить): ";
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "Введите " << n << " элементов очереди : " << endl;
            for (int i = 0; i < n; i++) {
                int key;
                cout << "Введите уникальный ключ для элемента: ";
                cin >> key;

                if (ocered.usedKeys.count(key) > 0) {
                    cout << "Ошибка: Вы ввели неуникальное значение для ключа." << endl;
                    i--;
                }
                else {
                    ocered.usedKeys.insert(key);
                    int b;
                    cout << "Введите значение для элемента: ";
                    cin >> b;

                    Queue* pv = new Queue;
                    pv->item = b;
                    pv->key = key;
                    pv->next = nullptr;

                    if (ocered.Pbeg == nullptr) {
                        ocered.Pbeg = ocered.Pend = pv;
                        pv->next = ocered.Pbeg;
                    }
                    else {
                        ocered.Pend->next = pv;
                        pv->next = ocered.Pbeg;
                        ocered.Pend = pv;
                    }
                }
            }
            cout << "Очередь инициализирована." << endl;
            break;
        }
        case 2: {
            Cleaning(ocered);
            break;
        }
        case 3: {
            Destruction(ocered);
            break;
        }
        case 4: {
            New(ocered);
            break;
        }
        case 5: {
            Delete(ocered);
            break;
        }
        case 6: {
            Kolichestvo(ocered);
            break;
        }
        case 7: {
            ViewQueue(ocered.Pbeg);
            break;
        }
        }
    } while (choice != 0);

    return 0;
}

//#include <iostream>
//#include <queue>
//#include <unordered_set>
//#include <algorithm> 
//using namespace std;
//
//struct Queue {
//    int key;   
//    int value; 
//};
//
//struct CircularQueue {
//    queue<Queue> q;             
//    unordered_set<int> usedKeys; 
//
//    CircularQueue() {
//      
//        usedKeys.clear();
//    }
//};
//
//void init_queue(CircularQueue& cq) {
//    int n;
//    cout << "Введите размер очереди: ";
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int key;
//        cout << "Введите уникальный ключ для элемента: ";
//        cin >> key;
//
//        if (cq.usedKeys.count(key) > 0) {
//            cout << "Ошибка: Вы ввели неуникальное значение для ключа." << endl;
//            i--;
//        }
//        else {
//            cq.usedKeys.insert(key);
//
//            int value;
//            cout << "Введите значение для элемента: ";
//            cin >> value;
//
//            cq.q.push({ key, value });
//        }
//    }
//    cout << "Очередь инициализирована." << endl;
//}
//
//bool hasDuplicateKeys(const CircularQueue& cq1, const CircularQueue& cq2) {
//    unordered_set<int> keys;
//
//    
//    queue<Queue> tempQueue1 = cq1.q;
//    while (!tempQueue1.empty()) {
//        keys.insert(tempQueue1.front().key);
//        tempQueue1.pop();
//    }
//
//    
//    queue<Queue> tempQueue2 = cq2.q;
//    while (!tempQueue2.empty()) {
//        if (keys.count(tempQueue2.front().key) > 0) {
//            return true; 
//        }
//        tempQueue2.pop();
//    }
//
//    return false;
//}
//
//
//void ConcatenateQueues(CircularQueue& cq1, CircularQueue& cq2) {
//    if (hasDuplicateKeys(cq1, cq2)) {
//        cout << "Ошибка: Конкатенация не может быть выполнена из-за дублирующихся ключей." << endl;
//        return;
//    }
//
//    while (!cq2.q.empty()) {
//        cq1.q.push(cq2.q.front());
//        cq2.q.pop();
//    }
//}
//
//void Cleaning(CircularQueue& cq) {
//    while (!cq.q.empty()) {
//        cq.q.pop();
//    }
//    cq.usedKeys.clear();
//    cout << "Очередь очищена!" << endl;
//}
//
//void Delete(CircularQueue& cq) {
//    if (!cq.q.empty()) {
//        int keyToRemove = cq.q.front().key;
//        cq.q.pop();
//        cq.usedKeys.erase(keyToRemove);
//        cout << "Первый элемент успешно удален из очереди." << endl;
//    }
//    else {
//        cout << "Очередь пуста. Удаление невозможно." << endl;
//    }
//}
//
//void Kolichestvo(const CircularQueue& cq) {
//    cout << "Количество элементов в очереди: " << cq.q.size() << endl;
//}
//
//void SearchByKey(const CircularQueue& cq) {
//    int searchKey;
//    cout << "Введите ключ для поиска элемента: ";
//    cin >> searchKey;
//
//    queue<Queue> tempQueue = cq.q; 
//    bool found = false;
//    while (!tempQueue.empty()) {
//        if (tempQueue.front().key == searchKey) {
//            cout << "Элемент с ключом " << searchKey << " найден. Значение: " << tempQueue.front().value << endl;
//            found = true;
//            break;
//        }
//        tempQueue.pop();
//    }
//
//    if (!found) {
//        cout << "Элемент с ключом " << searchKey << " не найден." << endl;
//    }
//}
//
//void SearchByValue(const CircularQueue& cq) {
//    int searchValue;
//    cout << "Введите значение для поиска позиции: ";
//    cin >> searchValue;
//
//    int position = 0;
//    bool found = false;
//
//   
//    queue<Queue> tempQueue = cq.q; 
//    while (!tempQueue.empty()) {
//        if (tempQueue.front().value == searchValue) {
//            cout << "Элемент со значением " << searchValue << " найден на позиции " << position << "." << endl;
//            found = true;
//            break;
//        }
//        tempQueue.pop();
//        position++;
//    }
//
//    if (!found) {
//        cout << "Элемент со значением " << searchValue << " не найден в очереди." << endl;
//    }
//}
//
//
//void FindMinMax(const CircularQueue& cq) {
//    if (cq.q.empty()) {
//        cout << "Очередь пуста. Невозможно найти минимальное и максимальное значения." << endl;
//        return;
//    }
//
//    int minVal = INT_MAX;
//    int maxVal = INT_MIN;
//
//    
//    queue<Queue> tempQueue = cq.q;
//    while (!tempQueue.empty()) {
//        minVal = min(minVal, tempQueue.front().value);
//        maxVal = max(maxVal, tempQueue.front().value);
//        tempQueue.pop();
//    }
//
//    cout << "Минимальное значение: " << minVal << endl;
//    cout << "Максимальное значение: " << maxVal << endl;
//}
//
//void ViewQueue(const CircularQueue& cq) {
//    if (cq.q.empty()) {
//        cout << "Очередь пуста." << endl;
//        return;
//    }
//
//    cout << "Элементы очереди: " << endl;
//
//    queue<Queue> tempQueue = cq.q;
//    while (!tempQueue.empty()) {
//        cout << "Адрес: " << &tempQueue.front() << ", Ключ: " << tempQueue.front().key << ", Значение: " << tempQueue.front().value << endl;
//        tempQueue.pop();
//    }
//}
//
//
//// Главная функция
//int main() {
//    setlocale(LC_ALL, "");
//    CircularQueue ocered1;
//    CircularQueue ocered2;
//    int choice;
//
//    do {
//        cout << "Выберите действие:" << endl;
//        cout << "1. Инициализировать очередь 1" << endl;
//        cout << "2. Инициализировать очередь 2" << endl;
//        cout << "3. Очистить очередь 1" << endl;
//        cout << "4. Очистить очередь 2" << endl;
//        cout << "5. Конкатенировать очереди" << endl;
//        cout << "6. Просмотреть очередь 1" << endl;
//        cout << "7. Просмотреть очередь 2" << endl;
//        cout << "8. Найти элемент по ключу" << endl;
//        cout << "9. Найти элемент по значению" << endl;
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            init_queue(ocered1);
//            break;
//        case 2:
//            init_queue(ocered2);
//            break;
//        case 3:
//            Cleaning(ocered1);
//            break;
//        case 4:
//            Cleaning(ocered2);
//            break;
//        case 5:
//            ConcatenateQueues(ocered1, ocered2);
//            break;
//        case 6:
//            ViewQueue(ocered1);
//            break;
//        case 7:
//            ViewQueue(ocered2);
//            break;
//        case 8:
//            SearchByKey(ocered1);
//            break;
//        case 9:
//            SearchByValue(ocered1);
//            break;
//        case 10:
//            Delete(ocered1);
//            break;
//        case 0:
//            cout << "Завершение программы." << endl;
//            break;
//        default:
//            cout << "Ошибка: неверный ввод. Пожалуйста, попробуйте снова." << endl;
//            break;
//        }
//    } while (choice != 0);
//
//    return 0;
//}
