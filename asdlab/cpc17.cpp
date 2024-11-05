//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//struct TreeNode {
//    int inf;
//    TreeNode* left;
//    TreeNode* right;
//
//    TreeNode(int value) : inf(value), left(nullptr), right(nullptr) {}
//};
//
//TreeNode* insert(TreeNode* x, int inf) {
//    if (x == nullptr) {
//        return new TreeNode(inf);
//    }
//
//    if (inf % 2 == 1) {
//        x->left = insert(x->left, inf);
//    }
//    else {
//        x->right = insert(x->right, inf);
//    }
//
//    return x;
//}
//
//void destroyTree(TreeNode* x) {
//    if (x != nullptr) {
//        destroyTree(x->left);
//        destroyTree(x->right);
//        delete x;
//    }
//}
//
//void printTree(TreeNode* x, int level = 0) {
//    const int SPACES = 4;
//
//    if (x != nullptr) {
//        printTree(x->right, level + 1);
//
//        for (int i = 0; i < level * SPACES; ++i) {
//            cout << " ";
//        }
//
//        cout << setw(4) << x->inf << endl;
//
//        printTree(x->left, level + 1);
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    TreeNode* root = nullptr;
//
//    while (true) {
//        cout << "\nвыберите операцию:" << endl;
//        cout << "1)добавить вершину" << endl;
//        cout << "2)уничтожить дерево" << endl;
//        cout << "3)вывести дерево" << endl;
//        cout << "4)выход" << endl;
//
//        int choice;
//        cout << "операция №: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            int inf;
//            cout << "Введите значение для добавления: ";
//            cin >> inf;
//            root = insert(root, inf);
//            cout << "вершина со значением " << inf << " добавлена" << endl;
//            break;
//        }
//        case 2:
//            destroyTree(root);
//            root = nullptr;
//            cout << "дерево уничтожено" << endl;
//            break;
//        case 3:
//            cout << "Дерево:" << endl;
//            printTree(root);
//            break;
//        case 4:
//            cout << "Выход из программы." << endl;
//            return 0;
//        default:
//            cout << "Неверный выбор. Пожалуйста, повторите попытку." << endl;
//            break;
//        }
//    }
//
//    return 0;
//}
