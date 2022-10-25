#include <bits/stdc++.h>
using namespace std;

struct Node
{
    // data
    int x;

    // references
    //  la mot con tro kieu node
    //  struct Node* next; trong C can phai co struct
    Node *next; // next la dia chi cua phan tu tiep theo nen next phai khai bao bang con tro
};

// typedef struct Node* node; trong C
typedef Node *node;

// tao 1 node moi tu thong tin da co
node TaoNode(int data)
{
    // cap phat dong cho 1 node
    // Node* tmp = new node() voi' node tmp = new Node() la mot
    node tmp = new Node();
    tmp->x = data; // tmp la con tro => phai dung dau "->"
    tmp->next = NULL;
    return tmp;
}

// dem so luong phan tu trong link list
int size(node head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next; // head -> next la dia chi cua node tiep theo
        // khi head -> next tro den NULL => do la node cuoi cung
    }
    return cnt;
}

void display(node head)
{
    cout << "___________________________\n";
    cout << "Link List: ";
    while (head != NULL)
    {
        cout << head->x << " ";
        head = head->next;
    }
    cout << "\n___________________________\n";
}

void addToFirst(node &head, int data)
{
    node newNode = TaoNode(data);
    if (head == NULL)
    {
        // cout << "Node is empty";
        head = newNode;
    }
    else
    {
        // cap nhat tham chieu
        newNode->next = head;
        head = newNode;
    }
}

void addToLast(node &head, int data)
{
    node newNode = TaoNode(data);
    if (head == NULL)
    {
        // cout << "Node is empty";
        head = newNode;
    }
    else
    {
        node tmp = head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        // sau vong while thi tmp chinh la node cuoi => chi can tmp -> next de ra duoc
        // node cuoi muon them vao
        tmp->next = newNode;
    }
}
// xoa phan tu o giua
void addToMiddle(node &head, int data, int pos)
{
    int n = size(head);
    if (pos < 1 || pos > n + 1)
    {
        cout << "Vi tri khong hop le! \n";
        return;
    }
    if (pos == 1)
        addToFirst(head, data);
    else if (pos == n + 1)
        addToLast(head, data);
    else
    {
        node tmp = head;
        for (int i = 1; i <= pos - 2; i++)
        {
            tmp = tmp->next; // tmp chay den node tiep theo
        }
        // vi du, pos = 3, sau khi het vong for, luc nay tmp o vi tri thu 2 => luu dia chi cua node 3
        // ta can cho node 2 luu dia chi cua node moi va cho node moi luu dia chi cua node 3
        node newNode = TaoNode(data);
        newNode->next = tmp->next; // tmp -> next chinh la dia chi cua pos 3
        tmp->next = newNode;
    }
}
// xoa phan tu o cuoi
void deleteFirst(node &head)
{
    if (head == NULL)
    {
        cout << "Link list is empty";
        return;
    }
    node tmp = head;
    head = head->next;
    delete tmp;
}
// xoa phan tu cuoi
void deleteLast(node &head)
{
    if (head == NULL)
    {
        cout << "Link list is empty\n";
        return;
    }
    node p = head;
    node q = NULL;
    while (p->next != NULL)
    {
        q = p;
        p = p->next;
    }
    // sau vong lap thi q chinh la node thu 2 tinh tu cuoi cung
    // ta chi can xoa p vi luc nay p chay den node cuoi cung
    // sau do cho q tro vao con tro NULL => q la node cuoi
    delete p;
    if (q == NULL)
    { // danh sach lien ket co 1 phan tu
        head = NULL;
    }
    else
        q->next = NULL;
}

