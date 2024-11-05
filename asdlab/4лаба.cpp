//////#1 ������� �������
//#include <iostream>
//#include <queue>
//#include <unordered_set>
//using namespace std;
//void Cleaning(queue<pair<int, int>>& q) {
//    while (!q.empty()) {
//        q.pop();
//    }
//    cout << "������� �������!" << endl;
//}
//
//void Destruction(queue<pair<int, int>>& q) {
//    while (!q.empty()) {
//        q.pop();
//    }
//
//    cout << "������� ����������!" << endl;
//
//}
//void New(queue<pair<int, int>>& q, unordered_set<int>& usedKeys) {
//    int key;
//    cout << "������� ���������� ���� ��� ������ ��������: ";
//    cin >> key;
//
//    if (usedKeys.count(key) > 0) {
//        cout << "������: �� ����� ������������ �������� ��� �����." << endl;
//    }
//    else {
//        usedKeys.insert(key);
//
//        int b;
//        cout << "������� �������� ��� ������ ��������: ";
//        cin >> b;
//
//        q.push(make_pair(key, b));
//        cout << "����� ������� �������� � �������." << endl;
//    }
//}
//void Delete(queue<pair<int, int>>& q, unordered_set<int>& usedKeys) {
//    if (!q.empty()) {
//        int keyToRemove = q.front().first;
//        q.pop();
//        usedKeys.erase(keyToRemove);
//        cout << "������ ������� ������� ������ �� �������." << endl;
//    }
//    else {
//        cout << "������� �����. �������� ����������." << endl;
//    }
//}
//void Kolichestvo(const queue<pair<int, int>>& q) {
//    cout << "���������� ��������� � �������: " << q.size() << endl;
//}
//void NaityKluch(const queue<pair<int, int>>& q) {
//    int searchKey;
//    cout << "������� ���� ��� ������ ��������: ";
//    cin >> searchKey;
//
//    bool found = false;
//    queue<pair<int, int>> tempQueue = q;
//
//    while (!tempQueue.empty()) {
//        if (tempQueue.front().first == searchKey) {
//            cout << "������� � ������ " << searchKey << " ������. ��������: " << tempQueue.front().second << endl;
//            found = true;
//            break;
//        }
//        tempQueue.pop();
//    }
//
//    if (!found) {
//        cout << "������� � ������ " << searchKey << " �� ������." << endl;
//    }
//}
//void SearchByValue(const queue<pair<int, int>>& q) {
//    int searchValue;
//    cout << "������� �������� ��� ������ �������: ";
//    cin >> searchValue;
//
//    int position = 0;
//    bool found = false;
//    queue<pair<int, int>> tempQueue = q;
//
//    while (!tempQueue.empty()) {
//        if (tempQueue.front().second == searchValue) {
//            cout << "������� �� ��������� " << searchValue << " ������ �� ������� " << position << "." << endl;
//            found = true;
//            break;
//        }
//        tempQueue.pop();
//        position++;
//    }
//
//    if (!found) {
//        cout << "������� �� ��������� " << searchValue << " �� ������ � �������." << endl;
//    }
//}
//void FindMinMax(const queue<pair<int, int>>& q) {
//    if (q.empty()) {
//        cout << "������� �����. ���������� ����� ����������� � ������������ ��������." << endl;
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
//    cout << "����������� ��������: " << minVal << endl;
//    cout << "������������ ��������: " << maxVal << endl;
//}
//void ViewQueue(const queue<pair<int, int>>& q) {
//    if (q.empty()) {
//        cout << "������� �����." << endl;
//        return;
//    }
//
//    cout << "�������� �������: ";
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
//    cout << "������� ������ �������:" << endl;
//    cin >> n;
//    do {
//        cout << "���� ��������:" << endl;
//        cout << "�������� �1: ��������� ������������� ������� " << endl;
//        cout << "�������� �2: ��������� ������� �������" << endl;
//        cout << "�������� �3: ��������� ����������� �������" << endl;
//        cout << "�������� �4: ��������� ���������� ������ ��������" << endl;
//        cout << "�������� �5: ��������� �������� ��������" << endl;
//        cout << "�������� �6: ������� ���������� ��������� � �������" << endl;
//        cout << "�������� �7: ��������� ����� �������� �� �����" << endl;
//        cout << "�������� �8: ��������� ����� ������� �������� �� ��������" << endl;
//        cout << "�������� �9: ��������� ����� ������������� � ������������ ��������" << endl;
//        cout << "�������� �10: ����������� �������� �������" << endl;
//        cout << "�������� ��������: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            cout << "������� " << n << " ��������� ������� : " << endl;
//            for (int i = 0; i < n; i++) {
//                int key;
//                cout << "������� ���������� ���� ��� ��������: ";
//                cin >> key;
//
//                if (usedKeys.count(key) > 0) {
//                    cout << "������: �� ����� ������������ �������� ��� �����." << endl;
//
//                    i--;
//                }
//                else {
//                    usedKeys.insert(key);
//
//                    int b;
//                    cout << "������� �������� ��� ��������: ";
//                    cin >> b;
//
//                    ocered.push(make_pair(key, b));
//                }
//            }
//            cout << "������� ����������������." << endl;
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

