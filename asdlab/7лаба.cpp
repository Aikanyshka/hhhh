//#include <iostream>
//#include <queue>
//#include <iomanip>
//#include <limits> // ��� ������������� std::numeric_limits
//using namespace std;
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
//    if (inf < x->inf) {
//        x->left = insert(x->left, inf);
//      
//    }
//    else if (inf > x->inf) {
//        x->right = insert(x->right, inf);
//      
//    }
//    else {
//        cout << "������� " << inf << " ��� ����������." << endl;
//    }
//
//    return x;
//}
//
//TreeNode* findMin(TreeNode* x) {
//    while (x->left != nullptr) {
//        x = x->left;
//    }
//    return x;
//}
//
//TreeNode* remove(TreeNode* x, int inf) {
//    if (x == nullptr) {
//        return x;
//    }
//
//    if (inf < x->inf) {
//        x->left = remove(x->left, inf);
//    }
//    else if (inf > x->inf) {
//        x->right = remove(x->right, inf);
//    }
//    else {
//        if (x->left == nullptr) {
//            TreeNode* temp = x->right;
//            delete x;
//            return temp;
//        }
//        else if (x->right == nullptr) {
//            TreeNode* temp = x->left;
//            delete x;
//            return temp;
//        }
//
//        TreeNode* temp = findMin(x->right);
//        x->inf = temp->inf;
//        x->right = remove(x->right, temp->inf);
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
//int countNodes(TreeNode* x) {
//    if (x == nullptr) {
//        return 0;
//    }
//    return 1 + countNodes(x->left) + countNodes(x->right);
//}
//
//int countLeaves(TreeNode* x) {
//    if (x == nullptr) {
//        return 0;
//    }
//    if (x->left == nullptr && x->right == nullptr) {
//        return 1;
//    }
//    return countLeaves(x->left) + countLeaves(x->right);
//}
//
//TreeNode* find(TreeNode* x, int inf) {
//    if (x == nullptr || x->inf == inf) {
//        return x;
//    }
//
//    if (inf < x->inf) {
//        return find(x->left, inf);
//    }
//
//    return find(x->right, inf);
//}
//
//TreeNode* getParent(TreeNode* x, int inf) {
//    if (x == nullptr || (x->left != nullptr && x->left->inf == inf) ||
//        (x->right != nullptr && x->right->inf == inf)) {
//        return x;
//    }
//
//    if (inf < x->inf) {
//        return getParent(x->left, inf);
//    }
//
//    return getParent(x->right, inf);
//}
//
//int getLevel(TreeNode* x, int inf, int level = 0) {
//    if (x == nullptr) {
//        return -1;
//    }
//
//    if (inf == x->inf) {
//        return level;
//    }
//
//    int leftLevel = getLevel(x->left, inf, level + 1);
//    if (leftLevel != -1) {
//        return leftLevel;
//    }
//
//    return getLevel(x->right, inf, level + 1);
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    TreeNode* root = nullptr;
//
//    while (true) {
//        cout << "\n�������� ��������:" << endl;
//        cout << "1)�������� �������" << endl;
//        cout << "2) ������� �������" << endl;
//        cout << "3)����� �������" << endl;
//        cout << "4 ��������� �������" << endl;
//        cout << "5 ������� ������" << endl;
//        cout << "6 ��������� ������" << endl;
//        cout << "7 ���������� ������" << endl;
//
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
//            
//            break;
//        }
//        case 2: {
//            int inf;
//            cout << "�������� �������: ";
//            cin >> inf;
//            if (root != nullptr && root->inf == inf) {
//                cout << "������ ������� ������ ������" << endl;
//            }
//            else {
//                root = remove(root, inf);
//                cout << "�������  " << inf << " �������" << endl;
//            }
//            break;
//        }
//        case 3: {
//            int inf;
//            cout << "����� ������� �����: ";
//            cin >> inf;
//            TreeNode* result = find(root, inf);
//            if (result != nullptr) {
//                cout << "������� �������: ";
//                if (getParent(root, inf) != nullptr) {
//                    cout << "��������: " << getParent(root, inf)->inf << ", ";
//                }
//                cout << "�������: ";
//                if (result->left != nullptr) {
//                    cout << result->left->inf << " ";
//                }
//                if (result->right != nullptr) {
//                    cout << result->right->inf << " ";
//                }
//                cout << "������� �������: " << getLevel(root, inf) << endl;
//            }
//            else {
//                cout << "������� �� �������" << endl;
//            }
//            break;
//        }
//        case 4:
//            cout << "���-�� ������: " << countNodes(root) << endl;
//            break;
//        case 5:
//            cout << "������:" << endl;
//            printTree(root);
//            break;
//        case 6:
//            cout << "����� �������: " << countLeaves(root) << endl;
//            break;
//        case 7:
//            destroyTree(root);
//            root = nullptr;
//            cout << "������ ����������" << endl;
//            break;
//        default:
//            cout << "-" << endl;
//            break;
//        }
//    }
//
//    return 0;
//}