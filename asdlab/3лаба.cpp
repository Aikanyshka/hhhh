////динамический список
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
//        cout << "Ключ " << key << " уже существует. Введите уникальный ключ." << endl;
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
//        cout << "элемент успешно удален" << endl;
//    }
//    else {
//        cout << "Стек пуст. Невозможно удалить элемент." << endl;
//    }
//}
//
//void printStack(const stack<IntPair>& s) {
//    stack<IntPair> tempStack = s;
//
//    if (tempStack.empty()) {
//        cout << "Стек пуст." << endl;
//    }
//    else {
//        cout << "Элементы в стеке:" << endl;
//        while (!tempStack.empty()) {
//            int key = tempStack.top().first;
//            int value = tempStack.top().second;
//            cout << "Ключ: " << key << ", Значение: " << value << endl;
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
//    cout << "Введите количество элементов в стеке: ";
//    cin >> a;
//    cout << "Введите " << a << " элементов (ключ и значение):" << endl;
//    for (int i = 0; i < a; ++i) {
//        int key, value;
//        cout << "Введите ключ: ";
//        cin >> key;
//        cout << "Введите элемент: ";
//        cin >> value;
//        if (pushNovoeZnach(Spisok, keys, key, value)) {
//            cout << "Элемент успешно добавлен." << endl;
//        }
//        else {
//            cout << "Ключ " << key << " уже существует. Введите уникальный ключ." << endl;
//            i--;
//        }
//    }
//
//    while (true) {
//        cout << "Выберите одну из операций:" << endl;
//        cout << "Операция №1-Найти элемент по ключу" << endl;
//        cout << "Операция №2-Найти позицию элемента по значению" << endl;
//        cout << "Операция №3-Посчитать количество элементов в стеке" << endl;
//        cout << "Операция №4-Очистить стек" << endl;
//        cout << "Операция №5-Выйти из программы" << endl;
//        cout << "Операция №6-Удаление элемента" << endl;
//        cout << "Операция №7-Вывод стека" << endl;
//        cout << "Операция №8-Добавить новый элемент с ключем" << endl;
//        int choice;
//        cin >> choice;
//        switch (choice) {
//        case 1: {
//            int keyToFind;
//            cout << "Введите ключ для поиска элемента: ";
//            cin >> keyToFind;
//            int foundValue;
//            if (naitiPoKey(Spisok, keyToFind, foundValue)) {
//                cout << "Найден элемент с ключом " << keyToFind << ": " << foundValue << endl;
//            }
//            else {
//                cout << "Элемент с ключом " << keyToFind << " не найден в списке." << endl;
//            }
//            break; }
//        case 2: {
//            int valueToFind;
//            cout << "Введите значение для поиска позиции: ";
//            cin >> valueToFind;
//            vector<int> positions = naitiElementaPosition(Spisok, valueToFind);
//
//            if (positions.empty()) {
//                cout << "Элемент с значением " << valueToFind << " не найден в стеке." << endl;
//            }
//            else {
//                cout << "Позиции элемента с значением " << valueToFind << ": ";
//                for (int position : positions) {
//                    cout << position << " ";
//                }
//                if (positions.size() > 1) {
//                    cout << " (позиция с данным значением более 1)" << endl;
//                }
//                else {
//                    cout << endl;
//                }
//            }
//            break; }
//        case 3: {
//            cout << "Количество элементов в стеке: " << countElements(Spisok) << endl;
//            break;
//        }
//        case 4: {
//            if (!Spisok.empty()) {
//                clearStack(Spisok, keys);
//                cout << "Стек успешно очищен." << endl;
//            }
//            else {
//                cout << "Стек уже пуст, нечего очищать." << endl;
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
//            cout << "Введите новый ключ: ";
//            cin >> newKey;
//            cout << "Введите новое значение: ";
//            cin >> newValue;
//            if (pushNovoeZnach(Spisok, keys, newKey, newValue)) {
//                cout << "Новый элемент успешно добавлен." << endl;
//            }
//            else {
//                cout << "Ключ " << newKey << " уже существует. Введите уникальный ключ." << endl;
//            }
//            break;
//        }
//        default: {
//            cout << "Неверный выбор. Попробуйте снова." << endl;
//        }
//        }
//    }
//
//    return 0;
//}

