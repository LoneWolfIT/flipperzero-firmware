#pragma once

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

extern const char* DEFAULT_BACKUP_FILENAME;
extern const char* DEFAULT_BACKUP_LOCATION;

typedef struct Storage Storage;

bool lfs_backup_create(Storage* storage, const char* destination);
bool lfs_backup_exists(Storage* storage, const char* source);
bool lfs_backup_unpack(Storage* storage, const char* source);

#ifdef __cplusplus
}
#endif