//////���������
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
//    cout << "������� �������!" << endl;
//}
//
//void Destruction(CircularQueue& cq) {
//    Cleaning(cq);
//    cq.Pbeg = cq.Pend = nullptr;
//    cq.usedKeys.clear();
//    cout << "������� ����������!" << endl;
//}
//
//void New(CircularQueue& ocered) {
//    int key;
//    cout << "������� ���������� ���� ��� ������ ��������: ";
//    cin >> key;
//
//    if (ocered.usedKeys.count(key) > 0) {
//        cout << "������: �� ����� ������������ �������� ��� �����." << endl;
//    }
//    else {
//        ocered.usedKeys.insert(key);
//
//        int b;
//        cout << "������� �������� ��� ������ ��������: ";
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
//        cout << "����� ������� �������� � �������." << endl;
//    }
//}
//
//void Delete(CircularQueue& cq) {
//    if (cq.Pbeg == nullptr) {
//        cout << "������� �����. �������� ����������." << endl;
//    }
//    else {
//        int keyToRemove = cq.Pbeg->item;
//        Queue* pv = cq.Pbeg;
//        cq.Pbeg = cq.Pbeg->next;
//        delete pv;
//        cq.usedKeys.erase(keyToRemove);
//        cout << "������ ������� ������� ������ �� �������." << endl;
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
//    cout << "���������� ��������� � �������: " << count << endl;
//}
//
//void ViewQueue(Queue* Pbeg, Queue* Pend) {
//    if (Pbeg == nullptr) {
//        cout << "������� �����." << endl;
//        return;
//    }
//
//    cout << "�������� �������: ";
//    Queue* pv = Pbeg;
//
//    while (pv != nullptr) {
//        cout<< pv->item << " �����: " << pv << " " << endl;
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
//    cout << "������� ������ �������:" << endl;
//    cin >> n;
//
//    init_queue(ocered, n);
//
//    do {
//        cout << "���� ��������:" << endl;
//        cout << "�������� �1: ��������� ������������� ������� " << endl;
//        cout << "�������� �2: ��������� ������� �������" << endl;
//        cout << "�������� �3: ��������� ����������� �������" << endl;
//        cout << "�������� �4: ��������� ���������� ������ ��������" << endl;
//        cout << "�������� �5: ��������� �������� ��������" << endl;
//        cout << "�������� �6: ������� ���������� ��������� � �������" << endl;
//        cout << "�������� �7: ����������� �������� �������" << endl;
//        cout << "�������� �������� (0 - ���������): ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            cout << "������� " << n << " ��������� ������� : " << endl;
//            for (int i = 0; i < n; i++) {
//                int key;
//                cout << "������� ���������� ���� ��� ��������: ";
//                cin >> key;
//
//                if (ocered.usedKeys.count(key) > 0) {
//                    cout << "������: �� ����� ������������ �������� ��� �����." << endl;
//                    i--;
//                }
//                else {
//                    ocered.usedKeys.insert(key);
//                    int b;
//                    cout << "������� �������� ��� ��������: ";
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
//            cout << "������� ����������������." << endl;
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
//    cout << "������� ������ �������: ";
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int key;
//        cout << "������� ���������� ���� ��� ��������: ";
//        cin >> key;
//
//        if (usedKeys.count(key) > 0) {
//            cout << "������: �� ����� ������������ �������� ��� �����." << endl;
//            i--;
//        }
//        else {
//            usedKeys.insert(key);
//
//            int value;
//            cout << "������� �������� ��� ��������: ";
//            cin >> value;
//
//            q.push({ key, value });
//        }
//    }
//    cout << "������� ����������������." << endl;
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
//        cout << "������: ������������ �� ����� ���� ��������� ��-�� ������������� ������." << endl;
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
//    cout << "������� �������!" << endl;
//}
//
//void Delete(queue<Queue>& q, unordered_set<int>& usedKeys) {
//    if (!q.empty()) {
//        int keyToRemove = q.front().key;
//        q.pop();
//        usedKeys.erase(keyToRemove);
//        cout << "������ ������� ������� ������ �� �������." << endl;
//    }
//    else {
//        cout << "������� �����. �������� ����������." << endl;
//    }
//}
//
//void Kolichestvo(const queue<Queue>& q) {
//    cout << "���������� ��������� � �������: " << q.size() << endl;
//}
//
//void SearchByKey(const queue<Queue>& q) {
//    int searchKey;
//    cout << "������� ���� ��� ������ ��������: ";
//    cin >> searchKey;
//
//    bool found = false;
//    queue<Queue> tempQueue = q;
//
//    while (!tempQueue.empty()) {
//        if (tempQueue.front().key == searchKey) {
//            cout << "������� � ������ " << searchKey << " ������. ��������: " << tempQueue.front().value << endl;
//            found = true;
//            break;
//        }
//        tempQueue.pop();
//    }
//
//    if (!found) {
//        cout << "������� � ������ " << searchKey << " �� ������." << endl;
//    }
//}
//
//void SearchByValue(const queue<Queue>& q) {
//    int searchValue;
//    cout << "������� �������� ��� ������ �������: ";
//    cin >> searchValue;
//
//    int position = 0;
//    bool found = false;
//    queue<Queue> tempQueue = q;
//
//    while (!tempQueue.empty()) {
//        if (tempQueue.front().value == searchValue) {
//            cout << "������� �� ��������� " << searchValue << " ������ �� ������� " << position << "." << endl;
//            found = true;
//            break;
//        }
//        tempQueue.pop();
//        position++;
//    }
//
//    if (!found) {
//        cout << "������� �� ��������� " << searchValue << " �� ������ � �������." << endl;
//    }
//}
//
//void FindMinMax(const queue<Queue>& q) {
//    if (q.empty()) {
//        cout << "������� �����. ���������� ����� ����������� � ������������ ��������." << endl;
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
//    cout << "����������� ��������: " << minVal << endl;
//    cout << "������������ ��������: " << maxVal << endl;
//}
//
//void ViewQueue(const queue<Queue>& q) {
//    if (q.empty()) {
//        cout << "������� �����." << endl;
//        return;
//    }
//
//    cout << "�������� �������: " << endl;
//    queue<Queue> tempQueue = q;
//
//    while (!tempQueue.empty()) {
//        // Output the address of the current element
//        cout << "����: " << tempQueue.front().key << ", ";
//        cout << "��������: " << tempQueue.front().value << ", ";
//        cout << "�����: " << &tempQueue.front() << endl;
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
//        cout << "���� ��������:" << endl;
//        cout << "�������� �1: ��������� ������������� ������ �������" << endl;
//        cout << "�������� �2: ��������� ������������� ������ �������" << endl;
//        cout << "�������� �3: ��������� ������� ������ �������" << endl;
//        cout << "�������� �4: ��������� ������� ������ �������" << endl;
//        cout << "�������� �5: ��������� ��������� (������������) ���� ��������" << endl;
//        cout << "�������� �6: ������� �������� ������ �������" << endl;
//        cout << "�������� �7: ������� �������� ������ �������" << endl;
//        cout << "�������� �8: ��������� ����� ������� �������� �� ��������" << endl;
//        cout << "�������� �9: ��������� ����� ������������� � ������������ ��������" << endl;
//        cout << "�������� �10: ����������� �������� �������" << endl;
//        cout << " "<<endl;
//
//        cout << "�������� ��������: ";
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
    cout << "������� �������!" << endl;
}

