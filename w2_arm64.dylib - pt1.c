typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    word;
typedef qword Implementation;

typedef struct cfstringStruct cfstringStruct, *PcfstringStruct;

struct cfstringStruct {
    qword field0_0x0;
    qword field1_0x8;
    pointer field2_0x10;
    long field3_0x18;
};

typedef qword Cache;

typedef ulonglong uint64_t;

typedef longlong __int64_t;

typedef __int64_t __darwin_off_t;

typedef ulong __darwin_size_t;

typedef struct utsname utsname, *Putsname;

struct utsname {
    char sysname[256];
    char nodename[256];
    char release[256];
    char version[256];
    char machine[256];
};

typedef ulong uintptr_t;

typedef int int32_t;

typedef long dispatch_queue_priority_t;

typedef struct dispatch_queue_s dispatch_queue_s, *Pdispatch_queue_s;

typedef struct dispatch_queue_s *dispatch_queue_t;

struct dispatch_queue_s {
};

typedef struct method_list_t method_list_t, *Pmethod_list_t;

struct method_list_t {
    dword entsizeAndFlags;
    dword count;
};

typedef struct ivar_list_t ivar_list_t, *Pivar_list_t;

struct ivar_list_t {
    dword entsize;
    dword count;
};

typedef struct method_list_t_19_ method_list_t_19_, *Pmethod_list_t_19_;

typedef struct method_t method_t, *Pmethod_t;

struct method_t {
    string *name;
    string *types;
    void *imp;
};

struct method_list_t_19_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
    struct method_t method12;
    struct method_t method13;
    struct method_t method14;
    struct method_t method15;
    struct method_t method16;
    struct method_t method17;
    struct method_t method18;
};

typedef dword bool;

typedef struct method_list_t_47_ method_list_t_47_, *Pmethod_list_t_47_;

struct method_list_t_47_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
    struct method_t method12;
    struct method_t method13;
    struct method_t method14;
    struct method_t method15;
    struct method_t method16;
    struct method_t method17;
    struct method_t method18;
    struct method_t method19;
    struct method_t method20;
    struct method_t method21;
    struct method_t method22;
    struct method_t method23;
    struct method_t method24;
    struct method_t method25;
    struct method_t method26;
    struct method_t method27;
    struct method_t method28;
    struct method_t method29;
    struct method_t method30;
    struct method_t method31;
    struct method_t method32;
    struct method_t method33;
    struct method_t method34;
    struct method_t method35;
    struct method_t method36;
    struct method_t method37;
    struct method_t method38;
    struct method_t method39;
    struct method_t method40;
    struct method_t method41;
    struct method_t method42;
    struct method_t method43;
    struct method_t method44;
    struct method_t method45;
    struct method_t method46;
};

typedef struct class_t class_t, *Pclass_t;

typedef struct class_rw_t class_rw_t, *Pclass_rw_t;

typedef struct protocol_list_t protocol_list_t, *Pprotocol_list_t;

typedef struct objc_property_list objc_property_list, *Pobjc_property_list;

struct class_rw_t {
    qword flags;
    qword instanceStart;
    qword instanceSize;
    char *name;
    struct method_list_t *baseMethods;
    struct protocol_list_t *baseProtocols;
    struct ivar_list_t *ivars;
    qword weakIvarLayout;
    struct objc_property_list *baseProperties;
};

struct objc_property_list {
    dword entsize;
    dword count;
};

struct class_t {
    struct class_t *isa;
    struct class_t *superclass;
    Cache cache;
    Implementation vtable;
    struct class_rw_t *data;
};

struct protocol_list_t {
    qword count;
};

typedef struct opaqueCMSampleBuffer opaqueCMSampleBuffer, *PopaqueCMSampleBuffer;

struct opaqueCMSampleBuffer {
};

typedef struct protocol_t protocol_t, *Pprotocol_t;

struct protocol_t {
    qword isa;
    string *name;
    struct protocol_list_t *protocols;
    struct method_list_t *instanceMethods;
    struct method_list_t *classMethods;
    struct method_list_t *optionalInstanceMethods;
    struct method_list_t *optionalClassMethods;
    struct objc_property_list *instanceProperties;
    qword unknown0;
    qword unknown1;
};

typedef struct ivar_t ivar_t, *Pivar_t;

struct ivar_t {
    qword *offset;
    string *name;
    string *type;
    dword alignment;
    dword size;
};

typedef struct method_list_t_1_ method_list_t_1_, *Pmethod_list_t_1_;

struct method_list_t_1_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
};

typedef struct objc_property_list_4_ objc_property_list_4_, *Pobjc_property_list_4_;

typedef struct objc_property objc_property, *Pobjc_property;

struct objc_property {
    char *name;
    char *name;
};

struct objc_property_list_4_ {
    dword entsize;
    dword count;
    struct objc_property property0;
    struct objc_property property1;
    struct objc_property property2;
    struct objc_property property3;
};

typedef struct protocol_list_t_1_ protocol_list_t_1_, *Pprotocol_list_t_1_;

struct protocol_list_t_1_ {
    qword count;
    struct protocol_t *protocol0;
};

typedef struct method_list_t_3_ method_list_t_3_, *Pmethod_list_t_3_;

struct method_list_t_3_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
};

typedef struct method_list_t_9_ method_list_t_9_, *Pmethod_list_t_9_;

struct method_list_t_9_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
};

typedef qword ID;

typedef struct method_list_t_18_ method_list_t_18_, *Pmethod_list_t_18_;

struct method_list_t_18_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
    struct method_t method12;
    struct method_t method13;
    struct method_t method14;
    struct method_t method15;
    struct method_t method16;
    struct method_t method17;
};

typedef struct method_list_t_14_ method_list_t_14_, *Pmethod_list_t_14_;

struct method_list_t_14_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
    struct method_t method12;
    struct method_t method13;
};

typedef struct objc_property_list_18_ objc_property_list_18_, *Pobjc_property_list_18_;

struct objc_property_list_18_ {
    dword entsize;
    dword count;
    struct objc_property property0;
    struct objc_property property1;
    struct objc_property property2;
    struct objc_property property3;
    struct objc_property property4;
    struct objc_property property5;
    struct objc_property property6;
    struct objc_property property7;
    struct objc_property property8;
    struct objc_property property9;
    struct objc_property property10;
    struct objc_property property11;
    struct objc_property property12;
    struct objc_property property13;
    struct objc_property property14;
    struct objc_property property15;
    struct objc_property property16;
    struct objc_property property17;
};

typedef struct protocol_list_t_2_ protocol_list_t_2_, *Pprotocol_list_t_2_;

struct protocol_list_t_2_ {
    qword count;
    struct protocol_t *protocol0;
    struct protocol_t *protocol1;
};

typedef struct method_list_t_4_ method_list_t_4_, *Pmethod_list_t_4_;

struct method_list_t_4_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
};

typedef struct method_list_t_2_ method_list_t_2_, *Pmethod_list_t_2_;

struct method_list_t_2_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
};

typedef struct protocol_list_t_4_ protocol_list_t_4_, *Pprotocol_list_t_4_;

struct protocol_list_t_4_ {
    qword count;
    struct protocol_t *protocol0;
    struct protocol_t *protocol1;
    struct protocol_t *protocol2;
    struct protocol_t *protocol3;
};

typedef struct ivar_list_t_4_ ivar_list_t_4_, *Pivar_list_t_4_;

struct ivar_list_t_4_ {
    dword entsize;
    dword count;
    struct ivar_t var0;
    struct ivar_t var1;
    struct ivar_t var2;
    struct ivar_t var3;
};

typedef struct method_list_t_8_ method_list_t_8_, *Pmethod_list_t_8_;

struct method_list_t_8_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
};

typedef struct ivar_list_t_14_ ivar_list_t_14_, *Pivar_list_t_14_;

struct ivar_list_t_14_ {
    dword entsize;
    dword count;
    struct ivar_t var0;
    struct ivar_t var1;
    struct ivar_t var2;
    struct ivar_t var3;
    struct ivar_t var4;
    struct ivar_t var5;
    struct ivar_t var6;
    struct ivar_t var7;
    struct ivar_t var8;
    struct ivar_t var9;
    struct ivar_t var10;
    struct ivar_t var11;
    struct ivar_t var12;
    struct ivar_t var13;
};

typedef struct method_list_t_6_ method_list_t_6_, *Pmethod_list_t_6_;

struct method_list_t_6_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
};

typedef struct method_list_t_12_ method_list_t_12_, *Pmethod_list_t_12_;

struct method_list_t_12_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
};

typedef qword SEL;

typedef struct objc_image_info objc_image_info, *Pobjc_image_info;

struct objc_image_info {
    dword version;
    dword flags;
};

typedef struct method_list_t_50_ method_list_t_50_, *Pmethod_list_t_50_;

struct method_list_t_50_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
    struct method_t method12;
    struct method_t method13;
    struct method_t method14;
    struct method_t method15;
    struct method_t method16;
    struct method_t method17;
    struct method_t method18;
    struct method_t method19;
    struct method_t method20;
    struct method_t method21;
    struct method_t method22;
    struct method_t method23;
    struct method_t method24;
    struct method_t method25;
    struct method_t method26;
    struct method_t method27;
    struct method_t method28;
    struct method_t method29;
    struct method_t method30;
    struct method_t method31;
    struct method_t method32;
    struct method_t method33;
    struct method_t method34;
    struct method_t method35;
    struct method_t method36;
    struct method_t method37;
    struct method_t method38;
    struct method_t method39;
    struct method_t method40;
    struct method_t method41;
    struct method_t method42;
    struct method_t method43;
    struct method_t method44;
    struct method_t method45;
    struct method_t method46;
    struct method_t method47;
    struct method_t method48;
    struct method_t method49;
};

typedef __darwin_size_t size_t;

typedef uint64_t dispatch_time_t;

typedef longlong int64_t;

typedef uint uint32_t;

typedef uint32_t CC_LONG;

typedef void (*dispatch_function_t)(void *);

typedef struct __sFILEX __sFILEX, *P__sFILEX;

struct __sFILEX {
};

typedef struct __sbuf __sbuf, *P__sbuf;

struct __sbuf {
    uchar *_base;
    int _size;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef __darwin_off_t fpos_t;

typedef struct __sFILE FILE;

struct __sFILE {
    uchar *_p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void *_cookie;
    int (*_close)(void *);
    int (*_read)(void *, char *, int);
    fpos_t (*_seek)(void *, fpos_t, int);
    int (*_write)(void *, char *, int);
    struct __sbuf _ub;
    struct __sFILEX *_extra;
    int _ur;
    uchar _ubuf[3];
    uchar _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    fpos_t _offset;
};

typedef uint32_t CCOptions;

typedef uint32_t CCAlgorithm;

typedef int32_t CCCryptorStatus;

typedef uint32_t CCOperation;

typedef uint u_int32_t;

typedef struct _Unwind_Exception _Unwind_Exception, *P_Unwind_Exception;

typedef enum enum_4370 {
    _URC_NO_REASON=0,
    _URC_FOREIGN_EXCEPTION_CAUGHT=1,
    _URC_FATAL_PHASE2_ERROR=2,
    _URC_FATAL_PHASE1_ERROR=3,
    _URC_NORMAL_STOP=4,
    _URC_END_OF_STACK=5,
    _URC_HANDLER_FOUND=6,
    _URC_INSTALL_CONTEXT=7,
    _URC_CONTINUE_UNWIND=8
} enum_4370;

typedef enum enum_4370 _Unwind_Reason_Code;

struct _Unwind_Exception {
    uint64_t exception_class;
    void (*exception_cleanup)(_Unwind_Reason_Code, struct _Unwind_Exception *);
    uintptr_t private_1;
    uintptr_t private_2;
    uint32_t reserved[3];
};

typedef struct __CFDictionary __CFDictionary, *P__CFDictionary;

struct __CFDictionary { // PlaceHolder Structure
};

typedef struct __CFString __CFString, *P__CFString;

struct __CFString { // PlaceHolder Structure
};

typedef struct __CFNotificationCenter __CFNotificationCenter, *P__CFNotificationCenter;

struct __CFNotificationCenter { // PlaceHolder Structure
};

typedef struct CS_CodeDirectory CS_CodeDirectory, *PCS_CodeDirectory;

struct CS_CodeDirectory {
    dword magic; // magic number (CSMAGIC_CODEDIRECTORY)
    dword length; // total length of CodeDirectory blob
    dword version; // compatibility version
    dword flags; // setup and mode flags
    dword hashOffset; // offset of hash slot element at index zero
    dword identOffset; // offset of identifier string
    dword nSpecialSlots; // number of special hash slots
    dword nCodeSlots; // number of ordinary (code) hash slots
    dword codeLimit; // limit to main image signature range
    byte hashSize; // size of each hash in bytes
    byte hashType; // type of hash (cdHashType* constants)
    byte platform; // platform identifier; zero if not platform binary
    byte pageSize; // log2(page size in bytes); 0 => infinite
    dword spare2; // unused (must be zero)
    dword scatterOffset; // offset of optional scatter vector
    dword teamOffset; // offset of optional team identifier
    dword spare3; // unused (must be zero)
    qword codeLimit64; // limit to main image signature range, 64 bits
    qword execSegBase; // offset of executable segment
    qword execSegLimit; // limit of executable segment
    qword execSegFlags; // executable segment flags
};

typedef struct uuid_command uuid_command, *Puuid_command;

struct uuid_command {
    dword cmd;
    dword cmdsize;
    byte uuid[16];
};

typedef struct lc_str lc_str, *Plc_str;

struct lc_str {
    dword offset;
};

typedef struct dyld_info_command dyld_info_command, *Pdyld_info_command;

struct dyld_info_command {
    dword cmd;
    dword cmdsize;
    dword rebase_off; // file offset to rebase info
    dword rebase_size; // size of rebase info
    dword bind_off; // file offset to binding info
    dword bind_size; // size of binding info
    dword weak_bind_off; // file offset to weak binding info
    dword weak_bind_size; // size of weak binding info
    dword lazy_bind_off; // file offset to lazy binding info
    dword lazy_bind_size; // size of lazy binding info
    dword export_off; // file offset to lazy binding info
    dword export_size; // size of lazy binding info
};

typedef struct CS_BlobIndex CS_BlobIndex, *PCS_BlobIndex;

struct CS_BlobIndex {
    dword type; // type of entry
    dword offset; // offset of entry
};

typedef struct section section, *Psection;

struct section {
    char sectname[16];
    char segname[16];
    qword addr;
    qword size;
    dword offset;
    dword align;
    dword reloff;
    dword nrelocs;
    dword flags;
    dword reserved1;
    dword reserved2;
    dword reserved3;
};

typedef struct encryption_info_command encryption_info_command, *Pencryption_info_command;

struct encryption_info_command {
    dword cmd;
    dword cmdsize;
    dword cryptoff;
    dword cryptsize;
    dword cryptid;
    dword pad;
};

typedef struct nlist nlist, *Pnlist;

struct nlist {
    dword n_strx;
    byte n_type;
    byte n_sect;
    word n_desc;
    qword n_value;
};

typedef struct segment_command segment_command, *Psegment_command;

struct segment_command {
    dword cmd;
    dword cmdsize;
    char segname[16];
    qword vmaddr;
    qword vmsize;
    qword fileoff;
    qword filesize;
    dword maxprot;
    dword initprot;
    dword nsects;
    dword flags;
};

typedef struct source_version_command source_version_command, *Psource_version_command;

struct source_version_command {
    dword cmd;
    dword cmdsize;
    qword version;
};

typedef struct mach_header mach_header, *Pmach_header;

struct mach_header {
    dword magic;
    dword cputype;
    dword cpusubtype;
    dword filetype;
    dword ncmds;
    dword sizeofcmds;
    dword flags;
    dword reserved;
};

typedef struct dylib dylib, *Pdylib;

struct dylib {
    struct lc_str name;
    dword timestamp;
    dword current_version;
    dword compatibility_version;
};

typedef enum bind_opcode {
    BIND_OPCODE_DONE=0,
    BIND_OPCODE_SET_DYLIB_ORDINAL_IMM=16,
    BIND_OPCODE_SET_DYLIB_ORDINAL_ULEB=32,
    BIND_OPCODE_SET_DYLIB_SPECIAL_IMM=48,
    BIND_OPCODE_SET_SYMBOL_TRAILING_FLAGS_IMM=64,
    BIND_OPCODE_SET_TYPE_IMM=80,
    BIND_OPCODE_SET_ADDEND_SLEB=96,
    BIND_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB=112,
    BIND_OPCODE_ADD_ADDR_ULEB=128,
    BIND_OPCODE_DO_BIND=144,
    BIND_OPCODE_DO_BIND_ADD_ADDR_ULEB=160,
    BIND_OPCODE_DO_BIND_ADD_ADDR_IMM_SCALED=176,
    BIND_OPCODE_DO_BIND_ULEB_TIMES_SKIPPING_ULEB=192,
    BIND_OPCODE_THREADED=208
} bind_opcode;

typedef struct dysymtab_command dysymtab_command, *Pdysymtab_command;

struct dysymtab_command {
    dword cmd;
    dword cmdsize;
    dword ilocalsym;
    dword nlocalsym;
    dword iextdefsym;
    dword nextdefsym;
    dword iundefsym;
    dword nundefsym;
    dword tocoff;
    dword ntoc;
    dword modtaboff;
    dword nmodtab;
    dword extrefsymoff;
    dword nextrefsyms;
    dword indirectsymoff;
    dword nindirectsyms;
    dword extreloff;
    dword nextrel;
    dword locreloff;
    dword nlocrel;
};

typedef struct CS_SuperBlob CS_SuperBlob, *PCS_SuperBlob;

struct CS_SuperBlob {
    dword magic; // magic number
    dword length; // total length of SuperBlob
    dword count; // number of index entries following
    struct CS_BlobIndex index[3]; // (count) entries
};

typedef struct dylib_command dylib_command, *Pdylib_command;

struct dylib_command {
    dword cmd;
    dword cmdsize;
    struct dylib dylib;
};

typedef struct symtab_command symtab_command, *Psymtab_command;

struct symtab_command {
    dword cmd;
    dword cmdsize;
    dword symoff;
    dword nsyms;
    dword stroff;
    dword strsize;
};

typedef struct version_min_command version_min_command, *Pversion_min_command;

struct version_min_command {
    dword cmd;
    dword cmdsize;
    dword version;
    dword sdk;
};

typedef struct linkedit_data_command linkedit_data_command, *Plinkedit_data_command;

struct linkedit_data_command {
    dword cmd;
    dword cmdsize;
    dword dataoff;
    dword datasize;
};

typedef struct CS_GenericBlob CS_GenericBlob, *PCS_GenericBlob;

struct CS_GenericBlob {
    dword magic; // magic number
    dword length; // total length of blob
};

typedef enum rebase_opcode {
    REBASE_OPCODE_DONE=0,
    REBASE_OPCODE_SET_TYPE_IMM=16,
    REBASE_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB=32,
    REBASE_OPCODE_ADD_ADDR_ULEB=48,
    REBASE_OPCODE_ADD_ADDR_IMM_SCALED=64,
    REBASE_OPCODE_DO_REBASE_IMM_TIMES=80,
    REBASE_OPCODE_DO_REBASE_ULEB_TIMES=96,
    REBASE_OPCODE_DO_REBASE_ADD_ADDR_ULEB=112,
    REBASE_OPCODE_DO_REBASE_ULEB_TIMES_SKIPPING_ULEB=128
} rebase_opcode;

typedef long dispatch_once_t;




// Function Stack Size: 0x10 bytes

void BojjiView::layoutSubviews(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  ID local_48;
  ID local_40;
  ID local_38;
  
  iVar1 = -0x72c228ab;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar2 = iVar1, 0x2a2c3b8a < iVar2) {
            if (iVar2 < 0x376b41a4) {
              if (iVar2 == 0x2a2c3b8b) {
                _objc_retain(local_38);
                _objc_msgSend(local_48,"initBojjiPayer:",local_40);
                _objc_release(local_38);
                iVar1 = 0x376b41a4;
              }
              else {
                iVar1 = -0x87723c3;
                if (iVar2 != 0x2eda04f5) {
                  iVar1 = iVar2;
                }
              }
            }
            else {
              iVar1 = 0x2eda04f5;
              if ((iVar2 != 0x376b41a4) && (iVar1 = iVar2, iVar2 == 0x59e1ad9f)) {
                BojjiFilePath(param_1,(SEL)"BojjiFilePath");
                iVar1 = -0x33096c33;
              }
            }
          }
          if (-0x25c5bd8c < iVar2) break;
          iVar1 = -0x33096c33;
          if ((iVar2 != -0x72c228ab) && (iVar1 = iVar2, iVar2 == -0x33096c33)) {
            local_40 = BojjiFilePath(param_1,(SEL)"BojjiFilePath");
            local_48 = param_1;
            local_38 = local_40;
            iVar1 = -0x676000a;
          }
        }
        iVar1 = 0x2eda04f5;
      } while (iVar2 == -0x25c5bd8b);
      if (iVar2 != -0x676000a) break;
      iVar1 = 0x2a2c3b8b;
    }
    iVar1 = iVar2;
  } while (iVar2 != -0x87723c3);
  return;
}



