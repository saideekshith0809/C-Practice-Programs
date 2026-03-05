#include <stdlib.h>

#define HASH_SIZE 20001

int hashKey[HASH_SIZE];
int hashVal[HASH_SIZE];

int hash(int key){
    if(key < 0) key = -key;
    return key % HASH_SIZE;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    for(int i = 0; i < HASH_SIZE; i++)
        hashKey[i] = -1;

    for(int i = 0; i < numsSize; i++){
        int complement = target - nums[i];
        int h = hash(complement);

        while(hashKey[h] != -1){
            if(hashKey[h] == complement){
                int* result = malloc(2 * sizeof(int));
                result[0] = hashVal[h];
                result[1] = i;
                *returnSize = 2;
                return result;
            }
            h = (h + 1) % HASH_SIZE;
        }

        h = hash(nums[i]);
        while(hashKey[h] != -1)
            h = (h + 1) % HASH_SIZE;

        hashKey[h] = nums[i];
        hashVal[h] = i;
    }

    *returnSize = 0;
    return NULL;
}