void Destruction(CircularQueue& cq) {
    Cleaning(cq);
    cq.Pbeg = cq.Pend = nullptr;
    cq.usedKeys.clear();
    cout << "������� ����������!" << endl;
}

void New(CircularQueue& ocered) {
    int key;
    cout << "������� ���������� ���� ��� ������ ��������: ";
    cin >> key;

    if (ocered.usedKeys.count(key) > 0) {
        cout << "������������ �������� ��� �����" << endl;
    }
    else {
        ocered.usedKeys.insert(key);

        int b;
        cout << "������� �������� ��� ������ ��������: ";
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

        cout << "����� ������� �������� � �������." << endl;
    }
}

void Delete(CircularQueue& cq) {
    if (cq.Pbeg == nullptr) {
        cout << "������� �����. �������� ����������." << endl;
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
    cout << "������ ������� ������� ������ �� �������." << endl;
}

void Kolichestvo(const CircularQueue& cq) {
    int count = 0;
    Queue* pv = cq.Pbeg;
    if (pv == nullptr) return;
    do {
        count++;
        pv = pv->next;
    } while (pv != cq.Pbeg);
    cout << "���������� ��������� � �������: " << count << endl;
}

void ViewQueue(Queue* Pbeg) {
    if (Pbeg == nullptr) {
        cout << "������� �����." << endl;
        return;
    }

    cout << "�������� �������: " << endl;
    Queue* pv = Pbeg;

    do {
        cout << "��������: " << pv->item
            << ", ���������� ����: " << pv->key
            << ", �����: " << pv << endl; // Show memory address
        pv = pv->next;
    } while (pv != Pbeg);

    cout << endl;
}

int main() {
    setlocale(LC_ALL, "");
    CircularQueue ocered;

    int choice;
    int n;
    cout << "������� ������ �������:" << endl;
    cin >> n;

    init_queue(ocered);

    do {
        cout << "���� ��������:" << endl;
        cout << "�������� �1: ��������� ������������� ������� " << endl;
        cout << "�������� �2: ��������� ������� �������" << endl;
        cout << "�������� �3: ��������� ����������� �������" << endl;
        cout << "�������� �4: ��������� ���������� ������ ��������" << endl;
        cout << "�������� �5: ��������� �������� ��������" << endl;
        cout << "�������� �6: ������� ���������� ��������� � �������" << endl;
        cout << "�������� �7: ����������� �������� �������" << endl;
        cout << "�������� �������� (0 - ���������): ";
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "������� " << n << " ��������� ������� : " << endl;
            for (int i = 0; i < n; i++) {
                int key;
                cout << "������� ���������� ���� ��� ��������: ";
                cin >> key;

                if (ocered.usedKeys.count(key) > 0) {
                    cout << "������: �� ����� ������������ �������� ��� �����." << endl;
                    i--;
                }
                else {
                    ocered.usedKeys.insert(key);
                    int b;
                    cout << "������� �������� ��� ��������: ";
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
            cout << "������� ����������������." << endl;
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
//    cout << "������� ������ �������: ";
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int key;
//        cout << "������� ���������� ���� ��� ��������: ";
//        cin >> key;
//
//        if (cq.usedKeys.count(key) > 0) {
//            cout << "������: �� ����� ������������ �������� ��� �����." << endl;
//            i--;
//        }
//        else {
//            cq.usedKeys.insert(key);
//
//            int value;
//            cout << "������� �������� ��� ��������: ";
//            cin >> value;
//
//            cq.q.push({ key, value });
//        }
//    }
//    cout << "������� ����������������." << endl;
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
//        cout << "������: ������������ �� ����� ���� ��������� ��-�� ������������� ������." << endl;
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
//    cout << "������� �������!" << endl;
//}
//
//void Delete(CircularQueue& cq) {
//    if (!cq.q.empty()) {
//        int keyToRemove = cq.q.front().key;
//        cq.q.pop();
//        cq.usedKeys.erase(keyToRemove);
//        cout << "������ ������� ������� ������ �� �������." << endl;
//    }
//    else {
//        cout << "������� �����. �������� ����������." << endl;
//    }
//}
//
//void Kolichestvo(const CircularQueue& cq) {
//    cout << "���������� ��������� � �������: " << cq.q.size() << endl;
//}
//
//void SearchByKey(const CircularQueue& cq) {
//    int searchKey;
//    cout << "������� ���� ��� ������ ��������: ";
//    cin >> searchKey;
//
//    queue<Queue> tempQueue = cq.q; 
//    bool found = false;
//    while (!tempQueue.empty()) {
//        if (tempQueue.front().key == searchKey) {
//            cout << "������� � ������ " << searchKey << " ������. ��������: " << tempQueue.front().value << endl;
//            found = true;
//            break;
//        }
//        tempQueue.pop();
//    }
//
//    if (!found) {
//        cout << "������� � ������ " << searchKey << " �� ������." << endl;
//    }
//}
//
//void SearchByValue(const CircularQueue& cq) {
//    int searchValue;
//    cout << "������� �������� ��� ������ �������: ";
//    cin >> searchValue;
//
//    int position = 0;
//    bool found = false;
//
//   
//    queue<Queue> tempQueue = cq.q; 
//    while (!tempQueue.empty()) {
//        if (tempQueue.front().value == searchValue) {
//            cout << "������� �� ��������� " << searchValue << " ������ �� ������� " << position << "." << endl;
//            found = true;
//            break;
//        }
//        tempQueue.pop();
//        position++;
//    }
//
//    if (!found) {
//        cout << "������� �� ��������� " << searchValue << " �� ������ � �������." << endl;
//    }
//}
//
//
//void FindMinMax(const CircularQueue& cq) {
//    if (cq.q.empty()) {
//        cout << "������� �����. ���������� ����� ����������� � ������������ ��������." << endl;
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
//    cout << "����������� ��������: " << minVal << endl;
//    cout << "������������ ��������: " << maxVal << endl;
//}
//
//void ViewQueue(const CircularQueue& cq) {
//    if (cq.q.empty()) {
//        cout << "������� �����." << endl;
//        return;
//    }
//
//    cout << "�������� �������: " << endl;
//
//    queue<Queue> tempQueue = cq.q;
//    while (!tempQueue.empty()) {
//        cout << "�����: " << &tempQueue.front() << ", ����: " << tempQueue.front().key << ", ��������: " << tempQueue.front().value << endl;
//        tempQueue.pop();
//    }
//}
//
//
//// ������� �������
//int main() {
//    setlocale(LC_ALL, "");
//    CircularQueue ocered1;
//    CircularQueue ocered2;
//    int choice;
//
//    do {
//        cout << "�������� ��������:" << endl;
//        cout << "1. ���������������� ������� 1" << endl;
//        cout << "2. ���������������� ������� 2" << endl;
//        cout << "3. �������� ������� 1" << endl;
//        cout << "4. �������� ������� 2" << endl;
//        cout << "5. ��������������� �������" << endl;
//        cout << "6. ����������� ������� 1" << endl;
//        cout << "7. ����������� ������� 2" << endl;
//        cout << "8. ����� ������� �� �����" << endl;
//        cout << "9. ����� ������� �� ��������" << endl;
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
//            cout << "���������� ���������." << endl;
//            break;
//        default:
//            cout << "������: �������� ����. ����������, ���������� �����." << endl;
//            break;
//        }
//    } while (choice != 0);
//
//    return 0;
//}