// Function Stack Size: 0x18 bytes

void BojjiView::initBojjiPayer_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 in_d2;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ID local_c8;
  undefined8 local_c0;
  char local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  ID local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = local_80;
  uVar5 = *(undefined8 *)PTR__AVLayerVideoGravityResizeAspectFill_00068008;
  iVar6 = -0x152190b5;
LAB_000060e0:
  while( true ) {
    iVar3 = iVar6;
    uVar1 = auVar8._8_8_;
    local_80 = auVar8._0_8_;
    iVar6 = iVar3;
    if (-0x245fe9a7 < iVar3) break;
    if (iVar3 < -0x48fc0cb0) {
      if (iVar3 < -0x665e9625) {
        if (-0x71a09397 < iVar3) {
          iVar4 = -0x71a09396;
          iVar6 = 0x16a9743a;
          iVar7 = -0x4262c356;
          if (iVar3 != -0x6f873863) {
            iVar7 = iVar3;
          }
          goto LAB_000065f8;
        }
        if (iVar3 == -0x7c02ca10) {
          iVar6 = -0x5e04c411;
        }
        else if (iVar3 == -0x79414d04) {
          iVar6 = -0x48fc0cb0;
          if (local_b1 == '\0') {
            iVar6 = -0x245fe9a6;
          }
        }
      }
      else if (iVar3 < -0x5a3ef8d6) {
        if (iVar3 == -0x61625808) {
          _objc_msgSend(local_c0,"fileExistsAtPath:",param_3);
          auVar8._8_8_ = extraout_x1_03;
          auVar8._0_8_ = local_80;
          iVar6 = -0x330f8793;
        }
        else if (iVar3 == -0x5e04c411) {
          iVar6 = 0x597b5f3e;
        }
        else if (iVar3 == -0x665e9625) {
          return;
        }
      }
      else if (iVar3 == -0x5a3ef8d6) {
        _objc_retain(local_80,uVar1);
        _objc_msgSend(local_80,"scale");
        _objc_msgSend(local_88,"setContentsScale:");
        _objc_release(local_80);
        _objc_msgSend(local_a0,"bounds");
        _objc_msgSend(local_a0,"bounds");
        FUN_000069c8(0,0,in_d2);
        _objc_msgSend(local_88,"setFrame:");
        _objc_msgSend(local_a0,"layer");
        uVar1 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar1,"addSublayer:",local_90);
        _objc_release(uVar1);
        _objc_msgSend(local_a0,local_98);
        uVar1 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar1,"addObserver:forKeyPath:options:context:",param_1,&cf_loadedTimeRanges,1
                      ,0);
        _objc_release(uVar1);
        _objc_msgSend(local_a0,local_98);
        uVar1 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar1,"addObserver:forKeyPath:options:context:",param_1,&cf_status,1,0);
        _objc_release(uVar1);
        auVar8._8_8_ = extraout_x1_07;
        auVar8._0_8_ = local_80;
        iVar6 = 0x2cfecb3a;
      }
      else {
        iVar6 = -0x71a09396;
        if (iVar3 != -0x4e4571de) {
          iVar6 = iVar3;
        }
      }
    }
    else if (iVar3 < -0x4025b8da) {
      if (iVar3 < -0x430c98ba) {
        iVar6 = 0x5527f509;
        if ((iVar3 != -0x48fc0cb0) && (iVar6 = iVar3, iVar3 == -0x431e64f3)) {
          _NSLog(&cf_eNNX__W);
          auVar8._8_8_ = extraout_x1;
          auVar8._0_8_ = local_80;
          iVar6 = -0x6f873863;
        }
      }
      else {
        iVar4 = -0x4025b8da;
        if (iVar3 != -0x4262c356) {
          iVar4 = iVar3;
        }
        iVar6 = -0x5a3ef8d6;
        if (iVar3 != -0x430c98ba) {
          iVar6 = iVar4;
        }
      }
    }
    else if (iVar3 < -0x3329cb91) {
      iVar4 = -0x4025b8da;
      iVar6 = 0x3da1d8dc;
      iVar7 = -0x4025b8da;
      if (iVar3 != -0x38d2769e) {
        iVar7 = iVar3;
      }
LAB_000065f8:
      if (iVar3 != iVar4) {
        iVar6 = iVar7;
      }
    }
    else if (iVar3 == -0x3329cb91) {
      _NSLog(&cf_eNNX__W);
      auVar8._8_8_ = extraout_x1_01;
      auVar8._0_8_ = local_80;
      iVar6 = -0x431e64f3;
    }
    else if (iVar3 == -0x330f8793) {
      local_b1 = _objc_msgSend(local_c0,"fileExistsAtPath:",param_3);
      auVar8._8_8_ = extraout_x1_02;
      auVar8._0_8_ = local_80;
      iVar6 = -0x79414d04;
    }
    else {
      iVar6 = -0x330f8793;
      if (iVar3 != -0x28f15a94) {
        iVar6 = iVar3;
      }
    }
  }
  if (iVar3 < 0x34b5bb75) {
    if (iVar3 < 0x2c94e8c) {
      if (iVar3 < -0x152190b5) {
        iVar4 = 0x34b5bb75;
        if (iVar3 != -0x1717dd55) {
          iVar4 = iVar3;
        }
        iVar6 = -0x431e64f3;
        if (iVar3 != -0x245fe9a6) {
          iVar6 = iVar4;
        }
      }
      else {
        iVar6 = -0x7c02ca10;
        if ((iVar3 != -0x152190b5) && (iVar6 = iVar3, iVar3 == -0x94cae08)) {
          _objc_retain(local_80,uVar1);
          _objc_msgSend(local_80,"scale");
          _objc_msgSend(local_88,"setContentsScale:");
          _objc_release(local_80);
          _objc_msgSend(local_a0,"bounds");
          _objc_msgSend(local_a0,"bounds");
          FUN_000069c8(0,0,in_d2);
          _objc_msgSend(local_88,"setFrame:");
          _objc_msgSend(local_a0,"layer");
          uVar1 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar1,"addSublayer:",local_90);
          _objc_release(uVar1);
          _objc_msgSend(local_a0,local_98);
          uVar1 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar1,"addObserver:forKeyPath:options:context:",param_1,&cf_loadedTimeRanges
                        ,1,0);
          _objc_release(uVar1);
          _objc_msgSend(local_a0,local_98);
          uVar1 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar1,"addObserver:forKeyPath:options:context:",param_1,&cf_status,1,0);
          _objc_release(uVar1);
          auVar8._8_8_ = extraout_x1_00;
          auVar8._0_8_ = local_80;
          iVar6 = -0x5a3ef8d6;
        }
      }
      goto LAB_000060e0;
    }
    if (0x9d8ced9 < iVar3) {
      iVar6 = 0x4c1c6028;
      if (iVar3 != 0x2cfecb3a) {
        iVar6 = iVar3;
      }
      iVar4 = -0x665e9625;
      if (iVar3 != 0x16a9743a) {
        iVar4 = iVar6;
      }
      iVar6 = -0x7c02ca10;
      if (iVar3 != 0x9d8ceda) {
        iVar6 = iVar4;
      }
      goto LAB_000060e0;
    }
    if (iVar3 == 0x2c94e8c) {
      _objc_release(local_88);
      _objc_release(local_a8);
      _objc_release(local_b0);
      auVar8._8_8_ = extraout_x1_05;
      auVar8._0_8_ = local_80;
      iVar6 = 0x72da5c4;
      goto LAB_000060e0;
    }
    iVar4 = 0x72da5c4;
  }
  else {
    if (0x4f86c885 < iVar3) {
      if (iVar3 < 0x5527f509) {
        if (iVar3 == 0x4f86c886) {
          _objc_release(local_88);
          _objc_release(local_a8);
          _objc_release(local_b0);
          auVar8._8_8_ = extraout_x1_06;
          auVar8._0_8_ = local_80;
          iVar6 = 0x2c94e8c;
        }
        else {
          iVar6 = -0x430c98ba;
          if (iVar3 != 0x50201e91) {
            iVar6 = iVar3;
          }
        }
      }
      else if (iVar3 == 0x5527f509) {
        _NSLog(&cf_eNX__W);
        local_b0 = _objc_msgSend(&_OBJC_CLASS___NSURL,"fileURLWithPath:",param_3);
        _objc_retain(local_b0);
        local_a8 = _objc_msgSend(&_OBJC_CLASS___AVAsset,"assetWithURL:",local_b0);
        _objc_retain(local_a8);
        _objc_msgSend(&_OBJC_CLASS___AVPlayerItem,"playerItemWithAsset:",local_a8);
        IVar2 = _objc_retainAutoreleasedReturnValue();
        setItem_(param_1,(SEL)"setItem:",IVar2);
        _objc_release(IVar2);
        local_98 = "item";
        item(param_1,(SEL)"item");
        uVar1 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(&_OBJC_CLASS___AVPlayer,"playerWithPlayerItem:",uVar1);
        IVar2 = _objc_retainAutoreleasedReturnValue();
        setPlayer_(param_1,(SEL)"setPlayer:",IVar2);
        _objc_release(IVar2);
        _objc_release(uVar1);
        player(param_1,(SEL)"player");
        uVar1 = _objc_retainAutoreleasedReturnValue();
        local_90 = _objc_msgSend(&_OBJC_CLASS___AVPlayerLayer,"playerLayerWithPlayer:",uVar1);
        _objc_retain(local_90);
        _objc_release(uVar1);
        _objc_msgSend(local_90,"setVideoGravity:",uVar5);
        auVar8 = _objc_msgSend(&_OBJC_CLASS___UIScreen,"mainScreen");
        local_a0 = param_1;
        local_88 = local_90;
        iVar6 = 0x50201e91;
      }
      else if (iVar3 == 0x597b5f3e) {
        _objc_retain(param_3,uVar1);
        auVar9 = _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
        auVar8._8_8_ = auVar9._8_8_;
        auVar8._0_8_ = local_80;
        local_c0 = auVar9._0_8_;
        local_c8 = param_3;
        iVar6 = -0x28f15a94;
      }
      else {
        iVar6 = 0x5527f509;
        if (iVar3 != 0x6420967d) {
          iVar6 = iVar3;
        }
      }
      goto LAB_000060e0;
    }
    if (0x482f3c66 < iVar3) {
      if (iVar3 == 0x482f3c67) {
        _objc_release(local_c8);
        auVar8._8_8_ = extraout_x1_08;
        auVar8._0_8_ = local_80;
        iVar6 = 0x34b5bb75;
      }
      else {
        iVar6 = 0x2c94e8c;
        if (iVar3 != 0x4c1c6028) {
          iVar6 = iVar3;
        }
      }
      goto LAB_000060e0;
    }
    if (iVar3 == 0x34b5bb75) {
      _objc_release(local_c8);
      auVar8._8_8_ = extraout_x1_04;
      auVar8._0_8_ = local_80;
      iVar6 = -0x4e4571de;
      goto LAB_000060e0;
    }
    iVar4 = 0x3da1d8dc;
  }
  iVar6 = -0x1717dd55;
  if (iVar3 != iVar4) {
    iVar6 = iVar3;
  }
  goto LAB_000060e0;
}



undefined1  [16] FUN_000069c8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined8 local_20;
  
  iVar5 = -0x42955701;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar5 < 0x36b6b053) {
            iVar3 = -0x7fa54bc7;
            if (iVar5 != 0xb5fd3df) {
              iVar3 = iVar5;
            }
            iVar2 = 0x5012056f;
            if (iVar5 != -0xcf89d42) {
              iVar2 = iVar3;
            }
            iVar3 = 0x5012056f;
            if (iVar5 != -0x1165b761) {
              iVar3 = iVar2;
            }
            iVar2 = 0x65ec2dad;
            if (iVar5 != -0x3d3e1508) {
              iVar2 = iVar5;
            }
            iVar1 = -0x7fa54bc7;
            if (iVar5 != -0x42955701) {
              iVar1 = iVar2;
            }
            iVar2 = 0x43ca402e;
            if (iVar5 != -0x7fa54bc7) {
              iVar2 = iVar1;
            }
            bVar4 = iVar5 < -0x1165b761;
            iVar5 = iVar3;
            if (bVar4) {
              iVar5 = iVar2;
            }
          }
          if (iVar5 < 0x5012056f) break;
          if (iVar5 == 0x5012056f) {
            local_20 = 0;
            iVar5 = 0x36b6b053;
          }
          else {
            iVar3 = 0x4bd96ba4;
            if (iVar5 != 0x65ec2dad) {
              iVar3 = iVar5;
            }
            bVar4 = iVar5 != 0x5f07d323;
            iVar5 = 0x65ec2dad;
            if (bVar4) {
              iVar5 = iVar3;
            }
          }
        }
        if (iVar5 != 0x43ca402e) break;
        iVar5 = -0x3d3e1508;
      }
      if (iVar5 != 0x4bd96ba4) break;
      iVar5 = -0xcf89d42;
    }
  } while (iVar5 != 0x36b6b053);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_20;
  return auVar6;
}



// Function Stack Size: 0x30 bytes

void BojjiView::observeValueForKeyPath_ofObject_change_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,void *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ID local_c8;
  ID local_c0;
  char *local_b8;
  char local_a9;
  char *local_a8;
  long local_a0;
  char local_91;
  char *local_90;
  undefined8 local_88;
  long local_80;
  char local_71;
  long local_70;
  char local_61;
  
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = local_88;
  iVar1 = -0x34a21fb8;
  iVar2 = -0x29c291b7;
