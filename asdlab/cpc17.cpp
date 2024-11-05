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
//        cout << "\n�������� ��������:" << endl;
//        cout << "1)�������� �������" << endl;
//        cout << "2)���������� ������" << endl;
//        cout << "3)������� ������" << endl;
//        cout << "4)�����" << endl;
//
//        int choice;
//        cout << "�������� �: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            int inf;
//            cout << "������� �������� ��� ����������: ";
//            cin >> inf;
//            root = insert(root, inf);
//            cout << "������� �� ��������� " << inf << " ���������" << endl;
//            break;
//        }
//        case 2:
//            destroyTree(root);
//            root = nullptr;
//            cout << "������ ����������" << endl;
//            break;
//        case 3:
//            cout << "������:" << endl;
//            printTree(root);
//            break;
//        case 4:
//            cout << "����� �� ���������." << endl;
//            return 0;
//        default:
//            cout << "�������� �����. ����������, ��������� �������." << endl;
//            break;
//        }
//    }
//
//    return 0;
//}