///статический список моей лабы
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
//    cout << "Стек инициализирован." << endl;
//}
//bool pushNovoeZnach(stack<IntPair>& s, set<int>& keys, int key, int value) {
//    if (keys.find(key) == keys.end()) {
//        if (s.size() >= MAX_ELEMENTS) {
//            cout << "Достигнуто максимальное количество элементов. Нельзя добавить больше элементов." << endl;
//            return false;
//        }
//        s.push(make_pair(key, value));
//        keys.insert(key);
//        return true;
//    }
//    else {
//        cout << "Ключ " << key << " уже существует. Введите уникальный ключ." << endl;
//        return false;
//    }
//}
//
//void initializeStack(stack<IntPair>& s, set<int>& keys, int count) {
//    if (s.size()> MAX_ELEMENTS) {
//        cout << "Нельзя инициализировать больше элементов, чем максимальное количество (" << MAX_ELEMENTS << ")." << endl;
//        return;
//    }
//    for (int i = 0; i < count; ++i) {
//        int key, value;
//        cout << "Введите ключ " << i + 1 << ": ";
//        cin >> key;
//        cout << "Введите элемент " << i + 1 << ": ";
//        cin >> value;
//        pushNovoeZnach(s, keys, key, value);
//    }
//    cout << "Элементы успешно инициализированы." << endl;
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
//        cout << "элемент успешно удален" << endl;
//    }
//    else {
//        cout << "Стек пуст. Невозможно удалить элемент." << endl;
//    }
//}
//
//void printStack(const stack<IntPair>& s) {
//    stack<IntPair> tempStack = s;
//
//    if (tempStack.empty()) {
//        cout << "Стек пуст." << endl;
//    }
//    else {
//        cout << "Элементы в стеке:" << endl;
//        while (!tempStack.empty()) {
//            int key = tempStack.top().first;
//            int value = tempStack.top().second;
//            cout << "Ключ: " << key << ", Значение: " << value << endl;
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
//    cout << "Введите количество элементов в стеке: ";
//    cin >> a;
//
//    if (a > MAX_ELEMENTS) {
//        cout << "Количество элементов превышает максимальное допустимое значение (" << MAX_ELEMENTS << ")." << endl;
//        return 1;
//    }
//    cout << "Введите " << a << " элементов (ключ и значение):" << endl;
//    for (int i = 0; i < a; ++i) {
//        int key, value;
//        cout << "Введите ключ: ";
//        cin >> key;
//        cout << "Введите элемент: ";
//        cin >> value;
//        if (pushNovoeZnach(Spisok, keys, key, value)) {
//            cout << "Элемент успешно добавлен." << endl;
//        }
//        else {
//            //cout << "Ключ " << key << " уже существует. Введите уникальный ключ." << endl;
//            i--;
//        }
//    }
//    while (true) {
//        cout << "Выберите одну из операций:" << endl;
//        cout << "Операция №1-Найти элемент по ключу" << endl;
//        cout << "Операция №2-Найти позицию элемента по значению" << endl;
//        cout << "Операция №3-Посчитать количество элементов в стеке" << endl;
//        cout << "Операция №4-Очистить стек" << endl;
//        cout << "Операция №5-Выйти из программы" << endl;
//        cout << "Операция №6-Удаление элемента" << endl;
//        cout << "Операция №7-Вывод стека" << endl;
//        cout << "Операция №8-Добавить новый элемент с ключем" << endl;
//        cout << "Операция №9 - Инициализация элементов" << endl;
//        int choice;
//        cin >> choice;
//        switch (choice) {
//        case 1: {
//            int keyToFind;
//            cout << "Введите ключ для поиска элемента: ";
//            cin >> keyToFind;
//            int foundValue;
//            if (naitiPoKey(Spisok, keyToFind, foundValue)) {
//                cout << "Найден элемент с ключом " << keyToFind << ": " << foundValue << endl;
//            }
//            else {
//                cout << "Элемент с ключом " << keyToFind << " не найден в списке." << endl;
//            }
//            break; }
//        case 2: {
//            int valueToFind;
//            cout << "Введите значение для поиска позиции: ";
//            cin >> valueToFind;
//            vector<int> positions = naitiElementaPosition(Spisok, valueToFind);
//
//            if (positions.empty()) {
//                cout << "Элемент с значением " << valueToFind << " не найден в стеке." << endl;
//            }
//            else {
//                cout << "Позиции элемента с значением " << valueToFind << ": ";
//                for (int position : positions) {
//                    cout << position << " ";
//                }
//                if (positions.size() > 1) {
//                    cout << " (позиция с данным значением более 1)" << endl;
//                }
//                else {
//                    cout << endl;
//                }
//            }
//            break; }
//        case 3: {
//            cout << "Количество элементов в стеке: " << countElements(Spisok) << endl;
//            break;
//        }
//        case 4: {
//            if (!Spisok.empty()) {
//                clearStack(Spisok, keys);
//                cout << "Стек успешно очищен." << endl;
//            }
//            else {
//                cout << "Стек уже пуст, нечего очищать." << endl;
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
//            cout << "Введите новый ключ: ";
//            cin >> newKey;
//            cout << "Введите новое значение: ";
//            cin >> newValue;
//            if (pushNovoeZnach(Spisok, keys, newKey, newValue)) {
//                cout << "Новый элемент успешно добавлен." << endl;
//            }
//            else {
//                cout << "Ключ " << newKey << " уже существует. Введите уникальный ключ." << endl;
//            }
//            break;
//        }
//        case 9: {
//            int newCount;
//            cout << "Введите количество элементов для инициализации: ";
//            cin >> newCount;
//            if (newCount > MAX_ELEMENTS - Spisok.size()) {
//                cout << "Нельзя инициализировать больше, чем максимальное количество элементов минус текущее количество элементов." << endl;
//            }
//            else {
//                initializeStack(Spisok, keys, newCount);
//            }
//            break;
//        }
//        default: {
//            cout << "Неверный выбор. Попробуйте снова." << endl;
//        }
//        }
//    }
//
//    return 0;
//}
//
//
//   