LAB_00006bac:
  while( true ) {
    iVar3 = iVar2;
    uVar4 = auVar6._8_8_;
    local_88 = auVar6._0_8_;
    iVar2 = iVar3;
    if (0x10a0d4e < iVar3) break;
    if (iVar3 < -0x3d9160ef) {
      if (iVar3 < -0x6d182e05) {
        if (iVar3 < -0x72325542) {
          if (iVar3 < -0x7324869b) {
            iVar2 = -0x3f3ad27e;
            if (((iVar3 != -0x77d64551) && (iVar2 = 0x9086a0a, iVar3 != -0x76b3176f)) &&
               (iVar2 = iVar3, iVar3 == -0x75815678)) {
              return;
            }
          }
          else {
            iVar2 = -0x62d04d82;
            if (iVar3 != -0x7324869b) {
              if (iVar3 == -0x72f6045c) {
                uVar4 = _objc_retain(param_4);
                _objc_retain(param_5);
                _objc_retain(uVar4);
                local_b8 = "isEqualToString:";
                iVar3 = _objc_msgSend(local_c8,"isEqualToString:",&cf_loadedTimeRanges);
                auVar7._8_8_ = extraout_x1_12;
                auVar7._0_8_ = local_88;
                auVar6._8_8_ = extraout_x1_12;
                auVar6._0_8_ = local_88;
                local_c0 = param_5;
                iVar2 = iVar1;
                if (iVar3 == 0) {
                  iVar2 = -0x77d64551;
                  auVar6 = auVar7;
                }
              }
              else {
                iVar2 = 0x10a0d4f;
                if (iVar3 != -0x72c5aad3) {
                  iVar2 = iVar3;
                }
              }
            }
          }
        }
        else if (iVar3 < -0x6e79f726) {
          if (iVar3 == -0x72325542) {
            iVar2 = 0x7e62e841;
          }
          else if (iVar3 == -0x7161df6a) {
            iVar2 = 0x258d94ca;
            if (local_91 == '\0') {
              iVar2 = 0xfe52703;
            }
          }
        }
        else if (iVar3 == -0x6e79f726) {
          auVar7 = _objc_msgSend(param_4,local_a8);
          auVar6._8_8_ = auVar7._8_8_;
          auVar6._0_8_ = local_88;
          local_a0 = auVar7._0_8_;
          iVar2 = -0x4fe1582f;
        }
        else if (iVar3 == -0x6de5f3f1) {
          iVar2 = -0x31412446;
          if (local_61 == '\0') {
            iVar2 = iVar1;
          }
        }
        else if (iVar3 == -0x6d5624ef) {
          _objc_retain(param_3);
          auVar6._8_8_ = extraout_x1_03;
          auVar6._0_8_ = local_88;
          local_c8 = param_3;
          iVar2 = 0x6857d568;
        }
      }
      else if (iVar3 < -0x503841eb) {
        if (iVar3 < -0x62d04d82) {
          if (iVar3 == -0x6d182e05) {
            _NSLog(&cf_p);
            auVar6._8_8_ = extraout_x1_18;
            auVar6._0_8_ = local_88;
            iVar2 = 0x682e2c08;
          }
          else {
            iVar2 = -0x19030a5a;
            if (iVar3 != -0x69f12794) {
              iVar2 = iVar3;
            }
          }
        }
        else if (iVar3 == -0x62d04d82) {
          iVar2 = -0x2f4efa6c;
        }
        else if (iVar3 == -0x577efc66) {
          local_71 = local_80 == 0;
          iVar2 = -0x152c0a60;
        }
        else if (iVar3 == -0x54815fe3) goto LAB_000075dc;
      }
      else if (iVar3 < -0x440a46d3) {
        if (iVar3 == -0x503841eb) {
          _objc_msgSend(param_4,local_a8);
          auVar6._8_8_ = extraout_x1_10;
          auVar6._0_8_ = local_88;
          iVar2 = -0x19030a5a;
        }
        else if (iVar3 == -0x4fe1582f) {
          iVar2 = 0x15ad3212;
        }
        else if (iVar3 == -0x4adf1266) {
          _objc_release(local_c8,uVar4);
          auVar6._8_8_ = extraout_x1;
          auVar6._0_8_ = local_88;
          iVar2 = -0x75815678;
        }
      }
      else if (iVar3 == -0x440a46d3) {
        _objc_release(param_4,uVar4);
        _objc_release(local_c0);
        auVar6._8_8_ = extraout_x1_16;
        auVar6._0_8_ = local_88;
        iVar2 = 0x4aa8e4c3;
      }
      else if (iVar3 == -0x3f3ad27e) {
        local_a9 = _objc_msgSend(local_c8,local_b8,&cf_status);
        auVar6._8_8_ = extraout_x1_17;
        auVar6._0_8_ = local_88;
        iVar2 = 0x4e3c82e2;
      }
      else {
        iVar2 = 0x5f400dab;
        if (iVar3 != -0x3e515f31) {
          iVar2 = iVar3;
        }
      }
    }
    else if (iVar3 < -0x1b927aeb) {
      if (iVar3 < -0x2f4efa6c) {
        if (iVar3 < -0x34a21fb8) {
          iVar2 = 0x25616372;
          if ((iVar3 != -0x3d9160ef) && (iVar2 = iVar3, iVar3 == -0x3535a8c2)) {
            _objc_retain(param_3);
            auVar6._8_8_ = extraout_x1_06;
            auVar6._0_8_ = local_88;
            iVar2 = -0x6d5624ef;
          }
        }
        else {
          iVar2 = 0x4aa8e4c3;
          if (iVar3 != -0x34a21fb8) {
            if (iVar3 == -0x32b2a624) {
              _objc_retain(local_88);
              _objc_msgSend(0,local_88,"setVolume:");
              _objc_release(local_88);
              uVar4 = extraout_x1_14;
LAB_00007778:
              auVar6._8_8_ = uVar4;
              auVar6._0_8_ = local_88;
              iVar2 = 0x781b7888;
            }
            else {
              iVar2 = iVar3;
              if (iVar3 == -0x31412446) {
                _NSLog(&cf_p);
                auVar6._8_8_ = extraout_x1_02;
                auVar6._0_8_ = local_88;
                iVar2 = -0x1dc16d69;
              }
            }
          }
        }
      }
      else if (iVar3 < -0x1f61b667) {
        if (iVar3 == -0x2f4efa6c) {
          iVar2 = 0x2153a2d0;
          if (local_71 == '\0') {
            iVar2 = -0x69f12794;
          }
        }
        else {
          if (iVar3 != -0x2c9bfaaf) {
            iVar5 = -0x29c291b7;
            goto LAB_000071e0;
          }
          _objc_msgSend(param_1,local_90);
          auVar6._8_8_ = extraout_x1_08;
          auVar6._0_8_ = local_88;
          iVar2 = 0x4cd97f68;
        }
      }
      else {
        iVar2 = -0xca5c338;
        if (iVar3 != -0x1f61b667) {
          if (iVar3 == -0x1e0fea3f) {
            iVar2 = -0x76b3176f;
          }
          else {
            iVar2 = iVar3;
            if (iVar3 == -0x1dc16d69) {
              iVar2 = -0x34a21fb8;
            }
          }
        }
      }
    }
    else if (iVar3 < -0xca5c338) {
      if (iVar3 < -0x152c0a60) {
        if (iVar3 == -0x1b927aeb) {
          _NSLog(&cf_playerItemisready);
          auVar6._8_8_ = extraout_x1_19;
          auVar6._0_8_ = local_88;
          local_90 = "player";
          iVar2 = 0x28e40e1f;
        }
        else if (iVar3 == -0x19030a5a) {
          auVar7 = _objc_msgSend(param_4,local_a8);
          auVar6._8_8_ = auVar7._8_8_;
          auVar6._0_8_ = local_88;
          local_70 = auVar7._0_8_;
          iVar2 = 0xd4bdc25;
        }
      }
      else if (iVar3 == -0x152c0a60) {
        iVar2 = -0x7324869b;
      }
      else if (iVar3 == -0x14969a70) {
        iVar2 = 0x23a2b22f;
      }
      else if (iVar3 == -0xdb5a7b2) {
        local_61 = local_70 == 2;
        iVar2 = -0x94f6fb1;
      }
    }
    else if (iVar3 < -0x2bb8cd8) {
      if (iVar3 == -0xca5c338) {
        iVar2 = -0x6de5f3f1;
      }
      else if (iVar3 == -0x94f6fb1) {
        iVar2 = 0x4ac553ed;
      }
      else if (iVar3 == -0x634dcfa) {
        _objc_msgSend(local_c8,local_b8,&cf_status);
        auVar6._8_8_ = extraout_x1_00;
        auVar6._0_8_ = local_88;
        iVar2 = -0x3f3ad27e;
      }
    }
    else {
      iVar2 = -0x14969a70;
      if (((iVar3 != -0x2bb8cd8) && (iVar2 = 0x33ce841d, iVar3 != -0x119e1cb)) &&
         (iVar2 = iVar3, iVar3 == -0x6c7c65)) {
        _objc_msgSend(param_4,local_a8);
        auVar6._8_8_ = extraout_x1_05;
        auVar6._0_8_ = local_88;
        iVar2 = 0x77dab252;
      }
    }
  }
  if (iVar3 < 0x44318989) {
    if (iVar3 < 0x1a5e504e) {
      if (iVar3 < 0xfe52703) {
        if (iVar3 < 0x9086a0a) {
          iVar5 = 0x33ce841d;
          if (iVar3 != 0x60115c4) {
            iVar5 = iVar3;
          }
          iVar2 = -0x6e79f726;
          if (iVar3 != 0x10a0d4f) {
            iVar2 = iVar5;
          }
        }
        else if (iVar3 == 0x9086a0a) {
          _objc_release(param_4,uVar4);
          auVar6._8_8_ = extraout_x1_13;
          auVar6._0_8_ = local_88;
          iVar2 = -0x3e515f31;
        }
        else {
          iVar5 = -0x54815fe3;
          if (iVar3 != 0xd4bdc25) {
            iVar5 = iVar3;
          }
          iVar2 = -0x62d04d82;
          if (iVar3 != 0xc6c744e) {
            iVar2 = iVar5;
          }
        }
      }
      else if (iVar3 < 0x15ad3212) {
        iVar2 = 0x77dab252;
        if ((iVar3 != 0xfe52703) && (iVar2 = iVar3, iVar3 == 0x11305f03)) {
LAB_000075dc:
          iVar2 = -0xdb5a7b2;
        }
      }
      else {
        iVar2 = 0x7e62e841;
        if (iVar3 != 0x15ad3212) {
          if (iVar3 == 0x16f8840b) {
            iVar2 = 0x408697ec;
          }
          else {
            iVar5 = 0x1a1f0c9c;
LAB_000071e0:
            iVar2 = iVar3;
            if (iVar3 == iVar5) {
              iVar2 = 0x47086048;
            }
          }
        }
      }
      goto LAB_00006bac;
    }
    if (0x28e40e1e < iVar3) {
      if (iVar3 < 0x359a74ad) {
        if (iVar3 == 0x28e40e1f) {
          iVar2 = 0x64d7934a;
        }
        else if (iVar3 == 0x2d8510d1) {
          iVar2 = 0x7e1ac5d5;
          if (local_a9 == '\0') {
            iVar2 = iVar1;
          }
        }
        else {
          iVar2 = 0x2d8510d1;
          if (iVar3 != 0x33ce841d) {
            iVar2 = iVar3;
          }
        }
      }
      else if (iVar3 == 0x359a74ad) {
        iVar2 = 0x44318989;
      }
      else {
        iVar2 = -0x34a21fb8;
        if ((iVar3 != 0x3a564654) && (iVar2 = iVar3, iVar3 == 0x408697ec)) goto LAB_00007800;
      }
      goto LAB_00006bac;
    }
    if (iVar3 < 0x23a2b22f) {
      iVar5 = 0x682e2c08;
      if (iVar3 != 0x2153a2d0) {
        iVar5 = iVar3;
      }
      iVar2 = -0x2bb8cd8;
      if (iVar3 != 0x1a5e504e) {
        iVar2 = iVar5;
      }
      goto LAB_00006bac;
    }
    iVar2 = -0x34a21fb8;
    if (iVar3 == 0x23a2b22f) goto LAB_00006bac;
    if (iVar3 == 0x25616372) {
      local_a8 = "status";
      iVar2 = -0x72c5aad3;
      goto LAB_00006bac;
    }
    iVar2 = iVar3;
    if (iVar3 != 0x258d94ca) goto LAB_00006bac;
  }
  else {
    if (iVar3 < 0x67dc14e4) {
      if (iVar3 < 0x4e3c82e2) {
        if (iVar3 < 0x4aa8e4c3) {
          iVar5 = 0x359a74ad;
          if (iVar3 != 0x47086048) {
            iVar5 = iVar3;
          }
          iVar2 = -0x6d5624ef;
          if (iVar3 != 0x44318989) {
            iVar2 = iVar5;
          }
        }
        else if (iVar3 == 0x4aa8e4c3) {
          _objc_release(param_4,uVar4);
          _objc_release(local_c0);
          auVar6._8_8_ = extraout_x1_15;
          auVar6._0_8_ = local_88;
          iVar2 = -0x1e0fea3f;
        }
        else {
          iVar2 = -0xca5c338;
          if ((iVar3 != 0x4ac553ed) && (iVar2 = iVar3, iVar3 == 0x4cd97f68)) {
            auVar6 = _objc_msgSend(param_1,local_90);
            iVar2 = 0x7f7bf1dd;
          }
        }
      }
      else if (iVar3 < 0x5f400dab) {
        if (iVar3 == 0x4e3c82e2) {
          iVar2 = 0x60115c4;
        }
        else if (iVar3 == 0x4f5ffbad) {
          _objc_msgSend(param_4,local_a8);
          auVar6._8_8_ = extraout_x1_09;
          auVar6._0_8_ = local_88;
          iVar2 = -0x6e79f726;
        }
        else if (iVar3 == 0x5326cf2d) goto LAB_00007778;
      }
      else {
        iVar2 = -0x4adf1266;
        if (((iVar3 != 0x5f400dab) && (iVar2 = 0x4cd97f68, iVar3 != 0x64d7934a)) &&
           (iVar2 = iVar3, iVar3 == 0x66cfa007)) {
          _objc_release(local_c8,uVar4);
          auVar6._8_8_ = extraout_x1_04;
          auVar6._0_8_ = local_88;
          iVar2 = -0x4adf1266;
        }
      }
      goto LAB_00006bac;
    }
    if (iVar3 < 0x77dab252) {
      if (iVar3 < 0x6857d568) {
        if (iVar3 == 0x67dc14e4) {
          _objc_release(param_4,uVar4);
          auVar6._8_8_ = extraout_x1_20;
          auVar6._0_8_ = local_88;
          iVar2 = 0x9086a0a;
        }
        else if (iVar3 == 0x682e2c08) {
          _NSLog(&cf_p);
          auVar6._8_8_ = extraout_x1_07;
          auVar6._0_8_ = local_88;
          iVar2 = 0x1a5e504e;
        }
      }
      else if (iVar3 == 0x6857d568) {
        iVar2 = -0x72f6045c;
      }
      else if (iVar3 == 0x6c422f96) {
LAB_00007800:
        iVar2 = -0x577efc66;
      }
      else if (iVar3 == 0x6dbac9db) {
        iVar2 = -0x14969a70;
      }
      goto LAB_00006bac;
    }
    if (0x7e1ac5d4 < iVar3) {
      iVar2 = 0x25616372;
      if (iVar3 != 0x7e1ac5d5) {
        if (iVar3 == 0x7e62e841) {
          local_91 = local_a0 == 1;
          iVar2 = -0x7161df6a;
        }
        else {
          iVar2 = 0x5326cf2d;
          if (iVar3 != 0x7f7bf1dd) {
            iVar2 = iVar3;
          }
        }
      }
      goto LAB_00006bac;
    }
    if (iVar3 == 0x77dab252) {
      auVar7 = _objc_msgSend(param_4,local_a8);
      auVar6._8_8_ = auVar7._8_8_;
      auVar6._0_8_ = local_88;
      local_80 = auVar7._0_8_;
      iVar2 = 0x16f8840b;
      goto LAB_00006bac;
    }
    if (iVar3 == 0x781b7888) {
      _objc_retain(local_88);
      _objc_msgSend(0,local_88,"setVolume:");
      _objc_release(local_88);
      auVar6._8_8_ = extraout_x1_11;
      auVar6._0_8_ = local_88;
      iVar2 = 0x3a564654;
      goto LAB_00006bac;
    }
    if (iVar3 != 0x7d6813a9) goto LAB_00006bac;
    _NSLog(&cf_playerItemisready);
    uVar4 = extraout_x1_01;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = local_88;
  iVar2 = -0x1b927aeb;
  goto LAB_00006bac;
}



// Function Stack Size: 0x10 bytes

ID BojjiView::BojjiFilePath(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  iVar1 = 0x3ad0b592;
  do {
    while( true ) {
      while (iVar4 = iVar1, 0x2e196b36 < iVar4) {
        iVar2 = 0x2e196b37;
        if (iVar4 != 0x4d7d9a74) {
          iVar2 = iVar4;
        }
        iVar1 = -0x52f5b2d7;
        if (iVar4 != 0x4d2ba154) {
          iVar1 = iVar2;
        }
        iVar2 = -0x52f5b2d7;
        if (iVar4 != 0x3ad0b592) {
          iVar2 = iVar4;
        }
        iVar3 = -0x634b30e8;
        if (iVar4 != 0x2e196b37) {
          iVar3 = iVar2;
        }
        if (iVar4 < 0x4d2ba154) {
          iVar1 = iVar3;
        }
      }
      if (-0x3d1888f6 < iVar4) break;
      if (iVar4 == -0x634b30e8) {
        local_8 = *(ID *)(local_10 + local_18);
        iVar1 = -0x3d1888f5;
      }
      else {
        iVar1 = iVar4;
        if (iVar4 == -0x52f5b2d7) {
          local_18 = (long)_BojjiFilePath;
          iVar1 = 0x4d7d9a74;
          local_10 = param_1;
        }
      }
    }
    iVar1 = -0x634b30e8;
  } while ((iVar4 == 0x7a72314) || (iVar1 = iVar4, iVar4 != -0x3d1888f5));
  return local_8;
}



// Function Stack Size: 0x18 bytes

