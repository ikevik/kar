typedef int s32;
typedef struct Node {
    s32 pad;
    struct Node* prev;
    struct Node* next;
} Node;

extern s32 lbl_805DD9AC;
extern Node* lbl_805DD9B0;
extern Node* lbl_805DD9B4;

void fn_80321CBC(void) {}

s32 fn_80321CC0(Node* n)
{
    s32 r = 0;
    if (n->prev != 0 || n->next != 0 || lbl_805DD9B0 == n) {
        r = 1;
    }
    return r;
}

void fn_80321CF4(Node* n)
{
    if (lbl_805DD9B0 != 0) {
        n->next = lbl_805DD9B0;
        lbl_805DD9B0->prev = n;
        lbl_805DD9B0 = n;
    } else {
        lbl_805DD9B4 = n;
        lbl_805DD9B0 = n;
    }
    lbl_805DD9AC++;
}

void fn_80321D2C(Node* n)
{
    if (lbl_805DD9B0 != 0) {
        n->prev = lbl_805DD9B4;
        lbl_805DD9B4->next = n;
        lbl_805DD9B4 = n;
    } else {
        lbl_805DD9B4 = n;
        lbl_805DD9B0 = n;
    }
    lbl_805DD9AC++;
}

void fn_80321D68(Node* n)
{
    Node* t = n->prev;
    if (t == 0) {
        t = n->next;
        lbl_805DD9B0 = t;
        if (t != 0) {
            t->prev = 0;
        }
    } else {
        t->next = n->next;
    }
    t = n->next;
    if (t == 0) {
        t = n->prev;
        lbl_805DD9B4 = t;
        if (t != 0) {
            t->next = 0;
        }
    } else {
        t->prev = n->prev;
    }
    n->next = 0;
    n->prev = 0;
    lbl_805DD9AC--;
}
