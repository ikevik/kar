#include <dolphin/types.h>
#include <functions.h>
typedef struct HSD_HashEntry {
    struct HSD_HashEntry* next;
    u32 key;
    u32 data;
} HSD_HashEntry;

typedef struct HSD_HashVt {
    u8 pad[0x3C];
    u32 (*hash)(struct HSD_Hash*, u32);
    int (*cmp)(struct HSD_Hash*, u32, u32);
} HSD_HashVt;

typedef struct HSD_Hash {
    HSD_HashVt* vt;
    HSD_HashEntry** table;
    u32 table_size;
} HSD_Hash;

static inline HSD_HashEntry* find(HSD_Hash* hash, u32 idx, u32 key)
{
    HSD_HashEntry* e = hash->table[idx];
    if (e == NULL) {
        e = NULL;
    } else {
        for (; e != NULL; e = e->next) {
            if (hash->vt->cmp(hash, e->key, key) == 0)
                return e;
        }
        e = NULL;
    }
    return e;
}

u32 HSD_HashSearch(HSD_Hash* hash, u32 key, int* found)
{
    u32 idx = hash->vt->hash(hash, key);
    HSD_HashEntry* e;
    assert_line(0x71, idx < hash->table_size);
    e = find(hash, idx, key);
    if (found != NULL)
        *found = (e != NULL);
    if (e != NULL)
        return e->data;
    return 0;
}