void BojjiView::setBojjiFilePath_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = -0x60f0c7dd;
  do {
    while (-0x5a24082 < iVar3) {
      if (iVar3 < 0x4fb0c5ff) {
        if (iVar3 == -0x5a24081) {
          _objc_storeStrong(param_1 + (long)_BojjiFilePath,param_3);
          iVar3 = 0x501a3aef;
        }
        else {
          iVar1 = -0x7af72442;
          if (iVar3 != 0x3742da4a) {
            iVar1 = iVar3;
          }
          bVar2 = iVar3 != 0xf1755;
          iVar3 = -0x5a24081;
          if (bVar2) {
            iVar3 = iVar1;
          }
        }
      }
      else {
        iVar4 = 0x4fb0c5ff;
        iVar5 = 0xf1755;
        iVar1 = -0x510c999f;
        if (iVar3 != 0x798a8787) {
          iVar1 = iVar3;
        }
        iVar6 = -0x778ee8f6;
        if (iVar3 != 0x501a3aef) {
          iVar6 = iVar1;
        }
LAB_00007b70:
        bVar2 = iVar3 != iVar4;
        iVar3 = iVar5;
        if (bVar2) {
          iVar3 = iVar6;
        }
      }
    }
    if (iVar3 < -0x510c999f) {
      iVar4 = -0x7af72442;
      iVar5 = 0x4fb0c5ff;
      iVar1 = -0x7af72442;
      if (iVar3 != -0x60f0c7dd) {
        iVar1 = iVar3;
      }
      iVar6 = -0x510c999f;
      if (iVar3 != -0x778ee8f6) {
        iVar6 = iVar1;
      }
      goto LAB_00007b70;
    }
    if (iVar3 == -0x510c999f) {
      iVar3 = -0x17ef7e08;
    }
    else if (iVar3 == -0x3e4b1e8a) {
      _objc_storeStrong(param_1 + (long)_BojjiFilePath,param_3);
      iVar3 = -0x5a24081;
    }
    else if (iVar3 == -0x17ef7e08) {
      return;
    }
  } while( true );
}



// Function Stack Size: 0x10 bytes

ID BojjiView::moviePlayer(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_14;
  undefined8 local_10;
  undefined8 local_8;
  
  iVar2 = -0x6cc57daf;
  do {
    while( true ) {
      while (iVar3 = iVar2, iVar3 < -0x10356509) {
        if (iVar3 < -0x6c1e984d) {
          iVar1 = -0x6c1e984d;
          if (iVar3 != -0x6cc57daf) {
            iVar1 = iVar3;
          }
          iVar2 = 0x710e24ca;
          if (iVar3 != -0x7c2da478) {
            iVar2 = iVar1;
          }
        }
        else if (iVar3 == -0x6c1e984d) {
          local_14 = _moviePlayer;
          iVar2 = 0x66d52a1f;
        }
        else {
          iVar2 = -0x10356509;
          if (iVar3 != -0x508e7c85) {
            iVar2 = iVar3;
          }
        }
      }
      if (0x67132b11 < iVar3) break;
      if (iVar3 == -0x10356509) {
        local_10 = (long)local_14;
        iVar2 = -0x7c2da478;
        local_8 = param_1;
      }
      else {
        iVar2 = -0x508e7c85;
        if (iVar3 != 0x66d52a1f) {
          iVar2 = iVar3;
        }
      }
    }
    iVar2 = -0x6c1e984d;
  } while ((iVar3 == 0x67132b12) || (iVar2 = iVar3, iVar3 != 0x710e24ca));
  return *(ID *)(local_8 + local_10);
}



// Function Stack Size: 0x18 bytes

void BojjiView::setMoviePlayer_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = -0x4c916833;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar5 < -0x1adc7f02) {
            iVar2 = -0x37aa495c;
            if (iVar5 != -0x28304fb9) {
              iVar2 = iVar5;
            }
            iVar1 = 0x108dd989;
            if (iVar5 != -0x37aa495c) {
              iVar1 = iVar2;
            }
            iVar2 = 0x16cc19a6;
            if (iVar5 != -0x4c916833) {
              iVar2 = iVar5;
            }
            iVar3 = 0x16cc19a6;
            if (iVar5 != -0x6ff37ff7) {
              iVar3 = iVar2;
            }
            bVar4 = iVar5 < -0x37aa495c;
            iVar5 = iVar1;
            if (bVar4) {
              iVar5 = iVar3;
            }
          }
          if (iVar5 < 0x193886f9) break;
          iVar2 = -0x1adc7f02;
          if (iVar5 != 0x6ddc49c7) {
            iVar2 = iVar5;
          }
          bVar4 = iVar5 != 0x193886f9;
          iVar5 = -0x37aa495c;
          if (bVar4) {
            iVar5 = iVar2;
          }
        }
        if (iVar5 != -0x1adc7f02) break;
        _objc_storeStrong(param_1 + (long)_moviePlayer,param_3);
        iVar5 = -0x28304fb9;
      }
      if (iVar5 != 0x16cc19a6) break;
      iVar5 = 0x6ddc49c7;
    }
  } while (iVar5 != 0x108dd989);
  return;
}



// Function Stack Size: 0x10 bytes

ID BojjiView::player(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 local_10;
  undefined8 local_8;
  
  iVar1 = 0x5c120421;
LAB_00007ed4:
  do {
    while (0x2bc13883 < iVar1) {
      if (iVar1 == 0x2bc13884) {
        iVar1 = -0x63410dcf;
      }
      else if (iVar1 == 0x5c120421) {
LAB_00007f28:
        iVar1 = 0x70a16130;
      }
      else if (iVar1 == 0x70a16130) {
        local_10 = (ID *)(param_1 + (long)_player);
        iVar1 = 0x2bc13884;
      }
    }
    if (iVar1 == -0x63410dcf) {
      local_8 = *local_10;
      iVar1 = -0x281ddab5;
      goto LAB_00007ed4;
    }
    if (iVar1 == -0x6320e187) goto LAB_00007f28;
    if (iVar1 == -0x281ddab5) {
      return local_8;
    }
  } while( true );
}



// Function Stack Size: 0x18 bytes

void BojjiView::setPlayer_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined4 local_14;
  
  iVar1 = 0x61f04191;
  while( true ) {
    while (0x66e57005 < iVar1) {
      if (iVar1 == 0x6756fb13) {
        iVar1 = -0x4e451bfd;
      }
      else if (iVar1 == 0x66e57006) {
        local_14 = _player;
        iVar1 = 0x6756fb13;
      }
    }
    if (iVar1 == -0x4e451bfd) break;
    if (iVar1 == 0x61f04191) {
      iVar1 = 0x66e57006;
    }
  }
  _objc_storeStrong(param_1 + (long)local_14,param_3);
  return;
}



// Function Stack Size: 0x10 bytes

ID BojjiView::item(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  int local_c;
  ID local_8;
  
  iVar1 = -0x3b6e37a1;
  do {
    while( true ) {
      while (iVar2 = iVar1, 0x1c3b94de < iVar2) {
        if (iVar2 < 0x3cdfc7f8) {
          if (iVar2 == 0x1c3b94df) {
            iVar1 = -0x66abbcea;
          }
          else {
            iVar1 = 0x3ccc3dcd;
            if ((iVar2 != 0x2314a9b3) && (iVar1 = iVar2, iVar2 == 0x3ccc3dcd)) {
              local_c = _item;
              iVar1 = 0x3cdfc7f8;
            }
          }
        }
        else if (iVar2 == 0x3cdfc7f8) {
          iVar1 = -0x2866780;
        }
        else if (iVar2 == 0x461d1c72) {
          iVar1 = -0x20fe1bf7;
        }
        else {
          iVar1 = 0x3ccc3dcd;
          if (iVar2 != 0x5f65ff7d) {
            iVar1 = iVar2;
          }
        }
      }
      if (-0x19e5fb84 < iVar2) break;
      if (iVar2 == -0x66abbcea) {
        iVar1 = 0x5f65ff7d;
      }
      else {
        iVar1 = 0x1c3b94df;
        if ((iVar2 != -0x3b6e37a1) && (iVar1 = iVar2, iVar2 == -0x20fe1bf7)) {
          local_8 = *(ID *)(param_1 + (long)local_c);
          iVar1 = -0x19e5fb83;
        }
      }
    }
    iVar1 = -0x20fe1bf7;
  } while (((iVar2 == -0x2866780) || (iVar1 = 0x1c3b94df, iVar2 == 0xe347276)) ||
          (iVar1 = iVar2, iVar2 != -0x19e5fb83));
  return local_8;
}



// Function Stack Size: 0x18 bytes

void BojjiView::setItem_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_34;
  
  iVar1 = 0x680ba67f;
  do {
    while( true ) {
      while (iVar2 = iVar1, iVar1 = iVar2, 0x1cfacb4b < iVar2) {
        if (iVar2 < 0x680ba67f) {
          if (iVar2 == 0x1cfacb4c) {
            iVar1 = -0xb6c251e;
          }
          else if (iVar2 == 0x2b4b025f) {
            local_34 = _item;
            iVar1 = 0x1cfacb4c;
          }
        }
        else if (iVar2 == 0x6830f6f8) {
          _objc_storeStrong(param_1 + (long)local_34,param_3);
          iVar1 = -0x6c1e7bfc;
        }
        else if (iVar2 == 0x680ba67f) {
          iVar1 = 0x2b4b025f;
        }
      }
      if (-0xb6c251f < iVar2) break;
      if (iVar2 == -0x6c1e7bfc) {
        _objc_storeStrong(param_1 + (long)local_34,param_3);
        iVar1 = 0xf20d954;
      }
      else {
        iVar1 = 0x2b4b025f;
        if (iVar2 != -0x2d258011) {
          iVar1 = iVar2;
        }
      }
    }
    iVar1 = -0x6c1e7bfc;
  } while ((iVar2 == -0xb6c251e) || (iVar1 = iVar2, iVar2 != 0xf20d954));
  return;
}



// Function Stack Size: 0x10 bytes

void BojjiView::_cxx_destruct(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  ID local_38;
  int local_2c;
  long local_28;
  
  iVar1 = -0x177cf6fb;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar2 = iVar1, iVar1 = iVar2, iVar2 < 0x325eeaba) {
            if (iVar2 < -0x546e3f0) {
              iVar1 = 0x37eef498;
              if (iVar2 != -0x629e8f6e) {
                if (iVar2 == -0x3d0307c1) {
                  _objc_storeStrong(param_1 + (long)_item,0);
                  iVar1 = 0x325eeaba;
                }
                else {
                  iVar1 = 0x325eeaba;
                  if (iVar2 != -0x177cf6fb) {
                    iVar1 = iVar2;
                  }
                }
              }
            }
            else if (iVar2 == -0x546e3f0) {
              iVar1 = 0x192e325d;
            }
            else {
              iVar1 = 0x20234f5d;
              if ((iVar2 != 0x192e325d) && (iVar1 = iVar2, iVar2 == 0x20234f5d)) {
                _objc_storeStrong(local_28,0);
                _objc_storeStrong(local_38 + (long)_BojjiFilePath,0);
                iVar1 = 0x6371d14f;
              }
            }
          }
          if (0x56bb1f28 < iVar2) break;
          if (iVar2 == 0x325eeaba) {
            _objc_storeStrong(param_1 + (long)_item,0);
            local_2c = _player;
            local_38 = param_1;
            iVar1 = 0x7d977b53;
          }
          else if (iVar2 == 0x3315e4ed) {
            _objc_storeStrong(local_28,0);
            _objc_storeStrong(local_38 + (long)_BojjiFilePath,0);
            iVar1 = 0x20234f5d;
          }
          else if (iVar2 == 0x37eef498) {
            _objc_storeStrong(local_38 + (long)local_2c,0);
            local_28 = local_38 + (long)_moviePlayer;
            iVar1 = -0x546e3f0;
          }
        }
        if (iVar2 != 0x56bb1f29) break;
        _objc_storeStrong(local_38 + (long)local_2c,0);
        iVar1 = 0x37eef498;
      }
      if (iVar2 != 0x7d977b53) break;
      iVar1 = -0x629e8f6e;
    }
  } while (iVar2 != 0x6371d14f);
  return;
}



// Function Stack Size: 0x20 bytes

ID FBEncryptorAES::encryptData_key_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  undefined8 **ppuVar2;
  size_t sVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  int iVar8;
  undefined8 unaff_x21;
  undefined8 *puVar9;
  undefined8 *local_e0;
  ID local_d8;
  ID local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  char *local_b8;
  size_t local_b0;
  void *local_a8;
  undefined8 *local_a0;
  void *local_98;
  uint local_90;
  char local_89;
  undefined *local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_00068050;
  ppuVar2 = &local_e0;
  iVar1 = -0x77a5f7b2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (iVar8 = iVar1, iVar1 = iVar8, iVar8 < -0xa6afdcb) {
              if (iVar8 < -0x4af6eb43) {
                if (iVar8 < -0x6ee04b49) {
                  if (iVar8 == -0x7e4e7a09) {
                    sVar3 = _objc_msgSend(local_d8,local_b8);
                    ppuVar2[-3] = (undefined8 *)local_b0;
                    ppuVar2[-2] = local_e0;
                    ppuVar2[-4] = (undefined8 *)local_a8;
                    local_90 = _CCCrypt(0,0,3,local_c0,0x10,(void *)0x0,local_98,sVar3,ppuVar2[-4],
                                        (size_t)ppuVar2[-3],ppuVar2[-2]);
                    local_89 = local_90 == 0;
                    iVar1 = -0x7120db93;
                  }
                  else {
                    iVar1 = -0x30a145aa;
                    if ((iVar8 != -0x77a5f7b2) && (iVar1 = iVar8, iVar8 == -0x7120db93)) {
                      iVar1 = -0x7552ffa;
                      if (local_89 == '\0') {
                        iVar1 = 0x55255558;
                      }
                    }
                  }
                }
                else {
                  iVar1 = 0x2aaf5e31;
                  if (iVar8 != -0x6ee04b49) {
                    if (iVar8 == -0x64b4c619) {
                      iVar1 = 0xfbdab70;
                    }
                    else {
                      iVar1 = iVar8;
                      if (iVar8 == -0x61d666ee) {
                        _objc_msgSend(local_d8,"bytes");
                        iVar1 = -0x444aab95;
                      }
                    }
                  }
                }
              }
              else if (iVar8 < -0x30a145aa) {
                if (iVar8 == -0x4af6eb43) {
                  sVar3 = _objc_msgSend(local_d8,local_b8);
                  ppuVar2[-3] = (undefined8 *)local_b0;
                  ppuVar2[-2] = local_e0;
                  ppuVar2[-4] = (undefined8 *)local_a8;
                  _CCCrypt(0,0,3,local_c0,0x10,(void *)0x0,local_98,sVar3,ppuVar2[-4],
                           (size_t)ppuVar2[-3],ppuVar2[-2]);
                  iVar1 = -0x7e4e7a09;
                }
                else if (iVar8 == -0x444aab95) {
                  local_98 = (void *)_objc_msgSend(local_d8,"bytes");
                  iVar1 = -0xa6afdcb;
                }
                else if (iVar8 == -0x412d63d0) {
                  _objc_msgSend(local_88,local_78,local_a8,local_80);
                  _objc_retainAutoreleasedReturnValue();
                  iVar1 = 0x2aaf5e31;
                }
              }
              else if (iVar8 == -0x30a145aa) {
                puVar9 = ppuVar2 + -2;
                local_e0 = ppuVar2 + -4;
                local_d8 = param_3;
                _objc_retain(param_3);
                local_d0 = param_4;
                _objc_retain(param_4);
                *puVar9 = 0;
                ppuVar2[-1] = (undefined8 *)0x0;
                local_c8 = puVar9;
                local_c0 = puVar9;
                _objc_msgSend(local_d0,"getBytes:length:",puVar9,0x10);
                local_b8 = "length";
                lVar4 = _objc_msgSend(local_d8,"length");
                local_b0 = lVar4 + 0x10;
                local_a8 = _malloc(local_b0);
                local_a0 = local_e0;
                *local_e0 = 0;
                _objc_retainAutorelease(local_d8);
                ppuVar2 = ppuVar2 + -4;
                iVar1 = -0x64b4c619;
              }
              else if (iVar8 == -0x2302a9d5) {
                uVar5 = _objc_retain(param_3);
                uVar6 = _objc_retain(param_4);
                ppuVar2[-2] = (undefined8 *)0x0;
                ppuVar2[-1] = (undefined8 *)0x0;
                _objc_msgSend(uVar6,"getBytes:length:",ppuVar2 + -2,0x10);
                _objc_msgSend(uVar5,"length");
                _objc_retainAutorelease(uVar5);
                ppuVar2 = ppuVar2 + -2;
                iVar1 = -0x30a145aa;
              }
              else {
                iVar1 = 0x5875723b;
                if (iVar8 != -0x1abaee77) {
                  iVar1 = iVar8;
                }
              }
            }
            if (0x51f926b7 < iVar8) break;
            if (iVar8 < 0x158724cc) {
              if (iVar8 == -0xa6afdcb) {
                iVar1 = 0x51f926b8;
              }
              else if (iVar8 == -0x7552ffa) {
                local_88 = &_OBJC_CLASS___NSData;
                local_80 = *local_e0;
                local_78 = "dataWithBytesNoCopy:length:";
                iVar1 = -0x6ee04b49;
              }
              else {
                iVar1 = -0x444aab95;
                if (iVar8 != 0xfbdab70) {
                  iVar1 = iVar8;
                }
              }
            }
            else {
              iVar1 = 0x5b062ab4;
              if (iVar8 != 0x158724cc) {
                if (iVar8 == 0x2aaf5e31) {
                  _objc_msgSend(local_88,local_78,local_a8,local_80);
                  local_70 = _objc_retainAutoreleasedReturnValue();
                  iVar1 = -0x1abaee77;
                }
                else {
                  uVar5 = 0;
                  if (iVar8 != 0x44e6260b) {
                    uVar5 = unaff_x21;
                  }
                  unaff_x21 = uVar5;
                  iVar1 = 0x5efb2b07;
                  if (iVar8 != 0x44e6260b) {
                    iVar1 = iVar8;
                  }
                }
              }
            }
          }
          if (0x5b062ab3 < iVar8) break;
          iVar1 = -0x7e4e7a09;
          if (iVar8 != 0x51f926b8) {
            if (iVar8 == 0x55255558) {
              _free(local_a8);
              iVar1 = 0x5ff90349;
            }
            else {
              iVar1 = iVar8;
              if (iVar8 == 0x5875723b) {
                unaff_x21 = local_70;
                iVar1 = 0x5efb2b07;
              }
            }
          }
        }
        if (iVar8 < 0x5ff90349) break;
        if (iVar8 == 0x5ff90349) {
          ppuVar2[-2] = (undefined8 *)(ulong)local_90;
          _NSLog(&cf__ERROR_failedtoencrypt_CCCryptoStatus__d);
          iVar1 = 0x158724cc;
        }
        else {
          iVar1 = 0x5b062ab4;
          if (iVar8 != 0x6080f4f2) {
            iVar1 = iVar8;
          }
        }
      }
      if (iVar8 != 0x5b062ab4) break;
      iVar1 = 0x44e6260b;
    }
  } while (iVar8 != 0x5efb2b07);
  _objc_release(local_c8,local_d0);
  _objc_release(local_d8);
  if (*(long *)PTR____stack_chk_guard_00068050 != local_68) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  IVar7 = _objc_autoreleaseReturnValue(unaff_x21);
  return IVar7;
}



