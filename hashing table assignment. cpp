
 #include <stdio.h>

#define CAPACITY 10
#define EMPTY -1

int hash_table[CAPACITY];

int hashFunction(int key)
{
    return key % CAPACITY;
}

void initTable()
{
    int i;
    for (i = 0; i < CAPACITY; i++)
    {
        hash_table[i] = EMPTY;
    }
}

void insert(int key)
{
    int index;
    int i;

    index = hashFunction(key);
    i = 0;

    while (hash_table[(index + i) % CAPACITY] != EMPTY && i < CAPACITY)
    {
        printf("Collision at index %d, checking next slot...\n",
               (index + i) % CAPACITY);
        i = i + 1;
    }

    if (i == CAPACITY)
    {
        printf("Hash table is full, cannot insert %d\n", key);
        return;
    }

    hash_table[(index + i) % CAPACITY] = key;
    printf("Inserted %d at index %d\n", key, (index + i) % CAPACITY);
}

int search(int key)
{
    int index;
    int i;

    index = hashFunction(key);
    i = 0;

    while (i < CAPACITY)
    {
        if (hash_table[(index + i) % CAPACITY] == EMPTY)
        {
            return -1;
        }
        if (hash_table[(index + i) % CAPACITY] == key)
        {
            return (index + i) % CAPACITY;
        }
        i = i + 1;
    }

    return -1;
}

void display()
{
    int i;

    printf("\n---- HASH TABLE ----\n");
    for (i = 0; i < CAPACITY; i++)
    {
        if (hash_table[i] == EMPTY)
        {
            printf("Index %d : EMPTY\n", i);
        }
        else
        {
            printf("Index %d : %d\n", i, hash_table[i]);
        }
    }
    printf("--------------------\n");
}

int main()
{
    int result;

    initTable();

    printf("Hash Function: key %% %d\n\n", CAPACITY);

    printf("hashFunction(13) = %d\n", hashFunction(13));
    printf("hashFunction(23) = %d\n", hashFunction(23));
    printf("hashFunction(33) = %d\n\n", hashFunction(33));

    insert(13);
    insert(23);
    insert(33);
    insert(5);

    display();

    result = search(23);
    if (result == -1)
    {
        printf("Key 23 not found\n");
    }
    else
    {
        printf("Key 23 found at index %d\n", result);
    }

    return 0;
}
