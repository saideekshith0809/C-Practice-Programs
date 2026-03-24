
#define HASH_SIZE 1000

struct Node {
    int key;
    int index;
    struct Node* next;
};

struct Node* hashTable[HASH_SIZE];

int hash(int key) {
    if (key < 0) key = -key;
    return key % HASH_SIZE;
}

void insert(int key, int index) {
    int h = hash(key);

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->key = key;
    newNode->index = index;

    newNode->next = hashTable[h];
    hashTable[h] = newNode;
}

struct Node* search(int key) {
    int h = hash(key);
    struct Node* temp = hashTable[h];

    while (temp != NULL) {
        if (temp->key == key)
            return temp;
        temp = temp->next;
    }

    return NULL;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    for (int i = 0; i < HASH_SIZE; i++)
        hashTable[i] = NULL;

    for (int i = 0; i < numsSize; i++) {

        int complement = target - nums[i];

        struct Node* found = search(complement);

        if (found != NULL) {
            int* result = (int*)malloc(2 * sizeof(int));
            result[0] = found->index;
            result[1] = i;
            *returnSize = 2;
            return result;
        }

        insert(nums[i], i);
    }

    *returnSize = 0;
    return NULL;
}