// Function Stack Size: 0x20 bytes

ID FBEncryptorAES::decryptData_key_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  void *dataIn;
  size_t sVar7;
  ID IVar8;
  int iVar9;
  undefined8 unaff_x21;
  size_t local_e0;
  ID local_d8;
  ID local_d0;
  undefined8 *local_c8;
  void *local_c0;
  size_t *local_b8;
  CCCryptorStatus local_b0;
  char local_a9;
  size_t local_a8;
  char *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_00068050;
  iVar1 = 0x4f34af11;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (iVar9 = iVar1, iVar1 = iVar9, iVar9 < 0x22f6de76) {
              if (iVar9 < -0x5a39a118) {
                if (iVar9 < -0x734ba04a) {
                  if (iVar9 == -0x7f52ddfd) {
                    iVar1 = 0x4d285ea4;
                    if (local_a9 == '\0') {
                      iVar1 = 0x4a9f056c;
                    }
                  }
                  else if (iVar9 == -0x7dbd5ff4) {
                    iVar1 = 0x86601ab;
                  }
                  else if (iVar9 == -0x760bfd60) {
                    _objc_retain(param_3);
                    iVar1 = -0x3fd3dc3b;
                  }
                }
                else {
                  iVar2 = 0x2ebcc814;
                  if (iVar9 != -0x67808a12) {
                    iVar2 = iVar9;
                  }
                  iVar1 = 0x2a5523b2;
                  if (iVar9 != -0x6dabeed4) {
                    iVar1 = iVar2;
                  }
                  iVar2 = 0x5e630d60;
                  if (iVar9 != -0x6f1d2831) {
                    iVar2 = iVar9;
                  }
                  iVar3 = 0x2414d49c;
                  if (iVar9 != -0x734ba04a) {
                    iVar3 = iVar2;
                  }
                  if (iVar9 < -0x6dabeed4) {
                    iVar1 = iVar3;
                  }
                }
              }
              else if (iVar9 < -0x2583c80a) {
                if (iVar9 < -0x3fd3dc3b) {
                  iVar1 = 0x651744c8;
                  if ((iVar9 != -0x5a39a118) && (iVar1 = iVar9, iVar9 == -0x4e028423)) {
                    uVar4 = _objc_retain(param_4);
                    local_80 = 0;
                    uStack_78 = 0;
                    _objc_msgSend(uVar4,"getBytes:length:",&local_80,0x10);
                    lVar5 = _objc_msgSend(local_d8,"length");
                    pvVar6 = _malloc(lVar5 + 0x10U);
                    local_e0 = 0;
                    _objc_retainAutorelease(local_d8);
                    dataIn = (void *)_objc_msgSend(local_d8,"bytes");
                    sVar7 = _objc_msgSend(local_d8,"length");
                    _CCCrypt(1,0,3,&local_80,0x10,(void *)0x0,dataIn,sVar7,pvVar6,lVar5 + 0x10U,
                             &local_e0);
                    iVar1 = 0x5e630d60;
                  }
                }
                else if (iVar9 == -0x3fd3dc3b) {
                  local_d8 = param_3;
                  _objc_retain(param_3);
                  iVar1 = 0x613e4176;
                }
                else if (iVar9 == -0x3af52846) {
                  local_88 = local_90;
                  iVar1 = -0x39259c;
                }
              }
              else if (iVar9 < 0xe75fa6) {
                if (iVar9 == -0x2583c80a) {
                  _objc_msgSend(local_98,local_a0,local_c0,local_a8);
                  _objc_retainAutoreleasedReturnValue();
                  iVar1 = 0x48104dd1;
                }
                else if (iVar9 == -0x39259c) {
                  unaff_x21 = local_88;
                  iVar1 = 0x5646cb1e;
                }
              }
              else if (iVar9 == 0xe75fa6) {
                _free(local_c0);
                iVar1 = 0x7e772822;
              }
              else if (iVar9 == 0x86601ab) {
                _NSLog(&cf__ERROR_failedtodecrypt_CCCryptoStatus__d);
                iVar1 = 0x27ca2c8c;
              }
            }
            if (0x4d285ea3 < iVar9) break;
            if (iVar9 < 0x2a5523b2) {
              if (iVar9 == 0x22f6de76) {
                iVar1 = -0x3af52846;
              }
              else {
                iVar2 = 0x2a5523b2;
                if (iVar9 != 0x27ca2c8c) {
                  iVar2 = iVar9;
                }
                iVar1 = 0x48104dd1;
                if (iVar9 != 0x2414d49c) {
                  iVar1 = iVar2;
                }
              }
            }
            else if (iVar9 < 0x48104dd1) {
              iVar2 = -0x3af52846;
              if (iVar9 != 0x2ebcc814) {
                iVar2 = iVar9;
              }
              iVar1 = 0x77482ae9;
              if (iVar9 != 0x2a5523b2) {
                iVar1 = iVar2;
              }
            }
            else if (iVar9 == 0x48104dd1) {
              local_90 = _objc_msgSend(local_98,local_a0,local_c0,local_a8);
              _objc_retain(local_90);
              iVar1 = -0x67808a12;
            }
            else {
              iVar1 = 0x7e772822;
              if (iVar9 != 0x4a9f056c) {
                iVar1 = iVar9;
              }
            }
          }
          if (iVar9 < 0x613e4176) break;
          if (iVar9 < 0x77482ae9) {
            if (iVar9 == 0x613e4176) {
              iVar1 = -0x6f1d2831;
            }
            else if (iVar9 == 0x651744c8) {
              local_98 = &_OBJC_CLASS___NSData;
              local_a8 = local_e0;
              local_a0 = "dataWithBytesNoCopy:length:";
              iVar1 = -0x734ba04a;
            }
          }
          else if (iVar9 == 0x77482ae9) {
            unaff_x21 = 0;
            iVar1 = 0x5646cb1e;
          }
          else if (iVar9 == 0x7e772822) {
            _free(local_c0);
            iVar1 = -0x7dbd5ff4;
          }
        }
        if (0x5646cb1d < iVar9) break;
        iVar2 = -0x3fd3dc3b;
        if (iVar9 != 0x4f34af11) {
          iVar2 = iVar9;
        }
        iVar1 = 0x651744c8;
        if (iVar9 != 0x4d285ea4) {
          iVar1 = iVar2;
        }
      }
      if (iVar9 != 0x5e630d60) break;
      local_d0 = param_4;
      _objc_retain(param_4);
      local_c8 = &local_80;
      local_80 = 0;
      uStack_78 = 0;
      _objc_msgSend(local_c8,local_d0,"getBytes:length:",&local_80,0x10);
      lVar5 = _objc_msgSend(local_d8,"length");
      local_c0 = _malloc(lVar5 + 0x10U);
      local_e0 = 0;
      local_b8 = &local_e0;
      _objc_retainAutorelease(&local_e0,local_d8);
      pvVar6 = (void *)_objc_msgSend(local_d8,"bytes");
      sVar7 = _objc_msgSend(local_d8,"length");
      local_b0 = _CCCrypt(1,0,3,&local_80,0x10,(void *)0x0,pvVar6,sVar7,local_c0,lVar5 + 0x10U,
                          &local_e0);
      local_a9 = local_b0 == 0;
      iVar1 = -0x7f52ddfd;
    }
  } while (iVar9 != 0x5646cb1e);
  _objc_release(local_c8,local_d0);
  _objc_release(local_d8);
  if (*(long *)PTR____stack_chk_guard_00068050 != local_70) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  IVar8 = _objc_autoreleaseReturnValue(unaff_x21);
  return IVar8;
}



// Function Stack Size: 0x18 bytes

ID GTMBase64::encodeData_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  int iVar2;
  const_void__ pvVar3;
  unsigned_long_long uVar4;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  SEL extraout_x1_03;
  SEL extraout_x1_04;
  int iVar5;
  ID local_68;
  ID local_60;
  ID local_58;
  
  iVar2 = -0x36b6ddb2;
  do {
    while( true ) {
      while (iVar5 = iVar2, iVar5 < -0x2c5ea881) {
        if (iVar5 < -0x39034005) {
          if (iVar5 == -0x72e4654a) {
            _objc_retain(param_3);
            param_2 = extraout_x1_00;
            iVar2 = -0x17276f14;
          }
          else if (iVar5 == -0x62b5b12e) {
            _objc_autorelease(local_58);
            param_2 = extraout_x1_01;
            iVar2 = 0x900c65b;
          }
          else {
            iVar2 = iVar5;
            if (iVar5 == -0x4d80574b) {
              _objc_retainAutorelease(local_68,param_2);
              pvVar3 = (const_void__)_objc_msgSend(local_68,"bytes");
              uVar4 = _objc_msgSend(local_68,"length");
              baseEncode_length_charset_padded_
                        (param_1,(SEL)"baseEncode:length:charset:padded:",pvVar3,uVar4,
                         "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",1);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(local_68);
              param_2 = extraout_x1;
              iVar2 = -0x2c5ea881;
            }
          }
        }
        else if (iVar5 == -0x39034005) {
          _objc_autorelease(local_58);
          param_2 = extraout_x1_04;
          iVar2 = -0x62b5b12e;
        }
        else {
          iVar1 = -0x17276f14;
          if (iVar5 != -0x36b6ddb2) {
            iVar1 = iVar5;
          }
          iVar2 = 0x3ae2515;
          if (iVar5 != -0x37228373) {
            iVar2 = iVar1;
          }
        }
      }
      if (-0x701a06a < iVar5) break;
      if (iVar5 == -0x2c5ea881) {
        _objc_retainAutorelease(local_68,param_2);
        pvVar3 = (const_void__)_objc_msgSend(local_68,"bytes");
        uVar4 = _objc_msgSend(local_68,"length");
        local_60 = baseEncode_length_charset_padded_
                             (param_1,(SEL)"baseEncode:length:charset:padded:",pvVar3,uVar4,
                              "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",1);
        _objc_retain(local_60);
        _objc_release(local_68);
        param_2 = extraout_x1_02;
        local_58 = local_60;
        iVar2 = -0x11e3c7e1;
      }
      else if (iVar5 == -0x17276f14) {
        _objc_retain(param_3);
        param_2 = extraout_x1_03;
        local_68 = param_3;
        iVar2 = -0x37228373;
      }
      else {
        iVar2 = -0x701a069;
        if (iVar5 != -0x11e3c7e1) {
          iVar2 = iVar5;
        }
      }
    }
    iVar2 = -0x62b5b12e;
  } while (((iVar5 == -0x701a069) || (iVar2 = -0x2c5ea881, iVar5 == 0x3ae2515)) ||
          (iVar2 = iVar5, iVar5 != 0x900c65b));
  return local_60;
}



// Function Stack Size: 0x18 bytes

ID GTMBase64::decodeData_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  int iVar2;
  const_void__ pvVar3;
  unsigned_long_long uVar4;
  SEL extraout_x1;
  SEL extraout_x1_00;
  int iVar5;
  ID local_68;
  char *local_60;
  ID local_58;
  
  iVar2 = 0xb92cc35;
  do {
    while( true ) {
      while( true ) {
        while (iVar5 = iVar2, iVar5 < -0x4d5914a) {
          if (iVar5 < -0xeec4d0a) {
            if (iVar5 == -0x7d89c4c4) {
              _objc_retain(param_3,param_2);
              _objc_retainAutorelease(param_3);
              param_2 = extraout_x1_00;
              local_68 = param_3;
              local_60 = "bytes";
              iVar2 = -0x6e00c984;
            }
            else {
              iVar2 = 0x51be147b;
              if (iVar5 != -0x6e00c984) {
                iVar2 = iVar5;
              }
            }
          }
          else {
            iVar1 = -0x4d5914a;
            if (iVar5 != -0xc186202) {
              iVar1 = iVar5;
            }
            iVar2 = -0x7d89c4c4;
            if (iVar5 != -0xeec4d0a) {
              iVar2 = iVar1;
            }
          }
        }
        if (iVar5 < 0xb92cc35) break;
        iVar1 = iVar5;
        if (iVar5 == 0xb92cc35) {
          iVar1 = -0x7d89c4c4;
        }
        iVar2 = -0x4d5914a;
        if (iVar5 != 0x51be147b) {
          iVar2 = iVar1;
        }
      }
      if (iVar5 != -0x4d5914a) break;
      pvVar3 = (const_void__)_objc_msgSend(local_68,local_60);
      uVar4 = _objc_msgSend(local_68,"length");
      local_58 = baseDecode_length_charset_requirePadding_
                           (param_1,(SEL)"baseDecode:length:charset:requirePadding:",pvVar3,uVar4,
                            "ccccccccccccccccccccccccccccccccccccccccccc>ccc?456789:;<=ccccccc",1);
      _objc_retainAutorelease(local_58);
      _objc_release(local_68);
      param_2 = extraout_x1;
      iVar2 = -0x4c476c5;
    }
    iVar2 = iVar5;
  } while (iVar5 != -0x4c476c5);
  return local_58;
}



// Function Stack Size: 0x20 bytes

ID GTMBase64::encodeBytes_length_
             (ID param_1,SEL param_2,const_void__ param_3,unsigned_long_long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ID local_48;
  
  iVar2 = 0x37ed97;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar3 = iVar2, iVar3 < 0x37ed97) {
            if (iVar3 < -0x1074e809) {
              if (iVar3 == -0x52e75cbe) {
                baseEncode_length_charset_padded_
                          (param_1,(SEL)"baseEncode:length:charset:padded:",param_3,param_4,
                           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",1);
                iVar2 = 0x651336ca;
              }
              else {
                iVar2 = -0xd7574ca;
                if (iVar3 != -0x364be279) {
                  iVar2 = iVar3;
                }
              }
            }
            else {
              iVar1 = 0x77b21f27;
              if (iVar3 != -0xd7574ca) {
                iVar1 = iVar3;
              }
              iVar2 = -0x364be279;
              if (iVar3 != -0x1074e809) {
                iVar2 = iVar1;
              }
            }
          }
          if (iVar3 < 0x651336ca) break;
          if (iVar3 == 0x651336ca) {
            local_48 = baseEncode_length_charset_padded_
                                 (param_1,(SEL)"baseEncode:length:charset:padded:",param_3,param_4,
                                  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                  ,1);
            iVar2 = 0x36e66381;
          }
          else {
            iVar2 = 0x651336ca;
            if (iVar3 != 0x77b21f27) {
              iVar2 = iVar3;
            }
          }
        }
        iVar2 = -0x364be279;
      } while (iVar3 == 0x37ed97);
      if (iVar3 != 0x36e66381) break;
      iVar2 = 0x2f9ec631;
    }
    iVar2 = iVar3;
  } while (iVar3 != 0x2f9ec631);
  _objc_retainAutorelease(local_48);
  return local_48;
}



// Function Stack Size: 0x20 bytes

ID GTMBase64::decodeBytes_length_
             (ID param_1,SEL param_2,const_void__ param_3,unsigned_long_long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ID local_48;
  
  iVar1 = 0x6ec54c66;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar4 = iVar1, 0x42165613 < iVar4) {
            iVar1 = iVar4;
            if (iVar4 == 0x6ec54c66) {
              iVar1 = 0x46c2e46d;
            }
            iVar2 = 0x46c2e46d;
            if (iVar4 != 0x6c50ad02) {
              iVar2 = iVar1;
            }
            iVar1 = 0x42165614;
            if (iVar4 != 0x5ebb0efe) {
              iVar1 = iVar2;
            }
            iVar2 = -0x3bdd84b9;
            if (iVar4 != 0x46c2e46d) {
              iVar2 = iVar4;
            }
            iVar3 = -0x7d797b03;
            if (iVar4 != 0x42165614) {
              iVar3 = iVar2;
            }
            if (iVar4 < 0x5ebb0efe) {
              iVar1 = iVar3;
            }
          }
          if (-0x3bdd84ba < iVar4) break;
          if (iVar4 == -0x7d797b03) {
            iVar1 = 0x26bf0a06;
          }
          else {
            iVar1 = 0x42165614;
            if ((iVar4 != -0x706e9002) && (iVar1 = iVar4, iVar4 == -0x5060c528)) {
              local_48 = baseDecode_length_charset_requirePadding_
                                   (param_1,(SEL)"baseDecode:length:charset:requirePadding:",param_3
                                    ,param_4,
                                    "ccccccccccccccccccccccccccccccccccccccccccc>ccc?456789:;<=ccccccc"
                                    ,1);
              _objc_retainAutorelease(local_48);
              iVar1 = -0x25dcab54;
            }
          }
        }
        if (iVar4 != -0x3bdd84b9) break;
        iVar1 = 0x5ebb0efe;
      }
      if (iVar4 != 0x26bf0a06) break;
      iVar1 = -0x5060c528;
    }
    iVar1 = iVar4;
  } while (iVar4 != -0x25dcab54);
  return local_48;
}



// Function Stack Size: 0x18 bytes

