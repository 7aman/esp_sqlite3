#define NDEBUG

// #define SQLITE_OMIT_ALTERTABLE
// #define SQLITE_OMIT_ANALYZE
// #define SQLITE_OMIT_ATTACH
// #define SQLITE_OMIT_AUTOINCREMENT
// #define SQLITE_OMIT_BETWEEN_OPTIMIZATION
// #define SQLITE_OMIT_CTE
// #define SQLITE_OMIT_DISKIO
// #define SQLITE_OMIT_LIKE_OPTIMIZATION
// #define SQLITE_OMIT_LOCALTIME
// #define SQLITE_OMIT_MEMORYDB
// #define SQLITE_OMIT_OR_OPTIMIZATION
// #define SQLITE_OMIT_PAGER_PRAGMAS
// #define SQLITE_OMIT_PRAGMA
// #define SQLITE_OMIT_REINDEX
// #define SQLITE_OMIT_TRIGGER
// #define SQLITE_OMIT_VACUUM
// #define SQLITE_OMIT_VIEW
// #define SQLITE_OMIT_VIRTUALTABLE
// #define SQLITE_OMIT_WSD
// #define SQLITE_OMIT_COMPLETE
// #define SQLITE_OMIT_SUBQUERY
// #define SQLITE_OMIT_DATETIME_FUNCS
// #define SQLITE_OMIT_FLOATING_POINT
// #define SQLITE_OMIT_BUILTIN_TEST
#define SQLITE_OMIT_AUTHORIZATION
#define SQLITE_OMIT_AUTOINIT
#define SQLITE_OMIT_AUTOMATIC_INDEX
#define SQLITE_OMIT_AUTORESET
#define SQLITE_OMIT_AUTOVACUUM
#define SQLITE_OMIT_BLOB_LITERAL
#define SQLITE_OMIT_BTREECOUNT
#define SQLITE_OMIT_CAST
#define SQLITE_OMIT_CHECK
#define SQLITE_OMIT_COMPILEOPTION_DIAGS
#define SQLITE_OMIT_COMPOUND_SELECT
#define SQLITE_OMIT_CONFLICT_CLAUSE
#define SQLITE_OMIT_DECLTYPE
#define SQLITE_OMIT_DEPRECATED
#define SQLITE_OMIT_EXPLAIN
#define SQLITE_OMIT_FLAG_PRAGMAS
#define SQLITE_OMIT_FOREIGN_KEY
#define SQLITE_OMIT_GET_TABLE
#define SQLITE_OMIT_INCRBLOB
#define SQLITE_OMIT_INTEGRITY_CHECK
#define SQLITE_OMIT_LOAD_EXTENSION
#define SQLITE_OMIT_LOOKASIDE
#define SQLITE_OMIT_PARSER_TRACE
#define SQLITE_OMIT_PROGRESS_CALLBACK
#define SQLITE_OMIT_QUICKBALANCE
#define SQLITE_OMIT_SCHEMA_PRAGMAS
#define SQLITE_OMIT_SCHEMA_VERSION_PRAGMAS
#define SQLITE_OMIT_SHARED_CACHE
#define SQLITE_OMIT_TCL_VARIABLE
#define SQLITE_OMIT_TEMPDB
#define SQLITE_OMIT_TRACE
#define SQLITE_OMIT_TRUNCATE_OPTIMIZATION
#define SQLITE_OMIT_UTF16
#define SQLITE_OMIT_XFER_OPT
#define SQLITE_DISABLE_LFS
#define SQLITE_DISABLE_DIRSYNC
#define SQLITE_DISABLE_FTS3_UNICODE
#define SQLITE_DISABLE_FTS4_DEFERRED

#define SQLITE_OMIT_WAL                 1

#define SQLITE_CORE                     1
#define SQLITE_SYSTEM_MALLOC            1
#define SQLITE_OS_OTHER                 1
#define SQLITE_THREADSAFE               0
#define SQLITE_NO_SYNC                  1
#define YYSTACKDEPTH                    20
#define SQLITE_TEMP_STORE               1
#define SQLITE_MUTEX_APPDEF             1
#define SQLITE_SECURE_DELETE            0
#define SQLITE_SMALL_STACK              1
#define SQLITE_LIKE_DOESNT_MATCH_BLOBS  1
#define SQLITE_DEFAULT_FOREIGN_KEYS     0
#define SQLITE_DEFAULT_MEMSTATUS        0
#define SQLITE_DEFAULT_LOCKING_MODE     1
#define SQLITE_DEFAULT_LOOKASIDE        512, 128

#define SQLITE_DEFAULT_PCACHE_INITSZ    8
#define SQLITE_POWERSAFE_OVERWRITE      1
#define SQLITE_SORTER_PMASZ             4
#define SQLITE_MAX_EXPR_DEPTH           0

#define SQLITE_PERFORMANCE_TRACE        1
#define SQLITE_COUNTOFVIEW_OPTIMIZATION 0

#define SQLITE_DEFAULT_CACHE_SIZE       -1
#define SQLITE_MAX_DEFAULT_PAGE_SIZE    32768

/* MACROs with default values */
// #define SQLITE_DEFAULT_PAGE_SIZE        4096
// #define SQLITE_DEFAULT_MMAP_SIZE        0
