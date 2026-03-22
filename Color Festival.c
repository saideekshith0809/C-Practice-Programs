#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

int exists(struct Node* head, int val) {
    struct Node* temp = head;
    
    while (temp != NULL) {
        if (temp->data == val)
            return 1;
        temp = temp->next;
    }
    
    return 0;
}

struct Node* insert(struct Node* head, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    newNode->data = val;
    newNode->next = head;
    
    return newNode;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        struct Node* head = NULL;
        int c, count = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d", &c);

            if (!exists(head, c)) {
                head = insert(head, c);
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