ID GTMBase64::stringByEncodingData_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  int iVar2;
  unsigned_long_long uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  int iVar6;
  undefined8 unaff_x23;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ID local_a0;
  const_void__ local_98;
  char *local_90;
  ID local_88;
  ID local_80;
  char local_71;
  undefined8 local_70;
  undefined8 local_68;
  
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = local_68;
  iVar2 = 0x433026c8;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar6 = iVar2;
              local_68 = auVar7._0_8_;
              iVar2 = iVar6;
              if (-0x121993d3 < iVar6) break;
              if (iVar6 < -0x4816f79d) {
                if (iVar6 < -0x5184580b) {
                  iVar1 = 0x41bbcc0;
                  if (iVar6 != -0x647965dd) {
                    iVar1 = iVar6;
                  }
                  iVar2 = -0x2ad516dd;
                  if (iVar6 != -0x6f1bc450) {
                    iVar2 = iVar1;
                  }
                }
                else if (iVar6 == -0x5184580b) {
                  _objc_retain(param_3,auVar7._8_8_);
                  _objc_retainAutorelease(param_3);
                  auVar8 = _objc_msgSend(param_3,"bytes");
                  auVar7._8_8_ = auVar8._8_8_;
                  auVar7._0_8_ = local_68;
                  local_98 = auVar8._0_8_;
                  local_a0 = param_3;
                  local_90 = "length";
                  iVar2 = 0x3dee826a;
                }
                else if (iVar6 == -0x508261ce) {
                  unaff_x23 = 0;
                  iVar2 = -0x121993d2;
                  if (local_71 == '\0') {
                    iVar2 = 0xc63c3e0;
                  }
                }
              }
              else if (iVar6 < -0x2ad516dd) {
                if (iVar6 == -0x4816f79d) {
                  _objc_msgSend(local_70,local_70,"initWithData:encoding:",local_88,1);
                  auVar7._8_8_ = extraout_x1_01;
                  auVar7._0_8_ = local_68;
                  iVar2 = -0x2ad516dd;
                }
                else if (iVar6 == -0x3d894c2e) {
                  uVar3 = _objc_msgSend(local_a0,local_90);
                  baseEncode_length_charset_padded_
                            (param_1,(SEL)"baseEncode:length:charset:padded:",local_98,uVar3,
                             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",1);
                  _objc_retainAutoreleasedReturnValue();
                  auVar7._8_8_ = extraout_x1;
                  auVar7._0_8_ = local_68;
                  iVar2 = -0x25f1bee0;
                }
              }
              else if (iVar6 == -0x2ad516dd) {
                auVar7 = _objc_msgSend(local_70,local_70,"initWithData:encoding:",local_88,1);
                iVar2 = 0x124d99a0;
              }
              else if (iVar6 == -0x25f1bee0) {
                uVar3 = _objc_msgSend(local_a0,local_90);
                local_88 = baseEncode_length_charset_padded_
                                     (param_1,(SEL)"baseEncode:length:charset:padded:",local_98,
                                      uVar3,
                                      "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                      ,1);
                _objc_retain(local_88);
                auVar7._8_8_ = extraout_x1_00;
                auVar7._0_8_ = local_68;
                local_71 = local_88 != 0;
                local_80 = local_88;
                iVar2 = -0x508261ce;
              }
              else {
                iVar2 = -0x25f1bee0;
                if (iVar6 != -0x1848c783) {
                  iVar2 = iVar6;
                }
              }
            }
            if (iVar6 < 0x3dee826a) break;
            if (iVar6 < 0x433026c8) {
              iVar1 = 0x41bbcc0;
              if (iVar6 != 0x42cc3acc) {
                iVar1 = iVar6;
              }
              iVar2 = -0x1848c783;
              if (iVar6 != 0x3dee826a) {
                iVar2 = iVar1;
              }
            }
            else if (iVar6 == 0x480fa975) {
              _objc_retain(param_3,auVar7._8_8_);
              uVar4 = _objc_retainAutorelease();
              _objc_msgSend(uVar4,"bytes");
              auVar7._8_8_ = extraout_x1_02;
              auVar7._0_8_ = local_68;
              iVar2 = -0x5184580b;
            }
            else if (iVar6 == 0x433026c8) {
              iVar2 = -0x5184580b;
            }
          }
          if (0xc63c3df < iVar6) break;
          if (iVar6 == -0x121993d2) {
            auVar8 = _objc_alloc(&_OBJC_CLASS___NSString);
            auVar7._8_8_ = auVar8._8_8_;
            auVar7._0_8_ = local_68;
            local_70 = auVar8._0_8_;
            iVar2 = -0x6f1bc450;
          }
          else {
            iVar2 = 0x3cd75fd3;
            if (iVar6 != 0x41bbcc0) {
              iVar2 = iVar6;
            }
          }
        }
        if (iVar6 != 0x124d99a0) break;
        iVar2 = 0x42cc3acc;
      }
      if (iVar6 != 0x3cd75fd3) break;
      unaff_x23 = local_68;
      iVar2 = 0xc63c3e0;
    }
  } while (iVar6 != 0xc63c3e0);
  _objc_release(local_80);
  _objc_release(local_a0);
  IVar5 = _objc_autoreleaseReturnValue(unaff_x23);
  return IVar5;
}



// Function Stack Size: 0x20 bytes

ID GTMBase64::stringByEncodingBytes_length_
             (ID param_1,SEL param_2,const_void__ param_3,unsigned_long_long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ID IVar4;
  int iVar5;
  undefined8 unaff_x24;
  ID local_80;
  ID local_78;
  char local_69;
  undefined8 local_68;
  
  iVar1 = 0x681a0763;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (iVar5 = iVar1, iVar1 = iVar5, -0xf05143d < iVar5) {
              if (iVar5 < 0x378abad2) {
                iVar2 = -0x2f115b50;
                if (iVar5 != 0x1e8beb1e) {
                  iVar2 = iVar5;
                }
                iVar1 = -0xf05143c;
                if (iVar5 != 0x127bf227) {
                  iVar1 = iVar2;
                }
                iVar2 = -0x6a4d992a;
                if (iVar5 != -0xeb8a02f) {
                  iVar2 = iVar5;
                }
                iVar3 = -0x3fe0cb33;
                if (iVar5 != -0xf05143c) {
                  iVar3 = iVar2;
                }
                if (iVar5 < 0x127bf227) {
                  iVar1 = iVar3;
                }
              }
              else if (iVar5 < 0x681a0763) {
                if (iVar5 == 0x378abad2) {
                  iVar1 = -0x37b2c772;
                }
                else if (iVar5 == 0x3ec69e36) {
                  _objc_retain(local_80);
                  iVar1 = -0x3fe0cb33;
                }
              }
              else if (iVar5 == 0x7fbf22c6) {
                iVar1 = 0x378abad2;
              }
              else if (iVar5 == 0x7907fa5d) {
                local_80 = baseEncode_length_charset_padded_
                                     (param_1,(SEL)"baseEncode:length:charset:padded:",param_3,
                                      param_4,
                                      "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                                      ,1);
                iVar1 = 0x127bf227;
              }
              else if (iVar5 == 0x681a0763) {
                iVar1 = 0x7907fa5d;
              }
            }
            if (iVar5 < -0x57089676) break;
            if (iVar5 < -0x3fe0cb33) {
              iVar1 = -0x5bc6cda1;
              if ((iVar5 != -0x57089676) && (iVar1 = iVar5, iVar5 == -0x40a515f6)) {
                _objc_alloc(&_OBJC_CLASS___NSString);
                iVar1 = -0x5bc6cda1;
              }
            }
            else if (iVar5 == -0x3fe0cb33) {
              local_78 = local_80;
              _objc_retain(local_80);
              local_69 = local_80 != 0;
              iVar1 = 0x1e8beb1e;
            }
            else if (iVar5 == -0x37b2c772) {
              unaff_x24 = _objc_msgSend(local_68,"initWithData:encoding:",local_80,1);
              iVar1 = -0x67d83159;
            }
            else if (iVar5 == -0x2f115b50) {
              unaff_x24 = 0;
              iVar1 = -0x57089676;
              if (local_69 == '\0') {
                iVar1 = -0x67d83159;
              }
            }
          }
          if (-0x67d8315a < iVar5) break;
          iVar1 = 0x7fbf22c6;
          if ((iVar5 != -0x6a4d992a) && (iVar1 = iVar5, iVar5 == -0x68f1a199)) {
            baseEncode_length_charset_padded_
                      (param_1,(SEL)"baseEncode:length:charset:padded:",param_3,param_4,
                       "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",1);
            iVar1 = 0x7907fa5d;
          }
        }
        if (iVar5 != -0x608428c1) break;
        iVar1 = 0x7fbf22c6;
      }
      if (iVar5 != -0x5bc6cda1) break;
      local_68 = _objc_alloc(&_OBJC_CLASS___NSString);
      iVar1 = -0xeb8a02f;
    }
  } while (iVar5 != -0x67d83159);
  _objc_release(local_78);
  IVar4 = _objc_autoreleaseReturnValue(unaff_x24);
  return IVar4;
}



// Function Stack Size: 0x18 bytes

ID GTMBase64::decodeString_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  unsigned_long_long uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  int iVar5;
  ID unaff_x26;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ID local_98;
  long local_90;
  undefined8 local_88;
  char local_79;
  const_void__ local_78;
  ID local_70;
  ID local_68;
  
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = local_90;
  iVar2 = -0x60fc4df1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar5 = iVar2;
              uVar3 = auVar6._8_8_;
              local_90 = auVar6._0_8_;
              iVar2 = iVar5;
              if (0xdeb698e < iVar5) break;
              if (iVar5 < -0x35535ceb) {
                if (iVar5 < -0x5a42a034) {
                  if (iVar5 == -0x776f71be) {
                    uVar4 = _objc_msgSend(local_88,"length");
                    baseDecode_length_charset_requirePadding_
                              (param_1,(SEL)"baseDecode:length:charset:requirePadding:",local_78,
                               uVar4,
                               "ccccccccccccccccccccccccccccccccccccccccccc>ccc?456789:;<=ccccccc",1
                              );
                    _objc_retainAutoreleasedReturnValue();
                    auVar6._8_8_ = extraout_x1_01;
                    auVar6._0_8_ = local_90;
                    iVar2 = -0x5a42a034;
                  }
                  else if (iVar5 == -0x71174895) {
                    _objc_release(local_88);
                    _objc_release(local_98);
                    _objc_autorelease(local_68);
                    auVar6._8_8_ = extraout_x1_02;
                    auVar6._0_8_ = local_90;
                    iVar2 = 0x399f4f96;
                  }
                  else {
                    iVar2 = 0xd862550;
                    if (iVar5 != -0x60fc4df1) {
                      iVar2 = iVar5;
                    }
                  }
                }
                else if (iVar5 == -0x5a42a034) {
                  uVar4 = _objc_msgSend(local_88,"length");
                  local_70 = baseDecode_length_charset_requirePadding_
                                       (param_1,(SEL)"baseDecode:length:charset:requirePadding:",
                                        local_78,uVar4,
                                        "ccccccccccccccccccccccccccccccccccccccccccc>ccc?456789:;<=ccccccc"
                                        ,1);
                  _objc_retain(local_70);
                  auVar6._8_8_ = extraout_x1_05;
                  auVar6._0_8_ = local_90;
                  iVar2 = -0x30ec60f2;
                }
                else if (iVar5 == -0x3e7e89f6) {
                  unaff_x26 = local_70;
                  iVar2 = 0x2fa2328;
                }
                else if (iVar5 == -0x3d3cb45a) {
                  _objc_release(local_88);
                  _objc_release(local_98);
                  _objc_autorelease(local_68);
                  auVar6._8_8_ = extraout_x1_00;
                  auVar6._0_8_ = local_90;
                  iVar2 = -0x71174895;
                }
              }
              else if (iVar5 < -0x22fb048) {
                if (iVar5 == -0x35535ceb) {
                  _objc_retain(local_88,uVar3);
                  auVar6._8_8_ = extraout_x1_04;
                  auVar6._0_8_ = local_90;
                  iVar2 = 0x1175b6de;
                }
                else {
                  iVar1 = 0x79bc2e1d;
                  if (iVar5 != -0x4424146) {
                    iVar1 = iVar5;
                  }
                  iVar2 = -0x4424146;
                  if (iVar5 != -0x30ec60f2) {
                    iVar2 = iVar1;
                  }
                }
              }
              else if (iVar5 == -0x22fb048) {
                iVar2 = 0x2918ce1f;
              }
              else if (iVar5 == 0x2fa2328) {
                local_68 = unaff_x26;
                iVar2 = -0x71174895;
              }
              else if (iVar5 == 0xd862550) {
                _objc_retain(param_3,uVar3);
                auVar6 = _objc_msgSend(param_3,"dataUsingEncoding:",1);
                local_88 = auVar6._0_8_;
                local_98 = param_3;
                iVar2 = 0x73038d98;
              }
            }
            if (0x2918ce1e < iVar5) break;
            if (iVar5 < 0x18234bd7) {
              iVar2 = 0x79bc2e1d;
              if (iVar5 != 0xdeb698f) {
                if (iVar5 == 0x1175b6de) {
                  _objc_retain(local_88,uVar3);
                  auVar6._8_8_ = extraout_x1_03;
                  auVar6._0_8_ = local_90;
                  iVar2 = -0x22fb048;
                }
                else {
                  iVar2 = iVar5;
                  if (iVar5 == 0x167507df) {
                    uVar3 = _objc_retain(param_3,uVar3);
                    _objc_msgSend(uVar3,"dataUsingEncoding:",1);
                    auVar6._8_8_ = extraout_x1;
                    auVar6._0_8_ = local_90;
                    iVar2 = 0xd862550;
                  }
                }
              }
            }
            else {
              iVar2 = 0x1175b6de;
              if (iVar5 != 0x18234bd7) {
                if (iVar5 == 0x255e761b) {
                  unaff_x26 = 0;
                  iVar2 = 0x40758b1b;
                  if (local_79 == '\0') {
                    iVar2 = 0x2fa2328;
                  }
                }
                else {
                  iVar2 = iVar5;
                  if (iVar5 == 0x26ac1230) {
                    iVar2 = 0x754fa6e5;
                  }
                }
              }
            }
          }
          if (iVar5 < 0x73038d98) break;
          if (iVar5 == 0x73038d98) {
            iVar2 = 0x18234bd7;
          }
          else if (iVar5 == 0x754fa6e5) {
            local_79 = local_90 != 0;
            iVar2 = 0x255e761b;
          }
          else {
            iVar2 = -0x3e7e89f6;
            if (iVar5 != 0x79bc2e1d) {
              iVar2 = iVar5;
            }
          }
        }
        if (0x399f4f95 < iVar5) break;
        iVar1 = -0x5a42a034;
        if (iVar5 != 0x36fa9bc5) {
          iVar1 = iVar5;
        }
        iVar2 = 0x754fa6e5;
        if (iVar5 != 0x2918ce1f) {
          iVar2 = iVar1;
        }
      }
      if (iVar5 != 0x40758b1b) break;
      _objc_retainAutorelease(local_88);
      auVar7 = _objc_msgSend(local_88,"bytes");
      auVar6._8_8_ = auVar7._8_8_;
      auVar6._0_8_ = local_90;
      local_78 = auVar7._0_8_;
      iVar2 = 0x36fa9bc5;
    }
  } while (iVar5 != 0x399f4f96);
  return local_68;
}



// Function Stack Size: 0x1c bytes

ID GTMBase64::webSafeEncodeData_padded_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  int iVar1;
  unsigned_long_long uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  int iVar3;
  undefined1 auVar4 [16];
  ID local_58;
  const_void__ local_50;
  ID local_48;
  
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = local_50;
  iVar1 = 0x5be6d2a2;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar3 = iVar1, local_50 = auVar4._0_8_, iVar1 = iVar3, iVar3 < 0x3df66958) {
            if (iVar3 < -0x59bbae7a) {
              if (iVar3 == -0x7ce53d9c) {
                auVar4 = _objc_msgSend(local_58,"bytes");
                iVar1 = 0x25995b44;
              }
              else if (iVar3 == -0x5a8db471) {
                _objc_msgSend(local_58,"bytes");
                auVar4._8_8_ = extraout_x1_01;
                auVar4._0_8_ = local_50;
                iVar1 = -0x7ce53d9c;
              }
            }
            else {
              iVar1 = -0x7ce53d9c;
              if (iVar3 != -0x59bbae7a) {
                if (iVar3 == 0x25995b44) {
                  iVar1 = 0x603c5139;
                }
                else {
                  iVar1 = iVar3;
                  if (iVar3 == 0x2bbfaa52) {
                    uVar2 = _objc_msgSend(local_58,"length");
                    local_48 = baseEncode_length_charset_padded_
                                         (param_1,(SEL)"baseEncode:length:charset:padded:",local_50,
                                          uVar2,
                                          "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_"
                                          ,param_4);
                    _objc_retainAutorelease(local_48);
                    _objc_release(local_58);
                    auVar4._8_8_ = extraout_x1_00;
                    auVar4._0_8_ = local_50;
                    iVar1 = 0x5b59cbe2;
                  }
                }
              }
            }
          }
          if (0x5b59cbe1 < iVar3) break;
          if (iVar3 == 0x3df66958) {
            iVar1 = -0x59bbae7a;
          }
          else if (iVar3 == 0x474a7b99) {
            _objc_retain(param_3,auVar4._8_8_);
            _objc_retainAutorelease();
            auVar4._8_8_ = extraout_x1_02;
            auVar4._0_8_ = local_50;
            iVar1 = 0x4879c730;
          }
          else if (iVar3 == 0x4879c730) {
            _objc_retain(param_3,auVar4._8_8_);
            _objc_retainAutorelease(param_3);
            auVar4._8_8_ = extraout_x1;
            auVar4._0_8_ = local_50;
            local_58 = param_3;
            iVar1 = 0x3df66958;
          }
        }
        iVar1 = 0x4879c730;
      } while (iVar3 == 0x5be6d2a2);
      if (iVar3 != 0x603c5139) break;
      iVar1 = 0x2bbfaa52;
    }
    iVar1 = iVar3;
  } while (iVar3 != 0x5b59cbe2);
  return local_48;
}