// xoa o bat ky vi tri nao
void deleteMiddle(node &head, int pos)
{
    int n = size(head);
    if (pos < 1 || pos > n)
        cout << "Vi tri xoa khong hop le\n";
    node p = head, q = NULL;
    for (int i = 1; i < pos; i++)
    {
        q = p;
        p = p->next;
    }
    // vi du, xoa vi tri thu 3, sau vong for, q se o vi tri thu 2, p o vi tri thu 3
    // => cho q tro vao vi tri thu 4, luc nay p -> next chinh la vi tri thu 4
    // => gan q -> next = p -> next de cho q tro vao vi tru thu 4, luc nay thi xoa p
    if (q != NULL)
    {
        q->next = p->next;
    }
    else
    {
        head = head->next;
        // head = NULL; khong duoc nhu the nay vi neu xoa o vi tri dau tien thi
        // head = NULL se xoa het tat ca trong link list
    }
    delete p;
}
// tim kiem element
bool searchElement(node head, int value)
{
    while (head != NULL)
    {
        if (head->x == value)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}

void sortLinkList(node &head)
{
    for (node i = head; i != NULL; i = i->next)
    {
        node _min = i;
        for (node j = i->next; j != NULL; j = j->next)
        {
            if (j->x < _min->x)
                _min = j;
        }
        // luc nay _min chinh la node co data nho nhat
        // i van la node ban dau => swap 2 gia tri nay cho nhau
        // swap _min -> x va i -> x
        int tmp = _min->x;
        _min->x = i->x;
        i->x = tmp;
    }
}

void reverseLinkList(node &head)
{
    vector<int> V;
    node tmp = head;
    while (tmp != NULL)
    {
        V.push_back(tmp->x);
        tmp = tmp->next;
    }
    reverse(V.begin(), V.end());
    node p = head;
    int idx = 0;
    while (p != NULL)
    {
        p->x = V[idx++];
        p = p->next;
    }
}

int main()
{
    node head = NULL;
    while (1)
    {
        cout << "----------------------------MENU---------------------------\n";
        cout << "0. Ket thuc chuong trinh\n";
        cout << "1. Them 1 node vao dau danh sach lien ket\n";
        cout << "2. Them 1 node vao cuoi danh sach lien ket\n";
        cout << "3. Chen 1 node vao danh sach lien ket \n";
        cout << "4. Xoa 1 node o dau danh sach lien ket\n";
        cout << "5. Xoa 1 node o cuoi danh sach lien ket\n";
        cout << "6. Xoa 1 node o giua danh sach lien ket\n";
        cout << "7. Tim kiem phan tu trong danh sach lien ket\n";
        cout << "8. Sap xep danh sach lien ket theo thu tu tang dan\n";
        cout << "9. Dao nguoc danh sach lien ket\n";
        cout << "10. Hien thi danh sach lien ket \n";
        cout << "-----------------------------------------------------------\n";
        cout << "Nhap lua chon: ";
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        if (n == 1)
        {
            int x;
            cout << "Nhap gia tri can them: ";
            cin >> x;
            addToFirst(head, x);
        }
        if (n == 2)
        {
            int x;
            cout << "Nhap gia tri can them: ";
            cin >> x;
            addToLast(head, x);
        }
        if (n == 3)
        {
            int x;
            cout << "Nhap gia tri can them: ";
            cin >> x;
            int pos;
            cout << "Nhap vi tri can chen: ";
            cin >> pos;
            addToMiddle(head, x, pos);
        }
        if (n == 4)
        {
            deleteFirst(head);
        }
        if (n == 5)
        {
            deleteLast(head);
        }
        if (n == 6)
        {
            int pos;
            cout << "Nhap vi tri can xoa: ";
            cin >> pos;
            deleteMiddle(head, pos);
        }
        if (n == 7)
        {
            int x;
            cout << "Phan tu muon tim: ";
            cin >> x;
            if (searchElement(head, x))
                cout << "Tim thay phan tu\n";
            else
                cout << "Phan tu khong ton tai\n";
        }
        if (n == 8)
        {
            sortLinkList(head);
            cout << "Danh sach sau khi sap xep: \n";
            display(head);
        }
        if (n == 9)
        {
            reverseLinkList(head);
            cout << "Danh sach sau khi dao: \n";
            display(head);
        }
        if (n == 10)
        {
            display(head);
        }
    }
}