// Function Stack Size: 0x18 bytes

ID GTMBase64::webSafeDecodeData_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  const_void__ pvVar2;
  unsigned_long_long uVar3;
  undefined8 uVar4;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  int iVar5;
  ID local_68;
  char *local_60;
  ID local_58;
  
  iVar1 = -0x4f7faa56;
  do {
    while( true ) {
      while (iVar5 = iVar1, 0x12dc0544 < iVar5) {
        if (iVar5 < 0x640896aa) {
          if (iVar5 == 0x12dc0545) {
            iVar1 = -0x775f1cb1;
          }
          else if (iVar5 == 0x161d9dff) {
            _objc_retain(local_68,param_2);
            _objc_retainAutorelease(local_68);
            param_2 = extraout_x1_01;
            iVar1 = -0x1f7697fc;
          }
          else {
            iVar1 = 0x640896aa;
            if (iVar5 != 0x5adab2f4) {
              iVar1 = iVar5;
            }
          }
        }
        else if (iVar5 == 0x640896aa) {
          pvVar2 = (const_void__)_objc_msgSend(local_68,local_60);
          uVar3 = _objc_msgSend(local_68,"length");
          local_58 = baseDecode_length_charset_requirePadding_
                               (param_1,(SEL)"baseDecode:length:charset:requirePadding:",pvVar2,
                                uVar3,
                                "ccccccccccccccccccccccccccccccccccccccccccccc>cc456789:;<=ccccccc",
                                0);
          _objc_retainAutorelease(local_58);
          _objc_release(local_68);
          param_2 = extraout_x1_02;
          iVar1 = -0x738bdb0f;
        }
        else if (iVar5 == 0x69562391) {
          iVar1 = 0x5adab2f4;
        }
        else {
          iVar1 = iVar5;
          if (iVar5 == 0x6ad958a6) {
            pvVar2 = (const_void__)_objc_msgSend(local_68,local_60);
            uVar3 = _objc_msgSend(local_68,"length");
            baseDecode_length_charset_requirePadding_
                      (param_1,(SEL)"baseDecode:length:charset:requirePadding:",pvVar2,uVar3,
                       "ccccccccccccccccccccccccccccccccccccccccccccc>cc456789:;<=ccccccc",0);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            _objc_release(local_68);
            _objc_autoreleaseReturnValue(uVar4);
            param_2 = extraout_x1_00;
            iVar1 = 0x640896aa;
          }
        }
      }
      if (iVar5 < -0x4f7faa56) break;
      iVar1 = -0x3c972362;
      if (iVar5 != -0x4f7faa56) {
        if (iVar5 == -0x3c972362) {
          local_68 = param_3;
          iVar1 = 0x12dc0545;
        }
        else {
          iVar1 = iVar5;
          if (iVar5 == -0x1f7697fc) {
            _objc_retain(local_68,param_2);
            _objc_retainAutorelease(local_68);
            param_2 = extraout_x1;
            local_60 = "bytes";
            iVar1 = 0x69562391;
          }
        }
      }
    }
    iVar1 = -0x1f7697fc;
  } while (((iVar5 == -0x775f1cb1) || (iVar1 = -0x3c972362, iVar5 == -0x6c970f38)) ||
          (iVar1 = iVar5, iVar5 != -0x738bdb0f));
  return local_58;
}



// Function Stack Size: 0x24 bytes

ID GTMBase64::webSafeEncodeBytes_length_padded_
             (ID param_1,SEL param_2,const_void__ param_3,unsigned_long_long param_4,bool param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *local_68;
  char *local_60;
  ID local_58;
  
  iVar1 = -0x742e7274;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar1, 0x9a67b06 < iVar3) {
            if (iVar3 < 0x3efd8e28) {
              if (iVar3 == 0x9a67b07) {
                local_68 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_";
                local_60 = "baseEncode:length:charset:padded:";
                iVar1 = -0x6d538960;
              }
              else {
                iVar2 = 0x9a67b07;
                if (iVar3 != 0x1d14d27d) {
                  iVar2 = iVar3;
                }
                iVar1 = -0x30e226d4;
                if (iVar3 != 0x11c78de3) {
                  iVar1 = iVar2;
                }
              }
            }
            else if (iVar3 == 0x3efd8e28) {
              iVar1 = -0x6bd9048f;
            }
            else if (iVar3 == 0x4eb75c4d) {
              _objc_msgSend(param_1,local_60,param_3,param_4,local_68,param_5);
              _objc_retainAutoreleasedReturnValue();
              _objc_autoreleaseReturnValue();
              iVar1 = -0x30e226d4;
            }
            else {
              iVar1 = 0x9a67b07;
              if (iVar3 != 0x512fbea8) {
                iVar1 = iVar3;
              }
            }
          }
          if (-0x6bd90490 < iVar3) break;
          iVar1 = 0x11c78de3;
          if (iVar3 != -0x6d538960) {
            iVar1 = iVar3;
          }
          iVar2 = 0x3efd8e28;
          if (iVar3 != -0x6f298f0f) {
            iVar2 = iVar1;
          }
          iVar1 = 0x3efd8e28;
          if (iVar3 != -0x742e7274) {
            iVar1 = iVar2;
          }
        }
        if (iVar3 != -0x6bd9048f) break;
        iVar1 = 0x512fbea8;
      }
      if (iVar3 != -0x30e226d4) break;
      local_58 = _objc_msgSend(param_1,local_60,param_3,param_4,local_68,param_5);
      _objc_retainAutorelease(local_58);
      iVar1 = -0x68e9be71;
    }
    iVar1 = iVar3;
  } while (iVar3 != -0x68e9be71);
  return local_58;
}



// Function Stack Size: 0x20 bytes

ID GTMBase64::webSafeDecodeBytes_length_
             (ID param_1,SEL param_2,const_void__ param_3,unsigned_long_long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ID local_48;
  
  iVar1 = -0x754eb94e;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar1, iVar3 < 0x36b37273) {
          if (iVar3 < -0x10856df1) {
            iVar1 = -0x342e65b9;
            if (iVar3 != -0x754eb94e) {
              if (iVar3 == -0x5372a7b2) {
                local_48 = baseDecode_length_charset_requirePadding_
                                     (param_1,(SEL)"baseDecode:length:charset:requirePadding:",
                                      param_3,param_4,
                                      "ccccccccccccccccccccccccccccccccccccccccccccc>cc456789:;<=ccccccc"
                                      ,0);
                iVar1 = 0x719f1fd9;
              }
              else {
                iVar1 = 0x7fa564e2;
                if (iVar3 != -0x342e65b9) {
                  iVar1 = iVar3;
                }
              }
            }
          }
          else if (iVar3 == -0x10856df1) {
            _objc_retainAutorelease(local_48);
            iVar1 = -0xfb75bf0;
          }
          else if (iVar3 == -0xfb75bf0) {
            _objc_retainAutorelease(local_48);
            iVar1 = 0x46baea0a;
          }
          else {
            iVar1 = -0x342e65b9;
            if (iVar3 != -0xb98ad5) {
              iVar1 = iVar3;
            }
          }
        }
        if (iVar3 < 0x51cee543) break;
        iVar1 = 0x51cee543;
        if (iVar3 != 0x7fa564e2) {
          iVar1 = iVar3;
        }
        iVar2 = 0x37fcbc9a;
        if (iVar3 != 0x719f1fd9) {
          iVar2 = iVar1;
        }
        iVar1 = -0x5372a7b2;
        if (iVar3 != 0x51cee543) {
          iVar1 = iVar2;
        }
      }
      if (iVar3 != 0x36b37273) break;
      baseDecode_length_charset_requirePadding_
                (param_1,(SEL)"baseDecode:length:charset:requirePadding:",param_3,param_4,
                 "ccccccccccccccccccccccccccccccccccccccccccccc>cc456789:;<=ccccccc",0);
      iVar1 = -0x5372a7b2;
    }
    iVar1 = -0xfb75bf0;
  } while ((iVar3 == 0x37fcbc9a) || (iVar1 = iVar3, iVar3 != 0x46baea0a));
  return local_48;
}



// Function Stack Size: 0x1c bytes

ID GTMBase64::stringByWebSafeEncodingData_padded_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  int iVar5;
  undefined8 unaff_x24;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ID local_a0;
  const_void__ local_98;
  unsigned_long_long local_90;
  ID local_88;
  ID local_80;
  char local_71;
  undefined8 local_70;
  undefined8 local_68;
  
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = local_90;
  iVar2 = -0x37899bdf;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar5 = iVar2;
            local_90 = auVar6._0_8_;
            iVar2 = iVar5;
            if (-0x1292a40e < iVar5) break;
            if (iVar5 < -0x2f09620d) {
              if (iVar5 < -0x4fcc7344) {
                if (iVar5 == -0x5d6c36fe) {
                  iVar2 = -0xbdeb6ec;
                }
                else {
                  iVar2 = 0x457fee4;
                  if (iVar5 != -0x4ffb3c47) {
                    iVar2 = iVar5;
                  }
                }
              }
              else {
                iVar1 = -0x1d4cc8ad;
                if (iVar5 != -0x37899bdf) {
                  iVar1 = iVar5;
                }
                iVar2 = -0xbdeb6ec;
                if (iVar5 != -0x4fcc7344) {
                  iVar2 = iVar1;
                }
              }
            }
            else if (iVar5 < -0x2564be86) {
              if (iVar5 == -0x2f09620d) {
                uVar3 = _objc_alloc(&_OBJC_CLASS___NSString,auVar6._8_8_);
                auVar7 = _objc_msgSend(uVar3,"initWithData:encoding:",local_88,1);
                auVar6._8_8_ = auVar7._8_8_;
                auVar6._0_8_ = local_90;
                local_70 = auVar7._0_8_;
                iVar2 = -0x4fcc7344;
              }
              else if (iVar5 == -0x2dc1a5a9) {
                _objc_retain(param_3);
                uVar3 = _objc_retainAutorelease();
                _objc_msgSend(uVar3,"bytes");
                _objc_msgSend(uVar3,"length");
                auVar6._8_8_ = extraout_x1;
                auVar6._0_8_ = local_90;
                iVar2 = -0x1d4cc8ad;
              }
            }
            else {
              iVar2 = -0x4ffb3c47;
              if (iVar5 != -0x2564be86) {
                if (iVar5 == -0x1d4cc8ad) {
                  _objc_retain(param_3);
                  _objc_retainAutorelease(param_3);
                  local_98 = (const_void__)_objc_msgSend(param_3,"bytes");
                  auVar6 = _objc_msgSend(param_3,"length");
                  local_a0 = param_3;
                  iVar2 = -0x15241c1d;
                }
                else {
                  iVar2 = 0x727d94cb;
                  if (iVar5 != -0x15241c1d) {
                    iVar2 = iVar5;
                  }
                }
              }
            }
          }
          if (0x28e498b5 < iVar5) break;
          if (iVar5 < -0x6bf1937) {
            if (iVar5 == -0x1292a40d) {
              iVar2 = 0x3d54b6d4;
            }
            else if (iVar5 == -0xbdeb6ec) {
              local_68 = local_70;
              iVar2 = -0x1292a40d;
            }
          }
          else if (iVar5 == -0x6bf1937) {
            unaff_x24 = 0;
            iVar2 = -0x2f09620d;
            if (local_71 == '\0') {
              iVar2 = 0x3c7bd377;
            }
          }
          else if (iVar5 == 0x457fee4) {
            unaff_x24 = local_68;
            iVar2 = 0x3c7bd377;
          }
          else {
            iVar2 = -0x6bf1937;
            if (iVar5 != 0x5d6f1f1) {
              iVar2 = iVar5;
            }
          }
        }
        if (iVar5 < 0x500602fe) break;
        if (iVar5 == 0x500602fe) {
          local_88 = baseEncode_length_charset_padded_
                               (param_1,(SEL)"baseEncode:length:charset:padded:",local_98,local_90,
                                "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_",
                                param_4);
          _objc_retain(local_88);
          auVar6._8_8_ = extraout_x1_01;
          auVar6._0_8_ = local_90;
          local_71 = local_88 != 0;
          local_80 = local_88;
          iVar2 = 0x5d6f1f1;
        }
        else {
          iVar2 = 0x500602fe;
          if (iVar5 != 0x727d94cb) {
            iVar2 = iVar5;
          }
        }
      }
      if (iVar5 != 0x28e498b6) break;
      baseEncode_length_charset_padded_
                (param_1,(SEL)"baseEncode:length:charset:padded:",local_98,local_90,
                 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_",param_4);
      _objc_retainAutoreleasedReturnValue();
      auVar6._8_8_ = extraout_x1_00;
      auVar6._0_8_ = local_90;
      iVar2 = 0x500602fe;
    }
    iVar2 = -0x4ffb3c47;
  } while ((iVar5 == 0x3d54b6d4) || (iVar2 = iVar5, iVar5 != 0x3c7bd377));
  _objc_release(local_80);
  _objc_release(local_a0);
  IVar4 = _objc_autoreleaseReturnValue(unaff_x24);
  return IVar4;
}



// Function Stack Size: 0x24 bytes

ID GTMBase64::stringByWebSafeEncodingBytes_length_padded_
             (ID param_1,SEL param_2,const_void__ param_3,unsigned_long_long param_4,bool param_5)

{
  int iVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_x24;
  undefined1 auVar8 [16];
  ID local_88;
  ID local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = local_70;
  iVar6 = 0x60f8395c;
LAB_0000b46c:
  do {
    while( true ) {
      iVar4 = iVar6;
      local_70 = auVar8._0_8_;
      iVar6 = iVar4;
      if (iVar4 < -0x1434e613) break;
      if (iVar4 < 0x26189a71) {
        if (iVar4 < -0x55f50a1) {
          iVar6 = -0x43d9ede4;
          if ((iVar4 != -0x1434e613) && (iVar6 = iVar4, iVar4 == -0x6fc28a7)) {
            unaff_x24 = 0;
            iVar6 = -0x4f928d22;
            if (local_88 != 0) {
              iVar6 = -0x26a69e3e;
            }
          }
        }
        else if (iVar4 == -0x55f50a1) {
          iVar6 = 0x22f35f5b;
        }
        else if (iVar4 == 0x9640397) {
          baseEncode_length_charset_padded_
                    (param_1,(SEL)"baseEncode:length:charset:padded:",param_3,param_4,
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_",param_5);
          _objc_retainAutoreleasedReturnValue();
          auVar8._8_8_ = extraout_x1_01;
          auVar8._0_8_ = local_70;
          iVar6 = -0x22f349b1;
        }
        else {
          iVar6 = -0x22f349b1;
          if (iVar4 != 0x22f35f5b) {
            iVar6 = iVar4;
          }
        }
      }
      else if (iVar4 < 0x60f8395c) {
        iVar5 = 0x26189a71;
        iVar6 = -0x5c82e27f;
        iVar1 = -0x2742342d;
        if (iVar4 != 0x47c954e8) {
          iVar1 = iVar4;
        }
        iVar7 = 0x47c954e8;
        if (iVar4 != 0x296d9be9) {
          iVar7 = iVar1;
        }
LAB_0000b524:
        if (iVar4 != iVar5) {
          iVar6 = iVar7;
        }
      }
      else if (iVar4 == 0x6e2385c9) {
        local_68 = local_70;
        iVar6 = 0x61809529;
      }
      else if (iVar4 == 0x61809529) {
        unaff_x24 = local_68;
        iVar6 = -0x4f928d22;
      }
      else if (iVar4 == 0x60f8395c) {
        iVar6 = -0x43d9ede4;
      }
    }
    if (-0x3c3c5f2b < iVar4) {
      if (iVar4 < -0x2742342d) {
        if (iVar4 == -0x3c3c5f2a) {
          iVar6 = 0x6e2385c9;
        }
        else if (iVar4 == -0x2ee91314) {
          uVar2 = _objc_alloc(local_78,auVar8._8_8_);
          _objc_msgSend(uVar2,"initWithData:encoding:",local_88,1);
          auVar8._8_8_ = extraout_x1_00;
          auVar8._0_8_ = local_70;
          iVar6 = -0x2742342d;
        }
      }
      else if (iVar4 == -0x2742342d) {
        uVar2 = _objc_alloc(local_78,auVar8._8_8_);
        auVar8 = _objc_msgSend(uVar2,"initWithData:encoding:",local_88,1);
        iVar6 = 0x26189a71;
      }
      else {
        iVar6 = -0x460128c0;
        if ((iVar4 != -0x26a69e3e) && (iVar6 = iVar4, iVar4 == -0x22f349b1)) {
          local_88 = baseEncode_length_charset_padded_
                               (param_1,(SEL)"baseEncode:length:charset:padded:",param_3,param_4,
                                "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_",
                                param_5);
          _objc_retain(local_88);
          auVar8._8_8_ = extraout_x1;
          auVar8._0_8_ = local_70;
          local_80 = local_88;
          iVar6 = -0x74ac911e;
        }
      }
      goto LAB_0000b46c;
    }
    if (iVar4 < -0x460128c0) {
      if (iVar4 == -0x74ac911e) {
        iVar6 = -0x6fc28a7;
      }
      else {
        iVar6 = 0x6e2385c9;
        if ((iVar4 != -0x5c82e27f) && (iVar6 = iVar4, iVar4 == -0x4f928d22)) {
          _objc_release(local_80);
          IVar3 = _objc_autoreleaseReturnValue(unaff_x24);
          return IVar3;
        }
      }
    }
    else {
      if (iVar4 != -0x460128c0) {
        iVar5 = -0x43d9ede4;
        iVar6 = -0x55f50a1;
        iVar7 = -0x460128c0;
        if (iVar4 != -0x3e306233) {
          iVar7 = iVar4;
        }
        goto LAB_0000b524;
      }
      local_78 = &_OBJC_CLASS___NSString;
      iVar6 = 0x296d9be9;
    }
  } while( true );
}



// Function Stack Size: 0x18 bytes

ID GTMBase64::webSafeDecodeString_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  int iVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  int iVar5;
  undefined8 unaff_x23;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ID local_98;
  long local_90;
  char local_81;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = local_78;
  iVar2 = -0x3458e8b7;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              iVar5 = iVar2;
              uVar4 = auVar6._8_8_;
              local_78 = auVar6._0_8_;
              iVar2 = iVar5;
              if (-0x16bdf082 < iVar5) break;
              if (iVar5 < -0x591c2084) {
                if (iVar5 < -0x6e44b964) {
                  if (iVar5 == -0x7a41503c) {
                    auVar7 = _objc_msgSend(param_1,local_70,local_80,local_78,
                                           "ccccccccccccccccccccccccccccccccccccccccccccc>cc456789:;<=ccccccc"
                                           ,0);
                    auVar6._8_8_ = auVar7._8_8_;
                    auVar6._0_8_ = local_78;
                    local_68 = auVar7._0_8_;
                    iVar2 = -0x669a6746;
                  }
                  else {
                    iVar2 = -0x4ca1f599;
                    if (iVar5 != -0x71166998) {
                      iVar2 = iVar5;
                    }
                  }
                }
                else if (iVar5 == -0x6e44b964) {
                  _objc_retain(param_3,uVar4);
                  auVar6._8_8_ = extraout_x1_03;
                  auVar6._0_8_ = local_78;
                  iVar2 = -0x15eac469;
                }
                else {
                  iVar1 = -0x71166998;
                  if (iVar5 != -0x669a6746) {
                    iVar1 = iVar5;
                  }
                  iVar2 = -0x591c2084;
                  if (iVar5 != -0x6b2ed695) {
                    iVar2 = iVar1;
                  }
                }
              }
              else if (iVar5 < -0x415f6e1d) {
                iVar2 = -0x7a41503c;
                if (iVar5 != -0x591c2084) {
                  if (iVar5 == -0x4ca1f599) {
                    _objc_retain(local_68,uVar4);
                    auVar6._8_8_ = extraout_x1_01;
                    auVar6._0_8_ = local_78;
                    iVar2 = 0xa4241ed;
                  }
                  else {
                    iVar2 = iVar5;
                    if (iVar5 == -0x429a4d72) {
                      _objc_msgSend(param_1,local_70,local_80,local_78,
                                    "ccccccccccccccccccccccccccccccccccccccccccccc>cc456789:;<=ccccccc"
                                    ,0);
                      auVar6._8_8_ = extraout_x1;
                      auVar6._0_8_ = local_78;
                      iVar2 = -0x7a41503c;
                    }
                  }
                }
              }
              else if (iVar5 == -0x415f6e1d) {
                _objc_msgSend(local_98,"dataUsingEncoding:",1);
                _objc_retainAutoreleasedReturnValue();
                auVar6._8_8_ = extraout_x1_05;
                auVar6._0_8_ = local_78;
                iVar2 = 0xa3e1394;
              }
              else {
                iVar1 = -0x15eac469;
                if (iVar5 != -0x3458e8b7) {
                  iVar1 = iVar5;
                }
                iVar2 = 0xa3e1394;
                if (iVar5 != -0x39dc1e8d) {
                  iVar2 = iVar1;
                }
              }
            }
            if (iVar5 < 0x2392d007) break;
            if (iVar5 < 0x7084680c) {
              if (iVar5 == 0x2392d007) {
                iVar2 = -0x39dc1e8d;
              }
              else if (iVar5 == 0x40c0ddaa) {
                unaff_x23 = 0;
                iVar2 = 0x1a2a6871;
                if (local_81 == '\0') {
                  iVar2 = -0x16bdf081;
                }
              }
            }
            else if (iVar5 == 0x7084680c) {
              iVar2 = 0x40c0ddaa;
            }
            else if (iVar5 == 0x7965e33f) {
              _objc_retain(local_68,uVar4);
              auVar6._8_8_ = extraout_x1_04;
              auVar6._0_8_ = local_78;
              iVar2 = -0x4ca1f599;
            }
            else if (iVar5 == 0x7bd97494) {
              _objc_retainAutorelease(local_90);
              _objc_msgSend(local_90,"bytes");
              _objc_msgSend(local_90,"length");
              auVar6._8_8_ = extraout_x1_00;
              auVar6._0_8_ = local_78;
              iVar2 = 0x59fea10;
            }
          }
          if (iVar5 < 0xa3e1394) break;
          if (iVar5 == 0xa3e1394) {
            local_90 = _objc_msgSend(local_98,"dataUsingEncoding:",1);
            _objc_retain(local_90);
            auVar6._8_8_ = extraout_x1_02;
            auVar6._0_8_ = local_78;
            local_81 = local_90 != 0;
            iVar2 = 0x7084680c;
          }
          else if (iVar5 == 0xa4241ed) {
            unaff_x23 = local_68;
            iVar2 = -0x16bdf081;
          }
          else {
            iVar2 = 0x59fea10;
            if (iVar5 != 0x1a2a6871) {
              iVar2 = iVar5;
            }
          }
        }
        if (iVar5 != -0x15eac469) break;
        _objc_retain(param_3,uVar4);
        auVar6._8_8_ = extraout_x1_06;
        auVar6._0_8_ = local_78;
        local_98 = param_3;
        iVar2 = 0x2392d007;
      }
      if (iVar5 != 0x59fea10) break;
      _objc_retainAutorelease(local_90);
      local_80 = _objc_msgSend(local_90,"bytes");
      auVar6 = _objc_msgSend(local_90,"length");
      local_70 = "baseDecode:length:charset:requirePadding:";
      iVar2 = -0x6b2ed695;
    }
  } while (iVar5 != -0x16bdf081);
  _objc_release(local_90);
  _objc_release(local_98);
  IVar3 = _objc_autoreleaseReturnValue(unaff_x23);
  return IVar3;
}



// Function Stack Size: 0x2c bytes

ID GTMBase64::baseEncode_length_charset_padded_
             (ID param_1,SEL param_2,const_void__ param_3,unsigned_long_long param_4,
             const_char__ param_5,bool param_6)

{
  unsigned_long_long uVar1;
  undefined8 uVar2;
  char *pcVar3;
  unsigned_long_long uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ID unaff_x20;
  ID local_d0;
  ID local_c8;
  char *local_c0;
  unsigned_long_long local_b8;
  char local_aa;
  char local_a9;
  undefined8 local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  ID local_78;
  ID local_70;
  
  uVar1 = FUN_0000c3ec(param_4,param_6);
  iVar7 = 0xbb8ac0f;
  do {
    while( true ) {
      while( true ) {
        while (iVar5 = iVar7, iVar7 = iVar5, iVar5 < 0x9c015ca) {
          if (iVar5 < -0x3492f8d1) {
            if (iVar5 < -0x50413c83) {
              if (iVar5 < -0x64cd3f11) {
                if (iVar5 == -0x6fa3ce21) {
                  _objc_release(local_80);
                  _objc_release(local_98);
                  _objc_release(local_a8);
                  iVar7 = -0x64cd3f11;
                }
                else if (iVar5 == -0x6561bfed) {
                  pcVar3 = (char *)_objc_msgSend(local_d0,local_c0);
                  uVar4 = _objc_msgSend(local_d0,"length");
                  local_b8 = baseEncode_srcLen_destBytes_destLen_charset_padded_
                                       (param_1,(SEL)
                                                "baseEncode:srcLen:destBytes:destLen:charset:padded:"
                                        ,(const_char__)param_3,param_4,pcVar3,uVar4,param_5,param_6)
                  ;
                  local_aa = local_b8 != 0;
                  iVar7 = 0x7a859737;
                }
              }
              else if (iVar5 == -0x64cd3f11) {
                _objc_release(local_80);
                _objc_release(local_98);
                _objc_release(local_a8);
                iVar7 = -0x4a1c1a12;
              }
              else if (iVar5 == -0x576425e2) {
                _objc_release(local_d0);
                iVar7 = 0x45cbde25;
              }
            }
            else if (iVar5 < -0x4a1c1a12) {
              if (iVar5 == -0x50413c83) {
                iVar7 = -0x576425e2;
              }
              else if (iVar5 == -0x4fdef1b4) {
                local_a8 = _objc_msgSend(&_OBJC_CLASS___NSAssertionHandler,"currentHandler");
                _objc_retain(local_a8);
                local_a0 = "stringWithUTF8String:";
                local_98 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                                         "+[GTMBase64(PrivateMethods) baseEncode:length:charset:padded:]"
                                        );
                _objc_retain(local_98);
                local_88 = &_OBJC_CLASS___NSString;
                local_90 = local_98;
                iVar7 = -0x21bd2d8e;
              }
            }
            else if (iVar5 == -0x4a1c1a12) {
              unaff_x20 = local_c8;
              iVar7 = -0x3492f8d1;
            }
            else {
              iVar7 = -0x2a4f747c;
              if (iVar5 != -0x47474809) {
                iVar7 = iVar5;
              }
            }
          }
          else if (iVar5 < -0x21bd2d8e) {
            if (iVar5 < -0x2a4f747c) {
              if (iVar5 == -0x3492f8d1) {
                local_70 = unaff_x20;
                iVar7 = 0x61e9cffb;
              }
              else {
                iVar7 = 0x36b8da6f;
                if (iVar5 != -0x2d8b134e) {
                  iVar7 = iVar5;
                }
              }
            }
            else if (iVar5 == -0x2a4f747c) {
              local_a9 = local_b8 == uVar1;
              iVar7 = 0x706dcbad;
            }
            else if (iVar5 == -0x27ec7483) {
              local_80 = _objc_msgSend(local_88,local_a0,"GTMBase64.m");
              _objc_retain(local_80);
              _objc_msgSend(local_a8,"handleFailureInFunction:file:lineNumber:description:",local_90
                            ,local_80,0x1a4,&cf_howdidwecalcthelengthwrong_);
              iVar7 = 0x6da5ebf3;
            }
          }
          else if (iVar5 < -0x9fa7c16) {
            iVar6 = -0x2d8b134e;
            if (iVar5 != -0xc60e1fd) {
              iVar6 = iVar5;
            }
            iVar7 = -0x27ec7483;
            if (iVar5 != -0x21bd2d8e) {
              iVar7 = iVar6;
            }
          }
          else {
            iVar7 = -0x64cd3f11;
            if ((iVar5 != -0x9fa7c16) && (iVar7 = iVar5, iVar5 == -0x4075a18)) {
              return local_78;
            }
          }
        }
        if (0x45cbde24 < iVar5) break;
        if (iVar5 < 0x31378e03) {
          if (iVar5 < 0xb238c13) {
            iVar7 = -0x6561bfed;
            if ((iVar5 != 0x9c015ca) && (iVar7 = iVar5, iVar5 == 0xa059f15)) {
              _objc_msgSend(local_88,local_a0,"GTMBase64.m");
              uVar2 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_a8,"handleFailureInFunction:file:lineNumber:description:",local_90
                            ,uVar2,0x1a4,&cf_howdidwecalcthelengthwrong_);
              iVar7 = -0x27ec7483;
            }
          }
          else if (iVar5 == 0xb238c13) {
            pcVar3 = (char *)_objc_msgSend(local_d0,local_c0);
            uVar4 = _objc_msgSend(local_d0,"length");
            baseEncode_srcLen_destBytes_destLen_charset_padded_
                      (param_1,(SEL)"baseEncode:srcLen:destBytes:destLen:charset:padded:",
                       (const_char__)param_3,param_4,pcVar3,uVar4,param_5,param_6);
            iVar7 = -0x6561bfed;
          }
          else if (iVar5 == 0xbb8ac0f) {
            local_d0 = _objc_msgSend(&_OBJC_CLASS___NSMutableData,"data");
            _objc_retain(local_d0);
            _objc_msgSend(local_d0,"setLength:",uVar1);
            _objc_retainAutorelease(local_d0);
            local_c0 = "mutableBytes";
            local_c8 = local_d0;
            iVar7 = 0x9c015ca;
          }
        }
        else if (iVar5 < 0x36b8da6f) {
          if (iVar5 == 0x31378e03) {
            unaff_x20 = 0;
            iVar7 = -0x3492f8d1;
          }
          else if (iVar5 == 0x34a65da3) {
            iVar7 = -0x2a4f747c;
          }
        }
        else if (iVar5 == 0x36b8da6f) {
          unaff_x20 = local_c8;
          iVar7 = -0x3492f8d1;
          if (local_a9 == '\0') {
            iVar7 = -0x4fdef1b4;
          }
        }
        else {
          iVar7 = 0x31378e03;
          if (iVar5 != 0x415cd396) {
            iVar7 = iVar5;
          }
        }
      }
      if (0x706dcbac < iVar5) break;
      if (iVar5 < 0x6da5ebf3) {
        iVar7 = 0x415cd396;
        if ((iVar5 != 0x45cbde25) && (iVar7 = iVar5, iVar5 == 0x61e9cffb)) {
          local_78 = local_70;
          _objc_retainAutorelease(local_70);
          _objc_release(local_70);
          iVar7 = -0x4075a18;
        }
      }
      else {
        iVar6 = 0x6da5ebf3;
        iVar7 = -0x9fa7c16;
        iVar8 = 0x415cd396;
        if (iVar5 != 0x6f9ca192) {
          iVar8 = iVar5;
        }
LAB_0000c150:
        if (iVar5 != iVar6) {
          iVar7 = iVar8;
        }
      }
    }
    if (iVar5 < 0x78ebed73) {
      iVar6 = 0x706dcbad;
      iVar7 = 0x78e88bab;
      iVar8 = -0x2d8b134e;
      if (iVar5 != 0x78e88bab) {
        iVar8 = iVar5;
      }
      goto LAB_0000c150;
    }
    if (iVar5 == 0x78ebed73) {
      _objc_retainAutorelease(local_70);
      _objc_release(local_70);
      iVar7 = 0x61e9cffb;
    }
    else if (iVar5 == 0x7a859737) {
      iVar7 = -0x47474809;
      if (local_aa == '\0') {
        iVar7 = -0x50413c83;
      }
    }
  } while( true );
}



ulong FUN_0000c3ec(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong in_x15;
  int iVar5;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  iVar1 = -0x352a5f1b;
  if (param_2 == 0) {
    iVar1 = 0x3e38b442;
  }
  iVar2 = -0x49579e22;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (iVar5 = iVar2, iVar2 = iVar5, iVar5 < 0xfc6d5b) {
              if (iVar5 < -0x42fbe3b1) {
                if (iVar5 < -0x6300725f) {
                  iVar4 = 0x21e11565;
                  if (iVar5 != -0x6747fca3) {
                    iVar4 = iVar5;
                  }
                  iVar2 = -0x151d02d5;
                  if (iVar5 != -0x6c20333b) {
                    iVar2 = iVar4;
                  }
                }
                else if (iVar5 == -0x6300725f) {
                  local_10 = local_18 + 3 & 0xfffffffffffffffc;
                  iVar2 = 0x27cd7605;
                }
                else if (iVar5 == -0x620e086c) {
                  in_x15 = (local_20 + 5U) / 6;
                  iVar2 = iVar1;
                  local_18 = in_x15;
                }
                else {
                  iVar2 = -0x6c20333b;
                  if (iVar5 != -0x49579e22) {
                    iVar2 = iVar5;
                  }
                }
              }
              else {
                iVar2 = -0x6c20333b;
                if (iVar5 != -0x136a7e6a) {
                  iVar2 = iVar5;
                }
                iVar4 = -0x42fbe3b1;
                if (iVar5 != -0x151d02d5) {
                  iVar4 = iVar2;
                }
                iVar2 = 0xfc6d5b;
                if (iVar5 != -0x1b6eb7b6) {
                  iVar2 = iVar4;
                }
                iVar4 = -0x620e086c;
                if (iVar5 != -0x1dfc734a) {
                  iVar4 = iVar5;
                }
                iVar3 = -0x6300725f;
                if (iVar5 != -0x352a5f1b) {
                  iVar3 = iVar4;
                }
                iVar4 = 0x57d01d71;
                if (iVar5 != -0x42fbe3b1) {
                  iVar4 = iVar3;
                }
                if (iVar5 < -0x1b6eb7b6) {
                  iVar2 = iVar4;
                }
              }
            }
            if (iVar5 < 0x2e6bba2e) break;
            if (iVar5 < 0x5639a63c) {
              if (iVar5 == 0x2e6bba2e) {
                in_x15 = local_10;
                iVar2 = 0x3e38b442;
              }
              else if (iVar5 == 0x3e38b442) {
                iVar2 = 0xfc6d5b;
                local_8 = in_x15;
              }
            }
            else {
              iVar2 = -0x6747fca3;
              if (iVar5 != 0x5639a63c) {
                if (iVar5 == 0x57d01d71) {
                  iVar2 = -0x1dfc734a;
                  local_20 = param_1 << 3;
                }
                else {
                  iVar2 = 0x57d01d71;
                  if (iVar5 != 0x592dcb41) {
                    iVar2 = iVar5;
                  }
                }
              }
            }
          }
          if (iVar5 < 0x18a23731) break;
          iVar2 = 0x18a23731;
          if (iVar5 != 0x27cd7605) {
            iVar2 = iVar5;
          }
          iVar4 = 0x2e6bba2e;
          if (iVar5 != 0x21e11565) {
            iVar4 = iVar2;
          }
          iVar2 = -0x6747fca3;
          if (iVar5 != 0x18a23731) {
            iVar2 = iVar4;
          }
        }
        if (iVar5 != 0xfc6d5b) break;
        iVar2 = 0xc558d32;
      }
      if (iVar5 != 0x83491fd) break;
      iVar2 = -0x6300725f;
    }
  } while (iVar5 != 0xc558d32);
  return local_8;
}