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
// Function Stack Size: 0x2c bytes
ID GTMBase64::baseDecode_length_charset_requirePadding_
             (ID param_1,SEL param_2,const_void__ param_3,unsigned_long_long param_4,
             const_char__ param_5,bool param_6)
{
  int iVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ID unaff_x27;
  ID IVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long local_b8;
  ID local_b0;
  ID local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  long local_80;
  char local_72;
  char local_71;
  ID local_70;
  ID local_68;
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = local_80;
  iVar4 = 0x6b341820;
LAB_0000c79c:
  while( true ) {
    iVar2 = iVar4;
    IVar6 = unaff_x27;
    local_80 = auVar7._0_8_;
    unaff_x27 = IVar6;
    iVar4 = 0x662bc2c0;
    if (0x1049eb40 < iVar2) break;
    if (iVar2 < -0x33065b11) {
      if (iVar2 < -0x4d1ff567) {
        if (iVar2 < -0x5d7218d0) {
          iVar5 = -0x4d1ff567;
          if (iVar2 != -0x5ebba728) {
            iVar5 = iVar2;
          }
          iVar4 = -0x5d7218d0;
          if (iVar2 != -0x75e01b70) {
            iVar4 = iVar5;
          }
        }
        else if (iVar2 == -0x5d7218d0) {
          iVar4 = 0x3f9fc08d;
        }
        else {
          iVar4 = iVar2;
          if (iVar2 == -0x58266dfc) {
            iVar4 = 0x502a2fe5;
          }
        }
      }
      else if (iVar2 < -0x470ff87a) {
        iVar5 = -0x5ebba728;
        if (iVar2 != -0x4b464ad6) {
          iVar5 = iVar2;
        }
        unaff_x27 = 0;
        iVar4 = 0x126d5e81;
        if (iVar2 != -0x4d1ff567) {
          unaff_x27 = IVar6;
          iVar4 = iVar5;
        }
      }
      else if (iVar2 == -0x470ff87a) {
        _objc_release(local_b0,auVar7._8_8_);
        auVar7._8_8_ = extraout_x1_02;
        auVar7._0_8_ = local_80;
        iVar4 = 0x776bb2fd;
      }
      else if (iVar2 == -0x419957f2) {
        _objc_msgSend(local_b0,local_a0,local_80);
        auVar7._8_8_ = extraout_x1_03;
        auVar7._0_8_ = local_80;
        iVar4 = 0x17558897;
      }
      else {
        iVar4 = iVar2;
        if (iVar2 == -0x3b998a29) {
          _objc_retainAutorelease(local_68);
          _objc_release(local_68);
          auVar7._8_8_ = extraout_x1;
          auVar7._0_8_ = local_80;
          iVar4 = 0x424dce3b;
        }
      }
    }
    else if (iVar2 < -0x25f99041) {
      if (iVar2 < -0x2cf49655) {
        iVar3 = -0x33065b11;
        iVar4 = 0x32bd5327;
        iVar5 = -0x5d7218d0;
        if (iVar2 != -0x31e99ee9) {
          iVar5 = iVar2;
        }
        goto LAB_0000cb80;
      }
      if (iVar2 == -0x2cf49655) {
        unaff_x27 = local_a8;
        iVar4 = 0x126d5e81;
      }
      else if (iVar2 == -0x2bb83a14) {
        unaff_x27 = local_a8;
        iVar4 = -0x419957f2;
        if (local_71 == '\0') {
          unaff_x27 = local_a8;
          iVar4 = 0x126d5e81;
        }
      }
      else if (iVar2 != -0x26231bf2) {
        iVar4 = iVar2;
      }
    }
    else if (iVar2 < -0xb972d20) {
      iVar5 = -0x470ff87a;
      if (iVar2 != -0x101608f0) {
        iVar5 = iVar2;
      }
      iVar4 = 0x7b55462a;
      if (iVar2 != -0x25f99041) {
        iVar4 = iVar5;
      }
    }
    else {
      iVar4 = 0x502a2fe5;
      if (iVar2 != -0x61dd4fe) {
        if (iVar2 == 0x6df7b14) {
          auVar7 = _objc_msgSend(param_1,local_88,param_3,param_4,local_98,local_90,param_5,param_6)
          ;
          local_72 = auVar7._0_8_ != 0;
          iVar4 = 0x6f455eaa;
        }
        else {
          iVar4 = iVar2;
          if (iVar2 == -0xb972d20) {
            return local_70;
          }
        }
      }
    }
  }
  if (iVar2 < 0x404856bd) {
    if (iVar2 < 0x22bd50f9) {
      if (iVar2 < 0x17115c1b) {
        iVar4 = -0x5ebba728;
        if ((iVar2 != 0x1049eb41) && (iVar4 = iVar2, iVar2 == 0x126d5e81)) {
          local_68 = IVar6;
          iVar4 = 0x424dce3b;
        }
      }
      else if (iVar2 == 0x17115c1b) {
        _objc_msgSend(param_1,local_88,param_3,param_4,local_98,local_90,param_5,param_6);
        auVar7._8_8_ = extraout_x1_01;
        auVar7._0_8_ = local_80;
        iVar4 = 0x6df7b14;
      }
      else {
        iVar4 = 0x7b55462a;
        if (iVar2 != 0x17558897) {
          iVar4 = iVar2;
        }
      }
      goto LAB_0000c79c;
    }
    if (0x32bd5326 < iVar2) {
      if (iVar2 == 0x32bd5327) {
        local_b8 = FUN_0000cdc4(param_4);
        local_b0 = _objc_msgSend(&_OBJC_CLASS___NSMutableData,"data");
        _objc_retain(local_b0);
        local_a0 = "setLength:";
        _objc_msgSend(local_b0,"setLength:",local_b8);
        _objc_retainAutorelease(local_b0);
        local_98 = _objc_msgSend(local_b0,"mutableBytes");
        auVar8 = _objc_msgSend(local_b0,"length");
        auVar7._8_8_ = auVar8._8_8_;
        auVar7._0_8_ = local_80;
        local_90 = auVar8._0_8_;
        local_88 = "baseDecode:srcLen:destBytes:destLen:charset:requirePadding:";
        local_a8 = local_b0;
        iVar4 = 0x3c5d0fa8;
      }
      else {
        iVar5 = -0x101608f0;
        if (iVar2 != 0x3f9fc08d) {
          iVar5 = iVar2;
        }
        iVar4 = 0x6df7b14;
        if (iVar2 != 0x3c5d0fa8) {
          iVar4 = iVar5;
        }
      }
      goto LAB_0000c79c;
    }
    iVar3 = 0x22bd50f9;
    iVar4 = -0x33065b11;
    iVar1 = 0x2dc7bbe1;
    iVar5 = 0x562f1c69;
  }
  else {
    if (iVar2 < 0x662bc2c0) {
      if (iVar2 < 0x502a2fe5) {
        if (iVar2 == 0x404856bd) {
          _objc_release(local_b0,auVar7._8_8_);
          auVar7._8_8_ = extraout_x1_04;
          auVar7._0_8_ = local_80;
          iVar4 = -0x470ff87a;
        }
        else {
          iVar4 = iVar2;
          if (iVar2 == 0x424dce3b) {
            local_70 = local_68;
            _objc_retainAutorelease(local_68);
            _objc_release(local_68);
            auVar7._8_8_ = extraout_x1_00;
            auVar7._0_8_ = local_80;
            iVar4 = -0xb972d20;
          }
        }
      }
      else if (iVar2 == 0x502a2fe5) {
        local_71 = local_80 != local_b8;
        iVar4 = 0x2dc7bbe1;
      }
      else {
        iVar5 = 0x22bd50f9;
        if (iVar2 != 0x63b87595) {
          iVar5 = iVar2;
        }
        if (iVar2 != 0x562f1c69) {
          iVar4 = iVar5;
        }
      }
      goto LAB_0000c79c;
    }
    if (iVar2 < 0x6f455eaa) {
      iVar3 = 0x662bc2c0;
      iVar4 = -0x2bb83a14;
      iVar5 = 0x22bd50f9;
      if (iVar2 != 0x6b341820) {
        iVar5 = iVar2;
      }
      goto LAB_0000cb80;
    }
    if (iVar2 == 0x6f455eaa) {
      iVar4 = -0x61dd4fe;
      if (local_72 == '\0') {
        iVar4 = -0x75e01b70;
      }
      goto LAB_0000c79c;
    }
    iVar3 = 0x776bb2fd;
    iVar4 = -0x4b464ad6;
    iVar1 = 0x7b55462a;
    iVar5 = -0x2cf49655;
  }
  if (iVar2 != iVar1) {
    iVar5 = iVar2;
  }
LAB_0000cb80:
  if (iVar2 != iVar3) {
    iVar4 = iVar5;
  }
  goto LAB_0000c79c;
}
long FUN_0000cdc4(long param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_10;
  undefined8 local_8;
  iVar3 = -0x2827bf00;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar4 = iVar3, iVar4 < 0x29c07c8) {
            iVar3 = -0x4fe3e804;
            if (iVar4 < -0x2827bf00) {
              if (iVar4 == -0x4fe3e804) {
                iVar3 = -0x1e82cb93;
                local_10 = param_1 + 3;
              }
              else if (iVar4 != -0x3694ece8) {
                iVar3 = iVar4;
              }
            }
            else {
              iVar1 = 0x54efdafc;
              if (iVar4 != -0x1e82cb93) {
                iVar1 = iVar4;
              }
              iVar2 = 0x2488a21b;
              if (iVar4 != -0x20a5c517) {
                iVar2 = iVar1;
              }
              if (iVar4 != -0x2827bf00) {
                iVar3 = iVar2;
              }
            }
          }
          if (0x2d295edc < iVar4) break;
          if (iVar4 == 0x29c07c8) {
            local_8 = (local_10 >> 2) * 2 + (local_10 >> 2);
            iVar3 = 0x6f8b8fdb;
          }
          else {
            iVar1 = 0x2d295edd;
            if (iVar4 != 0x2488a21b) {
              iVar1 = iVar4;
            }
            iVar3 = 0x2488a21b;
            if (iVar4 != 0x4c8ba67) {
              iVar3 = iVar1;
            }
          }
        }
        if (iVar4 != 0x54efdafc) break;
        iVar3 = 0x29c07c8;
      }
      if (iVar4 != 0x6f8b8fdb) break;
      iVar3 = -0x20a5c517;
    }
    iVar3 = iVar4;
  } while (iVar4 != 0x2d295edd);
  return local_8;
}
// Function Stack Size: 0x3c bytes
unsigned_long_long
GTMBase64::baseEncode_srcLen_destBytes_destLen_charset_padded_
          (ID param_1,SEL param_2,const_char__ param_3,unsigned_long_long param_4,char *param_5,
          unsigned_long_long param_6,const_char__ param_7,bool param_8)
{
  unsigned_long_long uVar1;
                    // WARNING: Could not recover jumptable at 0x0000cf6c. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*DAT_0006f9b0)();
  return uVar1;
}
// Function Stack Size: 0x3c bytes
unsigned_long_long
GTMBase64::baseDecode_srcLen_destBytes_destLen_charset_requirePadding_
          (ID param_1,SEL param_2,const_char__ param_3,unsigned_long_long param_4,char *param_5,
          unsigned_long_long param_6,const_char__ param_7,bool param_8)
{
  unsigned_long_long uVar1;
                    // WARNING: Could not recover jumptable at 0x0000da7c. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*DAT_0006ff00)();
  return uVar1;
}
byte FUN_0000e710(ulong param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong local_10;
  byte local_2;
  byte local_1;
  iVar2 = -0x34033bd8;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar2, iVar2 = iVar3, iVar3 < -0x929a096) {
          if (iVar3 < -0x1eec559d) {
            iVar1 = 0x53c02f31;
            if (iVar3 != -0x34033bd8) {
              iVar1 = iVar3;
            }
            iVar2 = -0x1eec559d;
            if (iVar3 != -0x71d88486) {
              iVar2 = iVar1;
            }
          }
          else if (iVar3 == -0x1eec559d) {
            local_2 = " !\"#$%&\'()*+,-./0123ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc"
                      [local_10 + 0x99];
            iVar2 = 0x5e9ace4d;
          }
          else if (iVar3 == -0x101aa6b4) {
            local_1 = local_2 & 1;
            iVar2 = 0x3b07fb00;
          }
        }
        if (iVar3 < 0x53c02f31) break;
        if (iVar3 == 0x53c02f31) {
          iVar2 = -0x71d88486;
          local_10 = param_1 & 0xffffffff;
        }
        else {
          iVar2 = -0x101aa6b4;
          if (iVar3 != 0x5e9ace4d) {
            iVar2 = iVar3;
          }
        }
      }
      if (iVar3 != -0x929a096) break;
      iVar2 = -0x101aa6b4;
    }
  } while (iVar3 != 0x3b07fb00);
  return local_1;
}
/*
Unable to decompile 'viewDidLoad'
Cause: Exception while decompiling 0000e83c: process: timeout
*/
undefined1  [16] FUN_000277d4(ulong param_1)
{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 local_20;
  iVar1 = -0x6bbd9ed0;
  while( true ) {
    while( true ) {
      while (iVar1 < -0x41263c37) {
        if (iVar1 == -0x7c5c7258) {
          iVar1 = -0x18c7f8c2;
          local_20 = param_1;
        }
        else if (iVar1 == -0x6bbd9ed0) {
          iVar1 = -0x41263c37;
        }
        else if (iVar1 == -0x58eb5354) {
          iVar1 = 0x460869ac;
        }
      }
      if (-0x18c7f8c3 < iVar1) break;
      if (iVar1 == -0x41263c37) {
        iVar1 = -0x3c4c5d2b;
      }
      else if (iVar1 == -0x3c4c5d2b) {
        iVar1 = -0x58eb5354;
      }
    }
    if (iVar1 == -0x18c7f8c2) break;
    if (iVar1 == 0x460869ac) {
      iVar1 = -0x7c5c7258;
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_20;
  return auVar2;
}
undefined1  [16] FUN_000278dc(ulong param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined8 local_10;
  iVar1 = 0x531d1237;
  do {
    while( true ) {
      while (iVar4 = iVar1, iVar4 < 0x199e996d) {
        iVar1 = 0x4c386e10;
        if (iVar4 != 0x119e7e52) {
          iVar1 = iVar4;
        }
        iVar2 = 0x4c386e10;
        if (iVar4 != 0xaf9583e) {
          iVar2 = iVar1;
        }
        iVar1 = 0x2a5514cc;
        if (iVar4 != -0x9b5c6fd) {
          iVar1 = iVar2;
        }
        iVar2 = 0x199e996d;
        if (iVar4 != -0x2c3e1c37) {
          iVar2 = iVar4;
        }
        iVar3 = -0x2c3e1c37;
        if (iVar4 != -0x3d2b03ae) {
          iVar3 = iVar2;
        }
        if (iVar4 < -0x9b5c6fd) {
          iVar1 = iVar3;
        }
      }
      if (0x531d1236 < iVar4) break;
      if (iVar4 == 0x199e996d) {
        iVar1 = 0x6b757313;
      }
      else if (iVar4 == 0x2a5514cc) {
        iVar1 = 0xaf9583e;
      }
      else {
        iVar1 = iVar4;
        if (iVar4 == 0x4c386e10) {
          iVar1 = -0x3d2b03ae;
          local_10 = param_1;
        }
      }
    }
    iVar1 = -0x9b5c6fd;
  } while (((iVar4 == 0x531d1237) || (iVar1 = -0x9b5c6fd, iVar4 == 0x550eb506)) ||
          (iVar1 = iVar4, iVar4 != 0x6b757313));
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_10;
  return auVar5;
}
void FUN_00027a38(long param_1)
{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 auStack_e0 [8];
  undefined8 *local_d8;
  long local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  char local_79;
  undefined *local_78;
  undefined *local_70;
  undefined8 *local_68;
  puVar7 = (undefined8 *)auStack_e0;
  iVar1 = -0x44e2e283;
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            while (iVar10 = iVar1, iVar1 = iVar10, -0xa3ba83e < iVar10) {
              if (iVar10 < 0x370435ca) {
                if (iVar10 < 0xf9f815f) {
                  iVar1 = -0x51d3a007;
                  if (iVar10 != -0xa3ba83d) {
                    if (iVar10 == -0x99e80f9) {
                      *local_68 = &DAT_000683c0;
                      local_d8[4] = *(undefined8 *)(local_d0 + 0x20);
                      puVar3 = local_d8;
                      _objc_retain(local_90);
                      puVar3[5] = local_88;
                      puVar4 = local_d8;
                      uVar8 = _objc_retain(*(undefined8 *)(local_d0 + 0x28));
                      puVar4[6] = uVar8;
                      puVar5 = local_d8;
                      uVar8 = _objc_retain(*(undefined8 *)(local_d0 + 0x30));
                      puVar5[7] = uVar8;
                      puVar6 = local_d8;
                      _objc_retain(local_a0);
                      puVar6[8] = local_98;
                      _dispatch_async(local_78,local_d8);
                      _objc_release(local_70);
                      _objc_release(puVar6[8]);
                      _objc_release(puVar5[7]);
                      _objc_release(puVar4[6]);
                      _objc_release(puVar3[5]);
                      iVar1 = -0x5afecc31;
                    }
                    else {
                      iVar1 = iVar10;
                      if (iVar10 == 0x767797a) {
                        _objc_release(local_a0);
                        iVar1 = -0x361ecd95;
                      }
                    }
                  }
                }
                else if (iVar10 == 0xf9f815f) {
                  local_b0 = _objc_msgSend(local_b8,local_c0,&cf_https___imgapi_cn_cos_php);
                  _objc_retain(local_b0);
                  local_a8 = local_b0;
                  iVar1 = 0x370435ca;
                }
                else if (iVar10 == 0x28206d61) {
                  uVar8 = _objc_msgSend(local_c8,"initWithContentsOfURL:",local_a8);
                  _objc_release(local_b0);
                  uVar9 = _objc_alloc(&_OBJC_CLASS___UIImage);
                  _objc_msgSend(uVar9,"initWithData:",uVar8);
                  iVar1 = -0x1a666bbf;
                }
                else if (iVar10 == 0x312bb683) {
                  local_78 = PTR___dispatch_main_q_00068058;
                  local_70 = PTR___dispatch_main_q_00068058;
                  _objc_retain(PTR___dispatch_main_q_00068058);
                  iVar1 = -0xa3ba83d;
                }
              }
              else if (iVar10 < 0x74ca8e3a) {
                iVar1 = -0x99e80f9;
                if (iVar10 != 0x5d7168a7) {
                  iVar1 = iVar10;
                }
                iVar2 = -0x1a666bbf;
                if (iVar10 != 0x50d5655c) {
                  iVar2 = iVar1;
                }
                iVar1 = 0x50d5655c;
                if (iVar10 != 0x370435ca) {
                  iVar1 = iVar2;
                }
              }
              else if (iVar10 == 0x74ca8e3a) {
                _objc_alloc(&_OBJC_CLASS___NSData);
                iVar1 = -0x497f2602;
              }
              else if (iVar10 == 0x7833c679) {
                iVar1 = 0x767797a;
              }
              else if (iVar10 == 0x7d2fbb0c) {
                _objc_release(local_90);
                iVar1 = -0x760e4248;
              }
            }
            if (-0x44e2e284 < iVar10) break;
            if (iVar10 < -0x5afecc31) {
              if (iVar10 == -0x760e4248) {
                _objc_release(local_90);
                iVar1 = 0x7833c679;
              }
              else if (iVar10 == -0x760083ba) {
                *local_d8 = PTR___NSConcreteStackBlock_00068030;
                *(undefined4 *)(local_d8 + 1) = 0xc2000000;
                *(undefined4 *)((long)local_d8 + 0xc) = 0;
                local_d8[2] = FUN_00028008;
                iVar1 = -0x51d3a007;
              }
              else if (iVar10 == -0x74604e49) {
                _objc_msgSend(local_b8,local_c0,&cf_https___imgapi_cn_cos_php);
                _objc_retainAutoreleasedReturnValue();
                iVar1 = 0xf9f815f;
              }
            }
            else {
              iVar1 = -0x760e4248;
              if (iVar10 != -0x5afecc31) {
                if (iVar10 == -0x51d3a007) {
                  *local_d8 = PTR___NSConcreteStackBlock_00068030;
                  *(undefined4 *)(local_d8 + 1) = 0xc2000000;
                  *(undefined4 *)((long)local_d8 + 0xc) = 0;
                  local_d8[2] = FUN_00028008;
                  local_68 = local_d8 + 3;
                  iVar1 = 0x5d7168a7;
                }
                else {
                  iVar1 = iVar10;
                  if (iVar10 == -0x497f2602) {
                    puVar7 = puVar7 + -10;
                    local_d8 = puVar7;
                    local_d0 = param_1;
                    local_c8 = _objc_alloc(&_OBJC_CLASS___NSData);
                    local_b8 = &_OBJC_CLASS___NSURL;
                    local_c0 = "URLWithString:";
                    iVar1 = -0x17c3cfe5;
                  }
                }
              }
            }
          }
          if (iVar10 < -0x17c3cfe5) break;
          if (iVar10 == -0x17c3cfe5) {
            iVar1 = -0x143ccf9a;
          }
          else {
            iVar1 = 0xf9f815f;
            if ((iVar10 != -0x143ccf9a) && (iVar1 = iVar10, iVar10 == -0xdf7dd38)) {
              iVar1 = 0x312bb683;
              if (local_79 == '\0') {
                iVar1 = -0x5afecc31;
              }
            }
          }
        }
        iVar1 = -0x497f2602;
      } while (iVar10 == -0x44e2e283);
      if (iVar10 != -0x1a666bbf) break;
      local_a0 = _objc_msgSend(local_c8,"initWithContentsOfURL:",local_a8);
      local_98 = local_a0;
      _objc_release(local_b0);
      uVar8 = _objc_alloc(&_OBJC_CLASS___UIImage);
      local_90 = _objc_msgSend(uVar8,"initWithData:",local_98);
      local_79 = local_98 != 0;
      local_88 = local_90;
      iVar1 = -0xdf7dd38;
    }
    iVar1 = iVar10;
  } while (iVar10 != -0x361ecd95);
  return;
}
void FUN_00028008(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,
                 long param_5)
{
  int iVar1;
  int iVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  cfstringStruct *unaff_x21;
  float fVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_270 [8];
  char *local_268;
  char *local_260;
  char *local_258;
  char *local_250;
  char *local_248;
  char *local_240;
  char *local_238;
  char *local_230;
  char *local_228;
  char *local_220;
  cfstringStruct *local_218;
  char *local_210;
  char *local_208;
  char *local_200;
  char *local_1f8;
  char *local_1f0;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  char *local_1d0;
  long local_1c8;
  char *local_1c0;
  char *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  long local_190;
  undefined8 local_188;
  undefined8 *local_180;
  char *local_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  char *local_f0;
  char local_e1;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char *local_90;
  char local_81;
  cfstringStruct *local_80;
  puVar9 = (undefined8 *)auStack_270;
  local_1c0 = "writeToFile:atomically:";
  local_210 = "mbjbView";
  local_1b8 = "setAlpha:";
  local_1d8 = "setTintColor:";
  local_1d0 = "clearColor";
  local_1e8 = "setContentMode:";
  local_1e0 = "initWithFrame:";
  local_1f8 = "setImage:";
  local_1f0 = "imageWithRenderingMode:";
  local_208 = "bounds";
  local_200 = "view";
  local_228 = "defaultManager";
  local_220 = "animateWithDuration:animations:completion:";
  local_238 = "systemVersion";
  local_230 = "currentDevice";
  local_248 = "setFrame:";
  local_240 = "initWithEffect:";
  local_258 = "addSubview:";
  local_250 = "setAutoresizingMask:";
  local_268 = "setCenter:";
  local_260 = "effectWithStyle:";
  local_1c8 = param_5;
  iVar2 = 0x1fea3ef8;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while (iVar12 = iVar2, iVar2 = iVar12, -0x16d81dd5 < iVar12) {
                if (iVar12 < 0x29798c11) {
                  if (iVar12 < 0x1399d5a5) {
                    if (iVar12 < 0x96fe46b) {
                      iVar2 = 0x96fe46b;
                      if ((iVar12 != -0x16d81dd4) && (iVar2 = iVar12, iVar12 == 0x6c1b62a)) {
                        _objc_msgSend(local_98,local_90);
                        uVar10 = _objc_retainAutoreleasedReturnValue();
                        fVar13 = (float)_objc_msgSend(uVar10,"floatValue");
                        local_81 = 15.0 <= fVar13;
                        _objc_release(uVar10);
                        _objc_release(local_98);
                        iVar2 = -0x7236784f;
                      }
                    }
                    else if (iVar12 == 0x96fe46b) {
                      _objc_msgSend(*local_180,local_210);
                      uVar10 = _objc_retainAutoreleasedReturnValue();
                      _objc_msgSend(uVar10,"insertSubview:belowSubview:",local_118,
                                    *(undefined8 *)(local_190 + 0x30));
                      _objc_release(uVar10);
                      _objc_msgSend(0,local_120,local_1b8);
                      local_c8 = &_OBJC_CLASS___UIView;
                      *local_1b0 = PTR___NSConcreteStackBlock_00068030;
                      *(undefined4 *)(local_1b0 + 1) = 0xc2000000;
                      *(undefined4 *)((long)local_1b0 + 0xc) = 0;
                      local_1b0[2] = FUN_00029048;
                      local_1b0[3] = &DAT_00068360;
                      local_c0 = local_1b0 + 4;
                      iVar2 = 0x2ce7f426;
                    }
                    else if (iVar12 == 0xca82be9) {
                      uVar10 = _objc_msgSend(&_OBJC_CLASS___UIBlurEffect,local_260,5);
                      local_e0 = uVar10;
                      _objc_retain(uVar10);
                      local_d8 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);
                      local_d0 = uVar10;
                      iVar2 = 0x1399d5a5;
                    }
                    else if (iVar12 == 0x1030e7b3) {
                      _objc_alloc(&_OBJC_CLASS___UIImageView);
                      lVar7 = local_1c8;
                      pcVar6 = local_200;
                      _objc_msgSend(*(undefined8 *)(local_1c8 + 0x20),local_200);
                      uVar10 = _objc_retainAutoreleasedReturnValue();
                      pcVar5 = local_208;
                      _objc_msgSend(uVar10,local_208);
                      _objc_msgSend(*(undefined8 *)(lVar7 + 0x20),pcVar6);
                      uVar10 = _objc_retainAutoreleasedReturnValue();
                      _objc_msgSend(uVar10,pcVar5);
                      FUN_000277d4(0,0);
                      iVar2 = -0x7b58e8c1;
                    }
                  }
                  else if (iVar12 < 0x1fea3ef8) {
                    if (iVar12 == 0x1399d5a5) {
                      uVar10 = _objc_msgSend(local_d8,local_240,local_d0);
                      _objc_msgSend(local_120,local_168);
                      _objc_msgSend(uVar10,local_248);
                      _objc_msgSend(uVar10,local_250,0x12);
                      _objc_msgSend(_BlurEffectap,uVar10,local_1b8);
                      _objc_msgSend(local_120,local_258,uVar10);
                      _objc_release(uVar10);
                      _objc_release(local_e0);
                      iVar2 = -0x2540ac11;
                    }
                    else {
                      iVar2 = 0x6c1b62a;
                      if (iVar12 != 0x1a5366a8) {
                        iVar2 = iVar12;
                      }
                    }
                  }
                  else {
                    iVar2 = -0x62ddcfbc;
                    if (iVar12 != 0x27d82581) {
                      iVar2 = iVar12;
                    }
                    iVar1 = -0x30705a8a;
                    if (iVar12 != 0x23bfa052) {
                      iVar1 = iVar2;
                    }
                    iVar2 = -0x7b58e8c1;
                    if (iVar12 != 0x1fea3ef8) {
                      iVar2 = iVar1;
                    }
                  }
                }
                else if (iVar12 < 0x4c889623) {
                  if (iVar12 < 0x3301b836) {
                    if (iVar12 == 0x29798c11) {
                      _objc_msgSend(local_98,local_90);
                      uVar10 = _objc_retainAutoreleasedReturnValue();
                      _objc_msgSend(uVar10,"floatValue");
                      _objc_release(uVar10);
                      _objc_release(local_98);
                      iVar2 = 0x6c1b62a;
                    }
                    else {
                      iVar2 = -0x2662b6e9;
                      if (iVar12 != 0x2ce7f426) {
                        iVar2 = iVar12;
                      }
                    }
                  }
                  else if (iVar12 == 0x3301b836) {
                    iVar2 = -0x5021d23d;
                  }
                  else if (iVar12 == 0x33e9a32e) {
                    param_3 = local_148;
                    param_4 = local_140;
                    local_120 = _objc_msgSend(local_128,local_130,local_188,local_1e0);
                    local_118 = local_120;
                    _objc_release(local_160);
                    _objc_release(local_170);
                    _objc_msgSend(local_120,local_1e8,2);
                    _objc_msgSend(*(undefined8 *)(local_190 + 0x28),local_1f0,1);
                    uVar10 = _objc_retainAutoreleasedReturnValue();
                    _objc_msgSend(local_120,local_1f8,uVar10);
                    _objc_release(uVar10);
                    local_110 = _objc_msgSend(*local_180,local_178);
                    _objc_retain(local_110);
                    _objc_msgSend(local_110,local_168);
                    dVar15 = param_3 * 0.5;
                    local_108 = _objc_msgSend(*local_180,local_178);
                    _objc_retain(local_108);
                    _objc_msgSend(local_108,local_168);
                    dVar14 = param_4 / 3.0;
                    local_100 = FUN_000278dc(dVar15);
                    local_f0 = local_268;
                    local_f8 = dVar14;
                    iVar2 = 0x3301b836;
                  }
                  else {
                    iVar2 = -0x16d81dd4;
                    if (iVar12 != 0x35ba44fe) {
                      iVar2 = iVar12;
                    }
                  }
                }
                else if (iVar12 < 0x53571e9e) {
                  if (iVar12 == 0x4c889623) {
                    local_80 = unaff_x21;
                    iVar2 = -0x1ae002a1;
                  }
                  else {
                    pcVar3 = &cf__var_jb_var_mobile_Library_Preferences_xc_lzsxcl_w2Proimage_plist;
                    if (iVar12 != 0x4ff005cc) {
                      pcVar3 = unaff_x21;
                    }
                    unaff_x21 = pcVar3;
                    iVar2 = 0x4c889623;
                    if (iVar12 != 0x4ff005cc) {
                      iVar2 = iVar12;
                    }
                  }
                }
                else {
                  iVar2 = -0x45a55fd1;
                  if (((iVar12 != 0x53571e9e) && (iVar2 = -0x30705a8a, iVar12 != 0x5d6b1c33)) &&
                     (iVar2 = iVar12, iVar12 == 0x79def820)) {
                    _objc_msgSend(local_100,local_f8,local_120,local_f0);
                    _objc_release(local_108);
                    _objc_release(local_110);
                    _objc_msgSend(&_OBJC_CLASS___UIColor,local_1d0);
                    uVar10 = _objc_retainAutoreleasedReturnValue();
                    _objc_msgSend(local_120,local_1d8,uVar10);
                    _objc_release(uVar10);
                    iVar2 = -0x6845ab53;
                  }
                }
              }
              if (iVar12 < -0x5021d23d) break;
              if (iVar12 < -0x2662b6e9) {
                if (iVar12 < -0x39309b96) {
                  iVar1 = 0x35ba44fe;
                  if (iVar12 != -0x45a55fd1) {
                    iVar1 = iVar12;
                  }
                  iVar2 = -0x6845ab53;
                  if (iVar12 != -0x5021d23d) {
                    iVar2 = iVar1;
                  }
                }
                else if (iVar12 == -0x39309b96) {
                  iVar2 = 0xca82be9;
                  if (local_e1 == '\0') {
                    iVar2 = -0x16d81dd4;
                  }
                }
                else if (iVar12 == -0x36c52747) {
                  param_3 = local_148;
                  param_4 = local_140;
                  uVar10 = _objc_msgSend(local_128,local_130,local_188,local_1e0);
                  _objc_release(local_160);
                  _objc_release(local_170);
                  _objc_msgSend(uVar10,local_1e8,2);
                  _objc_msgSend(*(undefined8 *)(local_190 + 0x28),local_1f0,1);
                  uVar11 = _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(uVar10,local_1f8,uVar11);
                  _objc_release(uVar11);
                  _objc_msgSend(*local_180,local_178);
                  uVar10 = _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(uVar10,local_168);
                  dVar14 = param_3 * 0.5;
                  _objc_msgSend(*local_180,local_178);
                  uVar10 = _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(uVar10,local_168);
                  FUN_000278dc(dVar14,param_4 / 3.0);
                  iVar2 = 0x33e9a32e;
                }
                else {
                  iVar2 = -0x6477c522;
                  if (iVar12 != -0x30705a8a) {
                    iVar2 = iVar12;
                  }
                }
              }
              else if (iVar12 < -0x1bb71e3c) {
                if (iVar12 == -0x2662b6e9) {
                  _objc_retain(local_120);
                  puVar4 = PTR___NSConcreteStackBlock_00068030;
                  *local_c0 = local_118;
                  puVar8 = local_1b0;
                  local_218 = unaff_x21;
                  *local_1a8 = PTR___NSConcreteStackBlock_00068030;
                  *(undefined4 *)(local_1a8 + 1) = 0xc2000000;
                  *(undefined4 *)((long)local_1a8 + 0xc) = 0;
                  local_1a8[2] = FUN_0002942c;
                  local_1a8[3] = &DAT_00068390;
                  local_b8 = local_1a8 + 4;
                  _objc_retain(local_120);
                  *local_b8 = local_118;
                  pcVar5 = local_220;
                  _objc_msgSend(0x3fdccccccccccccd,local_c8,local_220,puVar8,local_1a8);
                  *local_1a0 = puVar4;
                  *(undefined4 *)(local_1a0 + 1) = 0xc2000000;
                  *(undefined4 *)((long)local_1a0 + 0xc) = 0;
                  local_1a0[2] = FUN_00029558;
                  local_1a0[3] = &DAT_00068360;
                  lVar7 = local_190;
                  local_b0 = local_1a0 + 4;
                  uVar10 = _objc_retain(*(undefined8 *)(local_190 + 0x38));
                  *local_b0 = uVar10;
                  puVar8 = local_1a0;
                  *local_198 = puVar4;
                  unaff_x21 = local_218;
                  *(undefined4 *)(local_198 + 1) = 0xc2000000;
                  *(undefined4 *)((long)local_198 + 0xc) = 0;
                  local_198[2] = FUN_000296e8;
                  local_198[3] = &DAT_00068390;
                  local_a8 = local_198 + 4;
                  uVar10 = _objc_retain(*(undefined8 *)(lVar7 + 0x38));
                  *local_a8 = uVar10;
                  _objc_msgSend(0x3fe3333333333333,&_OBJC_CLASS___UIView,pcVar5,puVar8,local_198);
                  local_a0 = _objc_msgSend(&_OBJC_CLASS___NSFileManager,local_228);
                  _objc_retain(local_a0);
                  local_98 = _objc_msgSend(&_OBJC_CLASS___UIDevice,local_230);
                  _objc_retain(local_98);
                  local_90 = local_238;
                  iVar2 = 0x1a5366a8;
                }
                else {
                  iVar2 = -0x45a55fd1;
                  if (iVar12 != -0x2540ac11) {
                    iVar2 = iVar12;
                  }
                }
              }
              else if (iVar12 == -0x1bb71e3c) {
                _objc_msgSend(local_a0,"createFileAtPath:contents:attributes:",local_80,0,0);
                uVar10 = *(undefined8 *)(local_190 + 0x40);
                puVar9[-2] = &cf_wallpaperImage;
                puVar9[-1] = 0;
                _objc_msgSend(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",uVar10);
                uVar10 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar10,local_1c0,local_80,1);
                _objc_release(uVar10);
                _objc_release(local_80);
                _objc_release(local_a0);
                _objc_release(*local_a8);
                _objc_release(*local_b0);
                _objc_release(*local_b8);
                _objc_release(*local_c0);
                _objc_release(local_120);
                iVar2 = -0x1ae002a1;
              }
              else if (iVar12 == -0x1ae002a1) {
                _objc_msgSend(local_a0,"createFileAtPath:contents:attributes:",local_80,0,0);
                uVar10 = *(undefined8 *)(local_190 + 0x40);
                puVar9[-2] = &cf_wallpaperImage;
                puVar9[-1] = 0;
                _objc_msgSend(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",uVar10);
                uVar10 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar10,local_1c0,local_80,1);
                _objc_release(uVar10);
                _objc_release(local_80);
                _objc_release(local_a0);
                _objc_release(*local_a8);
                _objc_release(*local_b0);
                _objc_release(*local_b8);
                _objc_release(*local_c0);
                _objc_release(local_120);
                iVar2 = -0x6774ac4e;
              }
              else {
                iVar2 = 0x33e9a32e;
                if (iVar12 != -0x1ace1bbd) {
                  iVar2 = iVar12;
                }
              }
            }
            if (-0x6774ac4f < iVar12) break;
            if (iVar12 < -0x7236784f) {
              if (iVar12 == -0x7b58e8c1) {
                local_1b0 = puVar9 + -6;
                local_1a8 = puVar9 + -0xc;
                local_1a0 = puVar9 + -0x12;
                puVar9 = puVar9 + -0x18;
                local_190 = local_1c8;
                local_198 = puVar9;
                local_188 = _objc_alloc(&_OBJC_CLASS___UIImageView);
                local_180 = (undefined8 *)(local_190 + 0x20);
                local_178 = local_200;
                local_170 = _objc_msgSend(*local_180,local_200);
                _objc_retain(local_170);
                local_168 = local_208;
                _objc_msgSend(local_170,local_208);
                local_160 = _objc_msgSend(*local_180,local_178);
                _objc_retain(local_160);
                _objc_msgSend(local_160,local_168);
                uVar10 = 0;
                local_158 = FUN_000277d4(0);
                local_150 = uVar10;
                local_148 = param_3;
                local_140 = param_4;
                local_138 = local_158;
                local_130 = uVar10;
                local_128 = local_158;
                iVar2 = -0x770792ac;
              }
              else {
                iVar2 = -0x1ace1bbd;
                if (iVar12 != -0x770792ac) {
                  iVar2 = iVar12;
                }
              }
            }
            else if (iVar12 == -0x7236784f) {
              iVar2 = 0x5d6b1c33;
              if (local_81 == '\0') {
                iVar2 = 0x4c889623;
              }
              unaff_x21 = &cf__var_mobile_Library_Preferences_xc_lzsxcl_w2Proimage_plist;
            }
            else if (iVar12 == -0x6c982479) {
              _objc_msgSend(*local_180,local_210);
              uVar10 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar10,"insertSubview:belowSubview:",local_118,
                            *(undefined8 *)(local_190 + 0x30));
              _objc_release(uVar10);
              _objc_msgSend(0,local_120,local_1b8);
              *local_1b0 = PTR___NSConcreteStackBlock_00068030;
              *(undefined4 *)(local_1b0 + 1) = 0xc2000000;
              *(undefined4 *)((long)local_1b0 + 0xc) = 0;
              local_1b0[2] = FUN_00029048;
              local_1b0[3] = &DAT_00068360;
              iVar2 = 0x96fe46b;
            }
            else if (iVar12 == -0x6845ab53) {
              _objc_msgSend(local_100,local_f8,local_120,local_f0);
              _objc_release(local_108);
              _objc_release(local_110);
              _objc_msgSend(&_OBJC_CLASS___UIColor,local_1d0);
              uVar10 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_120,local_1d8,uVar10);
              _objc_release(uVar10);
              local_e1 = _BlurEffect != '\0';
              iVar2 = -0x39309b96;
            }
          }
          if (iVar12 < -0x59a41551) break;
          iVar1 = 0x4ff005cc;
          if (iVar12 != -0x515089d1) {
            iVar1 = iVar12;
          }
          iVar2 = -0x62ddcfbc;
          if (iVar12 != -0x59a41551) {
            iVar2 = iVar1;
          }
        }
        if (iVar12 != -0x6477c522) break;
        iVar2 = 0x27d82581;
      }
      if (iVar12 != -0x62ddcfbc) break;
      iVar2 = -0x515089d1;
    }
  } while (iVar12 != -0x6774ac4e);
  return;
}
void FUN_00029048(long param_1)
{
  int iVar1;
  char *local_60;
  undefined8 local_58;
  iVar1 = 0x195003c;
  while( true ) {
    while (iVar1 < 0x22b97687) {
      if (iVar1 == -0xb64995d) {
        iVar1 = 0x58546f43;
      }
      else if (iVar1 == 0x195003c) {
        local_58 = *(undefined8 *)(param_1 + 0x20);
        iVar1 = -0xb64995d;
        local_60 = "setAlpha:";
      }
    }
    if (iVar1 == 0x22b97687) break;
    if (iVar1 == 0x58546f43) {
      _objc_msgSend(0x3ff0000000000000,local_58,local_60);
      iVar1 = 0x22b97687;
    }
  }
  return;
}
void FUN_00029124(undefined8 param_1,long param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_30;
  undefined8 local_28;
  iVar1 = 0x46e58170;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar4 = iVar1, 0x4432aee4 < iVar4) {
            iVar1 = 0x2d6ec1ea;
            if (iVar4 != 0x7e4c3271) {
              iVar1 = iVar4;
            }
            iVar2 = 0x4d30237;
            if (iVar4 != 0x7cb83405) {
              iVar2 = iVar1;
            }
            iVar1 = 0x7e4c3271;
            if (iVar4 != 0x551b4f9e) {
              iVar1 = iVar2;
            }
            iVar2 = 0x4d30237;
            if (iVar4 != 0x46e58170) {
              iVar2 = iVar4;
            }
            iVar3 = 0x588d57c;
            if (iVar4 != 0x4432aee5) {
              iVar3 = iVar2;
            }
            if (iVar4 < 0x551b4f9e) {
              iVar1 = iVar3;
            }
          }
          if (0x588d57b < iVar4) break;
          if (iVar4 == -0x685588db) {
            iVar1 = -0x619bb1be;
          }
          else if (iVar4 == -0x619bb1be) {
            local_28 = local_30;
            iVar1 = 0x551b4f9e;
          }
          else {
            iVar1 = iVar4;
            if (iVar4 == 0x4d30237) {
              local_30 = *(undefined8 *)(param_2 + 0x20);
              iVar1 = 0x4432aee5;
            }
          }
        }
        iVar1 = -0x619bb1be;
      } while (iVar4 == 0x588d57c);
      if (iVar4 != 0x2d6ec1ea) break;
      _objc_retain(local_28);
      iVar1 = 0x14114e28;
    }
    iVar1 = iVar4;
  } while (iVar4 != 0x14114e28);
  return;
}
void FUN_000292ac(long param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar1 = -0x46f805ad;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar3 = iVar1, iVar3 < -0x20815db3) {
            if (iVar3 < -0x46f805ad) {
              if (iVar3 == -0x79dfa840) {
                iVar1 = 0x76fda1fe;
              }
              else {
                iVar1 = iVar3;
                if (iVar3 == -0x6b4e6dfe) {
                  _objc_release(*(undefined8 *)(param_1 + 0x20));
                  iVar1 = -0x42fcfa68;
                }
              }
            }
            else {
              iVar1 = -0x6859952;
              if (iVar3 != -0x46f805ad) {
                if (iVar3 == -0x42fcfa68) {
                  _objc_release(*(undefined8 *)(param_1 + 0x20));
                  iVar1 = -0x79dfa840;
                }
                else {
                  iVar1 = 0x2224e537;
                  if (iVar3 != -0x34351c07) {
                    iVar1 = iVar3;
                  }
                }
              }
            }
          }
          if (0x2224e536 < iVar3) break;
          iVar1 = -0x20815db3;
          if (iVar3 != -0x6859952) {
            iVar1 = iVar3;
          }
          iVar2 = -0x42fcfa68;
          if (iVar3 != -0x7b01cb4) {
            iVar2 = iVar1;
          }
          iVar1 = -0x7b01cb4;
          if (iVar3 != -0x20815db3) {
            iVar1 = iVar2;
          }
        }
        iVar1 = -0x6859952;
      } while (iVar3 == 0x57a0b782);
      if (iVar3 != 0x76fda1fe) break;
      iVar1 = -0x34351c07;
    }
    iVar1 = iVar3;
  } while (iVar3 != 0x2224e537);
  return;
}
void FUN_0002942c(long param_1)
{
  int iVar1;
  long local_78;
  iVar1 = -0x75399890;
  while( true ) {
    while (0x25167361 < iVar1) {
      if (iVar1 == 0x25167362) {
        iVar1 = -0x504567f9;
      }
      else if (iVar1 == 0x3481705b) {
        _objc_msgSend(0x3fefae147ae147ae,*(undefined8 *)(local_78 + 0x20),"setAlpha:");
        iVar1 = -0x77229e87;
      }
      else if (iVar1 == 0x3ddcae54) {
        iVar1 = 0x25167362;
        local_78 = param_1;
      }
    }
    if (iVar1 == -0x77229e87) break;
    if (iVar1 == -0x75399890) {
      iVar1 = 0x3ddcae54;
    }
    else if (iVar1 == -0x504567f9) {
      iVar1 = 0x3481705b;
    }
  }
  return;
}
void FUN_00029558(long param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  long local_38;
  char *local_30;
  undefined8 local_28;
  iVar2 = -0x67963dfc;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar2, 0x39aece17 < iVar3) {
            if (iVar3 < 0x3e219ada) {
              iVar1 = 0x4a9e30b9;
              if (iVar3 != 0x3bbbab60) {
                iVar1 = iVar3;
              }
              iVar2 = -0x4889c451;
              if (iVar3 != 0x39aece18) {
                iVar2 = iVar1;
              }
            }
            else {
              iVar2 = 0x320871eb;
              if (iVar3 != 0x3e219ada) {
                if (iVar3 == 0x4a9e30b9) {
                  _objc_msgSend(0,local_28,local_30);
                  iVar2 = -0x2ca04fd4;
                }
                else {
                  iVar2 = 0x3bbbab60;
                  if (iVar3 != 0x60211477) {
                    iVar2 = iVar3;
                  }
                }
              }
            }
          }
          if (-0x2ca04fd5 < iVar3) break;
          iVar2 = 0x320871eb;
          if ((iVar3 != -0x67963dfc) && (iVar2 = iVar3, iVar3 == -0x4889c451)) {
            local_28 = *(undefined8 *)(local_38 + 0x20);
            local_30 = "setAlpha:";
            iVar2 = 0x60211477;
          }
        }
        if (iVar3 != -0xe41d74c) break;
        iVar2 = 0x39aece18;
      }
      if (iVar3 != 0x320871eb) break;
      local_38 = param_1;
      iVar2 = -0xe41d74c;
    }
    iVar2 = iVar3;
  } while (iVar3 != -0x2ca04fd4);
  return;
}
void FUN_000296e8(long param_1)
{
  int iVar1;
  iVar1 = 0x5a949592;
  while( true ) {
    while (0x4bbc8c15 < iVar1) {
      if (iVar1 == 0x4bbc8c16) {
        iVar1 = -0x44f5bee9;
      }
      else if (iVar1 == 0x5a949592) {
        _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"removeFromSuperview");
        iVar1 = 0x1f7046a9;
      }
    }
    if (iVar1 == -0x44f5bee9) break;
    if (iVar1 == 0x1f7046a9) {
      iVar1 = 0x4bbc8c16;
    }
  }
  return;
}
void FUN_000297b0(undefined8 param_1,long param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_40;
  undefined8 local_38;
  iVar1 = -0x689a85e6;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar1, iVar3 < 0xb582dc0) {
          if (iVar3 < -0x37612eed) {
            iVar1 = -0x766a4d35;
            if (iVar3 != -0x3acec717) {
              iVar1 = iVar3;
            }
            iVar2 = -0x4d12787;
            if (iVar3 != -0x689a85e6) {
              iVar2 = iVar1;
            }
            iVar1 = -0x37612eed;
            if (iVar3 != -0x766a4d35) {
              iVar1 = iVar2;
            }
          }
          else if (iVar3 == -0x37612eed) {
            local_38 = (undefined8 *)(local_40 + 0x40);
            iVar1 = 0x30b0e4f4;
          }
          else if (iVar3 == -0x9f17825) {
            _objc_retain(*local_38);
            iVar1 = 0x59dd2091;
          }
          else {
            iVar1 = iVar3;
            if (iVar3 == -0x4d12787) {
              _objc_retain(*(undefined8 *)(param_2 + 0x20));
              _objc_retain(*(undefined8 *)(param_2 + 0x28));
              _objc_retain(*(undefined8 *)(param_2 + 0x30));
              _objc_retain(*(undefined8 *)(param_2 + 0x38));
              iVar1 = -0x3acec717;
              local_40 = param_2;
            }
          }
        }
        if (0x35e27b36 < iVar3) break;
        iVar1 = 0x71fe9061;
        if (iVar3 != 0x30b0e4f4) {
          iVar1 = iVar3;
        }
        iVar2 = -0x4d12787;
        if (iVar3 != 0xe40df9a) {
          iVar2 = iVar1;
        }
        iVar1 = -0x9f17825;
        if (iVar3 != 0xb582dc0) {
          iVar1 = iVar2;
        }
      }
      if (iVar3 != 0x35e27b37) break;
      iVar1 = -0x37612eed;
    }
    iVar1 = -0x9f17825;
  } while ((iVar3 == 0x71fe9061) || (iVar1 = iVar3, iVar3 != 0x59dd2091));
  return;
}
void FUN_0002999c(long param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  long local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  iVar2 = -0x3775b80;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar2, iVar3 < 0x1394f615) {
            if (iVar3 < -0x60deea3e) {
              if (iVar3 == -0x75ae9cf6) {
                _objc_release(*(undefined8 *)(local_60 + 0x40));
                _objc_release(*local_40);
                _objc_release(*local_48);
                _objc_release(*local_50);
                local_38 = *local_58;
                iVar2 = -0x66474fc0;
              }
              else {
                iVar1 = 0x1394f615;
                if (iVar3 != -0x66474fc0) {
                  iVar1 = iVar3;
                }
                iVar2 = -0x75ae9cf6;
                if (iVar3 != -0x686a7ae7) {
                  iVar2 = iVar1;
                }
              }
            }
            else if (iVar3 == -0x60deea3e) {
              _objc_release(local_38);
              iVar2 = 0x49579ba3;
            }
            else if (iVar3 == -0x15fb9826) {
              local_58 = (undefined8 *)(param_1 + 0x20);
              local_50 = (undefined8 *)(param_1 + 0x28);
              local_48 = (undefined8 *)(param_1 + 0x30);
              local_40 = (undefined8 *)(param_1 + 0x38);
              local_60 = param_1;
              iVar2 = 0x2c4d86af;
            }
            else {
              iVar2 = -0x15fb9826;
              if (iVar3 != -0x3775b80) {
                iVar2 = iVar3;
              }
            }
          }
          if (0x2c4d86ae < iVar3) break;
          iVar2 = -0x60deea3e;
          if (((iVar3 != 0x1394f615) && (iVar2 = -0x15fb9826, iVar3 != 0x1901d162)) &&
             (iVar2 = iVar3, iVar3 == 0x1dff9fd6)) {
            _objc_release(local_38);
            iVar2 = -0x60deea3e;
          }
        }
        if (iVar3 != 0x2c4d86af) break;
        iVar2 = -0x686a7ae7;
      }
      if (iVar3 != 0x571fb7e9) break;
      _objc_release(*(undefined8 *)(local_60 + 0x40));
      _objc_release(*local_40);
      _objc_release(*local_48);
      _objc_release(*local_50);
      iVar2 = -0x75ae9cf6;
    }
    iVar2 = iVar3;
  } while (iVar3 != 0x49579ba3);
  return;
}
void FUN_00029bf0(undefined8 param_1,long param_2)
{
  int iVar1;
  undefined8 local_48;
  iVar1 = 0x59c7016c;
  do {
    while( true ) {
      while (0x59c7016b < iVar1) {
        if (iVar1 == 0x59c7016c) {
          iVar1 = -0x2498412a;
        }
        else if (iVar1 == 0x73711b99) {
          iVar1 = 0x255fe165;
        }
      }
      if (iVar1 != -0x2498412a) break;
      _objc_retain(*(undefined8 *)(param_2 + 0x20));
      iVar1 = 0x73711b99;
      local_48 = param_2;
    }
  } while (iVar1 != 0x255fe165);
  _objc_retain(*(undefined8 *)(local_48 + 0x28));
  _objc_retain(*(undefined8 *)(local_48 + 0x30));
  return;
}
void FUN_00029cc8(long param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  iVar2 = 0x282569c0;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar2, iVar2 = iVar3, 0x21f74476 < iVar3) {
            if (iVar3 < 0x2f21577c) {
              if (iVar3 == 0x21f74477) {
                _objc_release(local_38);
                iVar2 = -0x4e73903b;
              }
              else {
                iVar1 = 0x21f74477;
                if (iVar3 != 0x2862a45d) {
                  iVar1 = iVar3;
                }
                iVar2 = 0x2f21577c;
                if (iVar3 != 0x282569c0) {
                  iVar2 = iVar1;
                }
              }
            }
            else if (iVar3 == 0x2f21577c) {
              _objc_release(*(undefined8 *)(param_1 + 0x30));
              local_40 = *(undefined8 *)(param_1 + 0x28);
              local_48 = (undefined8 *)(param_1 + 0x20);
              iVar2 = 0x30063916;
            }
            else if (iVar3 == 0x30063916) {
              iVar2 = -0x3c39c8ed;
            }
            else if (iVar3 == 0x30e598ff) {
              _objc_release(local_40);
              local_38 = *local_48;
              iVar2 = -0x46ae72e8;
            }
          }
          if (iVar3 < -0x3c39c8ed) break;
          iVar2 = 0x30e598ff;
          if (iVar3 != -0x3c39c8ed) {
            if (iVar3 == -0x276f059f) {
              _objc_release(*(undefined8 *)(param_1 + 0x30));
              iVar2 = 0x2f21577c;
            }
            else {
              iVar2 = iVar3;
              if (iVar3 == -0xc6ed727) {
                _objc_release(local_38);
                iVar2 = 0x21f74477;
              }
            }
          }
        }
        if (iVar3 != -0x46ae72e8) break;
        iVar2 = 0x2862a45d;
      }
      if (iVar3 != -0x4188c754) break;
      _objc_release(local_40);
      iVar2 = 0x30e598ff;
    }
  } while (iVar3 != -0x4e73903b);
  return;
}
// Function Stack Size: 0x10 bytes
void SettingViewControllernn::xzok(ID param_1,SEL param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *local_38;
  iVar3 = 0x6d9ae408;
  do {
    while( true ) {
      while (iVar1 = iVar3, iVar1 < 0x5f08de5c) {
        if (iVar1 < 0x2ce194a5) {
          iVar3 = 0x40a7672e;
          if (iVar1 != -0x104aad5d) {
            if (iVar1 == 0x134edaa2) {
              iVar3 = -0x7c01ff42;
            }
            else {
              iVar3 = iVar1;
              if (iVar1 == -0x7c01ff42) {
                return;
              }
            }
          }
        }
        else {
          iVar3 = 0x75d4277a;
          if (iVar1 != 0x2ce194a5) {
            if (iVar1 == 0x393a388e) {
              _objc_msgSend(param_1,local_38,1,0);
              xzok2(param_1,(SEL)"xzok2");
              iVar3 = 0x75d4277a;
            }
            else {
              iVar3 = iVar1;
              if (iVar1 == 0x40a7672e) {
                local_38 = "dismissViewControllerAnimated:completion:";
                iVar3 = 0x6dd4f3d4;
              }
            }
          }
        }
      }
      if (0x6d9ae407 < iVar1) break;
      iVar2 = 0x5f08de5c;
      iVar3 = 0x134edaa2;
      iVar4 = 0x5f08de5c;
      if (iVar1 != 0x6523a1ab) {
        iVar4 = iVar1;
      }
LAB_0002a010:
      if (iVar1 != iVar2) {
        iVar3 = iVar4;
      }
    }
    if (iVar1 != 0x75d4277a) {
      iVar2 = 0x6dd4f3d4;
      iVar3 = 0x2ce194a5;
      iVar4 = iVar1;
      if (iVar1 == 0x6d9ae408) {
        iVar4 = 0x40a7672e;
      }
      goto LAB_0002a010;
    }
    _objc_msgSend(param_1,local_38,1,0);
    xzok2(param_1,(SEL)"xzok2");
    iVar3 = 0x6523a1ab;
  } while( true );
}
// Function Stack Size: 0x10 bytes
void SettingViewControllernn::xzok2(ID param_1,SEL param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  iVar1 = 0x64d956d4;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar4 = iVar1, iVar4 < 0x6fa5786) {
            iVar1 = 0x393db765;
            if (iVar4 != 0x5296640) {
              iVar1 = iVar4;
            }
            iVar3 = 0x3e1a85fd;
            if (iVar4 != -0xa23512f) {
              iVar3 = iVar1;
            }
            iVar1 = -0x5917f3a8;
            if (iVar4 != -0x2ad9d22e) {
              iVar1 = iVar3;
            }
            iVar3 = -0x6adf23dc;
            if (iVar4 != -0x5917f3a8) {
              iVar3 = iVar4;
            }
            iVar2 = 0x5296640;
            if (iVar4 != -0x6adf23dc) {
              iVar2 = iVar3;
            }
            iVar3 = -0x2ad9d22e;
            if (iVar4 != -0x79a7325e) {
              iVar3 = iVar2;
            }
            if (iVar4 < -0x2ad9d22e) {
              iVar1 = iVar3;
            }
          }
          if (iVar4 < 0x3e1a85fd) break;
          iVar1 = iVar4;
          if (iVar4 == 0x64d956d4) {
            iVar1 = -0x2ad9d22e;
          }
          iVar3 = 0x5296640;
          if (iVar4 != 0x57767dae) {
            iVar3 = iVar1;
          }
          iVar1 = 0x6fa5786;
          if (iVar4 != 0x3e1a85fd) {
            iVar1 = iVar3;
          }
        }
        iVar1 = 0x3e1a85fd;
      } while (iVar4 == 0xf8f0fd1);
      if (iVar4 != 0x393db765) break;
      iVar1 = -0xa23512f;
    }
    iVar1 = iVar4;
  } while (iVar4 != 0x6fa5786);
  return;
}
// Function Stack Size: 0x10 bytes
void SettingViewControllernn::AboutAuthor(ID param_1,SEL param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  char *local_10;
  ID local_8;
  iVar2 = -0x1658f4cd;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar2, iVar2 = 0x11e0e19, 0x31fd3381 < iVar3) {
            if (iVar3 < 0x5e7cc5f6) {
              iVar1 = 0x5e7cc5f6;
              if (iVar3 != 0x5c12adfc) {
                iVar1 = iVar3;
              }
              iVar2 = 0x5e7cc5f6;
              if (iVar3 != 0x31fd3382) {
                iVar2 = iVar1;
              }
            }
            else if (iVar3 == 0x5e7cc5f6) {
              iVar2 = -0x19c330ab;
              local_10 = "dismissViewControllerAnimated:completion:";
              local_8 = param_1;
            }
            else if (iVar3 != 0x7d5d4d21) {
              iVar2 = iVar3;
            }
          }
          if (iVar3 < -0x1658f4cd) break;
          iVar1 = -0x34b33087;
          if (iVar3 != 0x11e0e19) {
            iVar1 = iVar3;
          }
          if (iVar3 != -0x1658f4cd) {
            iVar2 = iVar1;
          }
        }
        if (iVar3 != -0x34b33087) break;
        iVar2 = 0x31fd3382;
      }
      if (iVar3 != -0x19c330ab) break;
      iVar2 = -0x34dfbcec;
    }
    iVar2 = iVar3;
  } while (iVar3 != -0x34dfbcec);
  _objc_msgSend(local_8,local_10,1,0);
  return;
}
// Function Stack Size: 0x10 bytes
void SettingViewControllernn::AboutAuthorclean(ID param_1,SEL param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  iVar5 = 0x7551b443;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (0x252b25cd < iVar5) {
            iVar1 = iVar5;
            if (iVar5 == 0x7551b443) {
              iVar1 = -0x55b2641e;
            }
            iVar2 = -0x55b2641e;
            if (iVar5 != 0x7a445de7) {
              iVar2 = iVar1;
            }
            iVar1 = 0xfb73d77;
            if (iVar5 != 0x6a2e0fb9) {
              iVar1 = iVar2;
            }
            iVar2 = -0x39bfc380;
            if (iVar5 != 0x5a106f95) {
              iVar2 = iVar5;
            }
            iVar3 = 0x5a106f95;
            if (iVar5 != 0x252b25ce) {
              iVar3 = iVar2;
            }
            bVar4 = iVar5 < 0x6a2e0fb9;
            iVar5 = iVar1;
            if (bVar4) {
              iVar5 = iVar3;
            }
          }
          if (iVar5 < 0x83d8db8) break;
          iVar1 = 0x72351ea;
          if (iVar5 != 0xfb73d77) {
            iVar1 = iVar5;
          }
          iVar2 = 0x83d8db8;
          if (iVar5 != 0xa09f6e8) {
            iVar2 = iVar1;
          }
          bVar4 = iVar5 != 0x83d8db8;
          iVar5 = 0x5a106f95;
          if (bVar4) {
            iVar5 = iVar2;
          }
        }
        if (iVar5 != -0x55b2641e) break;
        iVar5 = 0xa09f6e8;
      }
      if (iVar5 != -0x39bfc380) break;
      iVar5 = 0x6a2e0fb9;
    }
  } while (iVar5 != 0x72351ea);
  return;
}
// Function Stack Size: 0x10 bytes
void SettingViewControllernn::AboutAuthor2(ID param_1,SEL param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  iVar5 = -0xa30f94d;
  do {
    while( true ) {
      while( true ) {
        while (iVar5 < 0x15c82979) {
          iVar2 = -0x521e752d;
          if (iVar5 != -0xa30f94d) {
            iVar2 = iVar5;
          }
          iVar1 = 0x6d188574;
          if (iVar5 != -0x521e752d) {
            iVar1 = iVar2;
          }
          iVar2 = 0x15c82979;
          if (iVar5 != -0x54bce485) {
            iVar2 = iVar5;
          }
          iVar3 = 0x273c4ce1;
          if (iVar5 != -0x56eee784) {
            iVar3 = iVar2;
          }
          bVar4 = iVar5 < -0x521e752d;
          iVar5 = iVar1;
          if (bVar4) {
            iVar5 = iVar3;
          }
        }
        if (0x273c4ce0 < iVar5) break;
        iVar2 = -0x521e752d;
        if (iVar5 != 0x237d7713) {
          iVar2 = iVar5;
        }
        bVar4 = iVar5 != 0x15c82979;
        iVar5 = -0x56eee784;
        if (bVar4) {
          iVar5 = iVar2;
        }
      }
      if (iVar5 != 0x6d188574) break;
      iVar5 = -0x54bce485;
    }
  } while (iVar5 != 0x273c4ce1);
  return;
}
// Function Stack Size: 0x10 bytes
void SettingViewControllernn::AboutAuthor3(ID param_1,SEL param_2)
{
  int iVar1;
  bool bVar2;
  int iVar3;
  ID local_68;
  iVar3 = 0x1b0d5ae4;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 < -0x3171195d) {
          if (iVar3 < -0x67be552f) {
            if (iVar3 == -0x7f8fc0cb) {
              _objc_msgSend(local_68,"AboutAuthor2");
              iVar3 = -0x3171195d;
            }
            else if (iVar3 == -0x72ca4c37) {
              _objc_msgSend(param_1,"dismissViewControllerAnimated:completion:",1,0);
              iVar3 = -0x5c0d43d7;
            }
          }
          else if (iVar3 == -0x67be552f) {
            iVar3 = -0x211f845a;
          }
          else if (iVar3 == -0x5c0d43d7) {
            _objc_msgSend(param_1,"dismissViewControllerAnimated:completion:",1,0);
            local_68 = param_1;
            iVar3 = 0x781045c2;
          }
        }
        if (iVar3 < 0x1b0d5ae4) break;
        iVar1 = iVar3;
        if (iVar3 == 0x1b0d5ae4) {
          iVar1 = -0x5c0d43d7;
        }
        bVar2 = iVar3 != 0x781045c2;
        iVar3 = -0x7f8fc0cb;
        if (bVar2) {
          iVar3 = iVar1;
        }
      }
      if (iVar3 != -0x3171195d) break;
      iVar3 = -0x67be552f;
    }
  } while (iVar3 != -0x211f845a);
  return;
}
// Function Stack Size: 0x10 bytes
void SettingViewControllernn::AboutAuthorxz(ID param_1,SEL param_2)
{
  int iVar1;
  iVar1 = 0x20624c00;
  do {
    while( true ) {
      while (iVar1 < 0x2db76d05) {
        if (iVar1 == -0x2dd8b82) {
          iVar1 = 0x2db76d05;
        }
        else if (iVar1 == 0x20624c00) {
          iVar1 = -0x2dd8b82;
        }
      }
      if (iVar1 != 0x2db76d05) break;
      iVar1 = 0x3d3fd8b5;
    }
  } while (iVar1 != 0x3d3fd8b5);
  return;
}
// Function Stack Size: 0x10 bytes
void SettingViewControllernn::AboutAuthorxzenglish(ID param_1,SEL param_2)
{
  int iVar1;
  iVar1 = -0x6b25eb00;
  while( true ) {
    while (iVar1 < 0x3f81419e) {
      if (iVar1 == -0x6b25eb00) {
        iVar1 = 0x3f81419e;
      }
      else if (iVar1 == 0x169752d9) {
        iVar1 = 0x7f68a779;
      }
    }
    if (iVar1 == 0x7f68a779) break;
    if (iVar1 == 0x3f81419e) {
      iVar1 = 0x169752d9;
    }
  }
  return;
}
// Function Stack Size: 0x10 bytes
void SettingViewControllernn::openw2(ID param_1,SEL param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  iVar5 = 0x65ed046;
  do {
    while( true ) {
      while( true ) {
        while (iVar5 < -0x2a0abef8) {
          iVar2 = -0x67063a1;
          if (iVar5 != -0x5509aec7) {
            iVar2 = iVar5;
          }
          iVar1 = -0x75f92699;
          if (iVar5 != -0x5a698292) {
            iVar1 = iVar2;
          }
          iVar2 = -0x5509aec7;
          if (iVar5 != -0x72e0dff1) {
            iVar2 = iVar5;
          }
          iVar3 = -0x2a0abef8;
          if (iVar5 != -0x75f92699) {
            iVar3 = iVar2;
          }
          bVar4 = iVar5 < -0x5a698292;
          iVar5 = iVar1;
          if (bVar4) {
            iVar5 = iVar3;
          }
        }
        if (iVar5 < 0x65ed046) break;
        iVar2 = iVar5;
        if (iVar5 == 0x65ed046) {
          iVar2 = -0x72e0dff1;
        }
        bVar4 = iVar5 != 0x2c154108;
        iVar5 = -0x72e0dff1;
        if (bVar4) {
          iVar5 = iVar2;
        }
      }
      if (iVar5 != -0x67063a1) break;
      iVar5 = -0x5a698292;
    }
  } while (iVar5 != -0x2a0abef8);
  return;
}
// Function Stack Size: 0x10 bytes
void SettingViewControllernn::AboutAuthorgb(ID param_1,SEL param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  iVar1 = 0x72d6eaa5;
  do {
    while( true ) {
      while (iVar4 = iVar1, iVar4 < -0x1a054d91) {
        iVar1 = -0x5e64c7dd;
        if (iVar4 != -0x51653a34) {
          iVar1 = iVar4;
        }
        iVar3 = 0x1968863e;
        if (iVar4 != -0x5192b5f5) {
          iVar3 = iVar1;
        }
        iVar1 = 0x3ff4c84d;
        if (iVar4 != -0x53b0dc74) {
          iVar1 = iVar3;
        }
        iVar3 = -0x5192b5f5;
        if (iVar4 != -0x5e64c7dd) {
          iVar3 = iVar4;
        }
        iVar2 = -0x51653a34;
        if (iVar4 != -0x6e32c8b7) {
          iVar2 = iVar3;
        }
        iVar3 = -0x53b0dc74;
        if (iVar4 != -0x7b1a4929) {
          iVar3 = iVar2;
        }
        if (iVar4 < -0x53b0dc74) {
          iVar1 = iVar3;
        }
      }
      if (iVar4 < 0x3ff4c84d) break;
      iVar1 = iVar4;
      if (iVar4 == 0x72d6eaa5) {
        iVar1 = -0x53b0dc74;
      }
      iVar3 = -0x6e32c8b7;
      if (iVar4 != 0x7fb7e920) {
        iVar3 = iVar1;
      }
      iVar1 = 0x7fb7e920;
      if (iVar4 != 0x3ff4c84d) {
        iVar1 = iVar3;
      }
    }
    iVar1 = -0x6e32c8b7;
  } while (((iVar4 == -0x1a054d91) || (iVar1 = -0x5192b5f5, iVar4 == -0x6dbea8c)) ||
          (iVar1 = iVar4, iVar4 != 0x1968863e));
  return;
}
// WARNING: Restarted to delay deadcode elimination for space: stack
// Function Stack Size: 0x10 bytes
void SettingViewControllernn::AboutAuthorgb2(ID param_1,SEL param_2)
{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  ulong unaff_x23;
  ulong unaff_x25;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined8 local_310;
  long lStack_308;
  long *local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  long lStack_2c8;
  long *local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  char local_289;
  ID local_288;
  undefined8 local_280;
  char *local_278;
  ulong local_270;
  char local_261;
  long **local_260;
  long *local_258;
  long local_250;
  undefined8 local_248;
  undefined8 local_240;
  char *local_238;
  ulong local_230;
  char local_221;
  ulong local_220;
  char local_211;
  char *local_210;
  ID local_208;
  undefined8 local_200;
  char *local_1f8;
  ulong local_1f0;
  long **local_1e8;
  long *local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  char *local_1c0;
  ulong local_1b8;
  char local_1a9;
  ulong local_1a8;
  char local_199;
  char *local_198;
  ulong local_190;
  ulong local_188;
  ulong local_180;
  ulong local_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  local_70 = *(long *)PTR____stack_chk_guard_00068050;
  iVar1 = 0x2aec52df;
LAB_0002aa98:
  do {
    while (iVar4 = iVar1, iVar1 = iVar4, iVar4 < -0xf9e568d) {
      if (iVar4 < -0x4234b79e) {
        if (iVar4 < -0x54095f96) {
          if (iVar4 < -0x635c28c7) {
            if (iVar4 < -0x6973cbc4) {
              if (iVar4 == -0x7ff5f271) {
                uStack_2a8 = 0;
                local_2b0 = 0;
                uStack_298 = 0;
                uStack_2a0 = 0;
                lStack_2c8 = 0;
                local_2d0 = 0;
                uStack_2b8 = 0;
                local_2c0 = (long *)0x0;
                m1bView(param_1,(SEL)"m1bView");
                iVar1 = 0x559956d9;
              }
              else {
                iVar1 = 0x16a9c0d2;
                if ((iVar4 != -0x6d025179) && (iVar1 = iVar4, iVar4 == -0x69bde6ef))
                goto LAB_0002b0b4;
              }
            }
            else {
              iVar1 = -0x442c8305;
              if (iVar4 != -0x6973cbc4) {
                if (iVar4 == -0x66ee0c51) {
                  local_211 = local_220 == 0;
                  iVar1 = -0x1343885f;
                }
                else {
                  iVar1 = iVar4;
                  if (iVar4 == -0x640644fb) {
LAB_0002b5f0:
                    iVar1 = -0x2b23aa54;
                  }
                }
              }
            }
          }
          else if (iVar4 < -0x5bb5498e) {
            if (iVar4 < -0x5cbb1676) {
              if (iVar4 == -0x635c28c7) {
                iVar1 = -0x9b245c4;
                if (local_289 == '\0') {
                  iVar1 = -0x69bde6ef;
                }
              }
              else if (iVar4 == -0x63260ab2) {
                if (*(long *)PTR____stack_chk_guard_00068050 != local_70) {
                    // WARNING: Subroutine does not return
                  ___stack_chk_fail();
                }
                return;
              }
            }
            else if (iVar4 == -0x5cbb1676) {
              _objc_enumerationMutation(local_200);
              iVar1 = -0x1278ccca;
            }
            else if (iVar4 == -0x5c09706c) {
              iVar1 = 0x50b0c321;
            }
          }
          else if (iVar4 == -0x5bb5498e) {
            iVar1 = -0x28dfa502;
          }
          else if (iVar4 == -0x57b5f9a9) {
            _objc_msgSend(local_248,local_238,local_240);
            local_230 = local_188 + 1;
            local_221 = local_230 < local_190;
            iVar1 = 0x5391db3d;
          }
          else if (iVar4 == -0x567a98da) {
            _objc_release(local_200);
            goto LAB_0002b5f0;
          }
        }
        else if (iVar4 < -0x49aded60) {
          if (iVar4 < -0x4fd671d8) {
            if (iVar4 == -0x54095f96) {
              iVar1 = -0x10093b52;
            }
            else {
              iVar1 = -0x5cbb1676;
              if ((iVar4 != -0x5164bcfb) && (iVar1 = iVar4, iVar4 == -0x50e3a2b2)) {
                local_180 = unaff_x25;
                local_178 = unaff_x27;
                iVar1 = 0x50b0c321;
                if (**local_1e8 != local_1d8) {
                  iVar1 = -0x5164bcfb;
                }
              }
            }
          }
          else {
            iVar1 = 0x76da5a71;
            if (iVar4 != -0x4fd671d8) {
              if (iVar4 == -0x4c0b0bf8) {
                local_238 = "setTintColor:";
                iVar1 = -0x205a76fa;
              }
              else {
                iVar1 = iVar4;
                if (iVar4 == -0x4b7448e7) {
                  _objc_msgSend(local_188,&_OBJC_CLASS___UIColor,"performSelector:",
                                "secondaryLabelColor");
                  iVar1 = 0x54586e0d;
                }
              }
            }
          }
        }
        else if (iVar4 < -0x442c8305) {
          if (iVar4 == -0x49aded60) {
            local_199 = local_1a8 == 0;
            iVar1 = -0x6973cbc4;
          }
          else if (iVar4 == -0x494b0bfd) {
            local_1d8 = *local_1e0;
            iVar1 = -0xf9e568d;
          }
          else if (iVar4 == -0x467ecc44) {
            local_289 = _objc_msgSend(DAT_000a3e78,"fileExistsAtPath:",_g_isMirroredMarkfbs2);
            iVar1 = -0x54095f96;
          }
        }
        else if (iVar4 < -0x430b5de2) {
          if (iVar4 == -0x442c8305) {
            iVar1 = 0x13362970;
          }
          else if (iVar4 == -0x43cabeaf) goto LAB_0002ae58;
        }
        else if (iVar4 == -0x430b5de2) {
          local_280 = _objc_msgSend(local_288,"subviews");
          _objc_retain(local_280);
          _objc_release(local_288);
          local_278 = "countByEnumeratingWithState:objects:count:";
          local_270 = _objc_msgSend(local_280,"countByEnumeratingWithState:objects:count:",
                                    &local_2d0,auStack_f0,0x10);
          local_261 = local_270 == 0;
          iVar1 = 0x38094d79;
        }
        else if (iVar4 == -0x4292d8b9) {
          local_1e0 = local_300;
          local_1e8 = &local_300;
          iVar1 = -0x494b0bfd;
        }
      }
      else if (iVar4 < -0x294bfc6e) {
        if (iVar4 < -0x3ba40af7) {
          if (iVar4 < -0x3e054be8) {
            iVar1 = -0x442c8305;
            if (iVar4 != -0x4234b79e) {
              if (iVar4 == -0x407919da) {
                uStack_2e8 = 0;
                local_2f0 = 0;
                uStack_2d8 = 0;
                uStack_2e0 = 0;
                lStack_308 = 0;
                local_310 = 0;
                uStack_2f8 = 0;
                local_300 = (long *)0x0;
                local_210 = "m1bView";
                local_208 = param_1;
                iVar1 = -0x3f1c2818;
              }
              else {
                iVar1 = -0x12f5c88b;
                if (iVar4 != -0x3f1c2818) {
                  iVar1 = iVar4;
                }
              }
            }
          }
          else if (iVar4 == -0x3e054be8) {
            _objc_msgSend(&_OBJC_CLASS___UIColor,"performSelector:","secondaryLabelColor");
            iVar1 = 0x16a9c0d2;
          }
          else {
            iVar2 = 0x5df12d62;
            if (iVar4 != -0x3ca582db) {
              iVar2 = iVar4;
            }
            iVar1 = -0x187f4e96;
            if (iVar4 != -0x3cdebf89) {
              iVar1 = iVar2;
            }
          }
        }
        else if (iVar4 < -0x30174937) {
          iVar1 = -0x43cabeaf;
          if (iVar4 != -0x34dbaa16) {
            iVar1 = iVar4;
          }
          iVar2 = -0x635c28c7;
          if (iVar4 != -0x38e76cee) {
            iVar2 = iVar1;
          }
          iVar1 = 0x316c8ff7;
          if (iVar4 != -0x3ba40af7) {
            iVar1 = iVar2;
          }
        }
        else {
          iVar1 = 0x1af71407;
          if (iVar4 != -0x30174937) {
            if (iVar4 == -0x2f0c0d7f) {
              _objc_msgSend(local_280,local_278,&local_2d0,auStack_f0,0x10);
              iVar1 = 0x851347f;
            }
            else {
              iVar1 = iVar4;
              if (iVar4 == -0x2b23aa54) {
                _objc_release(local_200);
                iVar1 = -0x275418e8;
              }
            }
          }
        }
      }
      else if (iVar4 < -0x187f4e96) {
        if (iVar4 < -0x21a89e73) {
          iVar1 = 0x3204b84f;
          if (iVar4 != -0x294bfc6e) {
            if (iVar4 == -0x28dfa502) {
              unaff_x27 = 0;
              unaff_x25 = local_1f0;
              iVar1 = -0x50e3a2b2;
            }
            else {
              iVar1 = -0x21a89e73;
              if (iVar4 != -0x275418e8) {
                iVar1 = iVar4;
              }
            }
          }
        }
        else {
          iVar1 = 0x316c8ff7;
          if (((iVar4 != -0x21a89e73) && (iVar1 = -0x57b5f9a9, iVar4 != -0x205a76fa)) &&
             (iVar1 = iVar4, iVar4 == -0x204c3c7e)) {
            _objc_enumerationMutation(local_280);
            iVar1 = 0x2ae3e0df;
          }
        }
      }
      else if (iVar4 < -0x1343885f) {
        iVar1 = -0x66ee0c51;
        if (iVar4 != -0x149ef862) {
          iVar1 = iVar4;
        }
        iVar2 = 0x76da5a71;
        if (iVar4 != -0x1754bdf6) {
          iVar2 = iVar1;
        }
        iVar1 = 0x726d49eb;
        if (iVar4 != -0x187f4e96) {
          iVar1 = iVar2;
        }
      }
      else if (iVar4 < -0x1278ccca) {
        if (iVar4 == -0x1343885f) {
          unaff_x28 = 0;
          unaff_x23 = local_220;
          iVar1 = 0x2010923;
          if (local_211 == '\0') {
            iVar1 = 0x3fc7e161;
          }
        }
        else if (iVar4 == -0x12f5c88b) goto LAB_0002b918;
      }
      else if (iVar4 == -0x1278ccca) {
        iVar1 = -0x5c09706c;
      }
      else if (iVar4 == -0x10093b52) {
        iVar1 = -0x38e76cee;
      }
    }
    if (iVar4 < 0x38094d79) {
      if (iVar4 < 0x8819f15) {
        if (iVar4 < 0x148def3) {
          if (iVar4 < -0x9b245c4) {
            iVar1 = -0x5bb5498e;
            if (iVar4 != -0xf9e568d) {
              if (iVar4 == -0xa6e3453) {
                _objc_enumerationMutation(local_280);
                iVar1 = -0x204c3c7e;
              }
              else {
                iVar1 = iVar4;
                if (iVar4 == -0x9fa9cba) {
                  _objc_msgSend(local_288,"subviews");
                  uVar3 = _objc_retainAutoreleasedReturnValue();
                  _objc_release(local_288);
                  _objc_msgSend(uVar3,"countByEnumeratingWithState:objects:count:",&local_2d0,
                                auStack_f0,0x10);
LAB_0002ae58:
                  iVar1 = -0x430b5de2;
                }
              }
            }
          }
          else {
            iVar1 = 0x559956d9;
            if (iVar4 != -0x9b245c4) {
              if (iVar4 == -0x6f0a403) {
                _objc_msgSend(local_1d0,local_1c0,local_1c8);
                iVar1 = 0x1af71407;
              }
              else {
                iVar1 = iVar4;
                if (iVar4 == -0x9266df) {
                  _objc_msgSend(local_208,local_210);
                  uVar3 = _objc_retainAutoreleasedReturnValue();
                  local_200 = _objc_msgSend(uVar3,"subviews");
                  _objc_retain(local_200);
                  _objc_release(uVar3);
                  iVar1 = -0x3ca582db;
                }
              }
            }
          }
        }
        else if (iVar4 < 0x7592cfa) {
          iVar1 = -0x4c0b0bf8;
          if (iVar4 != 0x639035c) {
            iVar1 = iVar4;
          }
          iVar2 = 0x1efac430;
          if (iVar4 != 0x2010923) {
            iVar2 = iVar1;
          }
          iVar1 = 0x7b57296;
          if (iVar4 != 0x148def3) {
            iVar1 = iVar2;
          }
        }
        else {
          iVar1 = -0x38e76cee;
          if (iVar4 != 0x7592cfa) {
            if (iVar4 == 0x7b57296) {
              local_198 = "AboutAuthorgb";
              iVar1 = 0x6b357e13;
            }
            else {
              iVar1 = iVar4;
              if (iVar4 == 0x851347f) {
                local_220 = _objc_msgSend(local_280,local_278,&local_2d0,auStack_f0,0x10);
                iVar1 = -0x149ef862;
              }
            }
          }
        }
      }
      else if (iVar4 < 0x1efac430) {
        if (iVar4 < 0x13362970) {
          if (iVar4 == 0x8819f15) {
            _objc_msgSend(local_208,local_210);
            uVar3 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar3,"subviews");
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
LAB_0002b918:
            iVar1 = -0x9266df;
          }
          else {
            iVar1 = 0x851347f;
            if ((iVar4 != 0x12822271) && (iVar1 = iVar4, iVar4 == 0x12d640b2)) {
              uStack_2e8 = 0;
              local_2f0 = 0;
              uStack_2d8 = 0;
              uStack_2e0 = 0;
              lStack_308 = 0;
              local_310 = 0;
              uStack_2f8 = 0;
              local_300 = (long *)0x0;
LAB_0002b0b4:
              iVar1 = -0x407919da;
            }
          }
        }
        else if (iVar4 == 0x13362970) {
          unaff_x27 = 0;
          unaff_x25 = local_1a8;
          iVar1 = -0x640644fb;
          if (local_199 == '\0') {
            iVar1 = -0x50e3a2b2;
          }
        }
        else if (iVar4 == 0x16a9c0d2) {
          local_1c8 = _objc_msgSend(&_OBJC_CLASS___UIColor,"performSelector:","secondaryLabelColor")
          ;
          local_1c0 = "setTintColor:";
          iVar1 = 0x38ea5807;
        }
        else if (iVar4 == 0x1af71407) {
          _objc_msgSend(local_1d0,local_1c0,local_1c8);
          local_1b8 = local_178 + 1;
          local_1a9 = local_1b8 < local_180;
          iVar1 = 0x3a4175fe;
        }
      }
      else if (iVar4 < 0x2aec52df) {
        if (iVar4 == 0x1efac430) {
          _objc_release(local_280);
          iVar1 = 0x358e163e;
        }
        else if (iVar4 == 0x25c4566f) {
          _objc_retain(local_288);
          iVar1 = 0x3204b84f;
        }
        else {
          iVar1 = 0x4f615426;
          if (iVar4 != 0x2ae3e0df) {
            iVar1 = iVar4;
          }
        }
      }
      else if (iVar4 < 0x3204b84f) {
        iVar2 = 0x148def3;
        if (iVar4 != 0x316c8ff7) {
          iVar2 = iVar4;
        }
        iVar1 = -0x467ecc44;
        if (iVar4 != 0x2aec52df) {
          iVar1 = iVar2;
        }
      }
      else if (iVar4 == 0x3204b84f) {
        _objc_retain(local_288);
        iVar1 = -0x34dbaa16;
      }
      else {
        iVar1 = 0x712bbf67;
        if (iVar4 != 0x358e163e) {
          iVar1 = iVar4;
        }
      }
      goto LAB_0002aa98;
    }
    if (iVar4 < 0x54586e0d) {
      if (iVar4 < 0x4c7e6c12) {
        if (iVar4 < 0x3fc7e161) {
          if (iVar4 == 0x38094d79) {
            iVar1 = 0x2010923;
            if (local_261 == '\0') {
              iVar1 = -0x1754bdf6;
            }
          }
          else if (iVar4 == 0x38ea5807) {
            iVar1 = -0x30174937;
          }
          else if (iVar4 == 0x3a4175fe) {
            unaff_x25 = local_180;
            unaff_x27 = local_1b8;
            iVar1 = -0x50e3a2b2;
            if (local_1a9 == '\0') {
              iVar1 = 0x57126a13;
            }
          }
        }
        else if (iVar4 == 0x3fc7e161) {
          local_190 = unaff_x23;
          local_188 = unaff_x28;
          iVar1 = 0x726d49eb;
          if (**local_260 != local_250) {
            iVar1 = 0x48a8223e;
          }
        }
        else {
          iVar1 = -0x204c3c7e;
          if ((iVar4 != 0x48a8223e) && (iVar1 = iVar4, iVar4 == 0x4bf9ba15)) {
            unaff_x28 = 0;
            unaff_x23 = local_270;
            iVar1 = 0x3fc7e161;
          }
        }
      }
      else if (iVar4 < 0x4f615426) {
        iVar1 = -0x5bb5498e;
        if (iVar4 != 0x4c7e6c12) {
          if (iVar4 == 0x4cca81e7) {
            _objc_release(local_280);
            iVar1 = 0x1efac430;
          }
          else {
            iVar1 = -0x294bfc6e;
            if (iVar4 != 0x4d50cda6) {
              iVar1 = iVar4;
            }
          }
        }
      }
      else if (iVar4 < 0x50b0c321) {
        iVar1 = -0x3cdebf89;
        if ((iVar4 != 0x4f615426) && (iVar1 = iVar4, iVar4 == 0x4fde7663)) {
          _objc_msgSend(DAT_000a3e78,"fileExistsAtPath:",_g_isMirroredMarkfbs2);
          iVar1 = -0x467ecc44;
        }
      }
      else if (iVar4 == 0x50b0c321) {
        local_1d0 = *(undefined8 *)(lStack_308 + local_178 * 8);
        iVar1 = -0x6d025179;
      }
      else if (iVar4 == 0x5391db3d) {
        unaff_x23 = local_190;
        unaff_x28 = local_230;
        iVar1 = 0x3fc7e161;
        if (local_221 == '\0') {
          iVar1 = 0x12822271;
        }
      }
    }
    else if (iVar4 < 0x5d7421eb) {
      if (iVar4 < 0x5855d821) {
        if (iVar4 == 0x54586e0d) {
          local_248 = *(undefined8 *)(lStack_2c8 + local_188 * 8);
          local_240 = _objc_msgSend(local_248,&_OBJC_CLASS___UIColor,"performSelector:",
                                    "secondaryLabelColor");
          iVar1 = 0x639035c;
        }
        else if (iVar4 == 0x559956d9) {
          uStack_2a8 = 0;
          local_2b0 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          lStack_2c8 = 0;
          local_2d0 = 0;
          uStack_2b8 = 0;
          local_2c0 = (long *)0x0;
          local_288 = m1bView(param_1,(SEL)"m1bView");
          iVar1 = 0x4d50cda6;
        }
        else if (iVar4 == 0x57126a13) {
          local_1a8 = _objc_msgSend(local_200,local_1f8,&local_310,auStack_170,0x10);
          iVar1 = -0x49aded60;
        }
      }
      else if (iVar4 == 0x5855d821) {
        iVar1 = 0x5ae3d10a;
      }
      else {
        iVar1 = -0x3cdebf89;
        if ((iVar4 != 0x59c06d37) && (iVar1 = iVar4, iVar4 == 0x5ae3d10a)) {
          local_250 = *local_258;
          iVar1 = 0x4bf9ba15;
        }
      }
    }
    else if (iVar4 < 0x6b357e13) {
      if (iVar4 == 0x5d7421eb) {
        _objc_msgSend(local_248,local_238,local_240);
        iVar1 = -0x57b5f9a9;
      }
      else if (iVar4 == 0x5df12d62) {
        local_1f8 = "countByEnumeratingWithState:objects:count:";
        local_1f0 = _objc_msgSend(local_200,"countByEnumeratingWithState:objects:count:",&local_310,
                                  auStack_170,0x10);
        iVar1 = -0x640644fb;
        if (local_1f0 != 0) {
          iVar1 = -0x4292d8b9;
        }
      }
      else if (iVar4 == 0x65a6b5d1) {
        _objc_enumerationMutation(local_200);
        iVar1 = -0x5cbb1676;
      }
    }
    else if (iVar4 < 0x726d49eb) {
      if (iVar4 == 0x6b357e13) {
        _objc_msgSend(param_1,local_198);
        iVar1 = -0x63260ab2;
      }
      else if (iVar4 == 0x712bbf67) {
        iVar1 = 0x7b57296;
      }
    }
    else {
      iVar1 = 0x54586e0d;
      if ((iVar4 != 0x726d49eb) && (iVar1 = iVar4, iVar4 == 0x76da5a71)) {
        local_258 = local_2c0;
        local_260 = &local_2c0;
        iVar1 = 0x5855d821;
      }
    }
  } while( true );
}
// Function Stack Size: 0x10 bytes
void SettingViewControllernn::AboutAuthoropen(ID param_1,SEL param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  iVar5 = 0x5d0f3fee;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (0x82981c9 < iVar5) {
            iVar2 = iVar5;
            if (iVar5 == 0x5d0f3fee) {
              iVar2 = -0x70784f68;
            }
            iVar1 = -0x70784f68;
            if (iVar5 != 0x5c6744cb) {
              iVar1 = iVar2;
            }
            iVar2 = -0x7833d7ee;
            if (iVar5 != 0xbeac280) {
              iVar2 = iVar5;
            }
            iVar3 = -0x354ed195;
            if (iVar5 != 0x82981ca) {
              iVar3 = iVar2;
            }
            bVar4 = iVar5 < 0x5c6744cb;
            iVar5 = iVar1;
            if (bVar4) {
              iVar5 = iVar3;
            }
          }
          if (-0x70784f69 < iVar5) break;
          iVar2 = -0x7833d7ee;
          if (iVar5 != -0x70f39cc5) {
            iVar2 = iVar5;
          }
          bVar4 = iVar5 != -0x7833d7ee;
          iVar5 = -0x59949036;
          if (bVar4) {
            iVar5 = iVar2;
          }
        }
        if (iVar5 != -0x70784f68) break;
        iVar5 = 0x82981ca;
      }
      if (iVar5 != -0x354ed195) break;
      iVar5 = 0xbeac280;
    }
  } while (iVar5 != -0x59949036);
  return;
}
// Function Stack Size: 0x10 bytes
void SettingViewControllernn::AboutAuthoropen2(ID param_1,SEL param_2)
{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char **ppcVar6;
  int iVar7;
  int iVar8;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x26;
  ulong unaff_x27;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  char *local_230;
  char *local_228;
  char *local_220;
  char *local_218;
  char *local_210;
  ID local_208;
  char *local_200;
  char *local_1f8;
  char *local_1f0;
  char *local_1e8;
  undefined8 *local_1e0;
  undefined1 *local_1d8;
  undefined8 *local_1d0;
  undefined1 *local_1c8;
  ID local_1c0;
  char local_1b1;
  undefined8 local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  ulong local_198;
  char local_189;
  undefined8 *local_188;
  long *local_180;
  long local_178;
  long local_170;
  undefined8 local_168;
  ulong local_160;
  char local_151;
  ulong local_150;
  char local_141;
  char *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  char *local_120;
  ulong local_118;
  char local_109;
  undefined8 *local_108;
  long *local_100;
  long local_f8;
  char local_e9;
  undefined8 local_e8;
  char *local_e0;
  char *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  ulong local_c0;
  char local_b1;
  ulong local_b0;
  char local_a1;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  long local_80;
  ppcVar6 = &local_230;
  local_80 = *(long *)PTR____stack_chk_guard_00068050;
  local_1f0 = "systemBlueColor";
  local_1e8 = "countByEnumeratingWithState:objects:count:";
  local_200 = "subviews";
  local_1f8 = "defaultManager";
  local_218 = "AboutAuthoropen";
  local_210 = "fileExistsAtPath:";
  local_228 = "systemVersion";
  local_220 = "currentDevice";
  local_230 = "floatValue";
  local_208 = param_1;
  iVar3 = -0x440c4109;
LAB_0002beec:
  while (iVar7 = iVar3, puVar1 = local_1d0, puVar2 = local_1e0, iVar3 = iVar7, 0x6fd608b < iVar7) {
    if (iVar7 < 0x3d4b4895) {
      if (iVar7 < 0x277739b2) {
        if (iVar7 < 0x190bba1b) {
          if (iVar7 < 0x15890d32) {
            if (iVar7 < 0xc0ece16) {
              iVar3 = -0x77b90366;
              if ((iVar7 != 0x6fd608c) && (iVar3 = iVar7, iVar7 == 0x9d3580b)) {
                _objc_enumerationMutation(local_1a8);
                iVar3 = 0x58f3d2d5;
              }
            }
            else {
              iVar3 = 0x190bba1b;
              if ((iVar7 != 0xc0ece16) && (iVar3 = iVar7, iVar7 == 0xe3fcc81)) {
                iVar3 = -0x7d780ca;
              }
            }
          }
          else if (iVar7 < 0x180ce719) {
            iVar3 = -0x2029df18;
            if ((iVar7 != 0x15890d32) && (iVar3 = iVar7, iVar7 == 0x15a0c9af)) {
              _objc_msgSend(local_1a8,local_1a0,local_1e0,local_1d8,0x10);
              iVar3 = -0x3f26a6d3;
            }
          }
          else if (iVar7 == 0x180ce719) {
            iVar3 = 0x2a3244da;
          }
          else if (iVar7 == 0x18c9afcd) {
            iVar3 = 0x42122a6;
          }
        }
        else if (iVar7 < 0x1d3e0674) {
          if (iVar7 < 0x1b419b48) {
            iVar8 = -0x6e2d3798;
            if (iVar7 != 0x19d3866d) {
              iVar8 = iVar7;
            }
            iVar3 = 0x47c4d950;
            if (iVar7 != 0x190bba1b) {
              iVar3 = iVar8;
            }
          }
          else if (iVar7 == 0x1b419b48) {
            _objc_msgSend(&_OBJC_CLASS___UIDevice,local_220);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar4,local_228);
            uVar5 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar5,local_230);
            _objc_release(uVar5);
            _objc_release(uVar4);
            iVar3 = 0x543e6ef1;
            if ((float)CONCAT13(extraout_var_01,
                                CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) < 15.0
               ) {
              iVar3 = -0x7d780ca;
            }
          }
          else {
            iVar3 = 0x4e3aed7e;
            if (iVar7 != 0x1bf5053d) {
              iVar3 = iVar7;
            }
          }
        }
        else if (iVar7 < 0x212e869b) {
          if (iVar7 == 0x1d3e0674) {
            local_168 = *(undefined8 *)(local_170 + local_98 * 8);
            iVar3 = 0x20902fac;
          }
          else {
            iVar3 = 0x6f7b1514;
            if (iVar7 != 0x20902fac) {
              iVar3 = iVar7;
            }
          }
        }
        else {
          iVar3 = 0x58f3d2d5;
          if (iVar7 != 0x212e869b) {
            if (iVar7 == 0x22e1938f) {
              _objc_enumerationMutation(local_128);
              iVar3 = -0x284d8884;
            }
            else {
              iVar3 = iVar7;
              if (iVar7 == 0x2468129e) {
                iVar3 = -0x74928c7;
              }
            }
          }
        }
      }
      else if (iVar7 < 0x31dac477) {
        if (iVar7 < 0x2a7793f5) {
          if (iVar7 < 0x295536de) {
            iVar3 = -0x7e87cdfd;
            if (iVar7 != 0x277739b2) {
              iVar8 = 0x27af69a3;
LAB_0002d150:
              iVar3 = iVar7;
              if (iVar7 == iVar8) {
                iVar3 = 0x3d4b4895;
              }
            }
          }
          else {
            iVar3 = 0x42122a6;
            if ((iVar7 != 0x295536de) && (iVar3 = iVar7, iVar7 == 0x2a3244da)) goto LAB_0002d798;
          }
        }
        else if (iVar7 < 0x2fb5ed8e) {
          if (iVar7 == 0x2a7793f5) {
LAB_0002d400:
            iVar3 = -0x44da3c78;
          }
          else if (iVar7 == 0x2bad56fe) {
            puVar1 = local_1e0 + 4;
            local_1e0[5] = 0;
            *puVar1 = 0;
            puVar2[7] = 0;
            puVar2[6] = 0;
            puVar2[1] = 0;
            *puVar2 = 0;
            puVar2[3] = 0;
            puVar2[2] = 0;
            _objc_msgSend(local_1c0,"m1bView");
            goto LAB_0002ca24;
          }
        }
        else {
          iVar3 = -0x349f410a;
          if ((iVar7 != 0x2fb5ed8e) && (iVar3 = iVar7, iVar7 == 0x318a508b)) {
            iVar3 = -0x182e3b17;
          }
        }
      }
      else if (iVar7 < 0x35aecbe5) {
        if (iVar7 < 0x337bb4b4) {
          if (iVar7 == 0x31dac477) {
            iVar3 = 0x383aa61a;
          }
          else if (iVar7 == 0x32073d6f) {
            unaff_x22 = local_90;
            unaff_x26 = local_c0;
            iVar3 = -0x71a43f3d;
            if (local_b1 == '\0') {
              iVar3 = -0x43fbd300;
            }
          }
        }
        else {
          iVar3 = -0x74928c7;
          if ((iVar7 != 0x337bb4b4) && (iVar3 = iVar7, iVar7 == 0x347c7413)) {
            iVar3 = -0x7117f0d7;
          }
        }
      }
      else if (iVar7 < 0x36777149) {
        if (iVar7 == 0x35aecbe5) {
          puVar1 = local_1e0 + 4;
          local_1e0[5] = 0;
          *puVar1 = 0;
          puVar2[7] = 0;
          puVar2[6] = 0;
          puVar2[1] = 0;
          *puVar2 = 0;
          puVar2[3] = 0;
          puVar2[2] = 0;
          local_1b0 = _objc_msgSend(local_1c0,"m1bView");
          iVar3 = -0x27d5be01;
        }
        else if (iVar7 == 0x360a6a82) {
          iVar3 = -0x7ad14f0b;
        }
      }
      else if (iVar7 == 0x36777149) {
        _objc_retain(local_1b0);
        local_1a8 = _objc_msgSend(local_1b0,local_200);
        _objc_retain(local_1a8);
        _objc_release(local_1b0);
        local_1a0 = local_1e8;
        local_198 = _objc_msgSend(local_1a8,local_1e8,local_1e0,local_1d8,0x10);
        iVar3 = -0x8573016;
      }
      else {
        iVar3 = -0x75b4dfae;
        if ((iVar7 != 0x36b3872d) && (iVar3 = iVar7, iVar7 == 0x383aa61a)) goto LAB_0002c498;
      }
    }
    else if (iVar7 < 0x5c6a973e) {
      if (iVar7 < 0x500605a7) {
        if (iVar7 < 0x4386b0cc) {
          if (iVar7 < 0x416bb708) {
            if (iVar7 == 0x3d4b4895) {
              iVar3 = 0xe3fcc81;
            }
            else if (iVar7 == 0x3df71a38) {
              _objc_msgSend(&_OBJC_CLASS___NSFileManager,local_1f8);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              uVar4 = DAT_000a3e78;
              DAT_000a3e78 = uVar5;
              _objc_release(uVar4);
              iVar3 = -0x543d8df;
            }
          }
          else if (iVar7 == 0x416bb708) {
            iVar3 = 0x18c9afcd;
          }
          else if (iVar7 == 0x4318b5a5) {
            iVar3 = 0x61df7883;
          }
        }
        else if (iVar7 < 0x4db7e23c) {
          iVar8 = 0x5b8bd33;
          if (iVar7 != 0x47c4d950) {
            iVar8 = iVar7;
          }
          iVar3 = -0x7117f0d7;
          if (iVar7 != 0x4386b0cc) {
            iVar3 = iVar8;
          }
        }
        else {
          if (iVar7 != 0x4db7e23c) {
            iVar8 = 0x4e3aed7e;
            goto LAB_0002d180;
          }
LAB_0002d798:
          iVar3 = 0x1d3e0674;
        }
      }
      else if (iVar7 < 0x57c0542d) {
        if (iVar7 < 0x5699a4e6) {
          if (iVar7 == 0x500605a7) {
            uVar4 = _objc_msgSend(local_168,&_OBJC_CLASS___UIColor,"performSelector:",local_1f0);
            _objc_msgSend(local_168,"setTintColor:",uVar4);
            local_160 = local_98 + 1;
            local_151 = local_160 < local_a0;
            iVar3 = -0x5dc4859d;
          }
          else if (iVar7 == 0x543e6ef1) {
            iVar3 = 0x6d2b6d33;
          }
        }
        else if (iVar7 == 0x5699a4e6) {
          iVar3 = -0x72acbe8d;
        }
        else if (iVar7 == 0x56e54195) goto LAB_0002d400;
      }
      else if (iVar7 < 0x58f3d2d5) {
        if (iVar7 == 0x57c0542d) {
          iVar3 = -0x3e6d0e3;
        }
        else if (iVar7 == 0x58854591) {
          unaff_x27 = 0;
          unaff_x23 = local_198;
          iVar3 = -0x6eebeec;
        }
      }
      else if (iVar7 == 0x58f3d2d5) {
        _objc_enumerationMutation(local_1a8);
        iVar3 = 0x416bb708;
      }
      else {
        iVar3 = -0x74ce141c;
        if ((iVar7 != 0x5a9fffc7) && (iVar3 = iVar7, iVar7 == 0x5b80619b)) {
          iVar3 = -0x7e87cdfd;
        }
      }
    }
    else if (iVar7 < 0x65555e20) {
      if (iVar7 < 0x61d12d65) {
        if (iVar7 < 0x602efbc2) {
          if (iVar7 == 0x5dedcc9b) {
            _objc_enumerationMutation(local_128);
            goto LAB_0002d2f0;
          }
          if (iVar7 == 0x5ed97920) {
            local_e8 = *(undefined8 *)(local_1d0[1] + local_88 * 8);
            local_d0 = &_OBJC_CLASS___UIColor;
            local_e0 = local_1f0;
            local_d8 = "performSelector:";
            iVar3 = -0x20fe852a;
          }
          else if (iVar7 == 0x5c6a973e) {
            if (*(long *)PTR____stack_chk_guard_00068050 != local_80) {
                    // WARNING: Subroutine does not return
              ___stack_chk_fail();
            }
            return;
          }
        }
        else {
          iVar8 = 0x347c7413;
          if (iVar7 != 0x61a11ca6) {
            iVar8 = iVar7;
          }
          iVar3 = -0x74ce141c;
          if (iVar7 != 0x602efbc2) {
            iVar3 = iVar8;
          }
        }
      }
      else if (iVar7 < 0x62f1fdbb) {
        iVar8 = 0x58854591;
        if (iVar7 != 0x61df7883) {
          iVar8 = iVar7;
        }
        iVar3 = 0x19d3866d;
        if (iVar7 != 0x61d12d65) {
          iVar3 = iVar8;
        }
      }
      else {
        if (iVar7 != 0x62f1fdbb) {
          iVar8 = 0x64266a39;
          goto LAB_0002d150;
        }
        iVar3 = -0x513f7a04;
        if (local_189 == '\0') {
          iVar3 = -0x26fa557e;
        }
      }
    }
    else if (iVar7 < 0x6e912685) {
      if (iVar7 < 0x6aaf545f) {
        if (iVar7 == 0x65555e20) {
LAB_0002d410:
          iVar3 = -0x7abef20f;
        }
        else if (iVar7 == 0x68c242fe) {
          _objc_release(local_128);
          iVar3 = -0xa79f692;
        }
      }
      else if (iVar7 == 0x6aaf545f) {
        local_c8 = _objc_msgSend(local_d0,local_d8,local_e0);
        iVar3 = 0x15890d32;
      }
      else {
        iVar3 = 0x1bf5053d;
        if (iVar7 != 0x6d2b6d33) {
          iVar3 = iVar7;
        }
      }
    }
    else if (iVar7 < 0x7118f544) {
      if (iVar7 == 0x6e912685) {
        iVar3 = -0x5925c945;
      }
      else if (iVar7 == 0x6f7b1514) {
        iVar3 = 0x500605a7;
      }
    }
    else {
      iVar3 = -0x182e3b17;
      if (iVar7 != 0x7118f544) {
        if (iVar7 == 0x79ce9abc) {
          iVar3 = -0x2a12113;
          if (local_e9 == '\0') {
            iVar3 = -0x2099e129;
          }
        }
        else {
          iVar3 = iVar7;
          if (iVar7 == 0x7e19f932) {
            iVar3 = 0x19d3866d;
          }
        }
      }
    }
  }
  if (iVar7 < -0x349f410a) {
    if (iVar7 < -0x6bd9f0e5) {
      if (iVar7 < -0x75ad0d5f) {
        if (iVar7 < -0x7908d510) {
          if (iVar7 < -0x7ad14f0b) {
            if (iVar7 == -0x7e87cdfd) {
              iVar3 = 0x5c6a973e;
            }
            else if (iVar7 == -0x7b4cbed8) {
LAB_0002c498:
              iVar3 = -0xf436e31;
            }
          }
          else if (iVar7 == -0x7ad14f0b) {
            local_a1 = local_b0 == 0;
            iVar3 = -0x2b15cfbc;
          }
          else if (iVar7 == -0x7abef20f) {
            local_170 = local_1e0[1];
            iVar3 = 0x180ce719;
          }
        }
        else if (iVar7 < -0x775d2ac3) {
          iVar8 = -0x36167b0e;
          if (iVar7 != -0x77b90366) {
            iVar8 = iVar7;
          }
          iVar3 = 0x61df7883;
          if (iVar7 != -0x7908d510) {
            iVar3 = iVar8;
          }
        }
        else if (iVar7 == -0x775d2ac3) {
          unaff_x26 = 0;
          unaff_x22 = local_118;
          iVar3 = -0x71a43f3d;
        }
        else if (iVar7 == -0x75b4dfae) goto LAB_0002d410;
      }
      else if (iVar7 < -0x7117f0d7) {
        if (iVar7 < -0x72acbe8d) {
          iVar8 = -0xbe94f65;
          if (iVar7 != -0x74ce141c) {
            iVar8 = iVar7;
          }
          iVar3 = -0x77b90366;
          if (iVar7 != -0x75ad0d5f) {
            iVar3 = iVar8;
          }
        }
        else if (iVar7 == -0x72acbe8d) {
          local_189 = local_198 == 0;
          iVar3 = 0x62f1fdbb;
        }
        else if (iVar7 == -0x71a43f3d) {
          local_90 = unaff_x22;
          local_88 = unaff_x26;
          iVar3 = -0x5925c945;
        }
      }
      else if (iVar7 < -0x6e2d3798) {
        if (iVar7 == -0x7117f0d7) {
          iVar3 = -0x5b65f557;
        }
        else if (iVar7 == -0x6e713387) {
          iVar3 = 0x47c4d950;
        }
      }
      else if (iVar7 == -0x6e2d3798) {
        iVar3 = -0x6d2e8029;
        if (local_1b1 == '\0') {
          iVar3 = -0x10f8bc1a;
        }
      }
      else {
        iVar3 = -0x3f26a6d3;
        if ((iVar7 != -0x6d5742c3) && (iVar3 = iVar7, iVar7 == -0x6d2e8029)) {
LAB_0002ca24:
          iVar3 = 0x35aecbe5;
        }
      }
    }
    else if (iVar7 < -0x50eab717) {
      if (iVar7 < -0x5b65f557) {
        if (iVar7 < -0x5f0ab7c3) {
          iVar3 = 0x68c242fe;
          if ((iVar7 != -0x6bd9f0e5) && (iVar3 = iVar7, iVar7 == -0x62fa2aa6)) {
            unaff_x26 = 0;
            unaff_x22 = local_b0;
            iVar3 = -0x6bd9f0e5;
            if (local_a1 == '\0') {
              iVar3 = -0x71a43f3d;
            }
          }
        }
        else if (iVar7 == -0x5f0ab7c3) {
          iVar3 = -0x2c88f362;
        }
        else if ((iVar7 == -0x5dc4859d) &&
                (unaff_x23 = local_a0, unaff_x27 = local_160, iVar3 = -0x6eebeec, local_151 == '\0')
                ) {
          iVar3 = -0x6d5742c3;
        }
      }
      else if (iVar7 < -0x55750368) {
        if (iVar7 == -0x5b65f557) {
          iVar3 = 0x1b419b48;
        }
        else if (iVar7 == -0x5925c945) {
          local_e9 = *(long *)*local_108 == local_f8;
          iVar3 = 0x79ce9abc;
        }
      }
      else if (iVar7 == -0x55750368) {
        local_128 = local_130;
        _objc_retain(local_130);
        _objc_release(local_138);
        local_120 = local_1e8;
        local_118 = _objc_msgSend(local_128,local_1e8,local_1d0,local_1c8,0x10);
        local_109 = local_118 == 0;
        iVar3 = -0x26e09a98;
      }
      else if (iVar7 == -0x513f7a04) {
        _objc_release(local_1a8);
        iVar3 = 0x318a508b;
      }
    }
    else if (iVar7 < -0x43fbd300) {
      if (iVar7 < -0x44da3c78) {
        if (iVar7 == -0x50eab717) {
          local_1b1 = _objc_msgSend(DAT_000a3e78,local_210,_g_isMirroredMarkfbs2);
          iVar3 = 0x61d12d65;
        }
        else {
          iVar3 = 0x337bb4b4;
          if (iVar7 != -0x502309fa) {
            iVar3 = iVar7;
          }
        }
      }
      else if (iVar7 == -0x44da3c78) {
        local_108 = local_1d0 + 2;
        iVar3 = -0x502309fa;
      }
      else if (iVar7 == -0x440c4109) {
        iVar3 = -0x543d8df;
      }
    }
    else if (iVar7 < -0x3be084a0) {
      if (iVar7 == -0x43fbd300) {
        local_b0 = _objc_msgSend(local_128,local_120,local_1d0,local_1c8,0x10);
        iVar3 = -0x3be084a0;
      }
      else if (iVar7 == -0x3f26a6d3) {
        local_150 = _objc_msgSend(local_1a8,local_1a0,local_1e0,local_1d8,0x10);
        iVar3 = 0x57c0542d;
      }
    }
    else {
      iVar3 = -0x7ad14f0b;
      if (iVar7 != -0x3be084a0) {
        if (iVar7 == -0x3a9af854) {
          uVar4 = _objc_msgSend(local_168,&_OBJC_CLASS___UIColor,"performSelector:",local_1f0);
          _objc_msgSend(local_168,"setTintColor:",uVar4);
          iVar3 = 0x500605a7;
        }
        else {
          iVar3 = iVar7;
          if (iVar7 == -0x36167b0e) {
            iVar3 = -0x2a12113;
          }
        }
      }
    }
    goto LAB_0002beec;
  }
  if (-0x17bd8ec5 < iVar7) {
    if (iVar7 < -0x74928c7) {
      if (iVar7 < -0xc44845b) {
        if (iVar7 < -0x10f8bc1a) {
          iVar3 = 0x6d2b6d33;
          if (iVar7 != -0x17bd8ec4) {
            iVar8 = -0x1508100d;
LAB_0002d180:
            iVar3 = iVar7;
            if (iVar7 == iVar8) {
              iVar3 = -0x5f0ab7c3;
            }
          }
        }
        else if (iVar7 == -0x10f8bc1a) {
          puVar2 = local_1d0 + 4;
          local_1d0[5] = 0;
          *puVar2 = 0;
          puVar1[7] = 0;
          puVar1[6] = 0;
          puVar1[1] = 0;
          *puVar1 = 0;
          puVar1[3] = 0;
          puVar1[2] = 0;
          local_140 = "m1bView";
          iVar3 = -0x1dafab2d;
        }
        else if (iVar7 == -0xf436e31) {
          local_f8 = *local_100;
          iVar3 = -0x775d2ac3;
        }
      }
      else if (iVar7 < -0xa79f692) {
        if (iVar7 == -0xc44845b) {
          unaff_x27 = 0;
          unaff_x23 = local_150;
          iVar3 = -0x513f7a04;
          if (local_141 == '\0') {
            iVar3 = -0x6eebeec;
          }
        }
        else if (iVar7 == -0xbe94f65) {
          iVar3 = 0x190bba1b;
        }
      }
      else if (iVar7 == -0xa79f692) {
        iVar3 = 0x5a9fffc7;
      }
      else {
        iVar3 = -0x72acbe8d;
        if ((iVar7 != -0x8573016) && (iVar3 = iVar7, iVar7 == -0x7d780ca)) {
          local_1c0 = local_208;
          AboutAuthoropen(local_208,(SEL)local_218);
          iVar3 = -0x50eab717;
        }
      }
    }
    else if (iVar7 < -0x543d8df) {
      if (iVar7 < -0x7274656) {
        if (iVar7 == -0x74928c7) {
          local_100 = (long *)*local_108;
          iVar3 = 0x31dac477;
        }
        else if (iVar7 == -0x745211e) {
          _objc_release(local_128);
          iVar3 = 0x68c242fe;
        }
      }
      else if (iVar7 == -0x7274656) {
        iVar3 = 0x5ed97920;
      }
      else if (iVar7 == -0x6eebeec) {
        local_a0 = unaff_x23;
        local_98 = unaff_x27;
        iVar3 = -0x75b4dfae;
        if (*(long *)*local_188 != local_178) {
          iVar3 = 0x212e869b;
        }
      }
    }
    else if (iVar7 < -0x2a12113) {
      if (iVar7 == -0x543d8df) {
        local_1e0 = (undefined8 *)((long)ppcVar6 + -0x40);
        local_1d8 = (undefined1 *)((long)ppcVar6 + -0xc0);
        local_1d0 = (undefined8 *)((long)ppcVar6 + -0x100);
        ppcVar6 = (char **)((long)ppcVar6 + -0x180);
        local_1c8 = (undefined1 *)ppcVar6;
        _objc_msgSend(&_OBJC_CLASS___NSFileManager,local_1f8);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        uVar4 = DAT_000a3e78;
        DAT_000a3e78 = uVar5;
        _objc_release(uVar4);
        iVar3 = 0x61a11ca6;
      }
      else if (iVar7 == -0x3e6d0e3) {
        local_141 = local_150 == 0;
        iVar3 = 0x2fb5ed8e;
      }
    }
    else {
      iVar3 = 0x5ed97920;
      if (iVar7 != -0x2a12113) {
        if (iVar7 == 0x42122a6) {
          iVar3 = 0x36b3872d;
        }
        else {
          iVar3 = iVar7;
          if (iVar7 == 0x5b8bd33) {
            iVar3 = 0x277739b2;
          }
        }
      }
    }
    goto LAB_0002beec;
  }
  if (-0x26fa557f < iVar7) {
    if (iVar7 < -0x2029df18) {
      if (iVar7 < -0x20fe852a) {
        if (iVar7 == -0x26fa557e) {
          local_188 = local_1e0 + 2;
          local_180 = (long *)*local_188;
          iVar3 = -0x1e3ffc85;
        }
        else if (iVar7 == -0x26e09a98) {
          iVar3 = -0x6bd9f0e5;
          if (local_109 == '\0') {
            iVar3 = 0x56e54195;
          }
        }
      }
      else if (iVar7 == -0x20fe852a) {
        iVar3 = 0x6aaf545f;
      }
      else if (iVar7 == -0x2099e129) {
LAB_0002d2f0:
        iVar3 = 0x22e1938f;
      }
    }
    else if (iVar7 < -0x1dafab2d) {
      if (iVar7 == -0x2029df18) {
        _objc_msgSend(local_e8,"setTintColor:",local_c8);
        local_c0 = local_88 + 1;
        local_b1 = local_c0 < local_90;
        iVar3 = 0x32073d6f;
      }
      else if (iVar7 == -0x1e3ffc85) {
        local_178 = *local_180;
        iVar3 = -0x7908d510;
      }
    }
    else if (iVar7 == -0x1dafab2d) {
      local_138 = _objc_msgSend(local_1c0,local_140);
      _objc_retain(local_138);
      local_130 = _objc_msgSend(local_138,local_200);
      iVar3 = -0x33d9eed2;
    }
    else {
      iVar3 = -0x349f410a;
      if ((iVar7 != -0x1987a21a) && (iVar3 = iVar7, iVar7 == -0x182e3b17)) {
        iVar3 = 0xc0ece16;
      }
    }
    goto LAB_0002beec;
  }
  if (iVar7 < -0x2b15cfbc) {
    if (-0x2e5ac96f < iVar7) {
      if (iVar7 == -0x2e5ac96e) {
        _objc_msgSend(local_e8,"setTintColor:",local_c8);
        iVar3 = -0x2029df18;
      }
      else {
        iVar3 = 0x64266a39;
        if (iVar7 != -0x2c88f362) {
          iVar3 = iVar7;
        }
      }
      goto LAB_0002beec;
    }
    if (iVar7 == -0x349f410a) {
      iVar3 = -0xc44845b;
      goto LAB_0002beec;
    }
    if (iVar7 != -0x33d9eed2) goto LAB_0002beec;
  }
  else {
    if (-0x284d8885 < iVar7) {
      iVar8 = 0x36777149;
      if (iVar7 != -0x27d5be01) {
        iVar8 = iVar7;
      }
      iVar3 = 0x6fd608c;
      if (iVar7 != -0x284d8884) {
        iVar3 = iVar8;
      }
      goto LAB_0002beec;
    }
    if (iVar7 == -0x2b15cfbc) {
      iVar3 = -0x62fa2aa6;
      goto LAB_0002beec;
    }
    if (iVar7 != -0x291e63a4) goto LAB_0002beec;
    uVar4 = _objc_retain(local_130);
    _objc_release(local_138);
    _objc_msgSend(uVar4,local_1e8,local_1d0,local_1c8,0x10);
  }
  iVar3 = -0x55750368;
  goto LAB_0002beec;
}
// Function Stack Size: 0x18 bytes
void SettingViewControllernn::presentationControllerDidDismiss_(ID param_1,SEL param_2,ID param_3)
{
  SEL extraout_x1;
  SEL extraout_x1_00;
  int iVar1;
  undefined8 local_68;
  iVar1 = -0x1231561f;
  do {
    while( true ) {
      while( true ) {
        while (iVar1 < 0x457debd8) {
          if (iVar1 == -0x3da9a25a) {
            _objc_release(local_68,param_2);
            iVar1 = 0x5daadc84;
            param_2 = extraout_x1;
          }
          else if (iVar1 == -0x3c11ffe4) {
            iVar1 = 0x50d5c64b;
          }
          else if (iVar1 == -0x1231561f) {
            iVar1 = 0x4a3ee439;
          }
        }
        if (0x50d5c64a < iVar1) break;
        if (iVar1 == 0x457debd8) {
          iVar1 = -0x3da9a25a;
        }
        else if (iVar1 == 0x4a3ee439) {
          iVar1 = -0x3c11ffe4;
          local_68 = param_3;
        }
      }
      if (iVar1 != 0x50d5c64b) break;
      _objc_retain(local_68);
      iVar1 = 0x457debd8;
      param_2 = extraout_x1_00;
    }
  } while (iVar1 != 0x5daadc84);
  return;
}
// Function Stack Size: 0x20 bytes
double SettingViewControllernn::tableView_heightForHeaderInSection_
                 (ID param_1,SEL param_2,ID param_3,long_long param_4)
{
  int iVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double unaff_d8;
  undefined8 local_80;
  double local_78;
  _objc_retain(param_3);
  iVar3 = -0x79f0a117;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar4 = iVar3, iVar3 = -0x3988707f, iVar4 < 0x222d2a49) {
            if (iVar4 < -0x6d85f2a0) {
              if (iVar4 == -0x7c5414da) {
                unaff_d8 = 90.0;
                iVar3 = -0x6d85f2a0;
              }
              else {
                iVar1 = -0x6d85f2a0;
                dVar2 = 40.0;
                if (iVar4 != -0x7735fe91) {
                  iVar1 = iVar4;
                  dVar2 = unaff_d8;
                }
                iVar3 = 0x47d64a48;
                if (iVar4 != -0x79f0a117) {
                  unaff_d8 = dVar2;
                  iVar3 = iVar1;
                }
              }
            }
            else if (iVar4 < -0x3988707f) {
              if (iVar4 == -0x6d85f2a0) {
                local_78 = unaff_d8;
                iVar3 = 0x419fee6f;
              }
              else if (iVar4 != -0x4e463f8f) {
                iVar3 = iVar4;
              }
            }
            else {
              iVar1 = -0x7c5414da;
              if (iVar4 != -0x1260b663) {
                iVar1 = iVar4;
              }
              iVar3 = -0x7735fe91;
              if (iVar4 != -0x3988707f) {
                iVar3 = iVar1;
              }
            }
          }
          if (0x47d64a47 < iVar4) break;
          if (iVar4 == 0x222d2a49) {
            _objc_release(local_80);
            _objc_release(param_3);
            iVar3 = 0x419fee6f;
          }
          else {
            iVar3 = -0x1260b663;
            if ((iVar4 != 0x406eb606) && (iVar3 = iVar4, iVar4 == 0x419fee6f)) {
              _objc_release(local_80);
              _objc_release(param_3);
              iVar3 = 0x69d07785;
            }
          }
        }
        if (iVar4 < 0x6bb3590b) break;
        iVar1 = -0x1260b663;
        if (iVar4 != 0x6f8b465f) {
          iVar1 = iVar4;
        }
        if (iVar4 != 0x6bb3590b) {
          iVar3 = iVar1;
        }
      }
      if (iVar4 != 0x47d64a48) break;
      _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar5,"infoDictionary");
      uVar6 = _objc_retainAutoreleasedReturnValue();
      local_80 = _objc_msgSend(uVar6,"objectForKey:",&cf_CFBundleIdentifier);
      _objc_retain(local_80);
      _objc_release(local_80,uVar6);
      _objc_release(uVar5);
      iVar4 = _objc_msgSend(local_80,"containsString:",&cf_com_apple_springboard);
      iVar3 = 0x6f8b465f;
      if (iVar4 == 0) {
        iVar3 = -0x4e463f8f;
      }
    }
    iVar3 = iVar4;
  } while (iVar4 != 0x69d07785);
  return local_78;
}
// Function Stack Size: 0x20 bytes
long_long SettingViewControllernn::tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)
{
  undefined8 uVar1;
  long_long lVar2;
  int iVar3;
  iVar3 = 0x3ac371;
  do {
    while( true ) {
      while (iVar3 < 0x3ac371) {
        if (iVar3 == -0x45178270) {
          iVar3 = 0x49ade51d;
        }
        else if (iVar3 == -0x2b6624d4) {
          iVar3 = -0x45178270;
        }
      }
      if (iVar3 != 0x3ac371) break;
      iVar3 = -0x2b6624d4;
    }
  } while (iVar3 != 0x49ade51d);
  normalSettingTitle(param_1,(SEL)"normalSettingTitle");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  lVar2 = _objc_msgSend(uVar1,"count");
  _objc_release(uVar1);
  return lVar2;
}
// Function Stack Size: 0x20 bytes
void SettingViewControllernn::tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)
{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long_long lVar4;
  long lVar5;
  int iVar6;
  ID local_78;
  char local_69;
  char *local_68;
  _objc_retain(param_3);
  iVar1 = 0x1f827c4a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (iVar6 = iVar1, iVar1 = iVar6, -0x26c33ac1 < iVar6) {
              if (iVar6 < 0x13f9402d) {
                if (iVar6 < -0x18e30872) {
                  if (iVar6 == -0x26c33ac0) {
                    _objc_release(param_3);
                    iVar1 = 0x645259b4;
                  }
                  else if (iVar6 == -0x1ce96a85) {
                    _objc_retain(param_4);
                    _objc_msgSend(param_3,"deselectRowAtIndexPath:animated:",param_4,1);
                    local_78 = param_4;
                    iVar1 = -0x60467031;
                  }
                }
                else {
                  iVar1 = 0x71d5a7a7;
                  if (((iVar6 != -0x18e30872) && (iVar1 = 0x71d5a7a7, iVar6 != -0x14d6d23e)) &&
                     (iVar1 = iVar6, iVar6 == -0x544f529)) {
                    uVar3 = _objc_retain(param_4);
                    _objc_msgSend(param_3,"deselectRowAtIndexPath:animated:",uVar3,1);
                    iVar1 = -0x1ce96a85;
                  }
                }
              }
              else if (iVar6 < 0x645259b4) {
                if (iVar6 == 0x13f9402d) {
                  iVar1 = -0x2d921eea;
                }
                else {
                  iVar1 = -0x1ce96a85;
                  if ((iVar6 != 0x1f827c4a) && (iVar1 = iVar6, iVar6 == 0x493329b8)) {
                    _objc_release(local_78);
                    iVar1 = -0x5874f3dc;
                  }
                }
              }
              else if (iVar6 == 0x645259b4) {
                iVar1 = -0x6c367782;
              }
              else if (iVar6 == 0x688b6200) {
                lVar5 = _objc_msgSend(local_78,"section");
                local_69 = lVar5 == 1;
                iVar1 = -0x5e116595;
              }
              else if (iVar6 == 0x71d5a7a7) {
                local_68 = "reloadData";
                iVar1 = 0x13f9402d;
              }
            }
            if (-0x4bb2558a < iVar6) break;
            if (iVar6 < -0x5e116595) {
              iVar1 = -0x6d95cc43;
              if (iVar6 != -0x60467031) {
                iVar1 = iVar6;
              }
              iVar2 = -0x4bb25589;
              if (iVar6 != -0x6c367782) {
                iVar2 = iVar1;
              }
              iVar1 = 0x688b6200;
              if (iVar6 != -0x6d95cc43) {
                iVar1 = iVar2;
              }
            }
            else if (iVar6 == -0x5e116595) {
              iVar1 = -0x3bbe38dd;
              if (local_69 == '\0') {
                iVar1 = 0x493329b8;
              }
            }
            else {
              iVar1 = -0x26c33ac0;
              if ((iVar6 != -0x5874f3dc) && (iVar1 = iVar6, iVar6 == -0x51206355)) {
                _objc_release(param_3);
                iVar1 = -0x26c33ac0;
              }
            }
          }
          if (iVar6 < -0x32499298) break;
          if (iVar6 == -0x32499298) {
            _objc_msgSend(local_78,"section");
            iVar1 = 0x688b6200;
          }
          else {
            iVar1 = -0x4bb25589;
            if ((iVar6 != -0x2f693117) && (iVar1 = iVar6, iVar6 == -0x2d921eea)) {
              _objc_msgSend(param_3,local_68);
              iVar1 = 0x493329b8;
            }
          }
        }
        if (iVar6 != -0x4bb25589) break;
        iVar1 = -0x490f556e;
      }
      if (iVar6 != -0x3bbe38dd) break;
      lVar4 = _objc_msgSend(local_78,"row");
      setSelectedRow_(param_1,(SEL)"setSelectedRow:",lVar4);
      iVar1 = -0x14d6d23e;
    }
  } while (iVar6 != -0x490f556e);
  return;
}
// Function Stack Size: 0x10 bytes
ID SettingViewControllernn::m5bView(ID param_1,SEL param_2)
{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 local_14;
  undefined8 local_10;
  undefined8 local_8;
  iVar3 = -0x774d5599;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (0x20d62d20 < iVar3) {
            if (iVar3 < 0x344e0f82) {
              iVar1 = -0x41a5d9da;
              if (iVar3 != 0x2197c31a) {
                iVar1 = iVar3;
              }
              bVar2 = iVar3 != 0x20d62d21;
              iVar3 = 0x344e0f82;
              if (bVar2) {
                iVar3 = iVar1;
              }
            }
            else if (iVar3 == 0x344e0f82) {
              iVar3 = 0x3eff8f52;
            }
            else if (iVar3 == 0x3eff8f52) {
              local_8 = *local_10;
              iVar3 = -0x65e289f1;
            }
          }
          if (-0x65e289f2 < iVar3) break;
          if (iVar3 == -0x774d5599) {
            iVar3 = -0x704f9255;
          }
          else if (iVar3 == -0x704f9255) {
            local_14 = _m5bView;
            iVar3 = -0x61843009;
          }
        }
        if (iVar3 != -0x61843009) break;
        iVar3 = 0x2197c31a;
      }
      if (iVar3 != -0x41a5d9da) break;
      local_10 = (ID *)(param_1 + (long)local_14);
      iVar3 = 0x20d62d21;
    }
  } while (iVar3 != -0x65e289f1);
  return local_8;
}
// Function Stack Size: 0x18 bytes
void SettingViewControllernn::setM5bView_(ID param_1,SEL param_2,ID param_3)
{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  lVar3 = (long)_m5bView;
  uVar1 = _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  iVar2 = 0x3a7665d2;
  while( true ) {
    while (-0x47aaf5cd < iVar2) {
      if (iVar2 == -0x47aaf5cc) {
        iVar2 = -0x5eff0521;
      }
      else if (iVar2 == 0x3a7665d2) {
        *(undefined8 *)(param_1 + lVar3) = uVar1;
        _objc_release(uVar4);
        iVar2 = -0x47aaf5cc;
      }
    }
    if (iVar2 == -0x748786f3) break;
    if (iVar2 == -0x5eff0521) {
      iVar2 = -0x748786f3;
    }
  }
  return;
}
// Function Stack Size: 0x10 bytes
ID SettingViewControllernn::m5xbView(ID param_1,SEL param_2)
{
  int iVar1;
  undefined8 local_8;
  iVar1 = -0x542aee70;
  while( true ) {
    while (iVar1 < 0x6ace48d5) {
      if (iVar1 == -0x542aee70) {
        local_8 = *(ID *)(param_1 + (long)_m5xbView);
        iVar1 = -0x25de133e;
      }
      else if (iVar1 == -0x25de133e) {
        iVar1 = 0x70d0c35c;
      }
    }
    if (iVar1 == 0x6ace48d5) break;
    if (iVar1 == 0x70d0c35c) {
      iVar1 = 0x6ace48d5;
    }
  }
  return local_8;
}
// Function Stack Size: 0x18 bytes
void SettingViewControllernn::setM5xbView_(ID param_1,SEL param_2,ID param_3)
{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_18;
  lVar2 = (long)_m5xbView;
  uVar1 = _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  iVar4 = -0x70de3d2e;
  while( true ) {
    while (0x4dd84b07 < iVar4) {
      if (iVar4 == 0x5b5e7ade) {
        iVar4 = -0x774f04d3;
      }
      else if (iVar4 == 0x4dd84b08) {
        *(undefined8 *)(param_1 + lVar2) = uVar1;
        iVar4 = 0x5b5e7ade;
        local_18 = uVar3;
      }
    }
    if (iVar4 == -0x774f04d3) break;
    if (iVar4 == -0x70de3d2e) {
      iVar4 = 0x4dd84b08;
    }
  }
  _objc_release(local_18);
  return;
}
// Function Stack Size: 0x10 bytes
ID SettingViewControllernn::m0bView(ID param_1,SEL param_2)
{
  int iVar1;
  undefined8 local_10;
  undefined8 local_8;
  iVar1 = -0xa695c1e;
  while( true ) {
    while (-0xa695c1f < iVar1) {
      if (iVar1 == 0x1b80c721) {
        local_8 = *local_10;
        iVar1 = -0x7c434430;
      }
      else if (iVar1 == -0xa695c1e) {
        local_10 = (ID *)(param_1 + (long)_m0bView);
        iVar1 = -0x374f38dc;
      }
    }
    if (iVar1 == -0x7c434430) break;
    if (iVar1 == -0x374f38dc) {
      iVar1 = 0x1b80c721;
    }
  }
  return local_8;
}
// Function Stack Size: 0x18 bytes
void SettingViewControllernn::setM0bView_(ID param_1,SEL param_2,ID param_3)
{
  int iVar1;
  int iVar2;
  ID IVar3;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  int iVar4;
  undefined8 local_38;
  iVar1 = 0x5837ed34;
  do {
    while( true ) {
      while( true ) {
        while (iVar4 = iVar1, iVar4 < -0x181d06ac) {
          if (iVar4 < -0x2854e862) {
            if (iVar4 == -0x773f0465) {
              iVar1 = -0x2659e04e;
            }
            else {
              iVar1 = iVar4;
              if (iVar4 == -0x3221a3a2) {
                IVar3 = *local_38;
                *local_38 = param_3;
                _objc_release(IVar3,param_2);
                param_2 = extraout_x1;
                iVar1 = -0x181d06ac;
              }
            }
          }
          else if (iVar4 == -0x2854e862) {
            local_38 = (ID *)(param_1 + (long)_m0bView);
            _objc_retain(param_3);
            param_2 = extraout_x1_00;
            iVar1 = 0x4f83241a;
          }
          else {
            iVar2 = -0x2854e862;
            if (iVar4 != -0x253c2b6a) {
              iVar2 = iVar4;
            }
            iVar1 = -0x253c2b6a;
            if (iVar4 != -0x2659e04e) {
              iVar1 = iVar2;
            }
          }
        }
        if (iVar4 < 0x36ed665d) break;
        iVar1 = iVar4;
        if (iVar4 == 0x5837ed34) {
          iVar1 = -0x773f0465;
        }
        iVar2 = -0xcd0aca1;
        if (iVar4 != 0x4f83241a) {
          iVar2 = iVar1;
        }
        iVar1 = -0x773f0465;
        if (iVar4 != 0x36ed665d) {
          iVar1 = iVar2;
        }
      }
      if (iVar4 != -0x181d06ac) break;
      IVar3 = *local_38;
      *local_38 = param_3;
      _objc_release(IVar3,param_2);
      param_2 = extraout_x1_01;
      iVar1 = 0x35308da;
    }
    iVar1 = -0x181d06ac;
  } while ((iVar4 == -0xcd0aca1) || (iVar1 = iVar4, iVar4 != 0x35308da));
  return;
}
// Function Stack Size: 0x10 bytes
ID SettingViewControllernn::m1bView(ID param_1,SEL param_2)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long local_10;
  ID local_8;
  uVar2 = 0x7d3cb46f;
  do {
    while( true ) {
      while( true ) {
        while (uVar3 = uVar2, uVar2 = uVar3, 0x3602e3ed < uVar3) {
          if (uVar3 < 0x5af64f18) {
            uVar1 = 0x2a784009;
            if (uVar3 != 0x443f6be4) {
              uVar1 = uVar3;
            }
            uVar2 = 0x5af64f18;
            if (uVar3 != 0x3602e3ee) {
              uVar2 = uVar1;
            }
          }
          else if (uVar3 == 0x5af64f18) {
            local_10 = (long)_m1bView;
            uVar2 = 0x443f6be4;
          }
          else if (uVar3 == 0x7d3cb46f) {
            uVar2 = 0x1443cbc5;
          }
        }
        if (uVar3 < 0x1db3db36) break;
        uVar2 = 0x1443cbc5;
        if ((uVar3 != 0x1db3db36) && (uVar2 = uVar3, uVar3 == 0x2a784009)) {
          local_8 = *(ID *)(param_1 + local_10);
          uVar2 = 0xaa7037b;
        }
      }
      if (uVar3 != 0x1443cbc5) break;
      uVar2 = 0x3602e3ee;
    }
  } while (uVar3 != 0xaa7037b);
  return local_8;
}
// Function Stack Size: 0x18 bytes
void SettingViewControllernn::setM1bView_(ID param_1,SEL param_2,ID param_3)
{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long local_28;
  ID local_20;
  undefined8 *local_18;
  iVar3 = 0x1b0c3832;
  do {
    while (iVar3 < 0x1b0c3832) {
      if (iVar3 == -0x3d5da93c) {
        uVar1 = _objc_retain(param_3);
        uVar2 = *local_18;
        *local_18 = uVar1;
        _objc_release(uVar2);
        return;
      }
      if (iVar3 == -0x207dc979) {
        local_28 = (long)_m1bView;
        iVar3 = 0x73cbebb9;
        local_20 = param_1;
      }
      else if (iVar3 == 0x1c1511f) {
LAB_0002e910:
        iVar3 = -0x207dc979;
      }
    }
    if (iVar3 == 0x1b0c3832) goto LAB_0002e910;
    if (iVar3 == 0x358227cb) {
      local_18 = (undefined8 *)(local_20 + local_28);
      iVar3 = -0x3d5da93c;
    }
    else if (iVar3 == 0x73cbebb9) {
      iVar3 = 0x358227cb;
    }
  } while( true );
}
// Function Stack Size: 0x10 bytes
ID SettingViewControllernn::m2bView(ID param_1,SEL param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_10;
  undefined8 local_8;
  iVar1 = 0x5c72b7d4;
  do {
    while( true ) {
      while( true ) {
        while (iVar4 = iVar1, 0x1bbfc3a3 < iVar4) {
          iVar2 = -0x167cdd32;
          if (iVar4 != 0x74870ab1) {
            iVar2 = iVar4;
          }
          iVar1 = -0x6efd7e84;
          if (iVar4 != 0x706eb47f) {
            iVar1 = iVar2;
          }
          iVar2 = 0x7b9d7b5;
          if (iVar4 != 0x5c72b7d4) {
            iVar2 = iVar4;
          }
          iVar3 = 0x7b9d7b5;
          if (iVar4 != 0x1bbfc3a4) {
            iVar3 = iVar2;
          }
          if (iVar4 < 0x706eb47f) {
            iVar1 = iVar3;
          }
        }
        if (-0x167cdd33 < iVar4) break;
        if (iVar4 == -0x6efd7e84) {
          local_10 = (long)_m2bView;
          iVar1 = 0x74870ab1;
          local_8 = param_1;
        }
        else {
          iVar1 = 0x706eb47f;
          if (iVar4 != -0x419068bf) {
            iVar1 = iVar4;
          }
        }
      }
      if (iVar4 != 0x7b9d7b5) break;
      iVar1 = -0x419068bf;
    }
    iVar1 = iVar4;
  } while (iVar4 != -0x167cdd32);
  return *(ID *)(local_8 + local_10);
}
// Function Stack Size: 0x18 bytes
void SettingViewControllernn::setM2bView_(ID param_1,SEL param_2,ID param_3)
{
  int iVar1;
  undefined8 local_20;
  undefined8 local_18;
  iVar1 = 0x1ab70561;
  while (iVar1 != 0x36e2727a) {
    if (iVar1 == 0x1ab70561) {
      local_20 = (long)_m2bView;
      iVar1 = 0x36e2727a;
      local_18 = param_1;
    }
  }
  _objc_storeStrong(local_18 + local_20,param_3);
  return;
}
// Function Stack Size: 0x10 bytes
ID SettingViewControllernn::m000bView(ID param_1,SEL param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_8;
  iVar2 = -0x30fb846;
  do {
    while( true ) {
      while (iVar3 = iVar2, -0x30fb847 < iVar3) {
        if (iVar3 < 0x634b4e70) {
          iVar1 = 0x634b4e70;
          if (iVar3 != 0x2ccaae8) {
            iVar1 = iVar3;
          }
          iVar2 = 0x2ccaae8;
          if (iVar3 != -0x30fb846) {
            iVar2 = iVar1;
          }
        }
        else if (iVar3 == 0x634b4e70) {
          iVar2 = -0x1347aaf9;
        }
        else {
          iVar2 = iVar3;
          if (iVar3 == 0x66ab4621) {
            local_8 = (ID *)(param_1 + (long)_m000bView);
            iVar2 = -0x635666c0;
          }
        }
      }
      if (-0x222c7fae < iVar3) break;
      iVar1 = 0x2ccaae8;
      if (iVar3 != -0x4299f6f3) {
        iVar1 = iVar3;
      }
      iVar2 = -0x222c7fad;
      if (iVar3 != -0x635666c0) {
        iVar2 = iVar1;
      }
    }
    iVar2 = 0x66ab4621;
  } while (((iVar3 == -0x1ff4f3e1) || (iVar2 = 0x66ab4621, iVar3 == -0x1347aaf9)) ||
          (iVar2 = iVar3, iVar3 != -0x222c7fad));
  return *local_8;
}
// Function Stack Size: 0x18 bytes
void SettingViewControllernn::setM000bView_(ID param_1,SEL param_2,ID param_3)
{
  int iVar1;
  int iVar2;
  ID IVar3;
  SEL extraout_x1;
  SEL extraout_x1_00;
  int iVar4;
  ID *local_40;
  ID local_38;
  iVar2 = 0x762dac5;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar4 = iVar2, 0x4ba5ee1 < iVar4) {
            if (iVar4 < 0x18a1b52b) {
              if (iVar4 == 0x4ba5ee2) {
                iVar2 = 0x1ba6616e;
              }
              else {
                iVar2 = 0x18a1b52b;
                if ((iVar4 != 0x762dac5) && (iVar2 = iVar4, iVar4 == 0x17bc7f76)) {
                  local_38 = param_3;
                  iVar2 = -0x2b35a7be;
                }
              }
            }
            else if (iVar4 == 0x18a1b52b) {
              local_40 = (ID *)(param_1 + (long)_m000bView);
              iVar2 = 0x4ba5ee2;
            }
            else {
              iVar1 = -0x2d745f6c;
              if (iVar4 != 0x67e70b8b) {
                iVar1 = iVar4;
              }
              iVar2 = 0x17bc7f76;
              if (iVar4 != 0x1ba6616e) {
                iVar2 = iVar1;
              }
            }
          }
          if (iVar4 < -0x2b35a7be) break;
          if (iVar4 == -0x2b35a7be) {
            iVar2 = 0x67e70b8b;
          }
          else {
            iVar2 = 0x18a1b52b;
            if ((iVar4 != -0x1d87ae05) && (iVar2 = iVar4, iVar4 == -0x5b8c158)) {
              _objc_retain(local_38,param_2);
              IVar3 = *local_40;
              *local_40 = param_3;
              _objc_release(IVar3);
              param_2 = extraout_x1;
              iVar2 = -0x2d745f6c;
            }
          }
        }
        iVar2 = 0x17bc7f76;
      } while (iVar4 == -0x2ee2f68f);
      if (iVar4 != -0x2d745f6c) break;
      _objc_retain(local_38,param_2);
      IVar3 = *local_40;
      *local_40 = param_3;
      _objc_release(IVar3);
      param_2 = extraout_x1_00;
      iVar2 = -0x4de05d02;
    }
    iVar2 = iVar4;
  } while (iVar4 != -0x4de05d02);
  return;
}
// Function Stack Size: 0x10 bytes
ID SettingViewControllernn::m5xbViewclean(ID param_1,SEL param_2)
{
  int iVar1;
  undefined4 local_14;
  undefined8 local_10;
  undefined8 local_8;
  iVar1 = 0x51d66de1;
  while( true ) {
    while( true ) {
      while (iVar1 < -0xc885fc6) {
        if (iVar1 == -0x7c5ec42b) {
          iVar1 = 0xf2fa7bf;
        }
        else if (iVar1 == -0x202c43f1) {
          local_8 = *local_10;
          iVar1 = 0x3caf11da;
        }
        else if (iVar1 == -0x1ae42efb) {
          local_14 = _m5xbViewclean;
          iVar1 = -0x7c5ec42b;
        }
      }
      if (0x3caf11d9 < iVar1) break;
      if (iVar1 == -0xc885fc6) {
        iVar1 = -0x202c43f1;
      }
      else if (iVar1 == 0xf2fa7bf) {
        local_10 = (ID *)(param_1 + (long)local_14);
        iVar1 = -0xc885fc6;
      }
    }
    if (iVar1 == 0x3caf11da) break;
    if (iVar1 == 0x51d66de1) {
      iVar1 = -0x1ae42efb;
    }
  }
  return local_8;
}
// Function Stack Size: 0x18 bytes
void SettingViewControllernn::setM5xbViewclean_(ID param_1,SEL param_2,ID param_3)
{
  int iVar1;
  int iVar2;
  undefined8 local_30;
  undefined8 local_28;
  iVar1 = -0x71f825a8;
  do {
    do {
      while( true ) {
        while (iVar2 = iVar1, -0x429e0f7e < iVar2) {
          if (iVar2 < 0x53a9fa24) {
            if (iVar2 == -0x429e0f7d) {
              iVar1 = -0x4797fb54;
            }
            else {
              iVar1 = -0x6317bae5;
              if ((iVar2 != -0x408efe5a) && (iVar1 = iVar2, iVar2 == 0x40d00751)) {
                local_30 = (long)_m5xbViewclean;
                iVar1 = -0x429e0f7d;
              }
            }
          }
          else if (iVar2 == 0x53a9fa24) {
            iVar1 = -0x68c0e5bf;
          }
          else if (iVar2 == 0x67ef0260) {
            _objc_storeStrong(local_28 + local_30,param_3);
            iVar1 = 0x70efe3f6;
          }
          else {
            iVar1 = iVar2;
            if (iVar2 == 0x70efe3f6) {
              _objc_storeStrong(local_28 + local_30,param_3);
              iVar1 = -0x4ad09cf9;
            }
          }
        }
        if (-0x5b24c488 < iVar2) break;
        iVar1 = 0x40d00751;
        if (iVar2 != -0x71f825a8) {
          iVar1 = 0x70efe3f6;
          if ((iVar2 != -0x68c0e5bf) && (iVar1 = iVar2, iVar2 == -0x6317bae5)) {
            iVar1 = 0x53a9fa24;
            local_28 = param_1;
          }
        }
      }
      iVar1 = 0x40d00751;
    } while (iVar2 == -0x5b24c487);
    iVar1 = -0x6317bae5;
  } while ((iVar2 == -0x4797fb54) || (iVar1 = iVar2, iVar2 != -0x4ad09cf9));
  return;
}
// Function Stack Size: 0x10 bytes
ID SettingViewControllernn::xzm5xbView(ID param_1,SEL param_2)
{
  int iVar1;
  undefined8 local_10;
  undefined8 local_8;
  iVar1 = 0x3a75a115;
  do {
    while( true ) {
      while( true ) {
        while (-0x28193742 < iVar1) {
          if (iVar1 < 0x1c27c5d4) {
            if (iVar1 == -0x28193741) {
              local_10 = (long)_xzm5xbView;
              iVar1 = -0x7ed971e1;
            }
            else if (iVar1 == 0xf278d75) {
              iVar1 = -0x6a3bf93c;
            }
          }
          else if ((iVar1 == 0x1c27c5d4) || (iVar1 == 0x3a75a115)) {
            iVar1 = -0x28193741;
          }
        }
        if (iVar1 != -0x7ed971e1) break;
        iVar1 = 0xf278d75;
      }
      if (iVar1 != -0x6a3bf93c) break;
      local_8 = *(ID *)(param_1 + local_10);
      iVar1 = -0x628b0104;
    }
  } while (iVar1 != -0x628b0104);
  return local_8;
}
// Function Stack Size: 0x18 bytes
void SettingViewControllernn::setXzm5xbView_(ID param_1,SEL param_2,ID param_3)
{
  int iVar1;
  int iVar2;
  SEL extraout_x1;
  SEL extraout_x1_00;
  int iVar3;
  ID *local_40;
  ID local_38;
  iVar2 = -0x10d75e7f;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar2, iVar2 = 0x6244372b, iVar3 < -0x553846c) {
            if (iVar3 < -0x19bbe52c) {
              iVar2 = -0x533b24b9;
              if ((iVar3 != -0x58f9897d) && (iVar2 = iVar3, iVar3 == -0x533b24b9)) {
                local_40 = (ID *)(param_1 + (long)_xzm5xbView);
                _objc_retain(param_3,param_2);
                local_38 = *local_40;
                param_2 = extraout_x1;
                iVar2 = -0x2f118d6;
              }
            }
            else if (iVar3 == -0x19bbe52c) {
              _objc_retain(param_3,param_2);
              param_2 = extraout_x1_00;
              iVar2 = -0x533b24b9;
            }
            else if (iVar3 != -0x10d75e7f) {
              iVar2 = iVar3;
            }
          }
          if (iVar3 < 0x48c9457f) break;
          iVar1 = 0x41df8cba;
          if (iVar3 != 0x6244372b) {
            iVar1 = iVar3;
          }
          if (iVar3 != 0x48c9457f) {
            iVar2 = iVar1;
          }
        }
        if (iVar3 != -0x2f118d6) break;
        iVar2 = -0x553846c;
      }
      if (iVar3 != 0x41df8cba) break;
      iVar2 = -0x58f9897d;
    }
    iVar2 = iVar3;
  } while (iVar3 != -0x553846c);
  *local_40 = param_3;
  _objc_release(local_38);
  return;
}
// Function Stack Size: 0x10 bytes
ID SettingViewControllernn::mbjbView(ID param_1,SEL param_2)
{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  iVar1 = 0x5e56b44b;
  do {
    while( true ) {
      while( true ) {
        while (-0x1b6da4be < iVar1) {
          if (iVar1 < -0x2030adf) {
            if (iVar1 == -0x1b6da4bd) {
              local_18 = (long)_mbjbView;
              iVar1 = -0x4eeee8b4;
            }
            else if (iVar1 == -0x21ba5a1) {
              iVar1 = -0x68a2911b;
            }
          }
          else if (iVar1 == -0x2030adf) {
            local_10 = (ID *)(param_1 + local_18);
            iVar1 = -0x21ba5a1;
          }
          else if (iVar1 == 0x5e56b44b) {
            iVar1 = -0x1b6da4bd;
          }
        }
        if (iVar1 != -0x68a2911b) break;
        local_8 = *local_10;
        iVar1 = -0x2e5b39fa;
      }
      if (iVar1 != -0x4eeee8b4) break;
      iVar1 = -0x2030adf;
    }
  } while (iVar1 != -0x2e5b39fa);
  return local_8;
}
// Function Stack Size: 0x18 bytes
void SettingViewControllernn::setMbjbView_(ID param_1,SEL param_2,ID param_3)
{
  int iVar1;
  int iVar2;
  SEL extraout_x1;
  int iVar3;
  undefined1 auVar4 [16];
  long local_40;
  undefined8 local_38;
  iVar2 = -0x54b002d5;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar2, iVar2 = iVar3, -0x3069cb58 < iVar3) {
          if (iVar3 < -0xce8f7a5) {
            if (iVar3 == -0x3069cb57) {
              _objc_release(local_38);
              param_2 = extraout_x1;
              iVar2 = -0x5ca952da;
            }
            else if (iVar3 == -0x253bf8b2) {
              local_40 = (long)_mbjbView;
              iVar2 = -0x5c549cd7;
            }
          }
          else {
            iVar2 = -0x253bf8b2;
            if ((iVar3 != -0xce8f7a5) && (iVar2 = iVar3, iVar3 == 0x5303439d)) {
              auVar4 = _objc_retain(param_3,param_2);
              param_2 = auVar4._8_8_;
              local_38 = *(undefined8 *)(param_1 + local_40);
              *(long *)(param_1 + local_40) = auVar4._0_8_;
              iVar2 = -0x38c0a88c;
            }
          }
        }
        if (iVar3 < -0x54b002d5) break;
        iVar1 = -0x3069cb57;
        if (iVar3 != -0x38c0a88c) {
          iVar1 = iVar3;
        }
        iVar2 = -0x253bf8b2;
        if (iVar3 != -0x54b002d5) {
          iVar2 = iVar1;
        }
      }
      if (iVar3 != -0x5c549cd7) break;
      iVar2 = 0x5303439d;
    }
  } while (iVar3 != -0x5ca952da);
  return;
}
// Function Stack Size: 0x10 bytes
ID SettingViewControllernn::mzsbView(ID param_1,SEL param_2)
{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  iVar1 = 0x3aa2be98;
  while( true ) {
    while (0x580b2907 < iVar1) {
      if (iVar1 < 0x68294219) {
        if (iVar1 == 0x580b2908) {
          local_18 = (long)_mzsbView;
          iVar1 = 0x68294219;
        }
        else if (iVar1 == 0x5eb2ebe6) {
          iVar1 = 0x6e74d96f;
        }
      }
      else if (iVar1 == 0x68294219) {
        iVar1 = 0x3fea9ee3;
      }
      else if (iVar1 == 0x6e74d96f) {
        local_8 = *local_10;
        iVar1 = -0xb9d69e8;
      }
    }
    if (iVar1 == -0xb9d69e8) break;
    if (iVar1 == 0x3aa2be98) {
      iVar1 = 0x580b2908;
    }
    else if (iVar1 == 0x3fea9ee3) {
      local_10 = (ID *)(param_1 + local_18);
      iVar1 = 0x5eb2ebe6;
    }
  }
  return local_8;
}
// Function Stack Size: 0x18 bytes
void SettingViewControllernn::setMzsbView_(ID param_1,SEL param_2,ID param_3)
{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 local_58;
  lVar2 = (long)_mzsbView;
  iVar1 = 0x74c8f42d;
  while( true ) {
    while (iVar1 < 0x6e8b68d9) {
      if (iVar1 == -0x2eb3eeea) {
        iVar1 = 0x6e8b68d9;
      }
      else if (iVar1 == -0x2eac5650) {
        auVar3 = _objc_retain(param_3);
        param_2 = auVar3._8_8_;
        local_58 = *(undefined8 *)(param_1 + lVar2);
        *(long *)(param_1 + lVar2) = auVar3._0_8_;
        iVar1 = -0x2eb3eeea;
      }
    }
    if (iVar1 == 0x6e8b68d9) break;
    if (iVar1 == 0x74c8f42d) {
      iVar1 = -0x2eac5650;
    }
  }
  _objc_release(local_58,param_2);
  return;
}
// Function Stack Size: 0x10 bytes
ID SettingViewControllernn::areaLists(ID param_1,SEL param_2)
{
  ID IVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ID local_8;
  iVar4 = 0x71ea3c55;
  do {
    while (iVar2 = iVar4, -0x18473c00 < iVar2) {
      if (iVar2 < 0x699ab47a) {
        if (iVar2 == -0x18473bff) {
          iVar4 = -0x20b15bcc;
        }
        else {
          iVar4 = iVar2;
          if (iVar2 == 0x14db487b) {
            iVar4 = -0x4f084978;
            local_8 = param_1;
          }
        }
      }
      else {
        iVar3 = 0x699ab47a;
        iVar4 = 0x14db487b;
        iVar5 = iVar2;
        if (iVar2 == 0x71ea3c55) {
          iVar5 = -0x18473bff;
        }
LAB_0002f91c:
        if (iVar2 != iVar3) {
          iVar4 = iVar5;
        }
      }
    }
    if (-0x4f084979 < iVar2) {
      iVar3 = -0x4f084978;
      iVar4 = -0x7dbf5a2b;
      iVar5 = 0x699ab47a;
      if (iVar2 != -0x20b15bcc) {
        iVar5 = iVar2;
      }
      goto LAB_0002f91c;
    }
    iVar4 = -0x18473bff;
    if ((iVar2 != -0x64768d52) && (iVar4 = iVar2, iVar2 == -0x7dbf5a2b)) {
      IVar1 = _objc_getProperty(local_8,param_2,(long)_areaLists,0);
      return IVar1;
    }
  } while( true );
}
// Function Stack Size: 0x18 bytes
void SettingViewControllernn::setAreaLists_(ID param_1,SEL param_2,ID param_3)
{
  int iVar1;
  undefined8 local_10;
  undefined8 local_8;
  iVar1 = 0x44ae7085;
  do {
    while( true ) {
      while( true ) {
        while (0x18e728b3 < iVar1) {
          if (iVar1 < 0x44ae7085) {
            if (iVar1 == 0x18e728b4) {
              iVar1 = -0x295649e5;
            }
            else if (iVar1 == 0x1a67da74) {
              local_8 = (long)_areaLists;
              iVar1 = 0x4f019311;
            }
          }
          else if (iVar1 == 0x44ae7085) {
            iVar1 = -0x6ddc08b2;
          }
          else if (iVar1 == 0x4f019311) {
            iVar1 = -0x1534aed3;
          }
        }
        if (iVar1 != -0x6ddc08b2) break;
        iVar1 = 0x18e728b4;
        local_10 = param_1;
      }
      if (iVar1 != -0x295649e5) break;
      iVar1 = 0x1a67da74;
    }
  } while (iVar1 != -0x1534aed3);
  _objc_setProperty_nonatomic_copy(local_10,param_2,param_3,local_8);
  return;
}
// Function Stack Size: 0x10 bytes
ID SettingViewControllernn::normalSettingTitle(ID param_1,SEL param_2)
{
  ID IVar1;
  int iVar2;
  undefined8 local_10;
  undefined4 local_4;
  iVar2 = 0x3d45567;
  do {
    while( true ) {
      while( true ) {
        while (iVar2 < -0x246eef38) {
          if (iVar2 == -0x53c73bce) {
            iVar2 = -0x246eef38;
          }
          else if (iVar2 == -0x2542e42f) {
            local_4 = _normalSettingTitle;
            iVar2 = 0x6404f9a;
            local_10 = param_1;
          }
        }
        if (iVar2 != -0x246eef38) break;
        iVar2 = -0x2542e42f;
      }
      if (iVar2 != 0x3d45567) break;
      iVar2 = -0x53c73bce;
    }
  } while (iVar2 != 0x6404f9a);
  IVar1 = _objc_getProperty(local_10,param_2,(long)local_4,0);
  return IVar1;
}
// Function Stack Size: 0x18 bytes
void SettingViewControllernn::setNormalSettingTitle_(ID param_1,SEL param_2,ID param_3)
{
  int iVar1;
  undefined8 local_10;
  undefined8 local_8;
  iVar1 = -0x391e7eac;
  while (iVar1 != -0x7bd14c31) {
    if (iVar1 == -0x391e7eac) {
      local_10 = (long)_normalSettingTitle;
      iVar1 = -0x7bd14c31;
      local_8 = param_3;
    }
  }
  _objc_setProperty_nonatomic_copy(param_1,param_2,local_8,local_10);
  return;
}
// Function Stack Size: 0x10 bytes
long_long SettingViewControllernn::selectedRow(ID param_1,SEL param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  long local_18;
  ID local_10;
  long_long local_8;
  iVar2 = -0x62448557;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar2, iVar2 = iVar3, iVar3 < 0x103fdeb7) {
            if (iVar3 < -0x62448557) {
              iVar1 = -0x587a9bc;
              if (iVar3 != -0x7ea0d409) {
                iVar1 = iVar3;
              }
              iVar2 = 0x7d56ed84;
              if (iVar3 != -0x7fe48243) {
                iVar2 = iVar1;
              }
            }
            else {
              iVar2 = 0x7d56ed84;
              if (((iVar3 != -0x62448557) && (iVar2 = 0x7274d785, iVar3 != -0x194ed8ce)) &&
                 (iVar2 = iVar3, iVar3 == -0x587a9bc)) {
                local_8 = *(long_long *)(local_10 + local_18);
                iVar2 = 0x103fdeb7;
              }
            }
          }
          if (iVar3 < 0x53b8fd23) break;
          if (iVar3 == 0x53b8fd23) {
            iVar2 = 0x7274d785;
          }
          else if (iVar3 == 0x7274d785) {
            local_18 = (long)local_1c;
            iVar2 = 0x4ea6956a;
            local_10 = param_1;
          }
          else if (iVar3 == 0x7d56ed84) {
            local_1c = _selectedRow;
            iVar2 = 0x34c1deed;
          }
        }
        if (iVar3 != 0x34c1deed) break;
        iVar2 = -0x194ed8ce;
      }
      if (iVar3 != 0x4ea6956a) break;
      iVar2 = -0x7ea0d409;
    }
  } while (iVar3 != 0x103fdeb7);
  return local_8;
}
// Function Stack Size: 0x18 bytes
void SettingViewControllernn::setSelectedRow_(ID param_1,SEL param_2,long_long param_3)
{
  int iVar1;
  int iVar2;
  undefined8 local_10;
  undefined8 local_8;
  iVar1 = -0x33db3e2f;
  do {
    while( true ) {
      while( true ) {
        while (iVar2 = iVar1, iVar2 < 0x16447eee) {
          if (iVar2 < -0xe9880d4) {
            if (iVar2 == -0x4cce576a) {
              *local_8 = param_3;
              iVar1 = 0x1875ed6e;
            }
            else {
              iVar1 = 0x16447eee;
              if (iVar2 != -0x33db3e2f) {
                iVar1 = iVar2;
              }
            }
          }
          else if (iVar2 == -0xe9880d4) {
            *local_8 = param_3;
            iVar1 = -0x4cce576a;
          }
          else {
            iVar1 = 0x722b944e;
            if (iVar2 != 0xa94ae05) {
              iVar1 = iVar2;
            }
          }
        }
        if (iVar2 < 0x722b944e) break;
        if (iVar2 == 0x722b944e) {
          local_8 = local_10;
          iVar1 = 0x7ac8f889;
        }
        else {
          iVar1 = -0x4cce576a;
          if (iVar2 != 0x7ac8f889) {
            iVar1 = iVar2;
          }
        }
      }
      if (iVar2 != 0x16447eee) break;
      local_10 = (long_long *)(param_1 + (long)_selectedRow);
      iVar1 = 0xa94ae05;
    }
    iVar1 = 0x16447eee;
  } while ((iVar2 == 0x37f9f73d) || (iVar1 = iVar2, iVar2 != 0x1875ed6e));
  return;
}
// Function Stack Size: 0x10 bytes
bool SettingViewControllernn::isHookRemoveAD(ID param_1,SEL param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte local_1;
  iVar1 = 0x6fe5c9a6;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar4 = iVar1, 0x176bcdcd < iVar4) {
            iVar1 = iVar4;
            if (iVar4 == 0x6fe5c9a6) {
              iVar1 = -0x7116c1e9;
            }
            iVar3 = 0x4404b02d;
            if (iVar4 != 0x69a9c54c) {
              iVar3 = iVar1;
            }
            iVar1 = -0x7116c1e9;
            if (iVar4 != 0x4851157b) {
              iVar1 = iVar3;
            }
            iVar3 = 0x2f46006;
            if (iVar4 != 0x4404b02d) {
              iVar3 = iVar4;
            }
            iVar2 = -0x4d2d360b;
            if (iVar4 != 0x38213838) {
              iVar2 = iVar3;
            }
            iVar3 = -0x4d2d360b;
            if (iVar4 != 0x176bcdce) {
              iVar3 = iVar2;
            }
            if (iVar4 < 0x4851157b) {
              iVar1 = iVar3;
            }
          }
          if (-0x26ef5c51 < iVar4) break;
          if (iVar4 == -0x7116c1e9) {
            iVar1 = 0x68ac302;
          }
          else {
            iVar1 = 0x4404b02d;
            if ((iVar4 != -0x67ec2281) && (iVar1 = iVar4, iVar4 == -0x4d2d360b)) {
              local_1 = *(char *)(param_1 + (long)_isHookRemoveAD) != '\0';
              iVar1 = -0x26ef5c50;
            }
          }
        }
        if (iVar4 != 0x2f46006) break;
        iVar1 = 0x176bcdce;
      }
      if (iVar4 != 0x68ac302) break;
      iVar1 = 0x69a9c54c;
    }
    iVar1 = iVar4;
  } while (iVar4 != -0x26ef5c50);
  return (bool)local_1;
}
// Function Stack Size: 0x14 bytes
void SettingViewControllernn::setIsHookRemoveAD_(ID param_1,SEL param_2,bool param_3)
{
  int iVar1;
  undefined1 local_9;
  undefined8 local_8;
  iVar1 = 0x5efda941;
  do {
    while( true ) {
      while (0x155bd336 < iVar1) {
        if (iVar1 < 0x6f90c9cb) {
          if (iVar1 == 0x155bd337) {
            *local_8 = local_9;
            iVar1 = 0x7b65088c;
          }
          else if (iVar1 == 0x5efda941) goto LAB_000300f0;
        }
        else {
          if (iVar1 == 0x7b65088c) {
            return;
          }
          if (iVar1 == 0x6f90c9cb) {
            local_9 = (undefined1)param_3;
            local_8 = (undefined1 *)(param_1 + (long)_isHookRemoveAD);
            iVar1 = -0x26aae521;
          }
        }
      }
      if (iVar1 != -0x26aae521) break;
      iVar1 = -0x2c10d65;
    }
    if (iVar1 == -0x2c10d65) {
      iVar1 = 0x155bd337;
    }
    else if (iVar1 == 0xe638ab0) {
LAB_000300f0:
      iVar1 = 0x6f90c9cb;
    }
  } while( true );
}
// Function Stack Size: 0x10 bytes
void SettingViewControllernn::_cxx_destruct(ID param_1,SEL param_2)
{
  int iVar1;
  undefined8 local_70;
  undefined8 local_68;
  iVar1 = -0x15f31956;
  while( true ) {
    while( true ) {
      while (iVar1 < 0x32fa2f2) {
        if (iVar1 == -0x5073b7ff) {
          iVar1 = 0x32fa2f2;
        }
        else if (iVar1 == -0x15f31956) {
          iVar1 = 0x733271a8;
        }
      }
      if (iVar1 != 0x32fa2f2) break;
      _objc_storeStrong(local_70 + (long)_m000bView,0);
      _objc_storeStrong(local_70 + (long)_m2bView,0);
      _objc_storeStrong(local_70 + (long)_m1bView,0);
      _objc_storeStrong(local_70 + (long)_m0bView,0);
      _objc_storeStrong(local_70 + (long)_m5xbView,0);
      local_68 = (long)_m5bView;
      iVar1 = 0x349c05dc;
    }
    if (iVar1 == 0x349c05dc) break;
    if (iVar1 == 0x733271a8) {
      _objc_storeStrong(param_1 + (long)_normalSettingTitle,0);
      _objc_storeStrong(param_1 + (long)_areaLists,0);
      _objc_storeStrong(param_1 + (long)_mzsbView,0);
      _objc_storeStrong(param_1 + (long)_mbjbView,0);
      _objc_storeStrong(param_1 + (long)_xzm5xbView,0);
      _objc_storeStrong(param_1 + (long)_m5xbViewclean,0);
      iVar1 = -0x5073b7ff;
      local_70 = param_1;
    }
  }
  _objc_storeStrong(local_70 + local_68,0);
  return;
}
// Function Stack Size: 0x10 bytes
void MyAlertController::SuccessAlert(ID param_1,SEL param_2)
{
                    // WARNING: Could not recover jumptable at 0x00030354. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00088950)();
  return;
}
// Function Stack Size: 0x10 bytes
void MyAlertController::FailAlert(ID param_1,SEL param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  iVar5 = -0x4c3d1313;
  do {
    while( true ) {
      while( true ) {
        while (iVar5 < 0x3f62e6e1) {
          iVar2 = 0x4de3f622;
          if (iVar5 != 0x2f6aac3c) {
            iVar2 = iVar5;
          }
          iVar1 = 0x72707405;
          if (iVar5 != -0x24af9988) {
            iVar1 = iVar2;
          }
          iVar2 = -0x24af9988;
          if (iVar5 != -0x3b846152) {
            iVar2 = iVar5;
          }
          iVar3 = 0x4a180b94;
          if (iVar5 != -0x4c3d1313) {
            iVar3 = iVar2;
          }
          bVar4 = iVar5 < -0x24af9988;
          iVar5 = iVar1;
          if (bVar4) {
            iVar5 = iVar3;
          }
        }
        if (0x4de3f621 < iVar5) break;
        iVar2 = 0x2f6aac3c;
        if (iVar5 != 0x4a180b94) {
          iVar2 = iVar5;
        }
        bVar4 = iVar5 != 0x3f62e6e1;
        iVar5 = 0x4a180b94;
        if (bVar4) {
          iVar5 = iVar2;
        }
      }
      if (iVar5 != 0x4de3f622) break;
      iVar5 = -0x3b846152;
    }
  } while (iVar5 != 0x72707405);
  return;
}
// Function Stack Size: 0x10 bytes
void MyAlertController::UpdateAlert(ID param_1,SEL param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  iVar1 = 0x21f11a86;
  do {
    while( true ) {
      while (iVar4 = iVar1, 0x21f11a85 < iVar4) {
        iVar2 = 0x4ba20b19;
        if (iVar4 != 0x5ceb5454) {
          iVar2 = iVar4;
        }
        iVar1 = -0x6aeadb70;
        if (iVar4 != 0x4ba20b19) {
          iVar1 = iVar2;
        }
        iVar2 = -0x1902d6c3;
        if (iVar4 != 0x387bfd4a) {
          iVar2 = iVar4;
        }
        iVar3 = 0x387bfd4a;
        if (iVar4 != 0x21f11a86) {
          iVar3 = iVar2;
        }
        if (iVar4 < 0x4ba20b19) {
          iVar1 = iVar3;
        }
      }
      if (iVar4 < -0x30cdbfcd) break;
      iVar2 = -0x30cdbfcd;
      if (iVar4 != -0x1902d6c3) {
        iVar2 = iVar4;
      }
      iVar1 = 0x5ceb5454;
      if (iVar4 != -0x30cdbfcd) {
        iVar1 = iVar2;
      }
    }
    iVar1 = 0x387bfd4a;
  } while ((iVar4 == -0x41e28aab) || (iVar1 = iVar4, iVar4 != -0x6aeadb70));
  return;
}
// Function Stack Size: 0x18 bytes
ID MyMD5Tools::md5_(ID param_1,SEL param_2,ID param_3)
{
  ID IVar1;
  _objc_retain(param_3);
                    // WARNING: Could not recover jumptable at 0x00030710. Too many branches
                    // WARNING: Treating indirect jump as call
  IVar1 = (*DAT_00088a70)(&_OBJC_CLASS___NSString,"stringWithFormat:");
  return IVar1;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
// ui_ojbkhhhsd()
void ui_ojbkhhhsd(void)
{
                    // WARNING: Could not recover jumptable at 0x00030b5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00089050)();
  return;
}
void FUN_00031b38(void)
{
                    // WARNING: Could not recover jumptable at 0x00031b70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00089c10)();
  return;
}
void FUN_00032cf0(void)
{
                    // WARNING: Could not recover jumptable at 0x00032d18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0008ab30)();
  return;
}
void FUN_00033198(void)
{
                    // WARNING: Could not recover jumptable at 0x000331b8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0008aec0)();
  return;
}
void FUN_00033698(undefined8 param_1,undefined8 param_2)
{
  int iVar1;
  undefined8 local_18;
  iVar1 = -0x7a0b4649;
  do {
    while( true ) {
      while (0x292ab9a6 < iVar1) {
        if (iVar1 == 0x292ab9a7) {
          iVar1 = 0xfb6fbd2;
        }
        else if (iVar1 == 0x5c0269de) {
          iVar1 = 0x292ab9a7;
          local_18 = param_2;
        }
      }
      if (iVar1 != -0x7a0b4649) break;
      iVar1 = 0x5c0269de;
    }
  } while (iVar1 != 0xfb6fbd2);
  _objc_retain(local_18);
  _objc_release(local_18);
  return;
}
void FUN_00033740(undefined8 param_1,long param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  iVar1 = -0x256ee5a3;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar1, iVar3 < -0x22b42cd4) {
          if (iVar3 < -0x4e4a6b0c) {
            iVar1 = -0x584ffcf5;
            if (iVar3 != -0x63c70822) {
              if (iVar3 == -0x5dcbf5dc) {
                _objc_retain(local_38);
                iVar1 = 0x7570ea18;
              }
              else {
                iVar1 = 0x5b519d9;
                if (iVar3 != -0x584ffcf5) {
                  iVar1 = iVar3;
                }
              }
            }
          }
          else if (iVar3 == -0x4e4a6b0c) {
            iVar1 = 0x7c071740;
          }
          else if (iVar3 == -0x26ff645e) {
            local_38 = *(undefined8 *)(param_2 + 0x20);
            iVar1 = -0x4e4a6b0c;
          }
          else {
            iVar1 = -0x26ff645e;
            if (iVar3 != -0x256ee5a3) {
              iVar1 = iVar3;
            }
          }
        }
        if (0x5b519d8 < iVar3) break;
        iVar1 = -0x584ffcf5;
        if (iVar3 != -0x1aadf8b2) {
          iVar1 = iVar3;
        }
        iVar2 = -0x26ff645e;
        if (iVar3 != -0x1fcc7005) {
          iVar2 = iVar1;
        }
        iVar1 = -0x1aadf8b2;
        if (iVar3 != -0x22b42cd4) {
          iVar1 = iVar2;
        }
      }
      if (iVar3 != 0x7570ea18) break;
      _objc_retain(local_38);
      iVar1 = -0x22b42cd4;
    }
    iVar1 = 0x7570ea18;
  } while ((iVar3 == 0x7c071740) || (iVar1 = iVar3, iVar3 != 0x5b519d9));
  return;
}
void FUN_000338ec(long param_1)
{
  int iVar1;
  undefined8 local_58;
  iVar1 = -0x4e32b520;
  do {
    while (iVar1 < 0x2f011ceb) {
      if (iVar1 == -0x4e32b520) {
LAB_00033998:
        iVar1 = 0x2f011ceb;
      }
      else if (iVar1 == -0x2a69bb6e) {
        iVar1 = -0xf9d0161;
      }
      else if (iVar1 == -0xf9d0161) {
        _objc_release(*local_58);
        iVar1 = 0x6e09ec13;
      }
    }
    if (iVar1 == 0x6e09ec13) {
      return;
    }
    if (iVar1 == 0x6adb2292) goto LAB_00033998;
    if (iVar1 == 0x2f011ceb) {
      iVar1 = -0x2a69bb6e;
      local_58 = (undefined8 *)(param_1 + 0x20);
    }
  } while( true );
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
// ui_ojbkhhh()
void ui_ojbkhhh(void)
{
                    // WARNING: Could not recover jumptable at 0x00033a40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0008b2f0)();
  return;
}
void FUN_00034a68(void)
{
                    // WARNING: Could not recover jumptable at 0x00034aa4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0008be10)();
  return;
}
// Function Stack Size: 0x10 bytes
void GetURLController::GetURL(ID param_1,SEL param_2)
{
                    // WARNING: Could not recover jumptable at 0x0003652c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0008d6c0)();
  return;
}
void FUN_00036d68(void)
{
                    // WARNING: Could not recover jumptable at 0x00036da4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0008dd40)();
  return;
}
void FUN_00038f94(void)
{
                    // WARNING: Could not recover jumptable at 0x00038fc8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_0008fb00)();
  return;
}
void FUN_00039484(void)
{
                    // WARNING: Could not recover jumptable at 0x000394a4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00090050)();
  return;
}
void FUN_0003963c(undefined8 param_1,undefined8 param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  iVar2 = 0x6429f78b;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar2, iVar2 = iVar3, iVar3 < 0x3b714a92) {
            if (iVar3 < -0x547b7874) {
              iVar1 = -0x19e67866;
              if (iVar3 != -0x609b3f35) {
                iVar1 = iVar3;
              }
              iVar2 = 0x410700ee;
              if (iVar3 != -0x7546834b) {
                iVar2 = iVar1;
              }
            }
            else {
              iVar2 = 0x410700ee;
              if ((iVar3 != -0x547b7874) && (iVar2 = iVar3, iVar3 == -0x19e67866)) {
                _objc_release(local_38);
                iVar2 = -0x547b7874;
              }
            }
          }
          if (iVar3 < 0x5b0ead16) break;
          if (iVar3 == 0x5b0ead16) {
            _objc_retain(param_2);
            local_38 = param_2;
            iVar2 = -0x609b3f35;
          }
          else if (iVar3 == 0x6429f78b) {
            iVar2 = 0x5b0ead16;
          }
        }
        if (iVar3 != 0x410700ee) break;
        iVar2 = 0x3b714a92;
      }
      if (iVar3 != 0x52bbbbc0) break;
      _objc_retain(param_2);
      iVar2 = 0x5b0ead16;
    }
  } while (iVar3 != 0x3b714a92);
  return;
}
void FUN_000397b0(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_28;
  iVar2 = 0x6bd20bf1;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar3 = iVar2, iVar3 < -0x723aa37) {
            if (iVar3 < -0x23aaaa93) {
              if (iVar3 == -0x7207602a) {
                FUN_00039990(&DAT_000a4018,local_28);
                iVar2 = -0x66a4c3b4;
              }
              else {
                iVar1 = 0x81685a;
                if (iVar3 != -0x3ed31c03) {
                  iVar1 = iVar3;
                }
                iVar2 = -0x202a8782;
                if (iVar3 != -0x66a4c3b4) {
                  iVar2 = iVar1;
                }
              }
            }
            else if (iVar3 == -0x23aaaa93) {
              _objc_getClass("UIViewController");
              iVar2 = 0x3e03cf75;
            }
            else if (iVar3 == -0x238d6083) {
              FUN_00039a28();
              iVar2 = 0x6ecece45;
            }
            else {
              iVar2 = 0x6ecece45;
              if (iVar3 != -0x202a8782) {
                iVar2 = iVar3;
              }
            }
          }
          if (0x62478f4f < iVar3) break;
          if (iVar3 == -0x723aa37) {
            FUN_00039990(&DAT_000a4018,local_28);
            iVar2 = -0x7207602a;
          }
          else {
            iVar2 = -0x7207602a;
            if ((iVar3 != 0x81685a) && (iVar2 = iVar3, iVar3 == 0x3e03cf75)) {
              local_28 = _objc_getClass("UIViewController");
              iVar2 = -0x3ed31c03;
            }
          }
        }
        iVar2 = 0x3e03cf75;
      } while (iVar3 == 0x6bd20bf1);
      if (iVar3 != 0x6ecece45) break;
      FUN_00039a28();
      iVar2 = 0x62478f50;
    }
    iVar2 = iVar3;
  } while (iVar3 != 0x62478f50);
  return;
}
void FUN_00039990(undefined8 param_1,undefined8 param_2)
{
  int iVar1;
  iVar1 = -0x1d319197;
  while (iVar1 != -0x4bf42ede) {
    if (iVar1 == -0x1d319197) {
      DAT_000a4018 = param_2;
      DAT_000a4020 = _object_getClass(param_2);
      iVar1 = -0x4bf42ede;
    }
  }
  DAT_000a4028 = _class_getSuperclass(param_2);
  _objc_retainAutoreleaseReturnValue(param_2);
  return;
}
void FUN_00039a28(void)
{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 local_d0;
  char *local_c8;
  long local_c0;
  code *local_b8;
  undefined8 local_b0;
  char local_a1;
  size_t local_a0;
  size_t local_98;
  size_t local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  long local_58;
  local_58 = *(long *)PTR____stack_chk_guard_00068050;
  puVar2 = &local_d0;
  iVar1 = -0x5f81ff1b;
LAB_00039a9c:
  do {
    while (iVar5 = iVar1, iVar1 = 0x5f69e213, iVar5 < 0x2bfe7068) {
      if (iVar5 < -0x42d49069) {
        if (iVar5 < -0x636c091e) {
          if (iVar5 < -0x722a3783) {
            if (iVar5 == -0x7d2df4e5) {
              local_b8 = (code *)_method_getImplementation(local_c0);
              iVar1 = -0x4563208d;
            }
            else {
              iVar1 = iVar5;
              if (iVar5 == -0x74444486) {
                _method_setImplementation(local_c0,FUN_00041868);
                iVar1 = 0x51cdf0c8;
              }
            }
          }
          else if (iVar5 == -0x722a3783) {
            iVar1 = -0x636c091e;
            if (local_a1 == '\0') {
              iVar1 = 0x1ccbfe59;
            }
          }
          else {
            iVar1 = -0x315e05a8;
            if (iVar5 != -0x6e08e0c1) {
              iVar1 = iVar5;
            }
          }
        }
        else if (iVar5 < -0x4bef6097) {
          if (iVar5 == -0x636c091e) {
            DAT_000a4058 = FUN_000422c8;
            iVar1 = 0x6588c798;
          }
          else {
            iVar1 = 0x6bd11428;
            if (iVar5 != -0x5f81ff1b) {
              iVar1 = iVar5;
            }
          }
        }
        else {
          iVar1 = 0x35afcfd9;
          if (((iVar5 != -0x4bef6097) && (iVar1 = 0x46c01ef2, iVar5 != -0x4b0295bd)) &&
             (iVar1 = iVar5, iVar5 == -0x4563208d)) {
            DAT_000a4058 = local_b8;
            local_b0 = DAT_000a4018;
            iVar1 = -0x4b0295bd;
          }
        }
      }
      else if (iVar5 < 0x68be6e8) {
        if (iVar5 < -0x219cc174) {
          iVar1 = 0x5f69e213;
          if ((iVar5 != -0x42d49069) && (iVar1 = iVar5, iVar5 == -0x315e05a8)) {
            local_c8 = "motionEnded:withEvent:";
            local_c0 = _class_getInstanceMethod(local_d0,"motionEnded:withEvent:");
            iVar1 = 0x69afccab;
          }
        }
        else if (iVar5 == -0x219cc174) {
          iVar1 = -0x42d49069;
        }
        else if (iVar5 == -0x1043567f) {
          _memcpy(local_60,"q",local_98);
          _memcpy(local_68 + local_80,"@",local_90);
          local_68[local_a0 + local_98 + local_90 + 2] = 0;
          _class_addMethod(DAT_000a4018,local_c8,FUN_00041868,local_68);
          puVar2 = (undefined8 *)local_70;
          iVar1 = 0x35afcfd9;
        }
        else if (iVar5 != -0x99e3d79) {
          iVar1 = iVar5;
        }
      }
      else if (iVar5 < 0x1096e875) {
        iVar6 = 0x68be6e8;
        iVar7 = 0x6bd11428;
        if (iVar5 != 0x7ad7be5) {
          iVar7 = iVar5;
        }
LAB_00039f70:
        iVar1 = -0x219cc174;
        if (iVar5 != iVar6) {
          iVar1 = iVar7;
        }
      }
      else if (iVar5 == 0x1096e875) {
        iVar1 = -0x6e08e0c1;
      }
      else if (iVar5 == 0x1964ca91) {
        iVar1 = 0x6a6a96f7;
        if (local_c0 != 0) {
          iVar1 = -0x7d2df4e5;
        }
      }
      else {
        iVar1 = -0x74444486;
        if (iVar5 != 0x1ccbfe59) {
          iVar1 = iVar5;
        }
      }
    }
    if (iVar5 < 0x5964de21) {
      if (iVar5 < 0x3ef01a56) {
        if (iVar5 < 0x3a996b72) {
          if (iVar5 == 0x2bfe7068) {
            uVar3 = _method_getTypeEncoding(local_c0);
            _class_addMethod(local_b0,local_c8,FUN_00041868,uVar3);
            iVar1 = 0x46c01ef2;
          }
          else {
            iVar1 = iVar5;
            if (iVar5 == 0x35afcfd9) {
              _memcpy(local_60,"q",local_98);
              _memcpy(local_68 + local_80,"@",local_90);
              local_68[local_a0 + local_98 + local_90 + 2] = 0;
              _class_addMethod(DAT_000a4018,local_c8,FUN_00041868,local_68);
              puVar2 = (undefined8 *)local_70;
              iVar1 = 0x4d2e4654;
            }
          }
        }
        else {
          iVar6 = -0x99e3d79;
          if (iVar5 != 0x3c094dbb) {
            iVar6 = iVar5;
          }
          iVar1 = 0x5964de21;
          if (iVar5 != 0x3a996b72) {
            iVar1 = iVar6;
          }
        }
      }
      else if (iVar5 < 0x4d2e4654) {
        if (iVar5 == 0x3ef01a56) {
          iVar1 = 0x5964de21;
        }
        else {
          iVar1 = iVar5;
          if (iVar5 == 0x46c01ef2) {
            uVar3 = _method_getTypeEncoding(local_c0);
            local_a1 = _class_addMethod(local_b0,local_c8,FUN_00041868,uVar3);
            iVar1 = -0x722a3783;
          }
        }
      }
      else {
        iVar6 = 0x3c094dbb;
        if (iVar5 != 0x52a31a1d) {
          iVar6 = iVar5;
        }
        iVar7 = 0x52a31a1d;
        if (iVar5 != 0x51cdf0c8) {
          iVar7 = iVar6;
        }
        if (iVar5 != 0x4d2e4654) {
          iVar1 = iVar7;
        }
      }
      goto LAB_00039a9c;
    }
    if (iVar5 < 0x6a6a96f7) {
      if (0x6588c797 < iVar5) {
        iVar6 = 0x6588c798;
        iVar7 = 0x1964ca91;
        if (iVar5 != 0x69afccab) {
          iVar7 = iVar5;
        }
        goto LAB_00039f70;
      }
      if (iVar5 == 0x5964de21) {
        puVar4 = (undefined1 *)((long)puVar2 + -(local_78 + 0x10U & 0xfffffffffffffff0));
        local_70 = (undefined1 *)puVar2;
        local_68 = puVar4;
        _memcpy(puVar4,"v",local_a0);
        local_68[local_a0] = 0x40;
        local_68[local_a0 + 1] = 0x3a;
        local_60 = local_68 + local_88;
        puVar2 = (undefined8 *)puVar4;
        iVar1 = 0x703022da;
      }
      else if (iVar5 == 0x6182ce5e) {
        _class_getInstanceMethod(local_d0,"motionEnded:withEvent:");
        iVar1 = -0x315e05a8;
      }
      else {
        iVar1 = iVar5;
        if (iVar5 == 0x5f69e213) {
          if (*(long *)PTR____stack_chk_guard_00068050 != local_58) {
                    // WARNING: Subroutine does not return
            ___stack_chk_fail();
          }
          return;
        }
      }
    }
    else if (iVar5 < 0x703022da) {
      if (iVar5 == 0x6a6a96f7) {
        local_a0 = 1;
        local_98 = 1;
        local_88 = 3;
        local_90 = 1;
        local_80 = 4;
        local_78 = 5;
        iVar1 = 0x3a996b72;
      }
      else {
        iVar1 = iVar5;
        if (iVar5 == 0x6bd11428) {
          local_d0 = DAT_000a4018;
          iVar1 = 0x1096e875;
        }
      }
    }
    else if (iVar5 == 0x703022da) {
      iVar1 = -0x4bef6097;
    }
    else if (iVar5 == 0x70e57d34) {
      _method_setImplementation(local_c0,FUN_00041868);
      iVar1 = -0x74444486;
    }
    else {
      iVar1 = 0x3c094dbb;
      if (iVar5 != 0x73aef9c3) {
        iVar1 = iVar5;
      }
    }
  } while( true );
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
// refreshPrefs()
void refreshPrefs(void)
{
  undefined8 uVar1;
  _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar1 = _objc_retain();
  _objc_msgSend(uVar1,"persistentDomainForName:",&cf_xc_lzsxcl_w2Proprefs);
                    // WARNING: Could not recover jumptable at 0x0003a290. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000901d0)();
  return;
}
// PreferencesChangedCallback(__CFNotificationCenter*, void*, __CFString const*, void const*,
// __CFDictionary const*)
__CFNotificationCenter *
PreferencesChangedCallback
          (__CFNotificationCenter *param_1,void *param_2,__CFString *param_3,void *param_4,
          __CFDictionary *param_5)
{
  int iVar1;
  iVar1 = 0x4396e80b;
  do {
    while( true ) {
      while (0x231c3f9b < iVar1) {
        if (iVar1 == 0x4396e80b) {
          iVar1 = 0x231c3f9c;
        }
        else if (iVar1 == 0x231c3f9c) {
          iVar1 = -0x3befd88b;
        }
      }
      if (iVar1 != -0x3befd88b) break;
      param_1 = (__CFNotificationCenter *)refreshPrefs();
      iVar1 = 0x2072104;
    }
  } while (iVar1 != 0x2072104);
  return param_1;
}
void FUN_0003b734(void)
{
                    // WARNING: Could not recover jumptable at 0x0003b760. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00091650)();
  return;
}
void FUN_0003c4cc(void)
{
                    // WARNING: Could not recover jumptable at 0x0003c524. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000921f0)();
  return;
}
void FUN_0003c6fc(void)
{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  int iVar3;
  undefined8 local_48;
  uVar1 = DAT_000a3fe0;
  DAT_000a3fe0 = &cf_6c565e66d362c8f1;
  _objc_release(uVar1);
  uVar1 = DAT_000a3f28;
  DAT_000a3f28 = &cf_https___repo_yttxcs_com_api_Member_Member_php;
  _objc_release(uVar1);
  iVar3 = 0x25a37c26;
  while (pcVar2 = DAT_000a3f38, iVar3 != 0x6ec62f51) {
    if (iVar3 == 0x25a37c26) {
      DAT_000a3f38 = &cf_repo_yttxcs_com;
      _objc_release(pcVar2);
      local_48 = DAT_000a3f30;
      iVar3 = 0x6ec62f51;
    }
  }
  DAT_000a3f30 = &cf_cn_yttxcs_w2pro;
  _objc_release(local_48);
  uVar1 = DAT_000a3f40;
  DAT_000a3f40 = &cf_0_2_1;
  _objc_release(uVar1);
  return;
}
ulong FUN_0003c7dc(ulong param_1)
{
  int iVar1;
  int iVar2;
  u_int32_t uVar3;
  int iVar4;
  int iVar5;
  uint local_b0;
  char local_a9;
  cfstringStruct *local_a8;
  char local_99;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  char local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  char local_69;
  cfstringStruct *local_68;
  char local_59;
  cfstringStruct *local_58;
  iVar1 = 0x5a189b0d;
LAB_0003c838:
  iVar4 = iVar1;
  iVar1 = iVar4;
  if (iVar4 < 0x72222a) {
    if (iVar4 < -0x355709ac) {
      if (iVar4 < -0x6b3ae708) {
        if (iVar4 < -0x70797648) {
          if (iVar4 < -0x7544f0f7) {
            if (iVar4 == -0x7ef119b9) {
              iVar1 = 0x1b43827b;
            }
            else if (iVar4 == -0x79dd6035) {
              param_1 = _objc_release(local_90);
              iVar1 = -0x330afd1a;
            }
          }
          else if (iVar4 == -0x7544f0f7) {
            iVar1 = 0x2ace8d9b;
          }
          else if (iVar4 == -0x74e5eb67) {
            iVar1 = 0x5d577432;
          }
          else if (iVar4 == -0x7440bf1b) {
            local_a8 = DAT_000a3ed0;
            DAT_000a3ed0 = &cf__ffae3e;
            iVar1 = 0x62caf160;
          }
        }
        else if (iVar4 < -0x6eb1d734) {
          if (iVar4 == -0x70797648) {
            iVar1 = 0x5d1a3aa8;
          }
          else if (iVar4 == -0x702c96d5) {
            DAT_000a3ed0 = &cf__1874cd;
            iVar1 = 0x140cbcb4;
          }
          else if (iVar4 == -0x6f50b179) {
            local_69 = local_b0 == 3;
            iVar1 = -0x7ef119b9;
          }
        }
        else {
          iVar1 = 0x756f0417;
          if (iVar4 != -0x6eb1d734) {
            if (iVar4 == -0x6e8f9966) {
              uVar3 = _arc4random();
              param_1 = (ulong)uVar3;
              iVar1 = -0x4703bbf2;
            }
            else {
              iVar1 = iVar4;
              if (iVar4 == -0x6b670ea0) {
LAB_0003d3a0:
                iVar1 = -0x6f50b179;
              }
            }
          }
        }
      }
      else if (iVar4 < -0x4bf71630) {
        if (iVar4 < -0x5a396114) {
          iVar5 = 0x2cb10af;
          if (iVar4 != -0x630eea4e) {
            iVar5 = iVar4;
          }
          iVar1 = 0x7ffbc43e;
          if (iVar4 != -0x6b3ae708) {
            iVar1 = iVar5;
          }
        }
        else {
          iVar1 = -0x14b699b7;
          if (iVar4 != -0x5a396114) {
            if (iVar4 == -0x4f5e8d47) {
              local_58 = DAT_000a3ed0;
              iVar1 = 0x72222a;
            }
            else {
              iVar1 = -0x6685105;
              if (iVar4 != -0x4d6fa76c) {
                iVar1 = iVar4;
              }
            }
          }
        }
      }
      else if (iVar4 < -0x417eec17) {
        if (iVar4 == -0x4bf71630) {
          iVar1 = -0x316fcc15;
          if (local_81 == '\0') {
            iVar1 = -0x6b670ea0;
          }
        }
        else if (iVar4 == -0x4703bbf2) {
          uVar3 = _arc4random();
          param_1 = (ulong)uVar3;
          local_b0 = uVar3 % 5;
          iVar1 = -0x4d6fa76c;
        }
        else if (iVar4 == -0x430e37e2) {
          param_1 = _objc_release(local_a8);
          iVar1 = 0x89fca2e;
        }
      }
      else {
        iVar1 = -0xcdbeadb;
        if (iVar4 != -0x417eec17) {
          if (iVar4 == -0x3d3917a2) {
            iVar1 = -0x2641d9fb;
            if (local_99 == '\0') {
              iVar1 = -0x6b3ae708;
            }
          }
          else {
            iVar5 = -0x36a900ff;
LAB_0003d130:
            iVar1 = iVar4;
            if (iVar4 == iVar5) {
              iVar1 = 0x7433353e;
            }
          }
        }
      }
      goto LAB_0003c838;
    }
    if (iVar4 < -0x1d481dea) {
      if (iVar4 < -0x2d77c3c2) {
        if (iVar4 < -0x330afd1a) {
          iVar5 = -0x70797648;
          if (iVar4 != -0x33582571) {
            iVar5 = iVar4;
          }
          iVar1 = 0x7719d2ff;
          if (iVar4 != -0x355709ac) {
            iVar1 = iVar5;
          }
          goto LAB_0003c838;
        }
        iVar1 = -0xcdbeadb;
        if (iVar4 == -0x330afd1a) goto LAB_0003c838;
        if (iVar4 == -0x316fcc15) {
          local_80 = DAT_000a3ed0;
          iVar1 = 0x491fb54f;
          goto LAB_0003c838;
        }
        iVar1 = iVar4;
        if (iVar4 != -0x314752d6) goto LAB_0003c838;
      }
      else {
        if (-0x26a8072a < iVar4) {
          iVar1 = -0x4f5e8d47;
          if (((iVar4 != -0x26a80729) && (iVar1 = -0x2237c09f, iVar4 != -0x2641d9fb)) &&
             (iVar1 = iVar4, iVar4 == -0x2237c09f)) {
            local_98 = DAT_000a3ed0;
            iVar1 = -0x4cfb75c;
          }
          goto LAB_0003c838;
        }
        if (iVar4 != -0x2d77c3c2) {
          if (iVar4 == -0x2aab661e) {
            iVar1 = 0x64c00df0;
          }
          else if (iVar4 == -0x286837d2) {
            local_a9 = local_b0 == 0;
            iVar1 = -0x355709ac;
          }
          goto LAB_0003c838;
        }
      }
      iVar1 = 0x16a9c8ef;
      goto LAB_0003c838;
    }
    if (iVar4 < -0x7620508) {
      if (iVar4 < -0x14b699b7) {
        iVar1 = -0xcdbeadb;
        if (iVar4 != -0x1d481dea) {
          if (iVar4 == -0x1b7aa4fb) {
            DAT_000a3ed0 = &cf__ee799f;
            param_1 = _objc_release(local_58);
            iVar1 = -0x189d74fa;
          }
          else {
            iVar1 = 0x7259eac3;
            if (iVar4 != -0x189d74fa) {
              iVar1 = iVar4;
            }
          }
        }
      }
      else if (iVar4 == -0x14b699b7) {
        iVar1 = -0x417eec17;
      }
      else {
        if (iVar4 != -0x1168ade6) {
          iVar5 = -0xcdbeadb;
          goto LAB_0003d130;
        }
        iVar1 = -0x286837d2;
      }
    }
    else if (iVar4 < -0x4cfb75c) {
      if (iVar4 == -0x7620508) goto LAB_0003d3a0;
      iVar1 = -0x286837d2;
      if ((iVar4 != -0x6685105) && (iVar1 = iVar4, iVar4 == -0x58ceb46)) {
LAB_0003d3ec:
        iVar1 = 0x4bca7a52;
      }
    }
    else if (iVar4 == -0x4cfb75c) {
      iVar1 = 0x72bf4b57;
    }
    else {
      iVar1 = -0x1b7aa4fb;
      if ((iVar4 != 0x609d5d) && (iVar1 = iVar4, iVar4 == -0x41d95e4)) {
        return param_1;
      }
    }
    goto LAB_0003c838;
  }
  if (iVar4 < 0x4c0e44d4) {
    if (iVar4 < 0x1b43827b) {
      if (iVar4 < 0x8f1adc5) {
        iVar1 = -0x1d481dea;
        if (iVar4 != 0x8d69136) {
          iVar1 = iVar4;
        }
        iVar5 = 0x18894513;
        if (iVar4 != 0x89fca2e) {
          iVar5 = iVar1;
        }
        iVar1 = -0xcdbeadb;
        if (iVar4 != 0x694b360) {
          iVar1 = iVar5;
        }
        iVar5 = 0x44c6de52;
        if (iVar4 != 0x2cb10af) {
          iVar5 = iVar4;
        }
        iVar2 = 0x609d5d;
        if (iVar4 != 0x72222a) {
          iVar2 = iVar5;
        }
        if (iVar4 < 0x694b360) {
          iVar1 = iVar2;
        }
      }
      else if (iVar4 < 0x140cbcb4) {
        iVar1 = -0x14b699b7;
        if (((iVar4 != 0x8f1adc5) && (iVar1 = 0x8d69136, iVar4 != 0xf7f6714)) &&
           (iVar1 = iVar4, iVar4 == 0x13b05e06)) {
          param_1 = _objc_release(local_90);
          iVar1 = -0x79dd6035;
        }
      }
      else if (iVar4 == 0x140cbcb4) {
        local_68 = DAT_000a3ed0;
        DAT_000a3ed0 = &cf__1874cd;
        iVar1 = -0x2aab661e;
      }
      else if (iVar4 == 0x16a9c8ef) {
        local_99 = local_b0 == 1;
        iVar1 = 0x5c8548ec;
      }
      else {
        iVar1 = 0x4695eed7;
        if (iVar4 != 0x18894513) {
          iVar1 = iVar4;
        }
      }
    }
    else if (iVar4 < 0x3aaaaa83) {
      if (iVar4 < 0x20ec1405) {
        iVar5 = -0x2237c09f;
        if (iVar4 != 0x1ddef30e) {
          iVar5 = iVar4;
        }
        iVar1 = -0x70797648;
        if (iVar4 != 0x1b43827b) {
          iVar1 = iVar5;
        }
      }
      else if (iVar4 == 0x20ec1405) {
        param_1 = _objc_release(local_78);
        iVar1 = 0x756f0417;
      }
      else {
        iVar1 = 0x18894513;
        if ((iVar4 != 0x2733d8af) && (iVar1 = iVar4, iVar4 == 0x2ace8d9b)) {
          iVar1 = 0x7eeab133;
        }
      }
    }
    else if (iVar4 < 0x491fb54f) {
      iVar1 = -0x4f5e8d47;
      if (iVar4 != 0x3aaaaa83) {
        if (iVar4 == 0x44c6de52) {
          iVar1 = 0x3aaaaa83;
          if (local_59 == '\0') {
            iVar1 = -0xcdbeadb;
          }
        }
        else {
          iVar1 = iVar4;
          if (iVar4 == 0x4695eed7) {
            iVar1 = -0xcdbeadb;
          }
        }
      }
    }
    else if (iVar4 == 0x491fb54f) {
      DAT_000a3ed0 = &cf__ff8247;
      local_78 = local_80;
      iVar1 = -0x6eb1d734;
    }
    else if (iVar4 == 0x4b41d803) {
      iVar1 = -0x3d3917a2;
    }
    else if (iVar4 == 0x4bca7a52) {
      local_59 = local_b0 == 4;
      iVar1 = -0x74e5eb67;
    }
    goto LAB_0003c838;
  }
  if (iVar4 < 0x65380845) {
    if (0x5a189b0c < iVar4) {
      if (iVar4 < 0x5d577432) {
        iVar1 = -0x4703bbf2;
        if (iVar4 != 0x5a189b0d) {
          if (iVar4 == 0x5c8548ec) {
            iVar1 = 0x65380845;
          }
          else {
            iVar1 = iVar4;
            if (iVar4 == 0x5d1a3aa8) {
              iVar1 = 0x78bea893;
              if (local_69 == '\0') {
                iVar1 = -0x58ceb46;
              }
            }
          }
        }
      }
      else {
        iVar1 = 0x2cb10af;
        if (iVar4 != 0x5d577432) {
          if (iVar4 == 0x62caf160) {
            iVar1 = -0x430e37e2;
          }
          else {
            iVar1 = iVar4;
            if (iVar4 == 0x64c00df0) {
              param_1 = _objc_release(local_68);
              iVar1 = 0x8f1adc5;
            }
          }
        }
      }
      goto LAB_0003c838;
    }
    if (iVar4 < 0x52d9b24f) {
      if (iVar4 == 0x4c0e44d4) {
        iVar1 = 0x7ffbc43e;
      }
      else {
        iVar1 = 0x7eeab133;
        if (iVar4 != 0x4efeb7f4) {
          iVar1 = iVar4;
        }
      }
      goto LAB_0003c838;
    }
    if (iVar4 == 0x52d9b24f) {
      DAT_000a3ed0 = &cf__ee799f;
      param_1 = _objc_release(local_58);
      iVar1 = -0x1b7aa4fb;
      goto LAB_0003c838;
    }
    if (iVar4 == 0x54baa695) goto LAB_0003d3ec;
    if (iVar4 != 0x5673dc12) goto LAB_0003c838;
  }
  else {
    if (0x756f0416 < iVar4) {
      if (iVar4 < 0x78bea893) {
        if (iVar4 == 0x756f0417) {
          param_1 = _objc_release(local_78);
          iVar1 = 0x694b360;
        }
        else {
          iVar1 = 0x4b41d803;
          if ((iVar4 != 0x75a80c64) && (iVar1 = iVar4, iVar4 == 0x7719d2ff)) {
            iVar1 = 0x5673dc12;
            if (local_a9 == '\0') {
              iVar1 = -0x314752d6;
            }
          }
        }
      }
      else {
        iVar1 = 0x140cbcb4;
        if (iVar4 != 0x78bea893) {
          if (iVar4 == 0x7eeab133) {
            iVar1 = -0x4bf71630;
          }
          else {
            iVar1 = iVar4;
            if (iVar4 == 0x7ffbc43e) {
              local_81 = local_b0 == 2;
              iVar1 = -0x7544f0f7;
            }
          }
        }
      }
      goto LAB_0003c838;
    }
    if (0x7259eac2 < iVar4) {
      iVar1 = 0x8d69136;
      if (iVar4 != 0x7259eac3) {
        if (iVar4 == 0x72bf4b57) {
          DAT_000a3ed0 = &cf__9aff9a;
          local_90 = local_98;
          iVar1 = 0x660a260d;
        }
        else {
          iVar1 = -0x41d95e4;
          if (iVar4 != 0x7433353e) {
            iVar1 = iVar4;
          }
        }
      }
      goto LAB_0003c838;
    }
    iVar1 = 0x4b41d803;
    if (((iVar4 == 0x65380845) || (iVar1 = -0x79dd6035, iVar4 == 0x660a260d)) ||
       (iVar1 = iVar4, iVar4 != 0x6ff6ec18)) goto LAB_0003c838;
    DAT_000a3ed0 = &cf__ffae3e;
  }
  iVar1 = -0x7440bf1b;
  goto LAB_0003c838;
}
void FUN_0003d578(void)
{
                    // WARNING: Could not recover jumptable at 0x0003d598. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00092310)();
  return;
}
void FUN_0003dac8(void)
{
                    // WARNING: Could not recover jumptable at 0x0003db00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000928a0)();
  return;
}
void FUN_0003e44c(void)
{
                    // WARNING: Could not recover jumptable at 0x0003e48c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00093060)();
  return;
}
void FUN_0003f408(void)
{
                    // WARNING: Could not recover jumptable at 0x0003f444. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00093f00)();
  return;
}
void FUN_000409ac(void)
{
                    // WARNING: Could not recover jumptable at 0x000409e8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000954b0)();
  return;
}
void FUN_00041868(void)
{
                    // WARNING: Could not recover jumptable at 0x00041898. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00096430)();
  return;
}
void FUN_000422c8(void)
{
                    // WARNING: Could not recover jumptable at 0x000422f4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00096fc0)();
  return;
}
void FUN_000423d0(void)
{
                    // WARNING: Could not recover jumptable at 0x0004240c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00097060)();
  return;
}
void FUN_0004470c(long param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar2 = -0x4c94479;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar2, iVar3 < 0x41ea5668) {
          if (iVar3 < 0xa100cd7) {
            iVar1 = 0xa100cd7;
            if (iVar3 != -0x4c94479) {
              iVar1 = iVar3;
            }
            iVar2 = 0xa100cd7;
            if (iVar3 != -0x5a1633a0) {
              iVar2 = iVar1;
            }
          }
          else if (iVar3 == 0xa100cd7) {
            _objc_msgSend(*(undefined8 *)(param_1 + 0x20),
                          "dismissViewControllerAnimated:completion:",1,0);
            iVar2 = 0x5fb50e75;
          }
          else {
            iVar2 = 0x41ea5668;
            if (iVar3 != 0x343291c2) {
              iVar2 = iVar3;
            }
          }
        }
        if (0x4de1b6d6 < iVar3) break;
        iVar1 = 0x41ea5668;
        if (iVar3 != 0x44a85cef) {
          iVar1 = iVar3;
        }
        iVar2 = 0x4de1b6d7;
        if (iVar3 != 0x41ea5668) {
          iVar2 = iVar1;
        }
      }
      if (iVar3 != 0x5fb50e75) break;
      iVar2 = 0x44a85cef;
    }
    iVar2 = iVar3;
  } while (iVar3 != 0x4de1b6d7);
  return;
}
void FUN_00044850(long param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  long local_18;
  char *local_10;
  undefined8 local_8;
  iVar2 = -0x763554e9;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar2, 0x579707c3 < iVar3) {
          if (iVar3 < 0x6c164c7c) {
            if (iVar3 == 0x579707c4) {
              iVar2 = -0x17a7b33f;
            }
            else {
              iVar2 = iVar3;
              if (iVar3 == 0x6303e011) {
                iVar2 = 0x579707c4;
                local_18 = param_1;
              }
            }
          }
          else {
            iVar1 = -0x33e96763;
            if (iVar3 != 0x6ee492bd) {
              iVar1 = iVar3;
            }
            iVar2 = 0x6303e011;
            if (iVar3 != 0x6c164c7c) {
              iVar2 = iVar1;
            }
          }
        }
        if (-0x71e1c1a0 < iVar3) break;
        iVar2 = 0x6303e011;
        if ((iVar3 != -0x763554e9) && (iVar2 = iVar3, iVar3 == -0x75698580)) {
          local_8 = *(undefined8 *)(local_18 + 0x20);
          iVar2 = 0x6ee492bd;
          local_10 = "dismissViewControllerAnimated:completion:";
        }
      }
      if (iVar3 != -0x71e1c19f) break;
      iVar2 = -0x75698580;
    }
    iVar2 = -0x75698580;
  } while ((iVar3 == -0x17a7b33f) || (iVar2 = iVar3, iVar3 != -0x33e96763));
  _objc_msgSend(local_8,local_10,1,0);
  return;
}
void FUN_000449b8(long param_1)
{
  int iVar1;
  int iVar2;
  long local_10;
  undefined8 local_8;
  iVar1 = 0x78a681;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar2 = iVar1, 0x2b852e0e < iVar2) {
            if (iVar2 < 0x574b4d7c) {
              iVar1 = -0x7f3b7055;
              if ((iVar2 != 0x2b852e0f) && (iVar1 = iVar2, iVar2 == 0x4cd36225)) {
                iVar1 = -0x7f3b7055;
              }
            }
            else {
              iVar1 = 0x74019219;
              if ((iVar2 != 0x574b4d7c) && (iVar1 = iVar2, iVar2 == 0x74019219)) {
                local_10 = param_1;
                iVar1 = 0x78f51f8;
              }
            }
          }
          if (-0x3be256db < iVar2) break;
          if (iVar2 == -0x7f3b7055) {
            local_8 = *(undefined8 *)(local_10 + 0x20);
            iVar1 = -0x7202de15;
          }
          else {
            iVar1 = -0x3be256da;
            if (iVar2 != -0x7202de15) {
              iVar1 = iVar2;
            }
          }
        }
        iVar1 = 0x74019219;
      } while (iVar2 == 0x78a681);
      if (iVar2 != 0x78f51f8) break;
      iVar1 = 0x2b852e0f;
    }
    iVar1 = iVar2;
  } while (iVar2 != -0x3be256da);
  _objc_msgSend(local_8,"dismissViewControllerAnimated:completion:",1,0);
  return;
}
void FUN_00044b18(undefined8 param_1,undefined8 param_2)
{
                    // WARNING: Could not recover jumptable at 0x00044b30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00098e40)(param_2);
  return;
}
void FUN_00044bd0(void)
{
                    // WARNING: Could not recover jumptable at 0x00044bf4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00098ed0)();
  return;
}
void FUN_00044ec8(undefined8 param_1,undefined8 param_2)
{
                    // WARNING: Could not recover jumptable at 0x00044ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00099190)(param_2);
  return;
}
void FUN_0004507c(long param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  long local_38;
  iVar2 = 0x76e9deb;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar2, 0x402f40bf < iVar3) {
            if (iVar3 < 0x456fcb47) {
              iVar1 = -0x9b3f218;
              if (iVar3 != 0x446d1578) {
                iVar1 = iVar3;
              }
              iVar2 = 0x7595f934;
              if (iVar3 != 0x402f40c0) {
                iVar2 = iVar1;
              }
            }
            else if (iVar3 == 0x456fcb47) {
              iVar2 = -0x1ac11213;
            }
            else if (iVar3 == 0x7595f934) {
              iVar2 = 0x884523a;
              local_38 = param_1;
            }
            else {
              iVar2 = 0x402f40c0;
              if (iVar3 != 0x7b472d43) {
                iVar2 = iVar3;
              }
            }
          }
          if (iVar3 < 0x76e9deb) break;
          iVar1 = 0x456fcb47;
          if (iVar3 != 0x884523a) {
            iVar1 = iVar3;
          }
          iVar2 = -0x9b3f218;
          if (iVar3 != 0x76e9deb) {
            iVar2 = iVar1;
          }
        }
        if (iVar3 != -0x1ac11213) break;
        _objc_msgSend(*(undefined8 *)(local_38 + 0x20),"dismissViewControllerAnimated:completion:",1
                      ,0);
        iVar2 = -0x2ae24f1e;
      }
      if (iVar3 != -0x9b3f218) break;
      iVar2 = 0x7b472d43;
    }
    iVar2 = iVar3;
  } while (iVar3 != -0x2ae24f1e);
  return;
}
void FUN_00045200(void)
{
  _NSSearchPathForDirectoriesInDomains(0xd,1,1);
                    // WARNING: Could not recover jumptable at 0x0004522c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00088ef0)();
  return;
}
void FUN_000453b4(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_28;
  iVar2 = -0x4124b098;
  do {
    while( true ) {
      while (iVar3 = iVar2, iVar3 < 0x1e979e6f) {
        if (iVar3 < -0x2d24c35) {
          iVar1 = 0x65edcfca;
          if (iVar3 != -0x203f32c9) {
            iVar1 = iVar3;
          }
          iVar2 = 0x15c725b1;
          if (iVar3 != -0x4124b098) {
            iVar2 = iVar1;
          }
        }
        else if (iVar3 == -0x2d24c35) {
          _objc_autoreleasePoolPop(local_28);
          iVar2 = 0x3a285acf;
        }
        else {
          iVar2 = iVar3;
          if (iVar3 == 0x15c725b1) {
            local_28 = _objc_autoreleasePoolPush();
            FUN_00045200();
            iVar2 = 0x25a04db4;
          }
        }
      }
      if (0x3a285ace < iVar3) break;
      if (iVar3 == 0x1e979e6f) {
        _objc_autoreleasePoolPush();
        FUN_00045200();
        iVar2 = 0x15c725b1;
      }
      else {
        iVar2 = -0x2d24c35;
        if (iVar3 != 0x25a04db4) {
          iVar2 = iVar3;
        }
      }
    }
    iVar2 = -0x203f32c9;
  } while (((iVar3 == 0x3a285acf) || (iVar2 = -0x203f32c9, iVar3 == 0x4faf5813)) ||
          (iVar2 = iVar3, iVar3 != 0x65edcfca));
  return;
}
// Function Stack Size: 0x1c bytes
opaqueCMSampleBuffer *
GetFrame::getCurrentFrame__(ID param_1,SEL param_2,opaqueCMSampleBuffer *param_3,bool param_4)
{
  opaqueCMSampleBuffer *poVar1;
                    // WARNING: Could not recover jumptable at 0x00045580. Too many branches
                    // WARNING: Treating indirect jump as call
  poVar1 = (opaqueCMSampleBuffer *)(*DAT_000a0880)();
  return poVar1;
}
// Function Stack Size: 0x10 bytes
ID GetFrame::getKeyWindow(ID param_1,SEL param_2)
{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
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
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ID unaff_x21;
  int unaff_w24;
  ulong unaff_x25;
  ID unaff_x26;
  ulong unaff_x28;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_180 [8];
  char *local_178;
  undefined8 *local_170;
  char *local_168;
  undefined8 local_160;
  long lStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 *local_118;
  char *local_110;
  undefined *local_108;
  undefined8 local_100;
  char *local_f8;
  ulong local_f0;
  char local_e1;
  undefined8 *local_e0;
  long local_d8;
  ID *local_d0;
  ID local_c8;
  ID local_c0;
  ulong local_b8;
  char local_a9;
  ulong local_a8;
  char local_9a;
  char local_99;
  ulong local_98;
  ulong local_90;
  int local_84;
  ID local_80;
  ID local_78;
  long local_70;
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = local_a8;
  puVar5 = auStack_180;
  local_70 = *(long *)PTR____stack_chk_guard_00068050;
  local_168 = "isKeyWindow";
  local_170 = &local_150;
  local_178 = "sharedApplication";
  iVar7 = 0x789d4bbc;
LAB_00046e18:
  while( true ) {
    iVar2 = iVar7;
    local_a8 = auVar9._0_8_;
    iVar7 = iVar2;
    if (0x12915f7e < iVar2) break;
    if (iVar2 < -0x38a375c0) {
      if (iVar2 < -0x5de6903b) {
        if (iVar2 < -0x6bba4a0b) {
          if (iVar2 < -0x7caf786b) {
            if (iVar2 == -0x7cef33a3) {
              iVar7 = 0x40ae90a7;
            }
            else if (iVar2 == -0x7cea91c3) {
              _objc_release(local_100);
              auVar9._8_8_ = extraout_x1_02;
              auVar9._0_8_ = local_a8;
              local_99 = local_84 == 2;
              iVar7 = -0x7caf786b;
            }
          }
          else if (iVar2 == -0x7caf786b) {
            iVar7 = -0x364903cf;
            if (local_99 == '\0') {
              iVar7 = 0x22e99a20;
            }
          }
          else {
            iVar7 = 0x7530c442;
            if ((iVar2 != -0x7300b2e6) && (iVar7 = iVar2, iVar2 == -0x6ebf040a)) {
LAB_0004776c:
              iVar7 = -0x19a626a5;
            }
          }
        }
        else if (iVar2 < -0x5e8f30e3) {
          if (iVar2 == -0x6bba4a0b) {
            _objc_enumerationMutation(local_100);
            auVar9._8_8_ = extraout_x1_09;
            auVar9._0_8_ = local_a8;
            iVar7 = -0x5de6903b;
          }
          else {
            iVar7 = 0x53a71634;
            if (iVar2 != -0x613fae8c) {
              iVar7 = iVar2;
            }
          }
        }
        else {
          iVar7 = -0x43ac3ff7;
          if (iVar2 != -0x5e2bffed) {
            iVar7 = iVar2;
          }
          iVar6 = 0x2966b432;
          if (iVar2 != -0x5e7a1458) {
            iVar6 = iVar7;
          }
          iVar7 = -0x14ea07e1;
          if (iVar2 != -0x5e8f30e3) {
            iVar7 = iVar6;
          }
        }
      }
      else if (iVar2 < -0x4d0ae81a) {
        if (iVar2 < -0x5bb67703) {
          if (iVar2 == -0x5de6903b) {
            _objc_enumerationMutation(local_100);
            auVar9._8_8_ = extraout_x1_10;
            auVar9._0_8_ = local_a8;
            iVar7 = 0x20ee7dca;
          }
          else {
            iVar7 = 0x12915f7f;
            if (iVar2 != -0x5de0c69c) {
              iVar7 = iVar2;
            }
          }
        }
        else {
          iVar7 = 0x7339b3c6;
          if (iVar2 != -0x5bb67703) {
            if (iVar2 == -0x5af197e8) {
              local_d0 = (ID *)(lStack_158 + local_90 * 8);
              iVar7 = -0x7cef33a3;
            }
            else {
              iVar7 = iVar2;
              if (iVar2 == -0x589e4011) {
                iVar7 = -0x14ea07e1;
              }
            }
          }
        }
      }
      else if (iVar2 < -0x43ac3ff7) {
        if (iVar2 == -0x4d0ae81a) {
          unaff_x25 = 0;
          unaff_x28 = local_f0;
          iVar7 = 0x54fe8d3c;
        }
        else if (iVar2 == -0x47f72dcb) {
          unaff_x21 = 0;
          iVar7 = 0x11e8f077;
        }
        else if (iVar2 == -0x456c8269) {
LAB_00047004:
          iVar7 = -0x18994c28;
        }
      }
      else if (iVar2 == -0x43ac3ff7) {
        iVar7 = -0x38a375c0;
      }
      else if (iVar2 == -0x40b795ad) {
        _objc_release(local_100);
        auVar9._8_8_ = extraout_x1_08;
        auVar9._0_8_ = local_a8;
        iVar7 = -0x7cea91c3;
      }
      else {
        iVar7 = -0x47f72dcb;
        if (iVar2 != -0x3eec6bb2) {
          iVar7 = iVar2;
        }
      }
    }
    else if (iVar2 < -0x14ea07e1) {
      if (iVar2 < -0x2194a8bc) {
        if (iVar2 < -0x3143909f) {
          if (iVar2 == -0x38a375c0) {
            iVar7 = 0x2384ba42;
          }
          else if (iVar2 == -0x364903cf) {
            _objc_release(local_100);
            auVar9._8_8_ = extraout_x1_01;
            auVar9._0_8_ = local_a8;
            iVar7 = 0x39a9b1f8;
          }
        }
        else if (iVar2 == -0x3143909f) {
          unaff_w24 = 0;
          unaff_x26 = 0;
          iVar7 = 0x7f300bfc;
        }
        else {
          if (iVar2 != -0x302c978b) {
            iVar6 = -0x288b3589;
            goto LAB_0004710c;
          }
          iVar7 = -0x5e2bffed;
        }
      }
      else if (iVar2 < -0x1ddf42ee) {
        if (iVar2 == -0x2194a8bc) {
          iVar7 = -0x5af197e8;
        }
        else if (iVar2 == -0x1f6212d9) {
          _objc_msgSend(local_108,local_110);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar4,"windows");
          uVar3 = _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          uStack_128 = 0;
          local_130 = 0;
          uStack_138 = 0;
          local_140 = 0;
          uStack_148 = 0;
          local_150 = 0;
          lStack_158 = 0;
          local_160 = 0;
          uVar4 = _objc_retain(uVar3);
          _objc_msgSend(uVar4,"countByEnumeratingWithState:objects:count:",&local_160,local_118,0x10
                       );
          auVar9._8_8_ = extraout_x1_03;
          auVar9._0_8_ = local_a8;
          goto LAB_0004776c;
        }
      }
      else {
        iVar7 = -0x43ac3ff7;
        if (iVar2 != -0x1ddf42ee) {
          if (iVar2 == -0x19a626a5) {
            _objc_msgSend(local_108,local_110);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            local_100 = _objc_msgSend(uVar4,"windows");
            _objc_retain(local_100);
            _objc_release(uVar4);
            uStack_128 = 0;
            local_130 = 0;
            uStack_138 = 0;
            local_140 = 0;
            uStack_148 = 0;
            local_150 = 0;
            lStack_158 = 0;
            local_160 = 0;
            _objc_retain(local_100);
            local_f8 = "countByEnumeratingWithState:objects:count:";
            auVar10 = _objc_msgSend(local_100,"countByEnumeratingWithState:objects:count:",
                                    &local_160,local_118,0x10);
            auVar9._8_8_ = auVar10._8_8_;
            auVar9._0_8_ = local_a8;
            local_f0 = auVar10._0_8_;
            local_e1 = local_f0 == 0;
            iVar7 = 0x1eac6c2e;
          }
          else {
            iVar7 = iVar2;
            if (iVar2 == -0x18994c28) {
              local_a9 = local_b8 < local_98;
              iVar7 = 0x5b84bc87;
            }
          }
        }
      }
    }
    else if (iVar2 < 0xa835729) {
      if (iVar2 < -0xc0635d2) {
        if (iVar2 == -0x14ea07e1) {
          iVar7 = -0xccba0e1;
        }
        else if (iVar2 == -0xfe927be) {
          _objc_retain(local_c8,auVar9._8_8_);
          auVar9._8_8_ = extraout_x1_04;
          auVar9._0_8_ = local_a8;
          iVar7 = -0x302c978b;
        }
        else if (iVar2 == -0xccba0e1) {
          iVar7 = 0x101a86ce;
        }
      }
      else if (iVar2 == -0xc0635d2) {
        iVar7 = -0x7300b2e6;
        if (local_e1 == '\0') {
          iVar7 = 0x109f9262;
        }
      }
      else if (iVar2 == 0x4d1266a) {
        _objc_autorelease(local_78);
        auVar9._8_8_ = extraout_x1;
        auVar9._0_8_ = local_a8;
        iVar7 = 0x1e275808;
      }
      else if (iVar2 == -0x2b2103a) {
        if (*(long *)PTR____stack_chk_guard_00068050 != local_70) {
                    // WARNING: Subroutine does not return
          ___stack_chk_fail();
        }
        return local_78;
      }
    }
    else if (iVar2 < 0x109f9262) {
      iVar6 = -0x5af197e8;
      if (iVar2 != 0x101a86ce) {
        iVar6 = iVar2;
      }
      iVar7 = 0x65e90229;
      if (iVar2 != 0xa835729) {
        iVar7 = iVar6;
      }
    }
    else {
      iVar7 = 0x7339b3c6;
      if (((iVar2 != 0x109f9262) && (iVar7 = -0xfe927be, iVar2 != 0x118b8a8f)) &&
         (iVar7 = iVar2, iVar2 == 0x11e8f077)) {
        local_108 = &_OBJC_CLASS___UIApplication;
        local_110 = local_178;
        iVar7 = -0x6ebf040a;
      }
    }
  }
  if (iVar2 < 0x520eaad1) {
    if (0x30299e8b < iVar2) {
      if (iVar2 < 0x431c7ebf) {
        if (iVar2 < 0x34a736fd) {
          iVar7 = -0x613fae8c;
          if ((iVar2 != 0x30299e8c) && (iVar7 = iVar2, iVar2 == 0x33b39c3c)) {
            local_9a = local_a8 == 0;
            iVar7 = -0x5e7a1458;
          }
        }
        else if (iVar2 == 0x34a736fd) {
          iVar7 = -0x4d0ae81a;
        }
        else {
          iVar7 = -0x613fae8c;
          if ((iVar2 != 0x39a9b1f8) && (iVar7 = iVar2, iVar2 == 0x40ae90a7)) {
            local_c8 = *local_d0;
            iVar7 = 0x195cb99d;
          }
        }
      }
      else if (iVar2 < 0x4a7f0403) {
        iVar6 = -0x364903cf;
        if (iVar2 != 0x48b56d83) {
          iVar6 = iVar2;
        }
        iVar7 = 0x2966b432;
        if (iVar2 != 0x431c7ebf) {
          iVar7 = iVar6;
        }
      }
      else if (iVar2 == 0x4a7f0403) {
        puVar5 = puVar5 + -0x80;
        local_118 = puVar5;
        iVar7 = -0x3eec6bb2;
      }
      else if (iVar2 == 0x4dfb3da2) {
        iVar7 = 0x7f637cfc;
      }
      else if (iVar2 == 0x4f9c5187) {
        unaff_x25 = 0;
        unaff_x28 = local_a8;
        iVar7 = -0x7300b2e6;
        if (local_9a == '\0') {
          iVar7 = 0x54fe8d3c;
        }
      }
      goto LAB_00046e18;
    }
    if (iVar2 < 0x1eac6c2e) {
      if (iVar2 < 0x1cb9eb41) {
        if (iVar2 == 0x12915f7f) {
          local_d8 = *(long *)*local_e0;
          iVar7 = 0x773d3d56;
        }
        else if (iVar2 == 0x195cb99d) {
          local_c0 = local_c8;
          iVar2 = _objc_msgSend(local_c8,local_168);
          auVar10._8_8_ = extraout_x1_00;
          auVar10._0_8_ = local_a8;
          auVar9._8_8_ = extraout_x1_00;
          auVar9._0_8_ = local_a8;
          iVar7 = 0x118b8a8f;
          if (iVar2 == 0) {
            iVar7 = 0x62af7feb;
            auVar9 = auVar10;
          }
        }
      }
      else if (iVar2 == 0x1cb9eb41) {
        _objc_retain(local_c8,auVar9._8_8_);
        auVar9._8_8_ = extraout_x1_05;
        auVar9._0_8_ = local_a8;
        iVar7 = -0xfe927be;
      }
      else if (iVar2 == 0x1e275808) {
        _objc_autorelease(local_78);
        auVar9._8_8_ = extraout_x1_06;
        auVar9._0_8_ = local_a8;
        iVar7 = -0x2b2103a;
      }
      else if (iVar2 == 0x1e882d79) goto LAB_00047004;
      goto LAB_00046e18;
    }
    if (0x22e99a1f < iVar2) {
      iVar7 = 0x52ad1eaf;
      if (iVar2 != 0x22e99a20) {
        if (iVar2 == 0x2384ba42) {
          unaff_w24 = 2;
          unaff_x26 = local_c0;
          iVar7 = 0x7f300bfc;
        }
        else {
          iVar7 = 0x4f9c5187;
          if (iVar2 != 0x2966b432) {
            iVar7 = iVar2;
          }
        }
      }
      goto LAB_00046e18;
    }
    iVar6 = 0x1eac6c2e;
    iVar7 = -0xc0635d2;
    iVar8 = -0x589e4011;
    if (iVar2 != 0x20ee7dca) {
      iVar8 = iVar2;
    }
  }
  else {
    if (iVar2 < 0x62af7feb) {
      if (iVar2 < 0x5493b3ac) {
        if (iVar2 < 0x53a71634) {
          iVar6 = 0x48b56d83;
          if (iVar2 != 0x52ad1eaf) {
            iVar6 = iVar2;
          }
          iVar7 = 0x7530c442;
          if (iVar2 != 0x520eaad1) {
            iVar7 = iVar6;
          }
        }
        else if (iVar2 == 0x53a71634) {
          unaff_x21 = local_80;
          iVar7 = 0x6e13efe6;
        }
        else {
          iVar7 = 0x4a7f0403;
          if (iVar2 != 0x53c0e4a0) {
            iVar6 = 0x53e66cc0;
LAB_0004710c:
            iVar7 = iVar2;
            if (iVar2 == iVar6) {
              iVar7 = 0x4dfb3da2;
            }
          }
        }
      }
      else if (iVar2 < 0x5b84bc87) {
        iVar7 = -0x5de6903b;
        if ((iVar2 != 0x5493b3ac) && (iVar7 = iVar2, iVar2 == 0x54fe8d3c)) {
          local_98 = unaff_x28;
          local_90 = unaff_x25;
          iVar7 = 0x101a86ce;
          if (*(long *)*local_e0 != local_d8) {
            iVar7 = 0x5493b3ac;
          }
        }
      }
      else if (iVar2 == 0x5b84bc87) {
        iVar7 = 0x53e66cc0;
      }
      else if (iVar2 == 0x5e6f0054) {
        _objc_msgSend(local_100,local_f8,&local_160,local_118,0x10);
        auVar9._8_8_ = extraout_x1_07;
        auVar9._0_8_ = local_a8;
        iVar7 = 0x65e90229;
      }
      else if (iVar2 == 0x6177f848) {
        iVar7 = 0x52ad1eaf;
      }
      goto LAB_00046e18;
    }
    if (iVar2 < 0x7530c442) {
      if (iVar2 < 0x69348af2) {
        if (iVar2 == 0x62af7feb) {
          local_b8 = local_90 + 1;
          iVar7 = 0x1e882d79;
        }
        else if (iVar2 == 0x65e90229) {
          auVar9 = _objc_msgSend(local_100,local_f8,&local_160,local_118,0x10);
          iVar7 = 0x780577ab;
        }
      }
      else {
        iVar7 = 0x34a736fd;
        if (iVar2 != 0x69348af2) {
          if (iVar2 == 0x6e13efe6) {
            local_78 = unaff_x21;
            iVar7 = 0x1e275808;
          }
          else {
            iVar7 = iVar2;
            if (iVar2 == 0x7339b3c6) {
              local_e0 = local_170;
              iVar7 = -0x5de0c69c;
            }
          }
        }
      }
      goto LAB_00046e18;
    }
    if (0x789d4bbb < iVar2) {
      if (iVar2 == 0x7f637cfc) {
        unaff_x25 = local_b8;
        unaff_x28 = local_98;
        iVar7 = 0x54fe8d3c;
        if (local_a9 == '\0') {
          iVar7 = 0xa835729;
        }
      }
      else if (iVar2 == 0x7f300bfc) {
        local_84 = unaff_w24;
        local_80 = unaff_x26;
        iVar7 = -0x7cea91c3;
      }
      else if (iVar2 == 0x789d4bbc) {
        iVar7 = 0x4a7f0403;
      }
      goto LAB_00046e18;
    }
    iVar6 = 0x7530c442;
    iVar7 = -0x3143909f;
    iVar1 = 0x33b39c3c;
    if (iVar2 != 0x780577ab) {
      iVar1 = iVar2;
    }
    iVar8 = 0x34a736fd;
    if (iVar2 != 0x773d3d56) {
      iVar8 = iVar1;
    }
  }
  if (iVar2 != iVar6) {
    iVar7 = iVar8;
  }
  goto LAB_00046e18;
}
// Function Stack Size: 0x20 bytes
void CCUIImagePickerDelegate::imagePickerController_didFinishPickingMediaWithInfo_
               (ID param_1,SEL param_2,ID param_3,ID param_4)
{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ID local_120;
  char *local_118;
  char local_109;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  char local_d9;
  undefined8 local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  char local_a1;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70;
  _objc_retain(param_3);
  iVar7 = -0x515aa1d0;
LAB_00047cd8:
  do {
    while (iVar5 = iVar7, iVar7 = iVar5, iVar5 < -0x1044d3df) {
      if (iVar5 < -0x4cb0c958) {
        if (iVar5 < -0x6787c32d) {
          if (iVar5 < -0x710dcb1c) {
            if (iVar5 < -0x75f6b406) {
              iVar10 = 0xed0829b;
              if (iVar5 != -0x7ad55a14) {
                iVar10 = iVar5;
              }
              iVar7 = -0x11cb3f53;
              if (iVar5 != -0x7b932619) {
                iVar7 = iVar10;
              }
            }
            else if (iVar5 == -0x75f6b406) {
              local_c8 = DAT_000a4070;
              local_d8 = _g_tempFile;
              local_d0 = "removeItemAtPath:error:";
              iVar7 = -0x1044d3df;
            }
            else if (iVar5 == -0x71c33532) {
              _objc_msgSend(local_108,"firstObject");
              uVar2 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar2,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov);
              uVar3 = _objc_retainAutoreleasedReturnValue();
              uVar4 = _g_tempFile;
              _g_tempFile = uVar3;
              _objc_release(uVar4);
              _objc_release(uVar2);
              iVar7 = 0x1d565a9e;
            }
          }
          else if (iVar5 < -0x6af77982) {
            if (iVar5 == -0x710dcb1c) {
              local_d9 = _objc_msgSend(local_f0,local_118,local_e8);
              iVar7 = 0xe8cfd7e;
            }
            else if (iVar5 == -0x6fd22331) {
              iVar7 = 0x19ce7b7;
              if (local_a1 == '\0') {
                iVar7 = -0x11cb3f53;
              }
            }
          }
          else {
            iVar10 = 0x670a917f;
            if (iVar5 != -0x69d4a4f3) {
              iVar10 = iVar5;
            }
            iVar7 = 0x56623f6c;
            if (iVar5 != -0x6af77982) {
              iVar7 = iVar10;
            }
          }
        }
        else if (iVar5 < -0x54f6f0b1) {
          if (iVar5 < -0x616b15aa) {
            iVar10 = -0x1b17e768;
            if (iVar5 != -0x62992a3b) {
              iVar10 = iVar5;
            }
            iVar7 = -0x710dcb1c;
            if (iVar5 != -0x6787c32d) {
              iVar7 = iVar10;
            }
          }
          else if (iVar5 == -0x616b15aa) {
            iVar7 = -0x518429a3;
            if (local_109 == '\0') {
              iVar7 = 0x5875a9eb;
            }
          }
          else {
            iVar7 = 0x7e46bf39;
            if (iVar5 != -0x5acc0b51) {
              iVar7 = iVar5;
            }
          }
        }
        else {
          iVar6 = -0x518429a4;
          iVar10 = 0xf91cd18;
          if (iVar5 != -0x515aa1d0) {
            iVar10 = iVar5;
          }
          iVar7 = -0x1fd4217c;
          if (iVar5 != -0x518429a3) {
            iVar7 = iVar10;
          }
          iVar8 = -0x54f6f0b1;
          iVar9 = -0x6787c32d;
          iVar1 = -0x51dcf1c9;
          iVar10 = 0x18b088b5;
LAB_0004826c:
          if (iVar5 != iVar1) {
            iVar10 = iVar5;
          }
          if (iVar5 != iVar8) {
            iVar9 = iVar10;
          }
          if (iVar5 <= iVar6) {
            iVar7 = iVar9;
          }
        }
      }
      else if (iVar5 < -0x1fd4217c) {
        if (iVar5 < -0x37c144ec) {
          if (iVar5 < -0x417c683e) {
            iVar10 = -0x21da6cb8;
            if (iVar5 != -0x43314e14) {
              iVar10 = iVar5;
            }
            iVar7 = -0x1b1bc27c;
            if (iVar5 != -0x4cb0c958) {
              iVar7 = iVar10;
            }
          }
          else if (iVar5 == -0x417c683e) {
            _objc_release(param_3);
            iVar7 = 0x15d94f32;
          }
          else {
            iVar10 = -0x3f57b8dc;
LAB_00048694:
            iVar7 = 0x788b164e;
            if (iVar5 != iVar10) {
              iVar7 = iVar5;
            }
          }
        }
        else if (iVar5 < -0x22424853) {
          if (iVar5 == -0x37c144ec) {
            _objc_msgSend(local_108,"firstObject");
            uVar2 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar2,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov);
            uVar3 = _objc_retainAutoreleasedReturnValue();
            uVar4 = _g_tempFile;
            _g_tempFile = uVar3;
            _objc_release(uVar4);
            _objc_release(uVar2);
            iVar7 = -0x71c33532;
          }
          else {
            iVar7 = 0x64f4e8fc;
            if (iVar5 != -0x2c485e5e) {
              iVar7 = iVar5;
            }
          }
        }
        else if (iVar5 == -0x22424853) {
          _objc_msgSend(local_c8,local_d0,local_d8,0);
          iVar7 = 0x246d4b24;
        }
        else {
          iVar7 = 0x670a917f;
          if (iVar5 != -0x21da6cb8) {
            iVar7 = iVar5;
          }
        }
      }
      else if (iVar5 < -0x1b17e768) {
        if (iVar5 < -0x1df3da75) {
          if (iVar5 == -0x1fd4217c) {
            _objc_msgSend(&objc::class_t::GetFrame,"getKeyWindow");
            uVar4 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar4,"rootViewController");
            uVar2 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar2,"dismissViewControllerAnimated:completion:",1,0);
            _objc_release(uVar2);
            _objc_release(uVar4);
            local_100 = _objc_msgSend(local_120,"objectForKeyedSubscript:",
                                      &cf_UIImagePickerControllerMediaURL);
            _objc_retain(local_100);
            local_f8 = local_100;
            iVar7 = -0x5acc0b51;
          }
          else if (iVar5 == -0x1eb2fcc4) {
            _objc_msgSend(local_88,local_70,local_78,0);
            _objc_release(local_80);
            iVar7 = -0x7b932619;
          }
        }
        else {
          iVar6 = -0x1df3da75;
          iVar7 = -0x1b1bc27c;
          iVar10 = -0x43314e14;
LAB_000484f4:
          if (iVar5 != iVar7) {
            iVar10 = iVar5;
          }
          iVar7 = -0x7ad55a14;
          if (iVar5 != iVar6) {
            iVar7 = iVar10;
          }
        }
      }
      else if (iVar5 < -0x151fc25d) {
        if (iVar5 == -0x1b17e768) {
          iVar7 = -0x6fd22331;
        }
        else if (iVar5 == -0x190fab55) {
          _objc_msgSend(local_88,local_70,local_78,0);
          _objc_release(local_80);
          iVar7 = -0x1eb2fcc4;
        }
      }
      else {
        iVar10 = 0x10ba9de2;
        if (iVar5 != -0x11cb3f53) {
          iVar10 = iVar5;
        }
        iVar7 = -0x518429a3;
        if (iVar5 != -0x151fc25d) {
          iVar7 = iVar10;
        }
      }
    }
    if (0x29b13fb4 < iVar5) {
      if (iVar5 < 0x5875a9eb) {
        if (iVar5 < 0x499920c4) {
          if (iVar5 < 0x38b005ed) {
            if (iVar5 == 0x29b13fb5) {
              _objc_msgSend(&objc::class_t::GetFrame,"getKeyWindow");
              uVar4 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar4,"rootViewController");
              uVar2 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar2,"dismissViewControllerAnimated:completion:",1,0);
              _objc_release(uVar2);
              _objc_release(uVar4);
              _objc_msgSend(local_120,"objectForKeyedSubscript:",&cf_UIImagePickerControllerMediaURL
                           );
              _objc_retainAutoreleasedReturnValue();
              iVar7 = -0x1fd4217c;
            }
            else if (iVar5 == 0x359fb17a) {
              uVar4 = local_90;
              _objc_msgSend(local_98,"stringWithFormat:",&cf____new);
              uVar2 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_a0,
                            "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
                            uVar2,1,0,0,in_x6,in_x7,uVar4);
              _objc_release(uVar2);
              _sleep(1);
              _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf____new);
              _objc_retainAutoreleasedReturnValue();
              iVar7 = 0x56623f6c;
            }
          }
          else {
            iVar7 = -0x71c33532;
            if ((iVar5 != 0x38b005ed) && (iVar7 = iVar5, iVar5 == 0x46ae69f5)) {
              _objc_msgSend(local_f0,local_118,local_e8);
              iVar7 = -0x710dcb1c;
            }
          }
        }
        else if (iVar5 < 0x4cbb0b20) {
          if (iVar5 == 0x499920c4) {
            local_a1 = _objc_msgSend(local_b0,local_b8,local_f8,local_c0,0);
            iVar7 = -0x62992a3b;
          }
          else if (iVar5 == 0x4aa2cfca) {
            _objc_release(local_108);
            iVar7 = 0x64f4e8fc;
          }
        }
        else if (iVar5 == 0x4cbb0b20) {
          iVar7 = 0x737ef68b;
        }
        else if (iVar5 == 0x56623f6c) {
          uVar4 = local_90;
          _objc_msgSend(local_98,"stringWithFormat:",&cf____new);
          uVar2 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_a0,
                        "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",uVar2,
                        1,0,0,in_x6,in_x7,uVar4);
          _objc_release(uVar2);
          _sleep(1);
          local_88 = DAT_000a4070;
          local_80 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf____new);
          _objc_retain(local_80);
          local_78 = local_80;
          local_70 = "removeItemAtPath:error:";
          iVar7 = 0x4cbb0b20;
        }
      }
      else if (iVar5 < 0x670a917f) {
        if (iVar5 < 0x60da0d02) {
          if (iVar5 == 0x5875a9eb) {
            local_108 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
            _objc_retain(local_108);
            iVar7 = 0x38b005ed;
          }
          else {
            iVar7 = -0x75f6b406;
            if (iVar5 != 0x5e901266) {
              iVar7 = iVar5;
            }
          }
        }
        else {
          iVar7 = -0x1b17e768;
          if ((iVar5 != 0x60da0d02) && (iVar7 = iVar5, iVar5 == 0x64f4e8fc)) {
            _objc_release(local_108);
            iVar7 = -0x151fc25d;
          }
        }
      }
      else if (iVar5 < 0x788b164e) {
        if (iVar5 == 0x670a917f) {
          local_b0 = DAT_000a4070;
          local_c0 = _g_tempFile;
          local_b8 = "copyItemAtPath:toPath:error:";
          iVar7 = 0x1a352f63;
        }
        else {
          iVar7 = -0x1eb2fcc4;
          if (iVar5 != 0x737ef68b) {
            iVar7 = iVar5;
          }
        }
      }
      else {
        if (iVar5 != 0x788b164e) {
          iVar10 = 0x7e46bf39;
          goto LAB_00048694;
        }
        local_f0 = DAT_000a4070;
        local_e8 = _g_tempFile;
        iVar7 = -0x54f6f0b1;
      }
      goto LAB_00047cd8;
    }
    if (iVar5 < 0x10ba9de2) {
      if (iVar5 < 0x19ce7b7) {
        if (iVar5 < -0x298e8eb) {
          iVar10 = -0x616b15aa;
          if (iVar5 != -0x86de0f2) {
            iVar10 = iVar5;
          }
          iVar7 = -0x22424853;
          if (iVar5 != -0x1044d3df) {
            iVar7 = iVar10;
          }
        }
        else {
          iVar7 = -0x75f6b406;
          if ((iVar5 != -0x298e8eb) && (iVar7 = iVar5, iVar5 == -0x2709a9c)) {
            _objc_release(local_100);
            _objc_release(local_120);
            iVar7 = 0x10ba9de2;
          }
        }
      }
      else if (iVar5 < 0xe8cfd7e) {
        if (iVar5 == 0x19ce7b7) {
          local_a0 = DAT_000a4070;
          local_98 = &_OBJC_CLASS___NSString;
          local_90 = _g_tempFile;
          iVar7 = -0x6af77982;
        }
        else if (iVar5 == 0x86dc82f) {
          _objc_retain(param_4);
          _objc_msgSend(DAT_000a4070,"fileExistsAtPath:",_g_isMirroredMarkfbs);
          iVar7 = 0xf91cd18;
        }
      }
      else if (iVar5 == 0xe8cfd7e) {
        iVar7 = -0x298e8eb;
        if (local_d9 == '\0') {
          iVar7 = -0x21da6cb8;
        }
      }
      else if (iVar5 == 0xf91cd18) {
        _objc_retain(param_4);
        local_118 = "fileExistsAtPath:";
        local_109 = _objc_msgSend(DAT_000a4070,"fileExistsAtPath:",_g_isMirroredMarkfbs);
        local_120 = param_4;
        iVar7 = -0x86de0f2;
      }
      else if (iVar5 == 0xed0829b) {
        return;
      }
    }
    else {
      if (0x194e340e < iVar5) {
        iVar6 = 0x1d565a9d;
        iVar10 = -0x1b1bc27c;
        if (iVar5 != 0x246d4b24) {
          iVar10 = iVar5;
        }
        iVar7 = -0x2c485e5e;
        if (iVar5 != 0x1d565a9e) {
          iVar7 = iVar10;
        }
        iVar8 = 0x194e340f;
        iVar9 = -0x1df3da75;
        iVar1 = 0x1a352f63;
        iVar10 = 0x499920c4;
        goto LAB_0004826c;
      }
      if (0x17a843f9 < iVar5) {
        iVar6 = 0x17a843fa;
        iVar7 = 0x18b088b5;
        iVar10 = 0x15d94f32;
        goto LAB_000484f4;
      }
      if (iVar5 == 0x10ba9de2) {
        _objc_release(local_100);
        _objc_release(local_120);
        iVar7 = -0x51dcf1c9;
      }
      else if (iVar5 == 0x15d94f32) {
        _objc_release(param_3);
        iVar7 = 0x194e340f;
      }
    }
  } while( true );
}
// Function Stack Size: 0x18 bytes
void CCUIImagePickerDelegate::imagePickerControllerDidCancel_(ID param_1,SEL param_2,ID param_3)
{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_68;
  _objc_retain(param_3);
  iVar2 = 0x227e1255;
  while( true ) {
    while (iVar2 < 0x29475909) {
      if (iVar2 == -0x29208315) {
        iVar2 = 0x5ccb2cef;
      }
      else if (iVar2 == 0x227e1255) {
        local_68 = _objc_msgSend(&objc::class_t::GetFrame,"getKeyWindow");
        _objc_retain(local_68);
        iVar2 = -0x29208315;
      }
    }
    if (iVar2 == 0x29475909) break;
    if (iVar2 == 0x5ccb2cef) {
      _objc_msgSend(local_68,"rootViewController");
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar1,"dismissViewControllerAnimated:completion:",1,0);
      _objc_release(uVar1);
      _objc_release(local_68);
      _objc_release(param_3);
      iVar2 = 0x29475909;
    }
  }
  return;
}
void _ui_selectVideo(void)
{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long local_e0;
  char local_d1;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  char *local_a8;
  char local_99;
  char *local_98;
  char local_89;
  undefined8 local_88;
  class_t *local_80;
  char *local_78;
  undefined8 local_70;
  uVar4 = *(undefined8 *)PTR__AVAssetExportPresetPassthrough_00068000;
  iVar7 = 0x57642016;
LAB_00048c04:
  do {
    while( true ) {
      while (iVar5 = iVar7, iVar7 = iVar5, 0x1a7e31c3 < iVar5) {
        if (iVar5 < 0x4e316daf) {
          if (iVar5 < 0x2f1ae3ae) {
            if (iVar5 < 0x254e56e4) {
              if (iVar5 == 0x1a7e31c4) {
                _objc_msgSend(local_b8,"setAllowsEditing:",1);
                iVar7 = 0x5f6c8ab0;
              }
              else {
                iVar7 = -0x5b5ffe95;
                if ((iVar5 != 0x1c71003c) && (iVar7 = iVar5, iVar5 == 0x22659e89)) {
                  _objc_release(local_c8);
                  iVar7 = 0x9e5cb0e;
                }
              }
            }
            else if (iVar5 < 0x29a3096c) {
              if (iVar5 == 0x254e56e4) {
                local_88 = uVar4;
                iVar7 = 0x71a185ea;
              }
              else {
                iVar7 = 0x764c4d5f;
                if (iVar5 != 0x26ffca83) {
                  iVar7 = iVar5;
                }
              }
            }
            else if (iVar5 == 0x29a3096c) {
              local_70 = _objc_msgSend(local_80,local_78);
              _objc_retain(local_70);
              iVar7 = 0x394f6524;
            }
            else {
              iVar7 = 0x29a3096c;
              if (iVar5 != 0x29b2a8a0) {
                iVar7 = iVar5;
              }
            }
          }
          else if (iVar5 < 0x3e8e464a) {
            if (iVar5 < 0x3d39ac48) {
              if (iVar5 == 0x2f1ae3ae) {
                _objc_msgSend(local_c0,"init");
                iVar7 = 0x11e812b6;
              }
              else {
                iVar7 = 0x1c71003c;
                if (iVar5 != 0x394f6524) {
                  iVar7 = iVar5;
                }
              }
            }
            else if (iVar5 == 0x3d39ac48) {
              _objc_msgSend(local_b8,local_98,0);
              iVar7 = 0x73c0451d;
            }
            else {
              iVar7 = -0x76297fab;
              if (iVar5 != 0x3dd0569d) {
                iVar7 = iVar5;
              }
            }
          }
          else if (iVar5 < 0x4641b818) {
            iVar7 = 0x6d377737;
            if ((iVar5 != 0x3e8e464a) && (iVar7 = iVar5, iVar5 == 0x45809b4e)) {
              _objc_release(local_c8);
              iVar7 = 0x22659e89;
            }
          }
          else if (iVar5 == 0x4641b818) {
            lVar3 = _objc_msgSend(&objc::class_t::CCUIImagePickerDelegate,"new");
            local_d0 = DAT_000a40c0;
            DAT_000a40c0 = lVar3;
            iVar7 = -0x5c01c5e;
          }
          else if (iVar5 == 0x47ce930e) {
            _objc_msgSend(local_b8,"setDelegate:",DAT_000a40c0);
            iVar7 = 0x1815b2f6;
          }
        }
        else if (iVar5 < 0x684e452d) {
          if (iVar5 < 0x5f6c8ab0) {
            if (iVar5 < 0x57642016) {
              if (iVar5 == 0x4e316daf) {
                _objc_msgSend(0x40ed4c0000000000,local_b8,"setVideoMaximumDuration:");
                local_89 = _enabledw2Prolow != '\0';
                iVar7 = -0x336831e4;
              }
              else if (iVar5 == 0x5578e334) {
                _objc_msgSend(local_70,"rootViewController");
                uVar2 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar2,"presentViewController:animated:completion:",local_b0,1,0);
                _objc_release(uVar2);
                _objc_release(local_70);
                _objc_release(local_b8);
                iVar7 = -0x5b5ffe95;
              }
            }
            else {
              iVar7 = 0x65458247;
              if ((iVar5 != 0x57642016) && (iVar7 = iVar5, iVar5 == 0x5cd004a1)) {
                iVar7 = 0x26ffca83;
                if (local_99 == '\0') {
                  iVar7 = -0x7fc0907;
                }
              }
            }
          }
          else if (iVar5 < 0x655b6ba3) {
            if (iVar5 == 0x5f6c8ab0) {
              iVar7 = -0x6ec5beff;
            }
            else if (iVar5 == 0x65458247) {
              local_e0 = DAT_000a40c0;
              iVar7 = -0x1796dab3;
            }
          }
          else {
            iVar8 = -0x54a86c99;
            if (iVar5 != 0x670d539d) {
              iVar8 = iVar5;
            }
            iVar7 = 0x73c0451d;
            if (iVar5 != 0x655b6ba3) {
              iVar7 = iVar8;
            }
          }
        }
        else if (iVar5 < 0x735e6c68) {
          if (iVar5 < 0x703ccba8) {
            if (iVar5 == 0x684e452d) {
              iVar7 = -0x2638389;
              if (local_89 == '\0') {
                iVar7 = 0x254e56e4;
              }
            }
            else {
              iVar7 = -0x3218f870;
              if (iVar5 != 0x6d377737) {
                iVar7 = iVar5;
              }
            }
          }
          else {
            iVar8 = -0x1e75fd7d;
            if (iVar5 != 0x71a185ea) {
              iVar8 = iVar5;
            }
            iVar7 = 0x22659e89;
            if (iVar5 != 0x703ccba8) {
              iVar7 = iVar8;
            }
          }
        }
        else if (iVar5 < 0x764c4d5f) {
          iVar7 = 0x764c4d5f;
          if ((iVar5 != 0x735e6c68) && (iVar7 = iVar5, iVar5 == 0x73c0451d)) {
            _objc_msgSend(local_b8,local_98,0);
            iVar7 = 0x670d539d;
          }
        }
        else if (iVar5 == 0x764c4d5f) {
          local_98 = "setVideoQuality:";
          iVar7 = -0x2c15b48c;
        }
        else if (iVar5 == 0x7aa7164a) {
          _objc_msgSend(local_b8,"setAllowsEditing:",1);
          iVar7 = 0x1a7e31c4;
        }
      }
      if (iVar5 < -0x1ff33091) break;
      if (iVar5 < -0x5c01c5e) {
        if (iVar5 < -0x1796dab3) {
          if (iVar5 < -0x1e75fd7d) {
            if (iVar5 == -0x1ff33091) {
              local_c0 = _objc_alloc(&_OBJC_CLASS___UIImagePickerController);
              iVar7 = -0x4fc20741;
            }
            else {
              iVar7 = -0x381a34cb;
              if (iVar5 != -0x1f58df39) {
                iVar7 = iVar5;
              }
            }
          }
          else if (iVar5 == -0x1e75fd7d) {
            _objc_msgSend(local_b8,"setVideoExportPreset:",local_88);
            iVar7 = 0x3dd0569d;
          }
          else {
            iVar7 = -0x1ff33091;
            if (iVar5 != -0x1a3afe3a) {
              iVar7 = iVar5;
            }
          }
        }
        else if (iVar5 < -0x13f2c30d) {
          if (iVar5 == -0x1796dab3) {
            iVar7 = -0x13f2c30d;
          }
          else if (iVar5 == -0x16243523) {
            _objc_alloc(&_OBJC_CLASS___UIImagePickerController);
            iVar7 = -0x1ff33091;
          }
        }
        else if (iVar5 == -0x13f2c30d) {
          local_d1 = local_e0 == 0;
          iVar7 = -0x7d20ad88;
        }
        else {
          iVar7 = 0x1a7e31c4;
          if (iVar5 != -0x7fc0907) {
            iVar7 = iVar5;
          }
        }
      }
      else if (iVar5 < 0x8de784a) {
        if (iVar5 < 0x31c8529) {
          if (iVar5 == -0x5c01c5e) {
            local_c8 = local_d0;
            iVar7 = 0x703ccba8;
          }
          else {
            iVar7 = 0x1815b2f6;
            if (iVar5 != -0x2638389) {
              iVar7 = iVar5;
            }
          }
        }
        else if (iVar5 == 0x31c8529) {
          _objc_msgSend(0x40ed4c0000000000,local_b8,"setVideoMaximumDuration:");
          iVar7 = 0x4e316daf;
        }
        else {
          iVar7 = 0x11e812b6;
          if (iVar5 != 0x41d5e54) {
            iVar7 = iVar5;
          }
        }
      }
      else if (iVar5 < 0x11e812b6) {
        iVar6 = 0x8de784a;
        iVar7 = -0x1f58df39;
        iVar1 = 0x9e5cb0e;
        iVar8 = -0x1a3afe3a;
LAB_0004907c:
        if (iVar5 != iVar1) {
          iVar8 = iVar5;
        }
        if (iVar5 != iVar6) {
          iVar7 = iVar8;
        }
      }
      else if (iVar5 == 0x11e812b6) {
        local_b8 = _objc_msgSend(local_c0,"init");
        local_a8 = "setSourceType:";
        local_b0 = local_b8;
        iVar7 = 0x8de784a;
      }
      else if (iVar5 == 0x1815b2f6) {
        _objc_msgSend(local_b8,"setDelegate:",DAT_000a40c0);
        local_80 = &objc::class_t::GetFrame;
        local_78 = "getKeyWindow";
        iVar7 = -0x6958c2bf;
      }
    }
    if (iVar5 < -0x4fc20741) {
      if (iVar5 < -0x64f6667d) {
        if (iVar5 < -0x6ec5beff) {
          if (iVar5 == -0x7d20ad88) {
            iVar7 = 0x4641b818;
            if (local_d1 == '\0') {
              iVar7 = -0x1a3afe3a;
            }
          }
          else {
            iVar7 = 0x6d377737;
            if (iVar5 != -0x76297fab) {
              iVar7 = iVar5;
            }
          }
        }
        else {
          iVar8 = 0x29b2a8a0;
          if (iVar5 != -0x6958c2bf) {
            iVar8 = iVar5;
          }
          iVar7 = 0x4e316daf;
          if (iVar5 != -0x6ec5beff) {
            iVar7 = iVar8;
          }
        }
      }
      else if (iVar5 < -0x54a86c99) {
        if (iVar5 == -0x64f6667d) {
          _objc_msgSend(local_b8,"setVideoExportPreset:",local_88);
          iVar7 = -0x1e75fd7d;
        }
        else if (iVar5 == -0x5b5ffe95) {
          _objc_msgSend(local_70,"rootViewController");
          uVar2 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar2,"presentViewController:animated:completion:",local_b0,1,0);
          _objc_release(uVar2);
          _objc_release(local_70);
          _objc_release(local_b8);
          iVar7 = -0x53b020ac;
        }
      }
      else {
        iVar7 = -0x7fc0907;
        if ((iVar5 != -0x54a86c99) && (iVar7 = iVar5, iVar5 == -0x53b020ac)) {
          return;
        }
      }
      goto LAB_00048c04;
    }
    if (iVar5 < -0x3218f870) {
      if (iVar5 < -0x381a34cb) {
        iVar6 = -0x4fc20741;
        iVar7 = 0x41d5e54;
        iVar1 = -0x4286e5b1;
        iVar8 = 0x65458247;
        goto LAB_0004907c;
      }
      if (iVar5 == -0x381a34cb) {
        _objc_msgSend(local_b8,local_a8,0);
        _objc_msgSend(&_OBJC_CLASS___NSArray,"arrayWithObjects:",&cf_public_movie);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_b8,"setMediaTypes:",uVar2);
        _objc_release(uVar2);
        local_99 = _enabledw2Prolow != '\0';
        iVar7 = 0x5cd004a1;
      }
      else {
        iVar7 = 0x684e452d;
        if (iVar5 != -0x336831e4) {
          iVar7 = iVar5;
        }
      }
    }
    else if (iVar5 < -0x2ae6220c) {
      iVar8 = 0x655b6ba3;
      if (iVar5 != -0x2c15b48c) {
        iVar8 = iVar5;
      }
      iVar7 = -0x2638389;
      if (iVar5 != -0x3218f870) {
        iVar7 = iVar8;
      }
    }
    else if (iVar5 == -0x2ae6220c) {
      _objc_msgSend(local_80,local_78);
      _objc_retainAutoreleasedReturnValue();
      iVar7 = 0x29a3096c;
    }
    else if (iVar5 == -0x22c7ed47) {
      _objc_msgSend(local_b8,local_a8,0);
      _objc_msgSend(&_OBJC_CLASS___NSArray,"arrayWithObjects:",&cf_public_movie);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(local_b8,"setMediaTypes:",uVar2);
      _objc_release(uVar2);
      iVar7 = -0x381a34cb;
    }
  } while( true );
}
void FUN_0004980c(void)
{
  int iVar1;
  cfstringStruct *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined1 auStack_b0 [8];
  char *local_a8;
  char *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  char local_69;
  cfstringStruct *local_68;
  puVar3 = (undefined8 *)auStack_b0;
  local_a8 = "isOperatingSystemAtLeastVersion:";
  local_a0 = "processInfo";
  iVar1 = 0x3d8e4c6f;
LAB_00049888:
  do {
    while( true ) {
      while (iVar6 = iVar1, pcVar2 = _g_isMirroredMarkfbs, iVar1 = iVar6, iVar6 < 0x3c2c7b2c) {
        if (iVar6 < 0xd55ba9) {
          if (iVar6 < -0x5084eef2) {
            if (iVar6 == -0x76e146be) {
              _g_isMirroredMarkfbs = &cf__var_jb_var_mobile_Library_Caches_w2_is_mirrored_markfbs;
              _objc_release(pcVar2);
              pcVar2 = _g_isMirroredMarkxz;
              _g_isMirroredMarkxz = &cf__var_jb_var_mobile_Library_Caches_w2_is_mirrored_markfbsxz;
              _objc_release(pcVar2);
              pcVar2 = _g_isMirroredMark;
              _g_isMirroredMark = &cf__var_jb_var_mobile_Library_Caches_w2_is_mirrored_mark;
              _objc_release(pcVar2);
              pcVar2 = _g_isMirroredMark2;
              _g_isMirroredMark2 = &cf__var_jb_var_mobile_Library_Caches_w2_is_mirrored_mark2;
              _objc_release(pcVar2);
              pcVar2 = _g_tempFile;
              _g_tempFile = &cf__var_jb_var_mobile_Library_Caches_w2avfictitious_mov;
              _objc_release(pcVar2);
              pcVar2 = _g_tempFilestep;
              _g_tempFilestep = &cf__var_jb_var_mobile_Library_Caches_w2fictitiousCaches_mov;
              _objc_release(pcVar2);
              pcVar2 = _g_tempFilestep2;
              _g_tempFilestep2 = &cf__var_jb_var_mobile_Library_Caches_w2avfictitiousCaches_mov;
              _objc_release(pcVar2);
              iVar1 = -0x5084eef2;
            }
            else if (iVar6 == -0x6c0ed7eb) {
              _objc_release(local_68);
              iVar1 = 0x1c337970;
            }
          }
          else {
            iVar1 = 0x78ef7d7c;
            if (iVar6 != -0x1712edb5) {
              iVar1 = iVar6;
            }
            iVar8 = 0x3c2c7b2c;
            if (iVar6 != -0x25db32da) {
              iVar8 = iVar1;
            }
            iVar1 = 0x4daab627;
            if (iVar6 != -0x5084eef2) {
              iVar1 = iVar8;
            }
          }
        }
        else if (iVar6 < 0x14fd4e3b) {
          iVar1 = -0x76e146be;
          if (iVar6 != 0xd55ba9) {
            if (iVar6 == 0xb65a863) {
              _g_isMirroredMarkfbs = &cf__var_jb_var_mobile_Library_Caches_w2_is_mirrored_markfbs;
              _objc_release(pcVar2);
              pcVar2 = _g_isMirroredMarkxz;
              _g_isMirroredMarkxz = &cf__var_jb_var_mobile_Library_Caches_w2_is_mirrored_markfbsxz;
              _objc_release(pcVar2);
              pcVar2 = _g_isMirroredMark;
              _g_isMirroredMark = &cf__var_jb_var_mobile_Library_Caches_w2_is_mirrored_mark;
              _objc_release(pcVar2);
              pcVar2 = _g_isMirroredMark2;
              _g_isMirroredMark2 = &cf__var_jb_var_mobile_Library_Caches_w2_is_mirrored_mark2;
              _objc_release(pcVar2);
              pcVar2 = _g_tempFile;
              _g_tempFile = &cf__var_jb_var_mobile_Library_Caches_w2avfictitious_mov;
              _objc_release(pcVar2);
              pcVar2 = _g_tempFilestep;
              _g_tempFilestep = &cf__var_jb_var_mobile_Library_Caches_w2fictitiousCaches_mov;
              _objc_release(pcVar2);
              pcVar2 = _g_tempFilestep2;
              _g_tempFilestep2 = &cf__var_jb_var_mobile_Library_Caches_w2avfictitiousCaches_mov;
              _objc_release(pcVar2);
              iVar1 = -0x76e146be;
            }
            else {
              iVar1 = iVar6;
              if (iVar6 == 0x10ee729b) {
                local_90 = _objc_msgSend(&_OBJC_CLASS___NSProcessInfo,local_a0);
                _objc_retain(local_90);
                local_88 = local_a8;
                local_80 = local_98;
                local_78 = local_98;
                iVar1 = -0x25db32da;
              }
            }
          }
        }
        else if (iVar6 == 0x14fd4e3b) {
          puVar3 = puVar3 + -4;
          local_98 = puVar3;
          iVar1 = 0x4c384055;
        }
        else if (iVar6 == 0x1c337970) {
          iVar1 = 0xd55ba9;
        }
        else if (iVar6 == 0x312bbe6b) {
          _objc_release(local_68);
          iVar1 = -0x6c0ed7eb;
        }
      }
      if (iVar6 < 0x6d71f24e) break;
      if (iVar6 < 0x7bda9836) {
        iVar1 = -0x6c0ed7eb;
        if ((iVar6 != 0x6d71f24e) && (iVar1 = iVar6, iVar6 == 0x78ef7d7c)) {
          local_68 = _g_isenabledw2ProChinese;
          _g_isenabledw2ProChinese = &cf__var_jb_var_mobile_Library_Caches_g_isenabledw2ProChinese;
          iVar1 = 0x7dc9b36b;
        }
      }
      else if (iVar6 == 0x7bda9836) {
        iVar1 = -0x1712edb5;
        if (local_69 == '\0') {
          iVar1 = 0x4daab627;
        }
      }
      else {
        iVar7 = 0x7c9ff954;
        iVar1 = 0x7dc9b36b;
        iVar8 = 0x6d71f24e;
LAB_00049a08:
        if (iVar6 != iVar1) {
          iVar8 = iVar6;
        }
        iVar1 = 0x14fd4e3b;
        if (iVar6 != iVar7) {
          iVar1 = iVar8;
        }
      }
    }
    if (0x4cae943f < iVar6) {
      if (iVar6 == 0x4cae9440) {
        *local_78 = 0xd;
        local_98[1] = 0;
        local_98[2] = 0;
        _objc_msgSend(local_90,local_88,local_98);
        _objc_release(local_80,local_90);
        _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
        uVar4 = _objc_retainAutoreleasedReturnValue();
        uVar5 = DAT_000a4070;
        DAT_000a4070 = uVar4;
        _objc_release(uVar5);
        _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar5,"systemVersion");
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar4,"floatValue");
        _objc_release(uVar4);
        _objc_release(uVar5);
        iVar1 = 0x3c2c7b2c;
      }
      else if (iVar6 == 0x53d3810b) {
        _g_isenabledw2ProChinese = &cf__var_jb_var_mobile_Library_Caches_g_isenabledw2ProChinese;
        iVar1 = 0x78ef7d7c;
      }
      else if (iVar6 == 0x4daab627) {
        return;
      }
      goto LAB_00049888;
    }
    if (iVar6 != 0x3c2c7b2c) {
      iVar7 = 0x3d8e4c6f;
      iVar1 = 0x4c384055;
      iVar8 = 0x10ee729b;
      goto LAB_00049a08;
    }
    *local_78 = 0xd;
    local_98[1] = 0;
    local_98[2] = 0;
    _objc_msgSend(local_90,local_88,local_98);
    _objc_release(local_80,local_90);
    _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar5 = DAT_000a4070;
    DAT_000a4070 = uVar4;
    _objc_release(uVar5);
    _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar5,"systemVersion");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    fVar9 = (float)_objc_msgSend(uVar4,"floatValue");
    local_69 = 15.0 <= fVar9;
    _objc_release(uVar4);
    _objc_release(uVar5);
    iVar1 = 0x7bda9836;
  } while( true );
}
void FUN_00049e7c(void)
{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_28;
  iVar2 = -0x3c0bf4c0;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar3 = iVar2, uVar1 = DAT_000a4078, 0x1b715548 < iVar3) {
            if (iVar3 < 0x3040ad66) {
              if (iVar3 == 0x1b715549) {
                iVar2 = -0x12cc7dcf;
              }
              else {
                iVar2 = iVar3;
                if (iVar3 == 0x27922071) {
                  local_28 = DAT_000a4070;
                  DAT_000a4070 = 0;
                  iVar2 = 0x1b715549;
                }
              }
            }
            else if (iVar3 == 0x3040ad66) {
              DAT_000a4078 = 0;
              _objc_release(uVar1);
              DAT_000a40c8 = 0;
              iVar2 = -0x23964828;
            }
            else {
              iVar2 = 0x27922071;
              if (iVar3 != 0x6cd7509a) {
                iVar2 = iVar3;
              }
            }
          }
          if (iVar3 < -0xb3d729b) break;
          if (iVar3 == -0xb3d729b) {
            DAT_000a4078 = 0;
            _objc_release(uVar1);
            DAT_000a40c8 = 0;
            iVar2 = 0x3040ad66;
          }
          else {
            iVar2 = 0x3040ad66;
            if (iVar3 != 0x117bc80f) {
              iVar2 = iVar3;
            }
          }
        }
        iVar2 = 0x27922071;
      } while (iVar3 == -0x3c0bf4c0);
      if (iVar3 != -0x12cc7dcf) break;
      _objc_release(local_28);
      DAT_000a40a8 = 0;
      DAT_000a40b8 = 0;
      iVar2 = 0x117bc80f;
    }
    iVar2 = iVar3;
  } while (iVar3 != -0x23964828);
  return;
}
void FUN_0004a024(void)
{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_a0 [8];
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  long local_68;
  local_68 = *(long *)PTR____stack_chk_guard_00068050;
  local_78 = "step:";
  local_70 = "addSublayer:";
  local_88 = "stopRunning";
  local_80 = "startRunning";
  local_98 = "addOutput:";
  local_90 = "addInput:";
  iVar4 = 0x7d0505f;
  puVar1 = (undefined4 *)auStack_a0;
  while( true ) {
    while (-0x2d9ba626 < iVar4) {
      if (iVar4 == -0x2d9ba625) {
        uVar2 = _objc_getClass("AVCaptureStillImageOutput");
        uVar3 = _object_getClass();
        _MSHookMessageEx(uVar2,"captureStillImageAsynchronouslyFromConnection:completionHandler:",
                         FUN_0004d2ec,&DAT_000a40f8);
        _MSHookMessageEx(uVar3,"jpegStillImageNSDataRepresentation:",FUN_0004d4d0,&DAT_000a4100);
        iVar4 = -0x76d0cef7;
      }
      else if (iVar4 == 0x7d0505f) {
        iVar4 = -0x74540daf;
      }
      else if (iVar4 == 0x3d8bc5ff) {
        iVar4 = -0x2d9ba625;
      }
    }
    if (iVar4 == -0x76d0cef7) break;
    if (iVar4 == -0x74540daf) {
      puVar5 = puVar1 + -0x100;
      uVar2 = _objc_getClass("AVCaptureVideoPreviewLayer");
      _MSHookMessageEx(uVar2,local_70,FUN_0004a448,&DAT_000a40d0);
      *puVar5 = 0x403a4076;
      *(undefined1 *)(puVar1 + -0xff) = 0;
      _class_addMethod(uVar2,local_78,FUN_0004b2d0,puVar5);
      uVar2 = _objc_getClass("AVCaptureSession");
      _MSHookMessageEx(uVar2,local_80,FUN_0004c4fc,&DAT_000a40d8);
      _MSHookMessageEx(uVar2,local_88,FUN_0004c61c,&DAT_000a40e0);
      _MSHookMessageEx(uVar2,local_90,FUN_0004c798,&DAT_000a40e8);
      _MSHookMessageEx(uVar2,local_98,FUN_0004d184,&DAT_000a40f0);
      iVar4 = 0x3d8bc5ff;
      puVar1 = puVar5;
    }
  }
  uVar2 = _objc_getClass("AVCapturePhotoOutput");
  uVar3 = _object_getClass();
  _MSHookMessageEx(uVar3,"JPEGPhotoDataRepresentationForJPEGSampleBuffer:previewPhotoSampleBuffer:",
                   FUN_0004e9ac,&DAT_000a4108);
  _MSHookMessageEx(uVar2,"capturePhotoWithSettings:delegate:",FUN_0004f878,&DAT_000a4110);
  uVar2 = _objc_getClass("AVCaptureVideoDataOutput");
  _MSHookMessageEx(uVar2,"setSampleBufferDelegate:queue:",FUN_0004fef0,&DAT_000a4118);
  uVar2 = _objc_getClass("AVCaptureMetadataOutput");
  _MSHookMessageEx(uVar2,"setMetadataObjectsDelegate:queue:",FUN_00050660,&DAT_000a4120);
  uVar2 = _objc_getClass("SettingViewControllernn");
  _MSHookMessageEx(uVar2,"AboutAuthor2",FUN_00050f90,&DAT_000a4128);
  _MSHookMessageEx(uVar2,"xzok2",FUN_000510d8,&DAT_000a4130);
  _MSHookMessageEx(uVar2,"openw2",FUN_000516c4,&DAT_000a4138);
  _MSHookMessageEx(uVar2,"AboutAuthorclean",FUN_000519dc,&DAT_000a4140);
  _MSHookMessageEx(uVar2,"AboutAuthorxz",FUN_000541b8,&DAT_000a4148);
  _MSHookMessageEx(uVar2,"AboutAuthorxzenglish",FUN_00054b20,&DAT_000a4150);
  _MSHookMessageEx(uVar2,"AboutAuthorgb",FUN_000555e4,&DAT_000a4158);
  _MSHookMessageEx(uVar2,"AboutAuthoropen",FUN_00057264,&DAT_000a4160);
  if (*(long *)PTR____stack_chk_guard_00068050 == local_68) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}
void FUN_0004a448(undefined8 param_1,undefined8 param_2,undefined8 param_3)
{
  int iVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined8 local_100;
  undefined8 local_f8;
  char local_e9;
  undefined8 local_e8;
  char *local_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined8 local_c8;
  long local_c0;
  char local_b1;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char *local_90;
  undefined8 local_88;
  byte local_79;
  undefined8 local_78;
  char *local_70;
  uVar10 = *(undefined8 *)PTR__NSRunLoopCommonModes_00068018;
  iVar11 = 0xe2c0a1;
LAB_0004a51c:
  do {
    while (iVar8 = iVar11, iVar11 = iVar8, 0xe2c0a0 < iVar8) {
      if (iVar8 < 0x3dc07e32) {
        if (iVar8 < 0x1ce62468) {
          if (iVar8 < 0xc1dcea7) {
            iVar11 = 0x1642472f;
            if (iVar8 != 0xe2c0a1) {
              if (iVar8 == 0x3bee13f) {
                local_98 = _objc_msgSend(param_1,"sublayers");
                _objc_retain(local_98);
                local_88 = DAT_000a4078;
                local_90 = "containsObject:";
                local_a0 = param_1;
                iVar11 = -0x22037e53;
              }
              else {
                iVar11 = iVar8;
                if (iVar8 == 0xc1cf91f) {
                  _objc_release(local_100);
                  iVar11 = -0x44ad6dd3;
                }
              }
            }
          }
          else if (iVar8 < 0x1642472f) {
            iVar11 = -0x108ee750;
            if ((iVar8 != 0xc1dcea7) && (iVar11 = iVar8, iVar8 == 0xdb06895)) {
              _objc_msgSend(local_f8,"fileExistsAtPath:",_g_isMirroredMarkfbs);
              iVar11 = -0x10c93e9c;
            }
          }
          else if (iVar8 == 0x1642472f) {
            _objc_retain(param_3);
            (*DAT_000a40d0)(param_1,param_2,param_3);
            local_100 = param_3;
            iVar11 = -0x6b99442e;
          }
          else if (iVar8 == 0x16b0f55e) {
            _objc_msgSend(local_c8,local_e0);
            uVar7 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar7,local_d0,&cf__vcam_is_mirrored_mark);
            uVar5 = _objc_retainAutoreleasedReturnValue();
            uVar6 = _g_isMirroredMark;
            _g_isMirroredMark = uVar5;
            _objc_release(uVar6);
            _objc_release(uVar7);
            _objc_release(local_c8);
            iVar11 = -0x1255c476;
          }
        }
        else if (iVar8 < 0x3477f5da) {
          if (iVar8 < 0x2be4d38b) {
            iVar12 = 0x2dcee986;
            if (iVar8 != 0x288b221e) {
              iVar12 = iVar8;
            }
            iVar11 = -0xeae0be0;
            if (iVar8 != 0x1ce62468) {
              iVar11 = iVar12;
            }
          }
          else if (iVar8 == 0x2be4d38b) {
            uVar7 = _objc_msgSend(local_78,local_70);
            uVar6 = DAT_000a4078;
            DAT_000a4078 = uVar7;
            _objc_release(uVar6);
            uVar7 = _objc_msgSend(&_OBJC_CLASS___CALayer,"new");
            uVar6 = _g_maskLayer;
            _g_maskLayer = uVar7;
            _objc_release(uVar6);
            _objc_msgSend(&_OBJC_CLASS___UIColor,"blackColor");
            _objc_retainAutoreleasedReturnValue();
            uVar6 = _objc_retainAutorelease();
            uVar7 = _objc_msgSend(uVar6,"CGColor");
            _objc_msgSend(_g_maskLayer,"setBackgroundColor:",uVar7);
            _objc_release(uVar6);
            iVar11 = -0x5e78260e;
          }
          else if (iVar8 == 0x2dcee986) {
            _objc_msgSend(&_OBJC_CLASS___CADisplayLink,"displayLinkWithTarget:selector:",param_1,
                          "step:");
            lVar4 = _objc_retainAutoreleasedReturnValue();
            lVar2 = DAT_000a4168;
            DAT_000a4168 = lVar4;
            _objc_release(lVar2);
            iVar11 = 0x666706a8;
          }
        }
        else {
          iVar12 = -0x10c93e9c;
          if (iVar8 != 0x3bc844d8) {
            iVar12 = iVar8;
          }
          iVar11 = 0x6d43bac0;
          if (iVar8 != 0x3a7f8dfc) {
            iVar11 = iVar12;
          }
          iVar12 = 0x4b2f3e40;
          if (iVar8 != 0x349f3687) {
            iVar12 = iVar8;
          }
          iVar9 = 0x4b2f3e40;
          if (iVar8 != 0x3477f5da) {
            iVar9 = iVar12;
          }
          if (iVar8 < 0x3a7f8dfc) {
            iVar11 = iVar9;
          }
        }
      }
      else if (iVar8 < 0x5a898e64) {
        if (iVar8 < 0x4a03c61c) {
          if (iVar8 < 0x46a20e68) {
            if (iVar8 == 0x3dc07e32) {
              _NSSearchPathForDirectoriesInDomains(0xd,1,1);
              uVar6 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar6,"firstObject");
              _objc_retainAutoreleasedReturnValue();
              iVar11 = 0x4a03c61c;
            }
            else {
              iVar11 = -0xa6eb05a;
              if (iVar8 != 0x40cb97e0) {
                iVar11 = iVar8;
              }
            }
          }
          else {
            iVar11 = -0x1a154230;
            if ((iVar8 != 0x46a20e68) && (iVar11 = iVar8, iVar8 == 0x48254f77)) {
              iVar11 = -0x4ead2858;
              if (local_79 == 0) {
                iVar11 = 0xc1cf91f;
              }
            }
          }
        }
        else if (iVar8 < 0x4da7574d) {
          if (iVar8 == 0x4a03c61c) {
            local_e8 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
            _objc_retain(local_e8);
            local_e0 = "firstObject";
            local_d8 = _objc_msgSend(local_e8,"firstObject");
            _objc_retain(local_d8);
            iVar11 = -0x2cbd2bce;
          }
          else if (iVar8 == 0x4b2f3e40) {
            local_f8 = DAT_000a4070;
            iVar11 = -0x38096f5b;
          }
        }
        else {
          iVar9 = 0x4da7574d;
          iVar11 = -0x68a86dfa;
          iVar1 = 0x4f3fa345;
          iVar12 = -0x75d4262b;
LAB_0004adc0:
          if (iVar8 != iVar1) {
            iVar12 = iVar8;
          }
          if (iVar8 != iVar9) {
            iVar11 = iVar12;
          }
        }
      }
      else if (iVar8 < 0x6d43bac0) {
        if (iVar8 < 0x64ea4940) {
          if (iVar8 == 0x5a898e64) {
            local_b0 = DAT_000a4168;
            local_a8 = _objc_msgSend(&_OBJC_CLASS___NSRunLoop,"currentRunLoop");
            iVar11 = -0x43ba4ff;
          }
          else if (iVar8 == 0x5bbe3499) {
            _objc_alloc(&_OBJC_CLASS___AVSampleBufferDisplayLayer);
            iVar11 = -0x7061dfca;
          }
        }
        else if (iVar8 == 0x64ea4940) {
          _objc_msgSend(local_a0,"insertSublayer:above:",_g_maskLayer,param_3);
          _objc_msgSend(local_a0,"insertSublayer:above:",DAT_000a4078,_g_maskLayer);
          _dispatch_async(PTR___dispatch_main_q_00068058,&PTR___NSConcreteGlobalBlock_00068620);
          iVar11 = -0x3de60f5d;
        }
        else {
          iVar11 = 0x5a898e64;
          if (iVar8 != 0x666706a8) {
            iVar11 = iVar8;
          }
        }
      }
      else if (iVar8 < 0x71f07ef2) {
        if (iVar8 == 0x6d43bac0) {
          iVar11 = 0x288b221e;
          if (local_b1 == '\0') {
            iVar11 = -0x75d4262b;
          }
        }
        else if (iVar8 == 0x6d5528eb) {
          iVar11 = 0x7c57736c;
        }
      }
      else if (iVar8 == 0x71f07ef2) {
        bVar3 = _objc_msgSend(local_98,local_90,local_88);
        local_79 = bVar3 ^ 1;
        _objc_release(local_98);
        iVar11 = -0x64f5389a;
      }
      else if (iVar8 == 0x7c57736c) {
        local_b1 = local_c0 == 0;
        iVar11 = 0x3a7f8dfc;
      }
    }
    if (-0x38096f5c < iVar8) {
      if (iVar8 < -0x1255c476) {
        if (iVar8 < -0x2c68d3f0) {
          if (iVar8 == -0x38096f5b) {
            iVar11 = 0x3bc844d8;
          }
          else if (iVar8 == -0x334b78d0) {
            _objc_msgSend(local_a8,local_b0,"addToRunLoop:forMode:",local_a8,uVar10);
            iVar11 = 0x4f3fa345;
          }
          else {
            iVar11 = -0x77bf5e0;
            if (iVar8 != -0x2cbd2bce) {
              iVar11 = iVar8;
            }
          }
        }
        else if (iVar8 < -0x1eadb0dc) {
          iVar12 = 0x71f07ef2;
          if (iVar8 != -0x22037e53) {
            iVar12 = iVar8;
          }
          iVar11 = 0x64ea4940;
          if (iVar8 != -0x2c68d3f0) {
            iVar11 = iVar12;
          }
        }
        else if (iVar8 == -0x1eadb0dc) {
          uVar6 = _objc_retain(param_3);
          (*DAT_000a40d0)(param_1,param_2,uVar6);
          iVar11 = 0x1642472f;
        }
        else {
          iVar11 = -0xeae0be0;
          if (iVar8 != -0x1a154230) {
            iVar11 = iVar8;
          }
        }
      }
      else if (iVar8 < -0xa6eb05a) {
        if (iVar8 < -0x108ee750) {
          if (iVar8 == -0x1255c476) {
            _objc_msgSend(local_c8,local_e0);
            uVar7 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar7,local_d0,&cf__vcam_is_mirrored_mark);
            uVar5 = _objc_retainAutoreleasedReturnValue();
            uVar6 = _g_isMirroredMark;
            _g_isMirroredMark = uVar5;
            _objc_release(uVar6);
            _objc_release(uVar7);
            _objc_release(local_c8);
            iVar11 = 0x46a20e68;
          }
          else if (iVar8 == -0x10c93e9c) {
            local_e9 = _objc_msgSend(local_f8,"fileExistsAtPath:",_g_isMirroredMarkfbs);
            iVar11 = -0x4819e645;
          }
        }
        else if (iVar8 == -0x108ee750) {
          iVar11 = 0x48254f77;
        }
        else if (iVar8 == -0xeae0be0) {
          local_c0 = DAT_000a4168;
          iVar11 = 0x40cb97e0;
        }
      }
      else if (iVar8 < -0x74bc07e) {
        iVar11 = 0x7c57736c;
        if ((iVar8 != -0xa6eb05a) && (iVar11 = iVar8, iVar8 == -0x77bf5e0)) {
          local_d0 = "stringByAppendingPathComponent:";
          _objc_msgSend(local_d8,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          uVar6 = _g_tempFile;
          _g_tempFile = uVar7;
          _objc_release(uVar6);
          _objc_release(local_d8);
          _objc_release(local_e8);
          local_c8 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          _objc_retain(local_c8);
          iVar11 = -0x384382af;
        }
      }
      else if (iVar8 == -0x74bc07e) {
        _objc_msgSend(local_a8,local_b0,"addToRunLoop:forMode:",local_a8,uVar10);
        iVar11 = -0x334b78d0;
      }
      else {
        iVar11 = -0x334b78d0;
        if (iVar8 != -0x43ba4ff) {
          iVar11 = iVar8;
        }
      }
      goto LAB_0004a51c;
    }
    if (iVar8 < -0x4ead2858) {
      if (iVar8 < -0x6b99442e) {
        if (iVar8 < -0x7061dfca) {
          iVar12 = 0x4a03c61c;
          if (iVar8 != -0x722d7e50) {
            iVar12 = iVar8;
          }
          iVar11 = 0x3bee13f;
          if (iVar8 != -0x75d4262b) {
            iVar11 = iVar12;
          }
        }
        else if (iVar8 == -0x7061dfca) {
          local_78 = _objc_alloc(&_OBJC_CLASS___AVSampleBufferDisplayLayer);
          local_70 = "init";
          iVar11 = 0x4da7574d;
        }
        else if (iVar8 == -0x6ec91d21) {
          _objc_msgSend(param_1,"sublayers");
          _objc_retainAutoreleasedReturnValue();
          iVar11 = 0x3bee13f;
        }
      }
      else {
        if (iVar8 < -0x64f5389a) {
          iVar9 = -0x6b99442e;
          iVar11 = 0x349f3687;
          iVar1 = -0x68a86dfa;
          iVar12 = -0x5e78260e;
          goto LAB_0004adc0;
        }
        iVar11 = -0x108ee750;
        if ((iVar8 != -0x64f5389a) && (iVar11 = iVar8, iVar8 == -0x5e78260e)) {
          uVar7 = _objc_msgSend(local_78,local_70);
          uVar6 = DAT_000a4078;
          DAT_000a4078 = uVar7;
          _objc_release(uVar6);
          uVar7 = _objc_msgSend(&_OBJC_CLASS___CALayer,"new");
          uVar6 = _g_maskLayer;
          _g_maskLayer = uVar7;
          _objc_release(uVar6);
          _objc_msgSend(&_OBJC_CLASS___UIColor,"blackColor");
          _objc_retainAutoreleasedReturnValue();
          uVar6 = _objc_retainAutorelease();
          uVar7 = _objc_msgSend(uVar6,"CGColor");
          _objc_msgSend(_g_maskLayer,"setBackgroundColor:",uVar7);
          _objc_release(uVar6);
          iVar11 = -0x3fd47a0e;
        }
      }
    }
    else if (iVar8 < -0x3de60f5d) {
      if (iVar8 < -0x44ad6dd3) {
        iVar11 = -0x7061dfca;
        if ((iVar8 != -0x4ead2858) && (iVar11 = iVar8, iVar8 == -0x4819e645)) {
          iVar11 = -0x1a154230;
          if (local_e9 == '\0') {
            iVar11 = -0x722d7e50;
          }
        }
      }
      else if (iVar8 == -0x3fd47a0e) {
        iVar11 = -0x2c68d3f0;
      }
      else if (iVar8 == -0x44ad6dd3) {
        return;
      }
    }
    else if (iVar8 < -0x39ee84bb) {
      iVar11 = 0xc1cf91f;
      if ((iVar8 != -0x3de60f5d) && (iVar11 = iVar8, iVar8 == -0x3b69b40a)) {
        _objc_msgSend(local_a0,"insertSublayer:above:",_g_maskLayer,param_3);
        _objc_msgSend(local_a0,"insertSublayer:above:",DAT_000a4078,_g_maskLayer);
        _dispatch_async(PTR___dispatch_main_q_00068058,&PTR___NSConcreteGlobalBlock_00068620);
        iVar11 = 0x64ea4940;
      }
    }
    else if (iVar8 == -0x39ee84bb) {
      _objc_msgSend(&_OBJC_CLASS___CADisplayLink,"displayLinkWithTarget:selector:",param_1,"step:");
      lVar4 = _objc_retainAutoreleasedReturnValue();
      lVar2 = DAT_000a4168;
      DAT_000a4168 = lVar4;
      _objc_release(lVar2);
      iVar11 = 0x2dcee986;
    }
    else {
      iVar11 = -0x1255c476;
      if (iVar8 != -0x384382af) {
        iVar11 = iVar8;
      }
    }
  } while( true );
}
void FUN_0004b2d0(void)
{
                    // WARNING: Could not recover jumptable at 0x0004b338. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000a1cf0)();
  return;
}
void FUN_0004c4fc(undefined8 param_1,undefined8 param_2)
{
  undefined8 uVar1;
  int iVar2;
  double dVar3;
  undefined *local_40;
  char *local_38;
  iVar2 = 0x644735a9;
  do {
    while( true ) {
      while (iVar2 < 0x644735a9) {
        if (iVar2 == -0x63bb6f29) {
          iVar2 = 0x7533dae8;
        }
        else if (iVar2 == 0x3a09315f) {
          DAT_000a40b8 = 0;
          iVar2 = -0x63bb6f29;
          local_40 = &_OBJC_CLASS___NSDate;
          local_38 = "date";
        }
      }
      if (iVar2 != 0x644735a9) break;
      iVar2 = 0x3a09315f;
    }
  } while (iVar2 != 0x7533dae8);
  _objc_msgSend(local_40,local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar3 = (double)_objc_msgSend(uVar1,"timeIntervalSince1970");
  DAT_000a40c8 = dVar3 * 1000.0;
  _objc_release(uVar1);
                    // WARNING: Could not recover jumptable at 0x0004c618. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000a40d8)(param_1,param_2);
  return;
}
void FUN_0004c61c(undefined8 param_1,undefined8 param_2)
{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  iVar4 = 0x78bfe478;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar4 < -0x2b51123d) {
            if (iVar4 < -0x62b70c11) {
              if (iVar4 == -0x785fbcb0) {
                iVar4 = -0x139e621a;
              }
              else if (iVar4 == -0x6413e45e) {
                (*DAT_000a40e0)(param_1,param_2);
                iVar4 = -0x2b51123d;
              }
            }
            else {
              iVar1 = -0x231e119d;
              if (iVar4 != -0x46bf4060) {
                iVar1 = iVar4;
              }
              iVar2 = -0x785fbcb0;
              if (iVar4 != -0x541e3fb3) {
                iVar2 = iVar1;
              }
              bVar3 = iVar4 != -0x62b70c11;
              iVar4 = -0x785fbcb0;
              if (bVar3) {
                iVar4 = iVar2;
              }
            }
          }
          if (iVar4 < -0x139e621a) break;
          iVar1 = iVar4;
          if (iVar4 == 0x78bfe478) {
            iVar1 = -0x231e119d;
          }
          iVar2 = -0x541e3fb3;
          if (iVar4 != 0x578b2cd0) {
            iVar2 = iVar1;
          }
          bVar3 = iVar4 != -0x139e621a;
          iVar4 = -0x1ea1e1bc;
          if (bVar3) {
            iVar4 = iVar2;
          }
        }
        if (iVar4 != -0x231e119d) break;
        iVar4 = 0x578b2cd0;
      }
      if (iVar4 != -0x1ea1e1bc) break;
      iVar4 = -0x6413e45e;
    }
  } while (iVar4 != -0x2b51123d);
  return;
}
void FUN_0004c798(undefined8 param_1,undefined8 param_2,undefined8 param_3)
{
  cfstringStruct *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 local_d8;
  char *local_d0;
  undefined8 local_c8;
  char *local_c0;
  char local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  char *local_a0;
  char local_91;
  undefined8 local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined8 local_78;
  long local_70;
  code *local_68;
  iVar2 = 0x1dd9398;
  iVar3 = -0x4f2cf1ed;
LAB_0004c804:
  do {
    while (iVar6 = iVar3, iVar3 = iVar6, iVar6 < -0x291fc8) {
      if (iVar6 < -0x446e3ec9) {
        if (iVar6 < -0x4f2cf1ed) {
          if (iVar6 < -0x68275a7f) {
            iVar3 = -0x1849ad51;
            if (((iVar6 != -0x72e2e40e) && (iVar3 = 0x7864068d, iVar6 != -0x6bf82225)) &&
               (iVar3 = iVar6, iVar6 == -0x6be5cbb9)) {
              local_b0 = DAT_000a4070;
              iVar3 = -0x6bf82225;
            }
          }
          else if (iVar6 == -0x68275a7f) {
            lVar5 = _objc_msgSend(local_c8,local_c0);
            local_b1 = 0 < lVar5;
            _objc_release(local_c8);
            iVar3 = 0x654e5391;
          }
          else {
            iVar7 = -0x64f847d1;
            iVar8 = -0x1849ad51;
            if (iVar6 != -0x4fdfe8a0) {
              iVar8 = iVar6;
            }
LAB_0004cd58:
            iVar3 = 0x27a7e52c;
            if (iVar6 != iVar7) {
              iVar3 = iVar8;
            }
          }
        }
        else if (iVar6 < -0x48173888) {
          iVar3 = 0x44615742;
          if (iVar6 != -0x4f2cf1ed) {
            if (iVar6 == -0x4c068021) {
              _objc_release(local_80);
              _objc_release(local_90);
              iVar3 = 0x1080ab99;
            }
            else {
              iVar3 = -0x10570893;
              if (iVar6 != -0x4a6e7e68) {
                iVar3 = iVar6;
              }
            }
          }
        }
        else if (iVar6 < -0x46776a4f) {
          iVar3 = -0x47abef96;
          if ((iVar6 != -0x48173888) && (iVar3 = iVar6, iVar6 == -0x47abef96)) {
            local_80 = DAT_00099300;
            DAT_00099300 = local_88;
            iVar3 = 0x5ae52414;
          }
        }
        else {
          iVar7 = -0xa89b478;
          if (iVar6 != -0x45682b2d) {
            iVar7 = iVar6;
          }
          iVar3 = 0x188651f8;
          if (iVar6 != -0x46776a4f) {
            iVar3 = iVar7;
          }
        }
      }
      else if (iVar6 < -0x1849ad51) {
        if (iVar6 < -0x351d574f) {
          if (iVar6 == -0x446e3ec9) {
            pcVar1 = &cf_RearCamera;
            if (local_70 != 1) {
              pcVar1 = &cf_frontcamera;
            }
            _objc_storeStrong(&DAT_00099300,pcVar1);
            iVar3 = 0x188651f8;
          }
          else if (iVar6 == -0x401ce9f3) {
            local_90 = _objc_msgSend(local_d8,local_d0);
            _objc_retain(local_90);
            lVar5 = _objc_msgSend(local_90,local_c0);
            local_88 = &cf_Tn_DdP4Y;
            if (lVar5 != 1) {
              local_88 = &cf_MRn_DdP4Y;
            }
            _objc_retain(local_88);
            iVar3 = -0x386e8a1c;
          }
          else {
            iVar3 = -0x48173888;
            if (iVar6 != -0x386e8a1c) {
              iVar3 = iVar6;
            }
          }
        }
        else if (iVar6 < -0x1fc552db) {
          if (iVar6 == -0x351d574f) {
            _objc_msgSend(local_d8,local_d0);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            lVar5 = _objc_msgSend(uVar4,local_c0);
            pcVar1 = &cf_Tn_DdP4Y;
            if (lVar5 != 1) {
              pcVar1 = &cf_MRn_DdP4Y;
            }
            _objc_retain(pcVar1);
            iVar3 = -0x401ce9f3;
          }
          else {
            iVar3 = 0x6178bf78;
            if (iVar6 != -0x2e707868) {
              iVar3 = iVar6;
            }
          }
        }
        else if (iVar6 == -0x1fc552db) {
          local_91 = _objc_msgSend(local_b0,local_a0,local_a8);
          iVar3 = -0x17d08ee5;
        }
        else {
          iVar3 = -0x68275a7f;
          if (iVar6 != -0x1c234b35) {
            iVar3 = iVar6;
          }
        }
      }
      else if (iVar6 < -0x104fe66d) {
        if (iVar6 == -0x1849ad51) {
          iVar3 = 0x2ae01ec3;
        }
        else if (iVar6 == -0x17d08ee5) {
          iVar3 = -0x1f6da29;
          if (local_91 == '\0') {
            iVar3 = -0x45682b2d;
          }
        }
        else {
          iVar3 = 0x4ede8e87;
          if (iVar6 != -0x10570893) {
            iVar3 = iVar6;
          }
        }
      }
      else if (iVar6 < -0x549054e) {
        if (iVar6 == -0x104fe66d) {
          _objc_msgSend(local_c8,local_c0);
          _objc_release(local_c8);
          iVar3 = -0x68275a7f;
        }
        else if (iVar6 == -0xa89b478) {
          local_78 = _objc_msgSend(local_d8,local_d0);
          _objc_retain(local_78);
          local_70 = _objc_msgSend(local_78,local_c0);
          iVar3 = 0x213a6112;
        }
      }
      else if (iVar6 == -0x549054e) {
        uVar4 = _objc_retain(param_3);
        _objc_msgSend(uVar4,"device");
        _objc_retainAutoreleasedReturnValue();
        iVar3 = 0x44615742;
      }
      else {
        iVar3 = -0x401ce9f3;
        if (iVar6 != -0x1f6da29) {
          iVar3 = iVar6;
        }
      }
    }
    if (0x3987ab76 < iVar6) {
      if (iVar6 < 0x5ae52414) {
        if (iVar6 < 0x44e23691) {
          if (iVar6 == 0x3987ab77) {
            iVar3 = -0x1c234b35;
          }
          else if (iVar6 == 0x43783437) {
            _objc_release(local_d8);
            iVar3 = -0x291fc8;
          }
          else if (iVar6 == 0x44615742) {
            _objc_retain(param_3);
            local_d0 = "device";
            local_c8 = _objc_msgSend(param_3,"device");
            _objc_retain(local_c8);
            local_d8 = param_3;
            local_c0 = "position";
            iVar3 = 0x3987ab77;
          }
        }
        else if (iVar6 == 0x44e23691) {
          _objc_release(local_78);
          iVar3 = 0x4ede8e87;
        }
        else if (iVar6 == 0x4ede8e87) {
          _objc_release(local_78);
          iVar3 = 0x5584c5d1;
        }
        else {
          iVar3 = iVar2;
          if (iVar6 != 0x5584c5d1) {
            iVar3 = iVar6;
          }
        }
      }
      else if (iVar6 < 0x68f90545) {
        if (iVar6 == 0x5ae52414) {
          iVar3 = 0x1b8ffb3b;
        }
        else if (iVar6 == 0x6178bf78) {
          (*local_68)(param_1,param_2,param_3);
          iVar3 = 0x68f90545;
        }
        else {
          iVar3 = -0x72e2e40e;
          if (iVar6 != 0x654e5391) {
            iVar3 = iVar6;
          }
        }
      }
      else if (iVar6 < 0x6f1266a9) {
        iVar7 = iVar2;
        if (iVar6 != 0x6c9ceeb0) {
          iVar7 = iVar6;
        }
        iVar3 = -0x291fc8;
        if (iVar6 != 0x68f90545) {
          iVar3 = iVar7;
        }
      }
      else if (iVar6 == 0x6f1266a9) {
        _objc_msgSend(local_b0,local_a0,local_a8);
        iVar3 = -0x1fc552db;
      }
      else if (iVar6 == 0x7864068d) {
        local_a8 = _g_isenabledw2ProChinese;
        local_a0 = "fileExistsAtPath:";
        iVar3 = 0xcd68d4f;
      }
      goto LAB_0004c804;
    }
    if (iVar6 < 0x1b8ffb3b) {
      if (iVar6 < 0xd8073aa) {
        if (iVar6 != -0x291fc8) {
          iVar7 = 0x1dd9398;
          iVar8 = 0x363b0280;
          if (iVar6 != 0xcd68d4f) {
            iVar8 = iVar6;
          }
          goto LAB_0004cd58;
        }
        _objc_release(local_d8);
        iVar3 = 0xe549770;
      }
      else if (iVar6 < 0x1080ab99) {
        iVar3 = 0x7864068d;
        if ((iVar6 != 0xd8073aa) && (iVar3 = iVar6, iVar6 == 0xe549770)) {
          return;
        }
      }
      else if (iVar6 == 0x1080ab99) {
        _objc_release(local_80);
        _objc_release(local_90);
        iVar3 = 0x6c9ceeb0;
      }
      else if (iVar6 == 0x188651f8) {
        pcVar1 = &cf_RearCamera;
        if (local_70 != 1) {
          pcVar1 = &cf_frontcamera;
        }
        _objc_storeStrong(&DAT_00099300,pcVar1);
        iVar3 = -0x4a6e7e68;
      }
    }
    else if (iVar6 < 0x28ddefdd) {
      iVar3 = 0x1080ab99;
      if (iVar6 != 0x1b8ffb3b) {
        if (iVar6 == 0x213a6112) {
          iVar3 = -0x46776a4f;
        }
        else {
          iVar3 = iVar6;
          if (iVar6 == 0x27a7e52c) {
            local_68 = DAT_000a40e8;
            iVar3 = -0x2e707868;
          }
        }
      }
    }
    else if (iVar6 < 0x354a55f1) {
      if (iVar6 == 0x28ddefdd) {
        _objc_msgSend(local_d8,local_d0);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar4,local_c0);
        iVar3 = -0xa89b478;
      }
      else if ((iVar6 == 0x2ae01ec3) && (iVar3 = -0x6be5cbb9, local_b1 == '\0')) {
        iVar3 = iVar2;
      }
    }
    else if (iVar6 == 0x354a55f1) {
      DAT_00099300 = local_88;
      iVar3 = -0x47abef96;
    }
    else {
      iVar3 = -0x1fc552db;
      if (iVar6 != 0x363b0280) {
        iVar3 = iVar6;
      }
    }
  } while( true );
}
void FUN_0004d184(undefined8 param_1,undefined8 param_2,undefined8 param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_68;
  iVar2 = 0x27c23c94;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar2, iVar2 = iVar3, -0xafa4f9d < iVar3) {
          if (iVar3 < 0x27c23c94) {
            if (iVar3 == -0xafa4f9c) {
              _objc_retain(param_3);
              local_68 = param_3;
              iVar2 = 0x4447188b;
            }
            else if (iVar3 == 0x26ccdef) {
              _objc_release(local_68);
              iVar2 = -0x5ccc6a84;
            }
          }
          else {
            iVar1 = iVar3;
            if (iVar3 == 0x27c23c94) {
              iVar1 = -0xafa4f9c;
            }
            iVar2 = -0x74ced141;
            if (iVar3 != 0x4447188b) {
              iVar2 = iVar1;
            }
          }
        }
        if (iVar3 < -0x54f8ba4a) break;
        if (iVar3 == -0x54f8ba4a) {
          _objc_retain(param_3);
          iVar2 = -0xafa4f9c;
        }
        else {
          iVar2 = 0x26ccdef;
          if (iVar3 != -0x3fee8af5) {
            iVar2 = iVar3;
          }
        }
      }
      if (iVar3 != -0x74ced141) break;
      (*DAT_000a40f0)(param_1,param_2,param_3);
      iVar2 = -0x3fee8af5;
    }
  } while (iVar3 != -0x5ccc6a84);
  return;
}
void FUN_0004d2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  local_78 = param_3;
  _objc_retain(param_3);
  local_70 = param_4;
  _objc_retain(param_4);
  DAT_000a40a8 = 1;
  local_a0 = PTR___NSConcreteStackBlock_00068030;
  local_98 = 0xc2000000;
  local_90 = FUN_0005834c;
  puStack_88 = &DAT_00068640;
  local_68 = &local_80;
  iVar4 = 0x2c9dad71;
  do {
    while( true ) {
      while( true ) {
        while (iVar4 < 0x2c9dad71) {
          if (iVar4 == -0x716cad24) {
            _objc_retain(local_70);
            *local_68 = param_4;
            uVar2 = _objc_retainBlock(&local_a0);
            pcVar1 = DAT_000a40f8;
            uVar3 = _objc_msgSend(uVar2,"copy");
            (*pcVar1)(param_1,param_2,param_3,uVar3);
            _objc_release(uVar3);
            _objc_release(uVar2);
            iVar4 = 0x6425cc64;
          }
          else if (iVar4 == -0x69fa1812) {
            iVar4 = -0x6fee1fa;
          }
          else if (iVar4 == -0x6fee1fa) {
            _objc_release(*local_68);
            _objc_release(local_70);
            _objc_release(local_78);
            iVar4 = 0x7e9939e3;
          }
        }
        if (iVar4 != 0x2c9dad71) break;
        iVar4 = -0x716cad24;
      }
      if (iVar4 != 0x6425cc64) break;
      iVar4 = -0x69fa1812;
    }
  } while (iVar4 != 0x7e9939e3);
  return;
}
undefined8 FUN_0004d4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)
{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 local_160;
  undefined8 local_158;
  char *local_150;
  char local_141;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  long local_120;
  char local_111;
  undefined8 local_110;
  char local_101;
  undefined8 local_100;
  undefined8 local_f8;
  char local_e9;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char local_b9;
  undefined8 local_b8;
  undefined8 local_b0;
  char local_a1;
  undefined *local_a0;
  undefined8 local_98;
  char *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  iVar3 = -0x5c90470a;
LAB_0004d544:
  while (iVar8 = iVar3, iVar3 = iVar8, -0x6391a55 < iVar8) {
    if (iVar8 < 0x45bff720) {
      if (iVar8 < 0x20c43e8e) {
        if (iVar8 < 0x88e3a0e) {
          if (iVar8 < 0x20f738d) {
            iVar3 = -0x4377c42e;
            if (iVar8 != -0x6391a54) {
              if (iVar8 == -0x332e3cc) {
                unaff_x21 = local_78;
                iVar3 = 0x36ae5a6b;
              }
              else {
                iVar3 = iVar8;
                if (iVar8 == -0x24881a6) {
                  local_e9 = _objc_msgSend(local_100,local_150,local_f8);
                  iVar3 = -0x25f053e9;
                }
              }
            }
          }
          else if (iVar8 < 0x41f8dcb) {
            if (iVar8 == 0x20f738d) {
              local_80 = _objc_msgSend(0x4000000000000000,local_88,local_90,local_d8,0);
              _objc_retain(local_80);
              iVar3 = 0x5a029454;
            }
            else if (iVar8 == 0x335e856) {
              local_e0 = _g_tempFile;
              iVar3 = -0x40fd767a;
            }
          }
          else {
            iVar9 = 0x4f6cd753;
            if (iVar8 != 0x85d39a6) {
              iVar9 = iVar8;
            }
            iVar3 = -0x25dd3b6a;
            if (iVar8 != 0x41f8dcb) {
              iVar3 = iVar9;
            }
          }
        }
        else if (iVar8 < 0xfbd0dc9) {
          iVar3 = -0x4377c42e;
          if (iVar8 != 0x91fc53d) {
            iVar3 = iVar8;
          }
          iVar9 = -0xdd42240;
          if (iVar8 != 0x9153793) {
            iVar9 = iVar3;
          }
          iVar3 = -0x44ba2493;
          if (iVar8 != 0x88e3a0e) {
            iVar3 = iVar9;
          }
        }
        else if (iVar8 < 0x1de93c42) {
          if (iVar8 == 0xfbd0dc9) {
            _UIImageJPEGRepresentation(0x3ff0000000000000,unaff_x20);
            unaff_x21 = _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x20);
            _objc_release(local_d0);
            iVar3 = 0x36ae5a6b;
          }
          else if (iVar8 == 0x1807963e) {
            iVar3 = -0x822231c;
          }
        }
        else {
          iVar9 = 0x486c0ed6;
          if (iVar8 != 0x201e6e09) {
            iVar9 = iVar8;
          }
          iVar3 = -0x19d3fce2;
          if (iVar8 != 0x1de93c42) {
            iVar3 = iVar9;
          }
        }
      }
      else if (iVar8 < 0x33de482e) {
        if (iVar8 < 0x299c6db0) {
          if (iVar8 == 0x20c43e8e) {
            iVar3 = -0x709f978c;
          }
          else {
            iVar3 = 0x335e856;
            if ((iVar8 != 0x28997e78) && (iVar3 = iVar8, iVar8 == 0x295be789)) {
              iVar3 = 0x75b1b06e;
            }
          }
        }
        else if (iVar8 < 0x302605b2) {
          if (iVar8 == 0x299c6db0) {
            local_88 = &_OBJC_CLASS___UIImage;
            local_90 = "imageWithCIImage:scale:orientation:";
            iVar3 = 0x20f738d;
          }
          else {
            iVar9 = 0x2d61b942;
LAB_0004e1f8:
            iVar3 = iVar8;
            if (iVar8 == iVar9) {
              iVar3 = -0x7d52c57a;
            }
          }
        }
        else {
          iVar3 = 0x3ea47dd7;
          if ((iVar8 != 0x302605b2) && (iVar3 = iVar8, iVar8 == 0x31aae7a0)) {
            _objc_autorelease(local_70);
            iVar3 = 0x5a9cad0c;
          }
        }
      }
      else if (iVar8 < 0x3d69e938) {
        iVar3 = -0x77054619;
        if (iVar8 != 0x33de482e) {
          if (iVar8 == 0x36ae5a6b) {
            local_70 = unaff_x21;
            iVar3 = 0x31aae7a0;
          }
          else {
            iVar3 = iVar8;
            if (iVar8 == 0x37d46310) {
              iVar3 = 0x335e856;
            }
          }
        }
      }
      else if (iVar8 < 0x4555da18) {
        if (iVar8 == 0x3d69e938) {
          iVar3 = 0x302605b2;
        }
        else if (iVar8 == 0x3ea47dd7) {
          local_150 = "fileExistsAtPath:";
          local_141 = _objc_msgSend(local_160,"fileExistsAtPath:",local_158);
          iVar3 = 0x45bff720;
        }
      }
      else {
        iVar3 = 0x5d0d9b90;
        if ((iVar8 != 0x4555da18) && (iVar3 = iVar8, iVar8 == 0x456d52ad)) {
          iVar3 = -0x2eb494ee;
        }
      }
    }
    else if (iVar8 < 0x5b6f8933) {
      if (iVar8 < 0x554b1594) {
        if (iVar8 < 0x4c8f0f9b) {
          if (iVar8 == 0x45bff720) {
            iVar3 = -0x1e98f85a;
            if (local_141 == '\0') {
              iVar3 = 0x62d1ff2f;
            }
          }
          else {
            iVar3 = -0x2eb494ee;
            if ((iVar8 != 0x486c0ed6) && (iVar3 = iVar8, iVar8 == 0x4be4ca2e)) {
              _NSSearchPathForDirectoriesInDomains(0xd,1,1);
              uVar4 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar4,"firstObject");
              uVar5 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar5,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov);
              uVar6 = _objc_retainAutoreleasedReturnValue();
              uVar7 = _g_tempFile;
              _g_tempFile = uVar6;
              _objc_release(uVar7);
              _objc_release(uVar5);
              _objc_release(uVar4);
              _NSSearchPathForDirectoriesInDomains(0xd,1,1);
              uVar7 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar7,"firstObject");
              uVar7 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar7,"stringByAppendingPathComponent:",&cf__vcam_is_mirrored_mark);
              iVar3 = -0x3f0a5383;
            }
          }
        }
        else if (iVar8 < 0x5229d843) {
          iVar9 = 0x88e3a0e;
          if (iVar8 != 0x4f6cd753) {
            iVar9 = iVar8;
          }
          iVar3 = 0x5d0d9b90;
          if (iVar8 != 0x4c8f0f9b) {
            iVar3 = iVar9;
          }
        }
        else if (iVar8 == 0x5229d843) {
          local_b8 = DAT_000a4070;
          iVar3 = 0x4555da18;
        }
        else if (iVar8 == 0x54051e1d) {
LAB_0004e7f8:
          iVar3 = 0x5f8d9c94;
        }
      }
      else if (iVar8 < 0x5a029454) {
        if (iVar8 < 0x577fcb51) {
          if (iVar8 == 0x554b1594) {
            uVar7 = _CMSampleBufferGetImageBuffer(local_120);
            local_d8 = _objc_msgSend(&_OBJC_CLASS___CIImage,"imageWithCVImageBuffer:",uVar7);
            _objc_retain(local_d8);
            local_d0 = local_d8;
            iVar3 = 0x33de482e;
          }
          else if (iVar8 == 0x57107835) {
            local_78 = (*DAT_000a4100)(param_1,param_2,param_3);
            iVar3 = 0x5c76fba5;
          }
        }
        else {
          if (iVar8 != 0x577fcb51) {
            iVar9 = 0x58fcff31;
            goto LAB_0004e134;
          }
          iVar3 = 0x1de93c42;
        }
      }
      else if (iVar8 < 0x5acf371c) {
        iVar3 = -0x647212be;
        if ((iVar8 != 0x5a029454) && (iVar3 = iVar8, iVar8 == 0x5a9cad0c)) {
          return local_70;
        }
      }
      else if (iVar8 == 0x5acf371c) {
        _objc_msgSend(0x4000000000000000,local_a0,"imageWithCIImage:scale:orientation:",local_d8,2);
        _objc_retainAutoreleasedReturnValue();
        iVar3 = -0x65471305;
      }
      else if (iVar8 == 0x5b5aa3b8) {
        iVar3 = 0x7b23ee00;
      }
    }
    else if (iVar8 < 0x6cdd3f28) {
      if (iVar8 < 0x5f8d9c94) {
        iVar3 = 0x75b1b06e;
        if (((iVar8 != 0x5b6f8933) && (iVar3 = -0x535da2a6, iVar8 != 0x5c76fba5)) &&
           (iVar3 = iVar8, iVar8 == 0x5d0d9b90)) {
          local_b0 = _g_isMirroredMarkxz;
          iVar3 = 0x20c43e8e;
        }
      }
      else if (iVar8 < 0x62d1ff2f) {
        if (iVar8 == 0x5f8d9c94) {
          _objc_retain(local_128);
          uVar7 = _g_isMirroredMark;
          _g_isMirroredMark = local_130;
          _objc_release(uVar7);
          _objc_release(local_138);
          _objc_release(local_140);
          iVar3 = -0x33a7d5c7;
        }
        else if (iVar8 == 0x61b1f470) {
          _objc_msgSend(local_110,local_150,_g_tempFile);
          iVar3 = -0x19d3fce2;
        }
      }
      else {
        iVar3 = -0x3f0a5383;
        if (iVar8 != 0x62d1ff2f) {
          iVar9 = 0x676ebb10;
          goto LAB_0004e1f8;
        }
      }
    }
    else if (iVar8 < 0x75b1b06e) {
      if (iVar8 == 0x6cdd3f28) {
        iVar3 = -0x36e01003;
      }
      else {
        if (iVar8 == 0x7162b425) {
          _objc_msgSend(local_100,local_150,local_f8);
          goto LAB_0004e834;
        }
        if (iVar8 == 0x7426a672) {
          bVar2 = local_101 == '\0';
          iVar8 = -0x4a6d98a9;
LAB_0004e8f4:
          iVar3 = 0x554b1594;
          if (bVar2) {
            iVar3 = iVar8;
          }
        }
      }
    }
    else if (iVar8 < 0x7aa28705) {
      if (iVar8 == 0x75b1b06e) {
        local_110 = DAT_000a4070;
        iVar3 = 0x577fcb51;
      }
      else {
        iVar3 = 0x9153793;
        if (iVar8 != 0x7a88b296) {
          iVar3 = iVar8;
        }
      }
    }
    else if (iVar8 == 0x7aa28705) {
      iVar3 = 0x28997e78;
    }
    else if (iVar8 == 0x7b23ee00) {
      local_100 = DAT_000a4070;
      local_f8 = _g_isMirroredMarkfbs;
      iVar3 = 0x6cdd3f28;
    }
  }
  if (-0x3f0a5384 < iVar8) {
    if (iVar8 < -0x25dd3b6a) {
      if (-0x3184bb6a < iVar8) {
        if (iVar8 < -0x2eee3974) {
          if (iVar8 == -0x3184bb69) {
            _objc_retain(local_128);
            uVar7 = _g_isMirroredMark;
            _g_isMirroredMark = local_130;
            _objc_release(uVar7);
            _objc_release(local_138);
            _objc_release(local_140);
            goto LAB_0004e7f8;
          }
          if (iVar8 != -0x31821d9f) {
            iVar3 = -0x7e45d8ef;
            if (iVar8 != -0x303d0203) {
              iVar3 = iVar8;
            }
            goto LAB_0004d544;
          }
          iVar8 = 0x299c6db0;
          cVar1 = local_a1;
        }
        else {
          if (iVar8 < -0x27dd9905) {
            iVar3 = -0xdd42240;
            if ((iVar8 != -0x2eee3974) && (iVar3 = iVar8, iVar8 == -0x2eb494ee)) {
              local_128 = local_130;
              iVar3 = -0x62409935;
            }
            goto LAB_0004d544;
          }
          if (iVar8 != -0x27dd9905) {
            iVar3 = 0x2d61b942;
            if (iVar8 != -0x25f053e9) {
              iVar3 = iVar8;
            }
            goto LAB_0004d544;
          }
          _objc_release(local_c8);
          iVar8 = 0x5229d843;
          cVar1 = local_b9;
        }
        iVar3 = 0x91fc53d;
        if (cVar1 == '\0') {
          iVar3 = iVar8;
        }
        goto LAB_0004d544;
      }
      if (iVar8 < -0x3bfde82a) {
        if (iVar8 == -0x3f0a5383) {
          _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar4,"firstObject");
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar5,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          uVar7 = _g_tempFile;
          _g_tempFile = uVar6;
          _objc_release(uVar7);
          _objc_release(uVar5);
          _objc_release(uVar4);
          local_140 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          _objc_retain(local_140);
          local_138 = _objc_msgSend(local_140,"firstObject");
          _objc_retain(local_138);
          local_130 = _objc_msgSend(local_138,local_138,"stringByAppendingPathComponent:",
                                    &cf__vcam_is_mirrored_mark);
          iVar3 = 0x201e6e09;
        }
        else if (iVar8 == -0x3e380980) {
          local_120 = _objc_msgSend(&objc::class_t::GetFrame,"getCurrentFrame::",0,0);
          iVar3 = -0x83a5a7b;
        }
        else {
          iVar3 = -0x6cd1e462;
          if (iVar8 != -0x3cbb866e) {
            iVar3 = iVar8;
          }
        }
      }
      else if (iVar8 < -0x34a530b2) {
        iVar3 = -0x303d0203;
        if ((iVar8 != -0x3bfde82a) && (iVar3 = iVar8, iVar8 == -0x36e01003)) {
LAB_0004e834:
          iVar3 = -0x24881a6;
        }
      }
      else if (iVar8 == -0x34a530b2) {
        _objc_msgSend(local_160,"fileExistsAtPath:",local_158);
        iVar3 = 0x3ea47dd7;
      }
      else if (iVar8 == -0x33a7d5c7) {
        iVar3 = -0x1e98f85a;
      }
    }
    else if (iVar8 < -0xdd42240) {
      if (iVar8 < -0x1c1e3cc3) {
        if (iVar8 == -0x25dd3b6a) {
          iVar3 = -0x437efd3b;
        }
        else {
          iVar3 = -0x6f869fe0;
          if ((iVar8 != -0x1ec5783e) && (iVar3 = iVar8, iVar8 == -0x1e98f85a)) {
LAB_0004e8b0:
            iVar3 = -0x3e380980;
          }
        }
      }
      else if (iVar8 < -0x19651926) {
        iVar3 = -0x65471305;
        if ((iVar8 != -0x1c1e3cc3) && (iVar3 = iVar8, iVar8 == -0x19d3fce2)) {
          local_101 = _objc_msgSend(local_110,local_150,_g_tempFile);
          iVar3 = 0x7a88b296;
        }
      }
      else {
        iVar3 = -0x647212be;
        if ((iVar8 != -0x19651926) && (iVar3 = iVar8, iVar8 == -0x140d2341)) {
          local_111 = local_120 != 0;
          iVar3 = -0x41f97bf6;
        }
      }
    }
    else if (iVar8 < -0x83a5a7b) {
      if (iVar8 == -0xdd42240) {
        iVar3 = 0x7426a672;
      }
      else if (iVar8 == -0xb98f7d9) {
        unaff_x20 = local_80;
        iVar3 = 0xfbd0dc9;
      }
      else if (iVar8 == -0xb343610) {
        _objc_autorelease(local_70);
        iVar3 = 0x31aae7a0;
      }
    }
    else if (iVar8 < -0x6b9e6e7) {
      iVar9 = -0x332e3cc;
      if (iVar8 != -0x822231c) {
        iVar9 = iVar8;
      }
      iVar3 = -0x140d2341;
      if (iVar8 != -0x83a5a7b) {
        iVar3 = iVar9;
      }
    }
    else if (iVar8 == -0x6b9e6e7) {
      iVar3 = -0x27dd9905;
    }
    else if (iVar8 == -0x69414b0) {
      _objc_retain(local_78);
      iVar3 = -0x535da2a6;
    }
    goto LAB_0004d544;
  }
  if (-0x62409936 < iVar8) {
    if (iVar8 < -0x4a6d98a9) {
      if (iVar8 < -0x5658527b) {
        if (iVar8 == -0x62409935) {
          iVar3 = 0x54051e1d;
        }
        else {
          iVar3 = -0x822231c;
          if (iVar8 != -0x5ef23db8) {
            iVar9 = -0x5c90470a;
LAB_0004e134:
            iVar3 = iVar8;
            if (iVar8 == iVar9) {
              iVar3 = 0x85d39a6;
            }
          }
        }
        goto LAB_0004d544;
      }
      if (iVar8 < -0x51267365) {
        if (iVar8 == -0x5658527b) {
          local_a1 = _objc_msgSend(local_b8,local_150,local_b0);
          iVar3 = -0x31821d9f;
        }
        else if (iVar8 == -0x535da2a6) {
          _objc_retain(local_78);
          iVar3 = -0x6a378283;
        }
        goto LAB_0004d544;
      }
      if (iVar8 == -0x51267365) {
        iVar3 = _objc_msgSend(local_e8,local_150,local_e0);
        bVar2 = iVar3 == 0;
        iVar8 = 0x57107835;
        goto LAB_0004e8f4;
      }
      if (iVar8 != -0x4bae5816) goto LAB_0004d544;
      iVar3 = -0x7fb6b213;
      cVar1 = local_e9;
    }
    else {
      if (-0x4377c42f < iVar8) {
        if (iVar8 < -0x40fd767a) {
          if (iVar8 == -0x4377c42e) {
            local_a0 = &_OBJC_CLASS___UIImage;
            iVar3 = -0x7b453f48;
          }
          else if (iVar8 == -0x41f97bf6) {
            iVar3 = -0x25dd3b6a;
          }
        }
        else if (iVar8 == -0x40fd767a) {
          iVar3 = -0x51267365;
        }
        else if (iVar8 == -0x3f18a3e0) {
          iVar3 = -0x44ba2493;
        }
        goto LAB_0004d544;
      }
      iVar3 = 0x7b23ee00;
      if (iVar8 == -0x4a6d98a9) goto LAB_0004d544;
      if (iVar8 == -0x44ba2493) {
        local_160 = DAT_000a4070;
        local_158 = _g_isMirroredMarkfbs;
        iVar3 = 0x3d69e938;
        goto LAB_0004d544;
      }
      iVar3 = iVar8;
      if (iVar8 != -0x437efd3b) goto LAB_0004d544;
      iVar3 = 0x5b6f8933;
      cVar1 = local_111;
    }
    if (cVar1 == '\0') {
      iVar3 = 0x57107835;
    }
    goto LAB_0004d544;
  }
  if (iVar8 < -0x6f869fe0) {
    if (iVar8 < -0x7b453f48) {
      iVar3 = -0x6f869fe0;
      if (iVar8 != -0x7fb6b213) {
        if (iVar8 == -0x7e45d8ef) {
          unaff_x20 = local_98;
          iVar3 = 0xfbd0dc9;
        }
        else {
          iVar3 = -0x4bae5816;
          if (iVar8 != -0x7d52c57a) {
            iVar3 = iVar8;
          }
        }
      }
      goto LAB_0004d544;
    }
    if (iVar8 < -0x73562498) {
      if (iVar8 == -0x7b453f48) {
        iVar3 = -0x1c1e3cc3;
      }
      else if (iVar8 == -0x77054619) {
        local_c8 = _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
        _objc_retain(local_c8);
        local_b9 = _objc_msgSend(local_c8,"boolForKey:",&cf_HookWaterMark);
        iVar3 = -0x6b9e6e7;
      }
      goto LAB_0004d544;
    }
    if (iVar8 == -0x73562498) {
      _objc_msgSend(&objc::class_t::GetFrame,"getCurrentFrame::",0,0);
      goto LAB_0004e8b0;
    }
    if (iVar8 != -0x709f978c) goto LAB_0004d544;
  }
  else {
    if (iVar8 < -0x67e997dd) {
      if (iVar8 == -0x6f869fe0) {
        local_e8 = DAT_000a4070;
        iVar3 = 0x7aa28705;
      }
      else {
        iVar9 = -0x5ef23db8;
        if (iVar8 != -0x6a378283) {
          iVar9 = iVar8;
        }
        iVar3 = -0x303d0203;
        if (iVar8 != -0x6cd1e462) {
          iVar3 = iVar9;
        }
      }
      goto LAB_0004d544;
    }
    if (iVar8 < -0x648134ac) {
      if (iVar8 == -0x67e997dd) {
        _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar7,"boolForKey:",&cf_HookWaterMark);
        iVar3 = -0x77054619;
      }
      else if (iVar8 == -0x65471305) {
        local_98 = _objc_msgSend(0x4000000000000000,local_a0,"imageWithCIImage:scale:orientation:",
                                 local_d8,2);
        _objc_retain(local_98);
        iVar3 = -0x3cbb866e;
      }
      goto LAB_0004d544;
    }
    if (iVar8 != -0x648134ac) {
      iVar3 = -0xb98f7d9;
      if (iVar8 != -0x647212be) {
        iVar3 = iVar8;
      }
      goto LAB_0004d544;
    }
    _objc_msgSend(local_b8,local_150,local_b0);
  }
  iVar3 = -0x5658527b;
  goto LAB_0004d544;
}
undefined8 FUN_0004e9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 unaff_x21;
  int unaff_w22;
  undefined8 unaff_x23;
  undefined8 unaff_x28;
  char *local_148;
  undefined8 local_140;
  char *local_138;
  undefined8 local_130;
  char *local_128;
  undefined8 local_120;
  class_t *local_118;
  char *local_110;
  long local_108;
  char local_f9;
  undefined8 local_f8;
  char *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  char local_c9;
  undefined8 local_c8;
  char local_b9;
  undefined *local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  code *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  iVar9 = -0x4fbd3479;
LAB_0004ea3c:
  iVar3 = iVar9;
  iVar9 = iVar3;
  if (iVar3 < 0x5542cc3) {
    if (-0x3bb8478f < iVar3) {
      if (iVar3 < -0x20c2f33e) {
        if (iVar3 < -0x2c72ced5) {
          if (iVar3 < -0x357abcc5) {
            iVar10 = -0x357abcc5;
            if (iVar3 != -0x3583357f) {
              iVar10 = iVar3;
            }
            iVar9 = 0x2b193271;
            if (iVar3 != -0x3bb8478e) {
              iVar9 = iVar10;
            }
          }
          else {
            iVar9 = 0x55794f8b;
            if ((iVar3 != -0x357abcc5) && (iVar9 = iVar3, iVar3 == -0x3550b851)) {
              _objc_autorelease(local_70);
              iVar9 = -0x70d675bf;
            }
          }
        }
        else if (iVar3 < -0x2a5b65b5) {
          iVar10 = 0x11f882b1;
          if (iVar3 != -0x2c3d2447) {
            iVar10 = iVar3;
          }
          iVar9 = 0x21bb3891;
          if (iVar3 != -0x2c72ced5) {
            iVar9 = iVar10;
          }
        }
        else if (iVar3 == -0x2a5b65b5) {
          iVar9 = 0x1129763f;
        }
        else if (iVar3 == -0x22b0d46e) {
          _objc_msgSend(0x4000000000000000,local_b8,local_b0,local_e0,2);
          iVar9 = -0x4c5fbdc9;
        }
        else if (iVar3 == -0x2213c47b) {
          _objc_release(unaff_x28);
          _objc_release(local_d8);
          unaff_x21 = unaff_x23;
          iVar9 = -0x53e47c56;
          if (unaff_w22 != 0) {
            iVar9 = -0x40784254;
          }
        }
      }
      else if (iVar3 < -0xece0621) {
        if (iVar3 < -0x1aca79bb) {
          if (iVar3 == -0x20c2f33e) {
            local_148 = "fileExistsAtPath:";
            iVar3 = _objc_msgSend(DAT_000a4070,"fileExistsAtPath:",_g_isMirroredMarkfbs);
            iVar9 = 0x729bcdd6;
            if (iVar3 == 0) {
              iVar9 = -0x3bb8478e;
            }
          }
          else if (iVar3 == -0x1cf775e0) {
            _objc_retain(local_90);
            iVar9 = 0x767bb588;
          }
        }
        else if (iVar3 == -0x1aca79bb) {
          local_128 = "stringByAppendingPathComponent:";
          local_120 = _objc_msgSend(local_130,"stringByAppendingPathComponent:",
                                    &cf__w2avfictitious_mov);
          iVar9 = -0x46c04cc9;
        }
        else {
          iVar9 = 0x3e85b6d3;
          if ((iVar3 != -0x15484a1e) && (iVar9 = iVar3, iVar3 == -0x111460be)) {
            _objc_retain(local_120);
            uVar7 = _g_tempFile;
            _g_tempFile = local_120;
            _objc_release(uVar7);
            _objc_release(local_130);
            _objc_release(local_140);
            _NSSearchPathForDirectoriesInDomains(0xd,1,1);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar4,local_138);
            uVar5 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar5,local_128,&cf__vcam_is_mirrored_mark);
            uVar6 = _objc_retainAutoreleasedReturnValue();
            uVar7 = _g_isMirroredMark;
            _g_isMirroredMark = uVar6;
            _objc_release(uVar7);
            _objc_release(uVar5);
            _objc_release(uVar4);
            iVar9 = 0x729bcdd6;
          }
        }
      }
      else if (iVar3 < 0x2438e1c) {
        iVar9 = -0x2a5b65b5;
        if ((iVar3 != -0xece0621) && (iVar9 = iVar3, iVar3 == -0x4a3714d)) {
          _objc_retain(local_a0);
          unaff_w22 = 0;
          unaff_x28 = local_a8;
          iVar9 = -0x2213c47b;
        }
      }
      else if (iVar3 == 0x41aa73f) {
        _CMSampleBufferGetImageBuffer(local_108);
        iVar9 = 0x11f882b1;
      }
      else {
        iVar9 = 0x1bb0de33;
        if ((iVar3 != 0x42dafc7) && (iVar9 = iVar3, iVar3 == 0x2438e1c)) {
          return local_70;
        }
      }
      goto LAB_0004ea3c;
    }
    if (iVar3 < -0x53e47c56) {
      if (iVar3 < -0x703772d4) {
        if (iVar3 < -0x71937053) {
          if (iVar3 == -0x7f936da8) {
            local_b8 = &_OBJC_CLASS___UIImage;
            local_b0 = "imageWithCIImage:scale:orientation:";
            iVar9 = 0x71f36869;
          }
          else if (iVar3 == -0x71db57a9) {
            local_88 = DAT_000a4108;
            iVar9 = -0x6595e26d;
          }
        }
        else if (iVar3 == -0x71937053) {
          iVar9 = 0x25579b48;
        }
        else if (iVar3 == -0x70d675bf) {
          _objc_autorelease(local_70);
          iVar9 = 0x2438e1c;
        }
        goto LAB_0004ea3c;
      }
      if (-0x67902f89 < iVar3) {
        if (iVar3 != -0x67902f88) {
          iVar8 = -0x6595e26d;
          iVar9 = 0x1a48c87b;
          bVar2 = iVar3 == -0x5e1beb00;
          iVar10 = 0x6741283f;
          goto LAB_0004f3e4;
        }
        _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar7,"boolForKey:",&cf_HookWaterMark);
        _objc_release(uVar7);
        iVar9 = 0x53431634;
        goto LAB_0004ea3c;
      }
      iVar8 = -0x703772d4;
      iVar9 = -0x6a632538;
      iVar10 = 0x5cd52945;
    }
    else {
      if (-0x4ba8848e < iVar3) {
        if (iVar3 < -0x46c04cc9) {
          if (iVar3 == -0x4ba8848d) {
            local_b9 = _objc_msgSend(local_c8,local_148,_g_isMirroredMarkxz);
            iVar9 = 0x4148dc47;
          }
          else if (iVar3 == -0x482de2d6) {
            _objc_msgSend(local_118,local_110,0,0);
            iVar9 = 0x78442d90;
          }
        }
        else if (iVar3 == -0x46c04cc9) {
          iVar9 = -0x111460be;
        }
        else if (iVar3 == -0x40784254) {
          local_70 = unaff_x21;
          iVar9 = -0x70d675bf;
        }
        else if (iVar3 == -0x3e345fb1) {
          iVar9 = -0x2a5b65b5;
        }
        goto LAB_0004ea3c;
      }
      if (-0x4fbd347a < iVar3) {
        iVar9 = 0x3e85b6d3;
        if ((iVar3 != -0x4fbd3479) && (iVar9 = iVar3, iVar3 == -0x4c5fbdc9)) {
          local_a8 = _objc_msgSend(0x4000000000000000,local_b8,local_b0,local_e0,2);
          local_a0 = local_a8;
          iVar9 = 0x64da3a93;
        }
        goto LAB_0004ea3c;
      }
      iVar8 = -0x53e47c56;
      iVar9 = -0x53d8b5c0;
      iVar10 = 0x6fa027f8;
    }
    if (iVar3 != iVar9) {
      iVar10 = iVar3;
    }
    iVar9 = -0x71db57a9;
    if (iVar3 != iVar8) {
      iVar9 = iVar10;
    }
    goto LAB_0004ea3c;
  }
  if (iVar3 < 0x3e85b6d3) {
    if (0x1ef47cfe < iVar3) {
      if (iVar3 < 0x25579b48) {
        if (iVar3 < 0x21bb3891) {
          iVar9 = -0x6a632538;
          if ((iVar3 != 0x1ef47cff) && (iVar9 = iVar3, iVar3 == 0x2157a491)) {
            _objc_msgSend(local_e8,local_f0,local_f8);
            _objc_retainAutoreleasedReturnValue();
            iVar9 = 0x55794f8b;
          }
        }
        else if (iVar3 == 0x21bb3891) {
          local_c8 = DAT_000a4070;
          iVar9 = -0x5e1beb00;
        }
        else {
          iVar9 = 0x21bb3891;
          if (iVar3 != 0x22a54c95) {
            iVar9 = iVar3;
          }
        }
      }
      else if (iVar3 < 0x2b193271) {
        if (iVar3 == 0x25579b48) {
          _objc_retain(local_78);
          unaff_x21 = local_80;
          iVar9 = -0x40784254;
        }
        else {
          iVar9 = 0x78442d90;
          if (iVar3 != 0x2918c517) {
            iVar9 = iVar3;
          }
        }
      }
      else if (iVar3 == 0x2b193271) {
        local_140 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
        _objc_retain(local_140);
        local_138 = "firstObject";
        local_130 = _objc_msgSend(local_140,"firstObject");
        _objc_retain(local_130);
        iVar9 = -0x53d8b5c0;
      }
      else {
        iVar9 = -0x6a632538;
        if ((iVar3 != 0x36a55884) && (iVar9 = iVar3, iVar3 == 0x38e11eba)) {
          _objc_msgSend(local_c8,local_148,_g_isMirroredMarkxz);
          iVar9 = -0x4ba8848d;
        }
      }
      goto LAB_0004ea3c;
    }
    if (0x11f882b0 < iVar3) {
      if (iVar3 < 0x1aa44ede) {
        if (iVar3 == 0x11f882b1) {
          local_f8 = _CMSampleBufferGetImageBuffer(local_108);
          local_e8 = &_OBJC_CLASS___CIImage;
          local_f0 = "imageWithCVImageBuffer:";
          iVar9 = -0x3583357f;
        }
        else {
          iVar9 = 0x7fe6abc3;
          if (iVar3 != 0x1a48c87b) {
            iVar9 = iVar3;
          }
        }
      }
      else if (iVar3 == 0x1aa44ede) {
        _NSSearchPathForDirectoriesInDomains(0xd,1,1);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar7,"firstObject");
        _objc_retainAutoreleasedReturnValue();
        iVar9 = 0x2b193271;
      }
      else if (iVar3 == 0x1bb0de33) {
        iVar9 = 0x591aa13;
      }
      else if (iVar3 == 0x1c55a5c2) {
        _objc_msgSend(local_130,local_130,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov)
        ;
        iVar9 = -0x1aca79bb;
      }
      goto LAB_0004ea3c;
    }
    if (iVar3 < 0x76ccdce) {
      if (iVar3 == 0x5542cc3) {
        local_98 = _objc_msgSend(0x4000000000000000,&_OBJC_CLASS___UIImage,
                                 "imageWithCIImage:scale:orientation:",local_e0,0);
        _objc_retain(local_98);
        local_90 = _UIImageJPEGRepresentation(0x3ff0000000000000,local_98);
        iVar9 = -0x1cf775e0;
      }
      else if (iVar3 == 0x591aa13) {
        iVar3 = 0x5542cc3;
        cVar1 = local_b9;
        goto LAB_0004f468;
      }
      goto LAB_0004ea3c;
    }
    iVar8 = 0x76ccdce;
    iVar9 = -0xece0621;
    bVar2 = iVar3 == 0x1129763f;
    iVar10 = -0x20c2f33e;
LAB_0004f3e4:
    if (!bVar2) {
      iVar10 = iVar3;
    }
  }
  else {
    if (iVar3 < 0x64da3a93) {
      if (iVar3 < 0x53431634) {
        if (iVar3 < 0x46179998) {
          iVar8 = 0x3e85b6d3;
          iVar9 = 0x76ccdce;
          bVar2 = iVar3 == 0x4148dc47;
          iVar10 = 0x42dafc7;
          goto LAB_0004f3e4;
        }
        iVar9 = 0x53431634;
        if ((iVar3 != 0x46179998) && (iVar9 = iVar3, iVar3 == 0x48216dc8)) {
          iVar3 = 0x22a54c95;
          cVar1 = local_c9;
LAB_0004f468:
          iVar9 = -0x7f936da8;
          if (cVar1 == '\0') {
            iVar9 = iVar3;
          }
        }
      }
      else if (iVar3 < 0x57c27535) {
        if (iVar3 == 0x53431634) {
          _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
          uVar7 = _objc_retainAutoreleasedReturnValue();
          local_c9 = _objc_msgSend(uVar7,"boolForKey:",&cf_HookWaterMark);
          _objc_release(uVar7);
          iVar9 = 0x48216dc8;
        }
        else if (iVar3 == 0x55794f8b) {
          local_e0 = _objc_msgSend(local_e8,local_f0,local_f8);
          _objc_retain(local_e0);
          local_d8 = local_e0;
          iVar9 = 0x7c7acdfa;
        }
      }
      else {
        iVar9 = 0x1bb0de33;
        if (iVar3 != 0x57c27535) {
          if (iVar3 == 0x5cd52945) {
            iVar9 = -0x2c3d2447;
            if (local_f9 == '\0') {
              iVar9 = -0x53e47c56;
            }
          }
          else {
            iVar9 = iVar3;
            if (iVar3 == 0x601040e1) {
              (*local_88)(param_1,param_2,param_3,param_4);
              iVar9 = 0x7fe6abc3;
            }
          }
        }
      }
      goto LAB_0004ea3c;
    }
    if (0x767bb587 < iVar3) {
      if (iVar3 < 0x799f82dc) {
        if (iVar3 == 0x767bb588) {
          unaff_w22 = 1;
          unaff_x23 = local_90;
          unaff_x28 = local_98;
          iVar9 = -0x2213c47b;
        }
        else if (iVar3 == 0x78442d90) {
          local_108 = _objc_msgSend(local_118,local_110,0,0);
          local_f9 = local_108 != 0;
          iVar9 = 0x799f82dc;
        }
      }
      else if (iVar3 == 0x799f82dc) {
        iVar9 = 0x1ef47cff;
      }
      else if (iVar3 == 0x7c7acdfa) {
        iVar9 = 0x46179998;
      }
      else if (iVar3 == 0x7fe6abc3) {
        local_80 = (*local_88)(param_1,param_2,param_3,param_4);
        local_78 = local_80;
        iVar9 = -0x71937053;
      }
      goto LAB_0004ea3c;
    }
    if (0x6fa027f7 < iVar3) {
      iVar9 = -0x1aca79bb;
      if (((iVar3 != 0x6fa027f8) && (iVar9 = -0x4c5fbdc9, iVar3 != 0x71f36869)) &&
         (iVar9 = iVar3, iVar3 == 0x729bcdd6)) {
        local_118 = &objc::class_t::GetFrame;
        local_110 = "getCurrentFrame::";
        iVar9 = 0x2918c517;
      }
      goto LAB_0004ea3c;
    }
    iVar8 = 0x64da3a93;
    iVar9 = -0x4a3714d;
    iVar10 = -0x4ba8848d;
    if (iVar3 != 0x6741283f) {
      iVar10 = iVar3;
    }
  }
  if (iVar3 != iVar8) {
    iVar9 = iVar10;
  }
  goto LAB_0004ea3c;
}
void FUN_0004f878(undefined8 param_1,undefined8 param_2,undefined8 param_3)
{
  _objc_retain(param_3);
                    // WARNING: Could not recover jumptable at 0x0004f8c4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000a29d0)();
  return;
}
void FUN_0004fef0(void)
{
                    // WARNING: Could not recover jumptable at 0x0004ff28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000a2e20)();
  return;
}
void FUN_00050660(undefined8 param_1,undefined8 param_2,long param_3,long param_4)
{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long local_a8;
  char local_99;
  code *local_98;
  long local_90;
  char local_81;
  undefined8 local_80;
  char *local_78;
  undefined **local_70;
  code *local_68;
  iVar5 = 0x711c811c;
LAB_000506f4:
  while (iVar3 = iVar5, 0xcd830da < iVar3) {
    iVar5 = 0x5b9ddb30;
    if (iVar3 < 0x37fc6631) {
      if (iVar3 < 0x1f87426d) {
        if (iVar3 < 0x1b37e6bf) {
          if (iVar3 == 0xcd830db) {
            (*local_98)(param_1,param_2,param_3,param_4);
            iVar5 = 0x51eb87f9;
          }
          else {
            iVar6 = 0x23233d1a;
            if (iVar3 != 0x149f54e6) {
              iVar6 = iVar3;
            }
            if (iVar3 != 0xfb79f84) {
              iVar5 = iVar6;
            }
          }
        }
        else if (iVar3 < 0x1e27c5a4) {
          if (iVar3 == 0x1b37e6bf) {
            _objc_retain(param_3);
            _objc_retain(param_4);
            local_a8 = param_4;
            iVar5 = -0x18d48f16;
          }
          else {
            iVar5 = -0x3b41c1e;
            if (iVar3 != 0x1d0c5e11) {
              iVar5 = iVar3;
            }
          }
        }
        else {
          iVar5 = -0x5e0c6828;
          if ((iVar3 != 0x1e27c5a4) && (iVar5 = iVar3, iVar3 == 0x1ebf4e8a)) {
            (*local_68)(param_1,param_2,param_3,param_4);
            iVar5 = 0x37fc6631;
          }
        }
      }
      else if (iVar3 < 0x284437d0) {
        iVar5 = -0x3b41c1e;
        if (((iVar3 != 0x1f87426d) && (iVar5 = 0x1b37e6bf, iVar3 != 0x2076392d)) &&
           (iVar5 = iVar3, iVar3 == 0x23233d1a)) {
          local_70 = &PTR___NSConcreteGlobalBlock_000687f0;
          iVar5 = -0x1a959404;
        }
      }
      else {
        if (iVar3 < 0x295485c1) {
          iVar4 = 0x284437d0;
          iVar5 = 0x572417f4;
          bVar1 = iVar3 == 0x28f50cc5;
          iVar6 = -0x5e0c6828;
          goto LAB_000509ec;
        }
        if (iVar3 == 0x295485c1) {
          local_68 = DAT_000a4120;
          iVar5 = 0x5b378b34;
        }
        else {
          iVar5 = 0x295485c1;
          if (iVar3 != 0x31c33b15) {
            iVar5 = iVar3;
          }
        }
      }
    }
    else if (iVar3 < 0x5b378b34) {
      if (iVar3 < 0x4ce4d153) {
        if (iVar3 < 0x4743b340) {
          iVar5 = -0x69156c46;
          if ((iVar3 != 0x37fc6631) && (iVar5 = iVar3, iVar3 == 0x3840fc73)) {
            return;
          }
        }
        else if (iVar3 == 0x4743b340) {
          uVar2 = _imp_implementationWithBlock(local_70,local_70);
          _MSHookMessageEx(local_80,local_78,uVar2,&DAT_000a41a8);
          _objc_release(local_70);
          iVar5 = 0x6c606751;
        }
        else {
          iVar5 = iVar3;
          if (iVar3 == 0x48d0c140) {
            iVar5 = 0x56f3cf1f;
          }
        }
      }
      else if (iVar3 < 0x56f3cf1f) {
        if (iVar3 == 0x4ce4d153) {
          local_80 = _objc_msgSend(param_3,"class");
          local_78 = "captureOutput:didOutputMetadataObjects:fromConnection:";
          iVar5 = -0x266b7911;
        }
        else {
          iVar5 = iVar3;
          if (iVar3 == 0x51eb87f9) {
            (*local_98)(param_1,param_2,param_3,param_4);
            iVar5 = 0x284437d0;
          }
        }
      }
      else if (iVar3 == 0x56f3cf1f) {
        local_81 = local_90 == 0;
        iVar5 = -0x2e5ec8f9;
      }
      else {
        iVar5 = 0x7debfe70;
        if (iVar3 != 0x572417f4) {
          iVar5 = iVar3;
        }
      }
    }
    else if (iVar3 < 0x6c606751) {
      if (iVar3 == 0x5b378b34) {
        iVar5 = 0x1ebf4e8a;
      }
      else if (iVar3 == 0x5b9ddb30) {
        iVar5 = -0x4b688d15;
      }
      else {
        iVar5 = iVar3;
        if (iVar3 == 0x60e3a4f8) {
          _objc_release(param_3);
          iVar5 = -0x683cb2c2;
        }
      }
    }
    else if (iVar3 < 0x7bdd2b03) {
      if (iVar3 == 0x6c606751) {
        uVar2 = _imp_implementationWithBlock(local_70,local_70);
        _MSHookMessageEx(local_80,local_78,uVar2,&DAT_000a41a8);
        _objc_release(local_70);
        iVar5 = -0x49f1bae;
      }
      else if (iVar3 != 0x711c811c) {
        iVar5 = iVar3;
      }
    }
    else if (iVar3 == 0x7bdd2b03) {
      _objc_retain(param_3);
      _objc_retain(param_4);
      iVar5 = 0x1b37e6bf;
    }
    else {
      iVar5 = -0xe54011d;
      if (iVar3 != 0x7debfe70) {
        iVar5 = iVar3;
      }
    }
  }
  if (iVar3 < -0x2aaed15d) {
    if (iVar3 < -0x5fb1a6fe) {
      iVar5 = -0x65f8bf09;
      if (iVar3 < -0x683cb2c2) {
        if (iVar3 == -0x7d730e3c) {
          iVar5 = 0x1e27c5a4;
          if (local_99 == '\0') {
            iVar5 = -0x4a23aea3;
          }
        }
        else {
          iVar6 = 0xbec9486;
          if (iVar3 != -0x69156c46) {
            iVar6 = iVar3;
          }
          if (iVar3 != -0x7778fff2) {
            iVar5 = iVar6;
          }
        }
      }
      else {
        if (iVar3 < -0x65f8bf09) {
          iVar4 = -0x683cb2c2;
          iVar5 = 0x3840fc73;
          bVar1 = iVar3 == -0x668b81d9;
          iVar6 = 0x51eb87f9;
          goto LAB_000509ec;
        }
        if (iVar3 == -0x65f8bf09) {
          local_99 = param_3 == 0 || param_4 == 0;
          iVar5 = -0x7d730e3c;
        }
        else if (iVar3 != -0x62e7a468) {
          iVar5 = iVar3;
        }
      }
      goto LAB_000506f4;
    }
    if (iVar3 < -0x4b2c617a) {
      iVar5 = 0x7debfe70;
      if (iVar3 != -0x5fb1a6fe) {
        if (iVar3 == -0x5e0c6828) {
          local_98 = DAT_000a4120;
          iVar5 = -0x40a62cd;
        }
        else {
          iVar5 = 0x2076392d;
          if (iVar3 != -0x4b688d15) {
            iVar5 = iVar3;
          }
        }
      }
      goto LAB_000506f4;
    }
    if (iVar3 < -0x2e5ec8f9) {
      iVar5 = 0x60e3a4f8;
      if ((iVar3 != -0x4b2c617a) && (iVar5 = iVar3, iVar3 == -0x4a23aea3)) {
        local_90 = DAT_000a41a8;
        iVar5 = -0x2aaed15d;
      }
      goto LAB_000506f4;
    }
    iVar4 = -0x2e5ec8f9;
    iVar5 = 0x1d0c5e11;
    iVar6 = 0x295485c1;
    if (iVar3 != -0x2b01f2a0) {
      iVar6 = iVar3;
    }
  }
  else {
    if (iVar3 < -0xe54011d) {
      if (iVar3 < -0x1cb227a6) {
        iVar5 = 0x56f3cf1f;
        if (iVar3 != -0x2aaed15d) {
          if (iVar3 == -0x29747c0c) {
            _objc_release(local_a8);
            iVar5 = -0x4b2c617a;
          }
          else {
            iVar5 = 0x23233d1a;
            if (iVar3 != -0x266b7911) {
              iVar5 = iVar3;
            }
          }
        }
      }
      else if (iVar3 < -0x18d48f16) {
        iVar6 = -0x1cb227a6;
        if (iVar3 != -0x1a959404) {
          iVar6 = iVar3;
        }
        iVar5 = 0x6c606751;
        if (iVar3 != -0x1cb227a6) {
          iVar5 = iVar6;
        }
      }
      else if (iVar3 == -0x18d48f16) {
        iVar5 = -0x7778fff2;
      }
      else {
        iVar5 = iVar3;
        if ((iVar3 == -0x10e8dd6b) && (iVar5 = 0x4ce4d153, local_81 == '\0')) {
          iVar5 = -0x2b01f2a0;
        }
      }
      goto LAB_000506f4;
    }
    iVar5 = -0x29747c0c;
    if (iVar3 < -0x3b41c1e) {
      iVar6 = -0x668b81d9;
      if (iVar3 != -0x40a62cd) {
        iVar6 = iVar3;
      }
      iVar4 = -0x2b01f2a0;
      if (iVar3 != -0x49f1bae) {
        iVar4 = iVar6;
      }
      if (iVar3 != -0xe54011d) {
        iVar5 = iVar4;
      }
      goto LAB_000506f4;
    }
    if (0x826e3d6 < iVar3) {
      if (iVar3 == 0x826e3d7) {
        _objc_release(param_3);
        iVar5 = 0x60e3a4f8;
      }
      else if (iVar3 != 0xbec9486) {
        iVar5 = iVar3;
      }
      goto LAB_000506f4;
    }
    iVar4 = -0x3b41c1e;
    iVar5 = -0x10e8dd6b;
    bVar1 = iVar3 == 0x1ff6228;
    iVar6 = -0x69156c46;
LAB_000509ec:
    if (!bVar1) {
      iVar6 = iVar3;
    }
  }
  if (iVar3 != iVar4) {
    iVar5 = iVar6;
  }
  goto LAB_000506f4;
}
void FUN_00050f90(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  iVar1 = 0x4d98e3c0;
  do {
    while( true ) {
      while (iVar4 = iVar1, iVar4 < -0x3eae73a5) {
        iVar2 = -0xd8be78;
        if (iVar4 != -0x61c820ca) {
          iVar2 = iVar4;
        }
        iVar1 = -0x61c820ca;
        if (iVar4 != -0x63b1ff5c) {
          iVar1 = iVar2;
        }
        iVar2 = -0x4e43f5c;
        if (iVar4 != -0x6f17565e) {
          iVar2 = iVar4;
        }
        iVar3 = -0x3eae73a5;
        if (iVar4 != -0x7310aa57) {
          iVar3 = iVar2;
        }
        if (iVar4 < -0x63b1ff5c) {
          iVar1 = iVar3;
        }
      }
      if (-0xd8be79 < iVar4) break;
      if (iVar4 == -0x3eae73a5) {
        iVar1 = -0x6f17565e;
      }
      else {
        iVar1 = iVar4;
        if (iVar4 == -0x4e43f5c) {
          _AudioServicesPlaySystemSound(0x5f0);
          _ui_selectVideo();
          iVar1 = 0x30dd41d1;
        }
      }
    }
    iVar1 = -0x61c820ca;
  } while (((iVar4 == 0x30dd41d1) || (iVar1 = -0x3eae73a5, iVar4 == 0x4d98e3c0)) ||
          (iVar1 = iVar4, iVar4 != -0xd8be78));
  return;
}
void FUN_000510d8(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_b0;
  undefined8 local_a8;
  char *local_a0;
  char local_91;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  iVar3 = -0x3677d98b;
  do {
    while( true ) {
      while( true ) {
        while (iVar1 = iVar3, iVar3 = iVar1, iVar1 < 0xf50f8f3) {
          if (iVar1 < -0x2ac4a0b8) {
            if (iVar1 < -0x494c195a) {
              if (iVar1 < -0x5ea9f4ec) {
                iVar2 = 0x669323cc;
                if (iVar1 != -0x5f6a8bc5) {
                  iVar2 = iVar1;
                }
                iVar3 = 0x323a388c;
                if (iVar1 != -0x78e0631e) {
                  iVar3 = iVar2;
                }
              }
              else if (iVar1 == -0x5ea9f4ec) {
                local_91 = _objc_msgSend(local_b0,local_a0,local_a8);
                iVar3 = -0x4005c7a0;
              }
              else {
                iVar3 = 0x306f4da3;
                if (iVar1 != -0x570a0da9) {
                  iVar3 = iVar1;
                }
              }
            }
            else if (iVar1 < -0x4005c7a0) {
              if (iVar1 == -0x494c195a) {
                iVar3 = -0x570a0da9;
                if (local_91 == '\0') {
                  iVar3 = -0x5f6a8bc5;
                }
              }
              else if (iVar1 == -0x424eea12) {
                _AudioServicesPlaySystemSound(0x5f1);
                iVar3 = 0x735d4a6c;
              }
            }
            else if (iVar1 == -0x4005c7a0) {
              iVar3 = -0x494c195a;
            }
            else {
              iVar3 = 0x7fc7a659;
              if ((iVar1 != -0x3677d98b) && (iVar3 = iVar1, iVar1 == -0x2d3dcfc3)) {
                _objc_msgSend(local_70,
                              "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
                              local_68,1,0,0);
                iVar3 = 0x1e445201;
              }
            }
          }
          else if (iVar1 < -0x1c94f014) {
            if (iVar1 < -0x227fa097) {
              if (iVar1 == -0x2ac4a0b8) {
                local_78 = local_90;
                local_80 = "removeItemAtPath:error:";
                iVar3 = 0x67a3cf1e;
              }
              else {
                iVar3 = 0x2c55086d;
                if (iVar1 != -0x2a12064d) {
                  iVar3 = iVar1;
                }
              }
            }
            else if (iVar1 == -0x227fa097) {
              _objc_msgSend(local_b0,local_a0,local_a8);
              iVar3 = -0x5ea9f4ec;
            }
            else {
              iVar3 = -0x5222663;
              if (iVar1 != -0x2191e729) {
                iVar3 = iVar1;
              }
            }
          }
          else if (iVar1 < -0x13093064) {
            iVar2 = -0x5ea9f4ec;
            if (iVar1 != -0x15cfde90) {
              iVar2 = iVar1;
            }
            iVar3 = 0x735d4a6c;
            if (iVar1 != -0x1c94f014) {
              iVar3 = iVar2;
            }
          }
          else if (iVar1 == -0x13093064) {
            iVar3 = 0x682d4842;
          }
          else {
            iVar3 = 0x323a388c;
            if ((iVar1 != -0x5222663) && (iVar3 = iVar1, iVar1 == -0x67d3330)) {
              return;
            }
          }
        }
        if (iVar1 < 0x438e736f) break;
        if (iVar1 < 0x682d4842) {
          if (iVar1 < 0x669323cc) {
            iVar2 = -0x2ac4a0b8;
            if (iVar1 != 0x5d3f2e25) {
              iVar2 = iVar1;
            }
            iVar3 = -0x1c94f014;
            if (iVar1 != 0x438e736f) {
              iVar3 = iVar2;
            }
          }
          else if (iVar1 == 0x669323cc) {
            local_70 = DAT_000a4070;
            local_68 = _g_isMirroredMarkxz;
            iVar3 = -0x13093064;
          }
          else if (iVar1 == 0x67a3cf1e) {
            _objc_msgSend(local_78,local_80,local_88,0);
            iVar3 = -0x1c94f014;
          }
        }
        else if (iVar1 < 0x733509cf) {
          iVar2 = 0x669323cc;
          if (iVar1 != 0x6cfde338) {
            iVar2 = iVar1;
          }
          iVar3 = -0x2d3dcfc3;
          if (iVar1 != 0x682d4842) {
            iVar3 = iVar2;
          }
        }
        else {
          iVar3 = 0x306f4da3;
          if (iVar1 != 0x733509cf) {
            if (iVar1 == 0x735d4a6c) {
              _AudioServicesPlaySystemSound(0x5f1);
              iVar3 = -0x2191e729;
            }
            else {
              iVar3 = iVar1;
              if (iVar1 == 0x7fc7a659) {
                _AudioServicesPlaySystemSound(0x5f1);
                local_b0 = DAT_000a4070;
                local_a8 = _g_isMirroredMarkxz;
                local_a0 = "fileExistsAtPath:";
                iVar3 = 0xf50f8f3;
              }
            }
          }
        }
      }
      if (0x2e1fcda2 < iVar1) break;
      if (iVar1 < 0x1e445201) {
        if (iVar1 == 0xf50f8f3) {
          iVar3 = -0x15cfde90;
        }
        else if (iVar1 == 0xfb723b8) {
          _objc_msgSend(local_70,
                        "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
                        local_68,1,0,0);
          iVar3 = -0x2d3dcfc3;
        }
      }
      else {
        iVar2 = 0x1e445201;
        iVar3 = 0x3e073530;
        iVar4 = 0x438e736f;
        if (iVar1 != 0x2c55086d) {
          iVar4 = iVar1;
        }
LAB_000515bc:
        if (iVar1 != iVar2) {
          iVar3 = iVar4;
        }
      }
    }
    if (0x323a388b < iVar1) {
      iVar2 = 0x323a388c;
      iVar3 = -0x67d3330;
      iVar4 = 0x2c55086d;
      if (iVar1 != 0x3e073530) {
        iVar4 = iVar1;
      }
      goto LAB_000515bc;
    }
    if (iVar1 == 0x2e1fcda3) {
      _AudioServicesPlaySystemSound(0x5f1);
      iVar3 = 0x7fc7a659;
    }
    else if (iVar1 == 0x306f4da3) {
      local_90 = DAT_000a4070;
      local_88 = _g_isMirroredMarkxz;
      iVar3 = 0x5d3f2e25;
    }
  } while( true );
}
void FUN_000516c4(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  iVar1 = -0x564d521d;
  do {
    while( true ) {
      while( true ) {
        while (iVar7 = iVar1, iVar7 < 0x60460dd) {
          iVar2 = -0x11dc8705;
          if (iVar7 != -0xd5c9c18) {
            iVar2 = iVar7;
          }
          iVar1 = 0x14e275c8;
          if (iVar7 != -0x11dc8705) {
            iVar1 = iVar2;
          }
          iVar2 = 0xcd05f9e;
          if (iVar7 != -0x3d478a4d) {
            iVar2 = iVar7;
          }
          iVar3 = 0xa94c49c;
          if (iVar7 != -0x564d521d) {
            iVar3 = iVar2;
          }
          if (iVar7 < -0x11dc8705) {
            iVar1 = iVar3;
          }
        }
        if (0xcd05f9d < iVar7) break;
        if (iVar7 == 0x60460dd) {
          _objc_retain(local_68);
          _objc_msgSend(local_68,"rootViewController");
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_release(local_68);
          _objc_release(local_70);
          _objc_msgSend(uVar4,"dismissViewControllerAnimated:completion:",1,0);
          _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_prefs_root_w2Pro);
          _objc_retainAutoreleasedReturnValue();
          iVar1 = 0x14e275c8;
        }
        else {
          iVar1 = iVar7;
          if (iVar7 == 0xa94c49c) {
            local_70 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
            _objc_retain(local_70);
            local_68 = _objc_msgSend(local_70,"keyWindow");
            iVar1 = -0xd5c9c18;
          }
        }
      }
      if (iVar7 != 0x14e275c8) break;
      _objc_retain(local_68);
      local_60 = _objc_msgSend(local_68,"rootViewController");
      _objc_retain(local_60);
      _objc_release(local_68);
      _objc_release(local_70);
      _objc_msgSend(local_60,"dismissViewControllerAnimated:completion:",1,0);
      local_58 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_prefs_root_w2Pro);
      _objc_retain(local_58);
      iVar1 = -0x3d478a4d;
    }
    iVar1 = 0xa94c49c;
  } while ((iVar7 == 0x343dbdf6) || (iVar1 = iVar7, iVar7 != 0xcd05f9e));
  _objc_msgSend(&_OBJC_CLASS___NSCharacterSet,"URLFragmentAllowedCharacterSet");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(local_58,"stringByAddingPercentEncodingWithAllowedCharacters:",uVar4);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSURL,"URLWithString:",uVar5);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  FUN_0005e1d8(uVar6);
  _objc_release(uVar6);
  _objc_release(local_58);
  _objc_release(local_60);
  return;
}
void FUN_000519dc(void)
{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  dispatch_time_t dVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 unaff_x25;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 auStack_360 [8];
  char *local_358;
  char *local_350;
  char *local_348;
  char *local_340;
  char *local_338;
  char *local_330;
  char *local_328;
  char *local_320;
  char *local_318;
  char *local_310;
  char *local_308;
  char *local_300;
  char *local_2f8;
  undefined8 *local_2f0;
  char *local_2e8;
  undefined8 local_2e0;
  char *local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  char *local_2b0;
  char local_2a1;
  undefined8 local_2a0;
  undefined8 local_298;
  char local_289;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  char *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  char *local_228;
  undefined8 local_220;
  undefined8 local_218;
  char *local_210;
  undefined8 local_208;
  char *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  char local_1d9;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  char *local_170;
  undefined8 local_168;
  char *local_160;
  undefined8 local_158;
  char *local_150;
  undefined8 local_148;
  char *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  char local_119;
  undefined8 local_118;
  char local_109;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  char local_d9;
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  char local_a1;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  puVar3 = (undefined8 *)auStack_360;
  local_300 = "dismissViewControllerAnimated:completion:";
  local_2f8 = "presentViewController:animated:completion:";
  local_310 = "sharedApplication";
  local_308 = "stringWithFormat:";
  local_320 = "rootViewController";
  local_318 = "keyWindow";
  local_330 = "stringByAppendingPathComponent:";
  local_328 = "firstObject";
  local_340 = "alertControllerWithTitle:message:preferredStyle:";
  local_338 = "fileExistsAtPath:";
  local_350 = "objectForKey:";
  local_348 = "infoDictionary";
  local_358 = "objectForInfoDictionaryKey:";
  iVar9 = -0x65a1b8b1;
LAB_00051a9c:
  while( true ) {
    while (iVar4 = iVar9, iVar9 = iVar4, iVar4 < -0x115c28af) {
      if (iVar4 < -0x479fd28a) {
        if (iVar4 < -0x674b5d4e) {
          if (iVar4 < -0x75294fdf) {
            if (iVar4 < -0x79e879de) {
              if (iVar4 < -0x7ef9fe24) {
                if (iVar4 == -0x7fdfb670) {
                  _objc_msgSend(DAT_000a4070,local_2b0,_g_isMirroredMarkfbs);
                  iVar9 = -0x379ddaee;
                }
                else if (iVar4 == -0x7f7797e7) {
                  iVar9 = -0x4ba72286;
                }
              }
              else if (iVar4 == -0x7ef9fe24) {
                local_280 = _g_tempFilestep2;
                iVar9 = -0x170e40a6;
              }
              else if (iVar4 == -0x7a2d2a63) {
                local_289 = _objc_msgSend(local_298,local_2b0,local_2a0);
                iVar9 = 0x43fafcae;
              }
              else if (iVar4 == -0x79f38b65) {
                iVar9 = 0x2a9ac93c;
              }
            }
            else if (iVar4 < -0x77aacc4a) {
              iVar9 = -0x4132e261;
              if (iVar4 != -0x79e879de) {
                if (iVar4 == -0x792d5d9e) {
                  _objc_retain(local_d8);
                  iVar9 = -0x5d0f8a7b;
                }
                else {
                  iVar9 = iVar4;
                  if (iVar4 == -0x782d3aeb) {
                    _objc_retain(local_1b8);
                    _objc_msgSend(local_1b8,local_210);
                    uVar8 = _objc_retainAutoreleasedReturnValue();
                    _objc_msgSend(uVar8,local_200,&cf__w2avfictitiousCaches_mov);
                    _objc_retainAutoreleasedReturnValue();
                    iVar9 = -0x191a859b;
                  }
                }
              }
            }
            else if (iVar4 == -0x77aacc4a) {
              iVar4 = _objc_msgSend(DAT_000a4070,local_2b0,_g_isenabledw2ProChinese);
              unaff_x28 = local_98;
              iVar9 = -0x498e7a96;
              if (iVar4 == 0) {
                iVar9 = 0x1856c28d;
              }
            }
            else if (iVar4 == -0x76bc34bf) {
              iVar9 = 0x63ae54ec;
            }
            else if (iVar4 == -0x75c25cd0) {
              iVar9 = 0x39a3bc60;
              if (local_2a1 == '\0') {
                iVar9 = -0x65d37cfd;
              }
            }
          }
          else if (iVar4 < -0x70e8286a) {
            if (iVar4 < -0x733011e9) {
              if (iVar4 == -0x75294fdf) {
                unaff_x25 = local_130;
                iVar9 = -0x4e391623;
                if (local_119 == '\0') {
                  iVar9 = 0x7000249f;
                }
              }
              else if (iVar4 == -0x7487cfa7) {
                _NSSearchPathForDirectoriesInDomains(0xd,1,1);
                uVar8 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar8,local_210);
                uVar8 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar8,local_200,&cf__w2avfictitiousCaches_mov);
                _objc_retainAutoreleasedReturnValue();
                iVar9 = -0x14577964;
              }
              else if (iVar4 == -0x7441dd76) {
                iVar9 = -0x2b5afc75;
              }
            }
            else {
              iVar9 = 0x130b845f;
              if (((iVar4 != -0x733011e9) && (iVar9 = -0x378f88c5, iVar4 != -0x7308cd12)) &&
                 (iVar9 = iVar4, iVar4 == -0x71610231)) {
                iVar9 = -0x733011e9;
              }
            }
          }
          else if (iVar4 < -0x6eeb2d60) {
            if (iVar4 == -0x70e8286a) {
              _objc_release(local_f8);
              local_e8 = DAT_000a4070;
              local_f0 = _g_isenabledw2ProChinese;
              iVar9 = 0x142dcf49;
            }
            else if (iVar4 == -0x704a3c6a) {
              local_1d8 = DAT_000a4070;
              local_1d0 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
              _objc_retain(local_1d0);
              local_1c8 = _objc_msgSend(local_1d0,local_210);
              iVar9 = 0x6fdce022;
            }
            else if (iVar4 == -0x6ffa2372) {
              unaff_x27 = local_d0;
              iVar9 = 0xa911b26;
            }
          }
          else {
            iVar9 = -0x7ef9fe24;
            if (iVar4 != -0x6eeb2d60) {
              if (iVar4 == -0x69a3dbfb) {
                iVar9 = -0x77aacc4a;
              }
              else {
                iVar9 = iVar4;
                if (iVar4 == -0x693c32db) {
                  uVar8 = DAT_000a4070;
                  local_218 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
                  _objc_retain(local_218);
                  local_210 = local_328;
                  local_208 = _objc_msgSend(local_218,local_328);
                  _objc_retain(local_208);
                  local_200 = local_330;
                  local_1f8 = _objc_msgSend(local_208,local_330,&cf__w2avfictitious_mov);
                  local_1f0 = local_1f8;
                  _objc_retain(local_1f8);
                  local_1e8 = uVar8;
                  iVar9 = -0x44f10d0f;
                }
              }
            }
          }
        }
        else if (iVar4 < -0x586f6de5) {
          if (iVar4 < -0x6183d047) {
            if (iVar4 < -0x65a1b8b1) {
              iVar9 = 0x21c3ddb7;
              if ((iVar4 != -0x674b5d4e) && (iVar9 = iVar4, iVar4 == -0x65d37cfd)) {
                iVar9 = -0x693c32db;
              }
            }
            else {
              iVar9 = -0x62127477;
              if (((iVar4 != -0x65a1b8b1) && (iVar9 = -0x14577964, iVar4 != -0x6481ab51)) &&
                 (iVar9 = iVar4, iVar4 == -0x62127477)) {
                puVar3 = puVar3 + -6;
                local_2e8 = "mainBundle";
                local_2f0 = puVar3;
                local_2e0 = _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
                _objc_retain(local_2e0);
                local_2d8 = local_358;
                iVar9 = 0x1b9a4de3;
              }
            }
          }
          else if (iVar4 < -0x5d0f8a7b) {
            iVar9 = -0x378f88c5;
            if (((iVar4 != -0x6183d047) && (iVar9 = -0x432c25b0, iVar4 != -0x6006fd55)) &&
               (iVar9 = iVar4, iVar4 == -0x5da8e6dd)) {
              local_2d0 = _objc_msgSend(local_2e0,local_2d8,&cf_CFBundleDisplayName);
              _objc_retain(local_2d0);
              local_2c8 = local_2d0;
              _objc_release(local_2e0);
              _objc_msgSend(&_OBJC_CLASS___NSBundle,local_2e8);
              uVar8 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar8,local_348);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              local_2c0 = _objc_msgSend(uVar5,local_350,&cf_CFBundleIdentifier);
              _objc_retain(local_2c0);
              local_2b8 = local_2c0;
              _objc_release(uVar5);
              _objc_release(uVar8);
              _AudioServicesPlaySystemSound(0x5f1);
              iVar9 = -0x3c535c72;
            }
          }
          else if (iVar4 == -0x5d0f8a7b) {
            _objc_retain(local_d8);
            local_d0 = local_d8;
            iVar9 = -0x71610231;
          }
          else {
            iVar9 = -0xda04e3c;
            if ((iVar4 != -0x5c9eba14) && (iVar9 = iVar4, iVar4 == -0x5bcfd795)) {
              iVar9 = -0x6eeb2d60;
            }
          }
        }
        else if (iVar4 < -0x4dca9db1) {
          if (iVar4 < -0x52652785) {
            if (iVar4 == -0x586f6de5) {
              iVar9 = -0x6183d047;
              if (local_289 == '\0') {
                iVar9 = 0x398f3503;
              }
            }
            else {
              iVar9 = 0x7d119aca;
              if ((iVar4 != -0x554df0e1) && (iVar9 = iVar4, iVar4 == -0x533a969d)) {
                iVar9 = -0x3e48b910;
              }
            }
          }
          else if (iVar4 == -0x52652785) {
            iVar9 = -0x133ecca8;
          }
          else {
            iVar9 = 0xc0c6a15;
            if ((iVar4 != -0x4ff51c11) && (iVar9 = iVar4, iVar4 == -0x4e391623)) {
              local_80 = unaff_x25;
              iVar9 = -0x379ddaee;
            }
          }
        }
        else if (iVar4 < -0x49f96f7e) {
          if (iVar4 == -0x4dca9db1) {
            _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
            _objc_retainAutoreleasedReturnValue();
            iVar9 = -0x62127477;
          }
          else {
            iVar9 = 0x6d138715;
            if ((iVar4 != -0x4bfba202) && (iVar9 = iVar4, iVar4 == -0x4ba72286)) {
              _objc_release(local_1d0);
              iVar9 = -0x61d9417;
            }
          }
        }
        else {
          iVar9 = 0x1d125e40;
          if (iVar4 != -0x49f96f7e) {
            if (iVar4 == -0x498e7a96) {
              local_70 = unaff_x28;
              iVar9 = 0x3481b2fd;
            }
            else {
              iVar9 = iVar4;
              if (iVar4 == -0x494029dd) {
                _objc_msgSend(&_OBJC_CLASS___UIApplication,local_170);
                uVar8 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar8,local_160);
                uVar5 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar5,local_150);
                uVar6 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar6,local_2f8,local_70,1,0);
                _objc_release(uVar6);
                _objc_release(uVar5);
                _objc_release(uVar8);
                dVar7 = _dispatch_time(0,2500000000);
                *local_2f0 = PTR___NSConcreteStackBlock_00068030;
                *(undefined4 *)(local_2f0 + 1) = 0xc2000000;
                *(undefined4 *)((long)local_2f0 + 0xc) = 0;
                local_2f0[2] = FUN_0005ec40;
                local_2f0[3] = &DAT_00068360;
                uVar8 = local_70;
                puVar1 = local_2f0;
                local_2f0[4] = local_70;
                puVar2 = local_2f0;
                uVar8 = _objc_retain(uVar8);
                _dispatch_after(dVar7,PTR___dispatch_main_q_00068058,puVar2);
                _objc_release(puVar1[4]);
                _objc_release(uVar8);
                _objc_release(local_78);
                _objc_release(local_148);
                _objc_release(local_2c0);
                _objc_release(local_2d0);
                iVar9 = 0x3481b2fd;
              }
            }
          }
        }
      }
      else if (iVar4 < -0x2b8afed9) {
        if (iVar4 < -0x3c535c72) {
          if (iVar4 < -0x432c25b0) {
            if (iVar4 < -0x46f437e5) {
              if (iVar4 == -0x479fd28a) {
                _objc_msgSend(&_OBJC_CLASS___UIApplication,local_310);
                uVar8 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar8,local_318);
                uVar8 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar8,local_320);
                iVar9 = -0x1661e16a;
              }
              else if (iVar4 == -0x47610e33) {
                puVar3[-2] = local_2b8;
                puVar3[-1] = local_2c8;
                _objc_msgSend(&_OBJC_CLASS___NSString,local_140,&cf_____Virtualfilesdeleted);
                iVar9 = 0x58b65401;
              }
              else if (iVar4 == -0x46fea8c8) {
                iVar9 = -0x52652785;
              }
            }
            else if (iVar4 == -0x46f437e5) {
              local_119 = _objc_msgSend(local_128,local_2b0,_g_isenabledw2ProChinese);
              iVar9 = -0x75294fdf;
            }
            else if (iVar4 == -0x45d315a8) {
              _objc_msgSend(local_198,"removeItemAtPath:error:",local_180,0);
              _objc_release(local_178);
              _objc_release(local_188);
              _objc_release(local_190);
              iVar9 = 0x38ebf63e;
            }
            else if (iVar4 == -0x44f10d0f) {
              iVar9 = -0x2c01de53;
            }
          }
          else if (iVar4 < -0x4132e261) {
            if (iVar4 == -0x432c25b0) {
              puVar3[-2] = local_2b8;
              puVar3[-1] = local_2c8;
              local_108 = _objc_msgSend(&_OBJC_CLASS___NSString,local_140,&cf_newline_s_);
              _objc_retain(local_108);
              local_100 = local_108;
              local_f8 = local_80;
              iVar9 = -0x7441dd76;
            }
            else if (iVar4 == -0x421fae59) {
              _objc_release(local_208);
              _objc_release(local_218);
              iVar9 = 0x5de97264;
              if (local_1d9 == '\0') {
                iVar9 = 0x6fe98bd2;
              }
            }
            else if (iVar4 == -0x41da3475) {
              _objc_msgSend(local_128,local_2b0,_g_isenabledw2ProChinese);
              goto LAB_00053298;
            }
          }
          else if (iVar4 == -0x4132e261) {
            local_d9 = _objc_msgSend(local_e8,local_2b0,local_f0);
            iVar9 = -0x13cccbb9;
          }
          else {
            iVar9 = -0x52652785;
            if ((iVar4 != -0x3e48b910) && (iVar9 = iVar4, iVar4 == -0x3df94c9e)) {
              return;
            }
          }
        }
        else if (iVar4 < -0x33eda65c) {
          if (iVar4 < -0x378f88c5) {
            iVar9 = 0x2fe1cf3a;
            if (iVar4 != -0x3c535c72) {
              if (iVar4 == -0x39a9e406) {
                _objc_release(local_a0,local_b8);
                iVar9 = -0x270358e4;
              }
              else {
                iVar9 = iVar4;
                if (iVar4 == -0x379ddaee) {
                  local_109 = _objc_msgSend(DAT_000a4070,local_2b0,_g_isMirroredMarkfbs);
                  iVar9 = -0x15fde445;
                }
              }
            }
          }
          else if (iVar4 == -0x378f88c5) {
            local_288 = DAT_000a4070;
            iVar9 = -0x5bcfd795;
          }
          else {
            iVar9 = 0xc0c6a15;
            if ((iVar4 != -0x3686c312) && (iVar9 = iVar4, iVar4 == -0x357b4876)) {
              iVar9 = 0x7dd1268f;
            }
          }
        }
        else if (iVar4 < -0x2ce64e3b) {
          if (iVar4 == -0x33eda65c) {
            iVar9 = -0x421fae59;
          }
          else if (iVar4 == -0x3375271c) {
            iVar9 = -0x115c28af;
          }
          else if (iVar4 == -0x2d45fa68) {
            iVar9 = 0x487476b7;
          }
        }
        else if (iVar4 == -0x2ce64e3b) {
          iVar9 = 0x6d138715;
        }
        else if (iVar4 == -0x2c7239c7) {
          iVar9 = 0x683c7d88;
        }
        else if (iVar4 == -0x2c01de53) {
          iVar9 = 0x69ea1a63;
        }
      }
      else if (iVar4 < -0x20731938) {
        if (iVar4 < -0x29c8320c) {
          if (iVar4 < -0x2b5b72d1) {
            if (iVar4 == -0x2b8afed9) {
              _objc_msgSend(&_OBJC_CLASS___NSString,local_140,&cf_GlobalVirtualFilesdeleted);
              local_118 = _objc_retainAutoreleasedReturnValue();
              iVar9 = 0x3d215df0;
            }
            else {
              iVar9 = 0x56bb6386;
              if (iVar4 != -0x2b75ddfa) {
                iVar9 = iVar4;
              }
            }
          }
          else if (iVar4 == -0x2b5b72d1) {
            iVar4 = _objc_msgSend(local_268,local_2b0,local_270);
            iVar9 = 0x58013e23;
            if (iVar4 == 0) {
              iVar9 = -0x21bf8482;
            }
          }
          else {
            iVar9 = -0x70e8286a;
            if ((iVar4 != -0x2b5afc75) && (iVar9 = iVar4, iVar4 == -0x29f7f384)) {
              _NSSearchPathForDirectoriesInDomains(0xd,1,1);
              uVar8 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar8,local_328);
              uVar8 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar8,local_330,&cf__w2avfictitious_mov);
              _objc_retainAutoreleasedReturnValue();
              iVar9 = -0x693c32db;
            }
          }
        }
        else if (iVar4 < -0x243e582c) {
          iVar9 = 0xa1c975f;
          if (((iVar4 != -0x29c8320c) && (iVar9 = 0x693aee93, iVar4 != -0x292a1313)) &&
             (iVar9 = iVar4, iVar4 == -0x270358e4)) {
            local_98 = local_a0;
            _objc_release(local_b8);
            iVar9 = -0x69a3dbfb;
          }
        }
        else if (iVar4 == -0x243e582c) {
          _objc_release(local_138);
          iVar9 = -0x533a969d;
        }
        else if (iVar4 == -0x2308f3ba) {
          _objc_msgSend(local_248,local_250,local_258,0);
          iVar9 = -0x21bf8482;
        }
        else if (iVar4 == -0x21bf8482) {
          iVar9 = 0x5c3072b1;
        }
      }
      else if (iVar4 < -0x15fde445) {
        if (iVar4 < -0x170e40a6) {
          iVar9 = -0x5d0f8a7b;
          if (iVar4 != -0x20731938) {
            if (iVar4 == -0x191a859b) {
              _objc_retain(local_1b8);
              local_1b0 = _objc_msgSend(local_1b8,local_210);
              _objc_retain(local_1b0);
              local_1a8 = _objc_msgSend(local_1b0,local_1b0,local_200,&cf__w2avfictitiousCaches_mov)
              ;
              local_1a0 = local_1a8;
              _objc_retain(local_1a8);
              iVar9 = 0x7776f7fc;
            }
            else {
              iVar9 = iVar4;
              if (iVar4 == -0x1918778a) {
                iVar9 = 0x34d892f2;
              }
            }
          }
        }
        else if (iVar4 == -0x170e40a6) {
          iVar9 = 0x5abb111f;
        }
        else if (iVar4 == -0x17086855) {
          _objc_release(local_c0);
          _objc_msgSend(DAT_000a4070,local_2b0,_g_isMirroredMarkfbs);
          iVar9 = 0x14534c95;
        }
        else if (iVar4 == -0x1661e16a) {
          local_170 = local_310;
          local_168 = _objc_msgSend(&_OBJC_CLASS___UIApplication,local_310);
          _objc_retain(local_168);
          local_160 = local_318;
          local_158 = _objc_msgSend(local_168,local_318);
          _objc_retain(local_158);
          local_150 = local_320;
          local_148 = _objc_msgSend(local_158,local_320);
          iVar9 = 0x53763759;
        }
      }
      else if (iVar4 < -0x133ecca8) {
        if (iVar4 == -0x15fde445) {
          unaff_x27 = local_80;
          iVar9 = 0xa911b26;
          if (local_109 == '\0') {
            iVar9 = -0x6006fd55;
          }
        }
        else if (iVar4 == -0x14577964) {
          local_190 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          _objc_retain(local_190);
          local_188 = _objc_msgSend(local_190,local_210);
          _objc_retain(local_188);
          local_180 = _objc_msgSend(local_188,local_188,local_200,&cf__w2avfictitiousCaches_mov);
          local_178 = local_180;
          _objc_retain(local_180);
          iVar9 = -0x12bf9981;
        }
        else if (iVar4 == -0x13cccbb9) {
          unaff_x27 = local_100;
          iVar9 = 0xa911b26;
          if (local_d9 == '\0') {
            iVar9 = 0x4150d8c7;
          }
        }
      }
      else if (iVar4 == -0x133ecca8) {
        unaff_x25 = local_118;
        iVar9 = -0x4e391623;
      }
      else if (iVar4 == -0x12bf9981) {
        iVar9 = -0x45d315a8;
      }
      else if (iVar4 == -0x122a060d) {
        iVar9 = 0x6ddc2fa2;
      }
    }
    if (0x424323d5 < iVar4) break;
    if (iVar4 < 0x1d29f321) {
      if (iVar4 < 0x9ff8359) {
        if (iVar4 < -0x80cd9c5) {
          if (iVar4 < -0xd046398) {
            iVar9 = -0x270358e4;
            if ((iVar4 != -0x115c28af) && (iVar9 = iVar4, iVar4 == -0xda04e3c)) {
              local_278 = DAT_000a4070;
              local_270 = _g_tempFile;
              iVar9 = 0x6c9b8cd0;
            }
          }
          else if (iVar4 == -0xd046398) {
            local_198 = DAT_000a4070;
            iVar9 = -0x6481ab51;
          }
          else if (iVar4 == -0xacd2d47) {
            iVar9 = 0x61ef7441;
          }
          else if (iVar4 == -0x8647737) {
            iVar9 = 0x693aee93;
          }
        }
        else if (iVar4 < -0x450b1a1) {
          iVar9 = 0x398f3503;
          if (((iVar4 != -0x80cd9c5) && (iVar9 = -0x243e582c, iVar4 != -0x7bde1a1)) &&
             (iVar9 = iVar4, iVar4 == -0x61d9417)) {
            iVar9 = 0x6fe98bd2;
          }
        }
        else if (iVar4 == -0x450b1a1) {
          iVar9 = 0x761e1d32;
        }
        else if (iVar4 == 0x62500d4) {
          _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar8,local_210);
          iVar9 = -0x704a3c6a;
        }
        else if (iVar4 == 0x7b208d2) {
          local_258 = _g_tempFile;
          local_248 = local_260;
          local_250 = "removeItemAtPath:error:";
          iVar9 = 0x2ccebcd8;
        }
      }
      else if (iVar4 < 0x142dcf49) {
        if (iVar4 < 0xc0c6a15) {
          if (iVar4 == 0x9ff8359) {
            local_268 = local_278;
            iVar9 = -0x2b5b72d1;
          }
          else if (iVar4 == 0xa1c975f) {
            _objc_retain(local_148);
            _objc_release(local_158);
            _objc_release(local_168);
            _objc_msgSend(local_148,local_300,1,0);
            local_140 = local_308;
            local_138 = _objc_msgSend(&_OBJC_CLASS___NSString,local_308,&cf_newline_s_);
            _objc_retain(local_138);
            local_130 = local_138;
            local_128 = DAT_000a4070;
            iVar9 = -0xacd2d47;
          }
          else if (iVar4 == 0xa911b26) {
            local_c8 = local_340;
            local_78 = unaff_x27;
            local_c0 = _objc_msgSend(&_OBJC_CLASS___UIAlertController,local_340,&cf_w,unaff_x27,1);
            _objc_retain(local_c0);
            unaff_x28 = local_c0;
            iVar4 = _objc_msgSend(DAT_000a4070,local_2b0,_g_isenabledw2ProChinese);
            iVar9 = -0x498e7a96;
            if (iVar4 == 0) {
              iVar9 = 0x39ed6c32;
            }
          }
        }
        else if (iVar4 == 0xc0c6a15) {
          local_238 = _g_tempFilestep;
          iVar9 = -0x357b4876;
        }
        else if (iVar4 == 0xd862d64) {
          _objc_retain(local_148);
          _objc_release(local_158);
          _objc_release(local_168);
          _objc_msgSend(local_148,local_300,1,0);
          _objc_msgSend(&_OBJC_CLASS___NSString,local_308,&cf_newline_s_);
          _objc_retainAutoreleasedReturnValue();
          iVar9 = 0xa1c975f;
        }
        else if (iVar4 == 0x130b845f) {
          _objc_release(local_108);
          iVar9 = -0x6ffa2372;
        }
      }
      else if (iVar4 < 0x1b9a4de3) {
        if (iVar4 == 0x142dcf49) {
          iVar9 = -0x79e879de;
        }
        else if (iVar4 == 0x14534c95) {
          _objc_release(local_c0);
          local_a1 = _objc_msgSend(DAT_000a4070,local_2b0,_g_isMirroredMarkfbs);
          iVar9 = 0x6f6dec2c;
        }
        else if (iVar4 == 0x1856c28d) {
          local_90 = &_OBJC_CLASS___UIAlertController;
          iVar9 = -0x554df0e1;
        }
      }
      else if (iVar4 == 0x1b9a4de3) {
        iVar9 = -0x5da8e6dd;
      }
      else if (iVar4 == 0x1c4ee256) {
        iVar9 = 0x7b208d2;
      }
      else if (iVar4 == 0x1d125e40) {
        _objc_retain(local_1c8);
        _objc_msgSend(local_1c8,local_1c8,local_200,&cf__w2avfictitious_mov);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_1d8,"removeItemAtPath:error:",uVar8,0);
        _objc_release(uVar8);
        _objc_release(local_1c8);
        iVar9 = 0x7e6f05e1;
      }
    }
    else if (iVar4 < 0x2fe1cf3a) {
      if (iVar4 < 0x21c3ddb7) {
        if (iVar4 < 0x1f8ed2bd) {
          if (iVar4 == 0x1d29f321) {
            iVar9 = -0x4ff51c11;
          }
          else if (iVar4 == 0x1f03d5a1) {
            local_1c0 = DAT_000a4070;
            local_1b8 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
            iVar9 = -0x1918778a;
          }
        }
        else if (iVar4 == 0x1f8ed2bd) {
          _objc_msgSend(local_1e8,local_2b0,local_1f8);
          _objc_release(local_1f0);
          iVar9 = 0x69ea1a63;
        }
        else {
          iVar9 = 0x38ebf63e;
          if ((iVar4 != 0x1fe96fc8) && (iVar9 = iVar4, iVar4 == 0x21780802)) {
            puVar3[-2] = local_2b8;
            puVar3[-1] = local_2c8;
            _objc_msgSend(&_OBJC_CLASS___NSString,local_140,&cf_newline_s_);
            _objc_retainAutoreleasedReturnValue();
            iVar9 = -0x432c25b0;
          }
        }
      }
      else if (iVar4 < 0x2a9ac93c) {
        if (iVar4 == 0x21c3ddb7) {
          local_a0 = _objc_msgSend(&_OBJC_CLASS___UIAlertController,local_c8,&cf_w,local_78,1);
          _objc_retain(local_a0);
          iVar9 = -0x3375271c;
        }
        else {
          iVar9 = 0x6ddc2fa2;
          if ((iVar4 != 0x26fdf948) && (iVar9 = iVar4, iVar4 == 0x2985e4f8)) {
            _objc_release(local_138);
            iVar9 = -0x243e582c;
          }
        }
      }
      else if (iVar4 == 0x2a9ac93c) {
        local_298 = DAT_000a4070;
        local_2a0 = _g_tempFilestep2;
        iVar9 = -0x2c7239c7;
      }
      else if (iVar4 == 0x2ccebcd8) {
        iVar9 = -0x2308f3ba;
      }
      else if (iVar4 == 0x2e697176) {
        iVar9 = -0x4bfba202;
      }
    }
    else if (iVar4 < 0x39a3bc60) {
      if (iVar4 < 0x34d892f2) {
        if (iVar4 == 0x2fe1cf3a) {
          local_2b0 = local_338;
          local_2a1 = _objc_msgSend(DAT_000a4070,local_338,_g_isMirroredMarkfbs);
          iVar9 = -0x75c25cd0;
        }
        else if (iVar4 == 0x3308a263) {
          _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          iVar9 = 0x1f03d5a1;
        }
        else if (iVar4 == 0x3481b2fd) {
          _objc_msgSend(&_OBJC_CLASS___UIApplication,local_170);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar8,local_160);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar5,local_150);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar6,local_2f8,local_70,1,0);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar8);
          dVar7 = _dispatch_time(0,2500000000);
          *local_2f0 = PTR___NSConcreteStackBlock_00068030;
          *(undefined4 *)(local_2f0 + 1) = 0xc2000000;
          *(undefined4 *)((long)local_2f0 + 0xc) = 0;
          local_2f0[2] = FUN_0005ec40;
          local_2f0[3] = &DAT_00068360;
          uVar8 = local_70;
          puVar1 = local_2f0;
          local_2f0[4] = local_70;
          puVar2 = local_2f0;
          uVar8 = _objc_retain(uVar8);
          _dispatch_after(dVar7,PTR___dispatch_main_q_00068058,puVar2);
          _objc_release(puVar1[4]);
          _objc_release(uVar8);
          _objc_release(local_78);
          _objc_release(local_148);
          _objc_release(local_2c0);
          _objc_release(local_2d0);
          iVar9 = -0x3df94c9e;
        }
      }
      else {
        iVar9 = -0x191a859b;
        if (((iVar4 != 0x34d892f2) && (iVar9 = -0x1661e16a, iVar4 != 0x38ebf63e)) &&
           (iVar9 = iVar4, iVar4 == 0x398f3503)) {
          iVar9 = -0xda04e3c;
        }
      }
    }
    else if (iVar4 < 0x3f824fe6) {
      iVar9 = 0x2a9ac93c;
      if (((iVar4 != 0x39a3bc60) && (iVar9 = 0x6baf69a9, iVar4 != 0x39ed6c32)) &&
         (iVar9 = iVar4, iVar4 == 0x3d215df0)) {
        iVar9 = -0x7bde1a1;
      }
    }
    else if (iVar4 == 0x3f824fe6) {
      _objc_msgSend(DAT_000a4070,local_338,_g_isMirroredMarkfbs);
      iVar9 = 0x2fe1cf3a;
    }
    else {
      iVar9 = 0x58b65401;
      if ((iVar4 != 0x4150d8c7) && (iVar9 = iVar4, iVar4 == 0x422c2624)) {
        _objc_release(local_f8);
        iVar9 = -0x70e8286a;
      }
    }
  }
  if (iVar4 < 0x63ae54ec) {
    if (0x56d99e50 < iVar4) {
      if (iVar4 < 0x5c6df818) {
        if (iVar4 < 0x5abb111f) {
          if (iVar4 == 0x56d99e51) {
            _objc_msgSend(&_OBJC_CLASS___UIAlertController,local_c8,&cf_w2Proglobal,local_78,1);
            _objc_retainAutoreleasedReturnValue();
            iVar9 = 0x6baf69a9;
          }
          else {
            iVar9 = 0x70409622;
            if ((iVar4 != 0x58013e23) && (iVar9 = iVar4, iVar4 == 0x58b65401)) {
              puVar3[-2] = local_2b8;
              puVar3[-1] = local_2c8;
              local_d8 = _objc_msgSend(&_OBJC_CLASS___NSString,local_140,&cf_____Virtualfilesdeleted
                                      );
              iVar9 = 0x532b2eb6;
            }
          }
        }
        else {
          iVar9 = 0x5122bc20;
          if (iVar4 != 0x5abb111f) {
            if (iVar4 == 0x5b8f0639) {
              _objc_msgSend(local_e8,local_2b0,local_f0);
              iVar9 = -0x4132e261;
            }
            else {
              iVar9 = iVar4;
              if (iVar4 == 0x5c3072b1) {
                local_240 = DAT_000a4070;
                iVar9 = 0x1d29f321;
              }
            }
          }
        }
      }
      else if (iVar4 < 0x5f5fbb39) {
        iVar9 = 0x70409622;
        if (iVar4 != 0x5c6df818) {
          if (iVar4 == 0x5ce8635c) {
            _objc_msgSend(local_90,local_c8,&cf_w2Prodivide,local_78,1);
            _objc_retainAutoreleasedReturnValue();
            iVar9 = 0x7d119aca;
          }
          else {
            iVar9 = iVar4;
            if (iVar4 == 0x5de97264) {
              iVar9 = -0x704a3c6a;
            }
          }
        }
      }
      else if (iVar4 == 0x5f5fbb39) {
        _objc_release(local_a0);
        iVar9 = 0x4c9ad59d;
      }
      else if (iVar4 == 0x60db3c02) {
        _objc_release(local_1d0);
        iVar9 = -0x4ba72286;
      }
      else if (iVar4 == 0x61ef7441) {
LAB_00053298:
        iVar9 = -0x46f437e5;
      }
      goto LAB_00051a9c;
    }
    if (0x487476b6 < iVar4) {
      if (iVar4 < 0x532b2eb6) {
        iVar9 = 0x7b208d2;
        if (iVar4 != 0x487476b7) {
          if (iVar4 == 0x4c9ad59d) {
            _objc_release(local_a0);
            iVar9 = 0x424323d6;
          }
          else {
            iVar9 = iVar4;
            if (iVar4 == 0x5122bc20) {
              _objc_msgSend(local_288,"removeItemAtPath:error:",local_280,0);
              iVar9 = -0x80cd9c5;
            }
          }
        }
      }
      else if (iVar4 == 0x532b2eb6) {
        iVar9 = -0x20731938;
      }
      else if (iVar4 == 0x53763759) {
        iVar9 = -0x29c8320c;
      }
      else if (iVar4 == 0x56bb6386) {
        _objc_msgSend(local_220,local_228,local_230,0);
        iVar9 = 0x1fe96fc8;
      }
      goto LAB_00051a9c;
    }
    if (iVar4 < 0x438d358e) {
      if (iVar4 == 0x424323d6) {
        unaff_x28 = local_88;
        iVar9 = -0x498e7a96;
      }
      else if (iVar4 == 0x42b510fe) {
        _objc_retain(local_1c8);
        _objc_msgSend(local_1c8,local_1c8,local_200,&cf__w2avfictitious_mov);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_1d8,"removeItemAtPath:error:",uVar8,0);
        _objc_release(uVar8);
        _objc_release(local_1c8);
        iVar9 = 0x1d125e40;
      }
      goto LAB_00051a9c;
    }
    if (iVar4 == 0x438d358e) {
      _objc_msgSend(local_298,local_2b0,local_2a0);
      iVar9 = -0x7a2d2a63;
      goto LAB_00051a9c;
    }
    if (iVar4 == 0x43fafcae) {
      iVar9 = 0x26fdf948;
      goto LAB_00051a9c;
    }
    if (iVar4 != 0x46b243bb) goto LAB_00051a9c;
    iVar4 = _objc_msgSend(local_1c0,local_2b0,local_1a8);
    _objc_release(local_1a0);
    _objc_release(local_1b0);
    _objc_release(local_1b8);
    iVar9 = -0xd046398;
  }
  else {
    if (iVar4 < 0x6fe98bd2) {
      if (iVar4 < 0x6baf69a9) {
        if (iVar4 < 0x683c7d88) {
          iVar9 = 0x4c9ad59d;
          if (((iVar4 != 0x63ae54ec) && (iVar9 = 0x5c3072b1, iVar4 != 0x6580e03f)) &&
             (iVar9 = iVar4, iVar4 == 0x6827b079)) {
            _objc_msgSend(local_288,"removeItemAtPath:error:",local_280,0);
            iVar9 = 0x5122bc20;
          }
        }
        else {
          iVar9 = -0x7a2d2a63;
          if (iVar4 != 0x683c7d88) {
            if (iVar4 == 0x693aee93) {
              local_220 = DAT_000a4070;
              local_230 = _g_tempFilestep;
              local_228 = "removeItemAtPath:error:";
              iVar9 = -0x2b75ddfa;
            }
            else {
              iVar9 = iVar4;
              if (iVar4 == 0x69ea1a63) {
                local_1d9 = _objc_msgSend(local_1e8,local_2b0,local_1f8);
                _objc_release(local_1f0);
                iVar9 = -0x33eda65c;
              }
            }
          }
        }
      }
      else if (iVar4 < 0x6ddc2fa2) {
        if (iVar4 == 0x6baf69a9) {
          local_b8 = _objc_msgSend(&_OBJC_CLASS___UIAlertController,local_c8,&cf_w2Proglobal,
                                   local_78,1);
          _objc_retain(local_b8);
          iVar9 = 0x2e697176;
        }
        else if (iVar4 == 0x6c9b8cd0) {
          iVar9 = 0x9ff8359;
        }
        else if (iVar4 == 0x6d138715) {
          local_b0 = local_b8;
          iVar9 = -0x450b1a1;
        }
      }
      else if (iVar4 == 0x6ddc2fa2) {
        iVar9 = -0x586f6de5;
      }
      else if (iVar4 == 0x6f6dec2c) {
        unaff_x28 = local_b0;
        iVar9 = -0x498e7a96;
        if (local_a1 == '\0') {
          iVar9 = -0x674b5d4e;
        }
      }
      else if (iVar4 == 0x6fdce022) {
        iVar9 = -0x49f96f7e;
      }
      goto LAB_00051a9c;
    }
    if (iVar4 < 0x761e1d32) {
      if (iVar4 < 0x70409622) {
        iVar9 = 0x1f03d5a1;
        if (iVar4 != 0x6fe98bd2) {
          if (iVar4 == 0x6ff8f3fa) {
            _objc_msgSend(&_OBJC_CLASS___NSString,local_140,&cf_GlobalVirtualFilesdeleted);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            iVar9 = iVar4;
            if (iVar4 != 0x7000249f) goto LAB_00051a9c;
          }
          iVar9 = -0x2b8afed9;
        }
      }
      else if (iVar4 == 0x70409622) {
        local_260 = DAT_000a4070;
        iVar9 = -0x2d45fa68;
      }
      else if (iVar4 == 0x71857c33) {
        _objc_msgSend(&_OBJC_CLASS___UIAlertController,local_c8,&cf_w,local_78,1);
        _objc_retainAutoreleasedReturnValue();
        iVar9 = 0x21c3ddb7;
      }
      else if (iVar4 == 0x74ddd02d) {
        _objc_release(local_108);
        iVar9 = 0x130b845f;
      }
      goto LAB_00051a9c;
    }
    if (iVar4 < 0x7dd1268f) {
      iVar9 = 0x14534c95;
      if (iVar4 != 0x761e1d32) {
        if (iVar4 == 0x7776f7fc) {
          iVar9 = 0x46b243bb;
        }
        else {
          iVar9 = iVar4;
          if (iVar4 == 0x7d119aca) {
            _objc_msgSend(local_90,local_c8,&cf_w2Prodivide,local_78,1);
            local_88 = _objc_retainAutoreleasedReturnValue();
            iVar9 = -0x76bc34bf;
          }
        }
      }
      goto LAB_00051a9c;
    }
    if (iVar4 != 0x7dd1268f) {
      iVar9 = -0x7ef9fe24;
      if ((iVar4 != 0x7e55cbd8) && (iVar9 = iVar4, iVar4 == 0x7e6f05e1)) {
        iVar9 = -0x7f7797e7;
      }
      goto LAB_00051a9c;
    }
    iVar4 = _objc_msgSend(local_240,local_2b0,local_238);
    iVar9 = -0x8647737;
  }
  if (iVar4 == 0) {
    iVar9 = 0x38ebf63e;
  }
  goto LAB_00051a9c;
}
void FUN_000541b8(void)
{
  cfstringStruct *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  cfstringStruct *unaff_x28;
  cfstringStruct *pcVar8;
  char *local_b8;
  char local_a9;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  iVar4 = 0x48462e42;
LAB_0005423c:
  while (iVar2 = iVar4, pcVar8 = unaff_x28, iVar4 = iVar2, unaff_x28 = pcVar8, iVar2 < 0x2313a64c) {
    if (iVar2 < -0x42ddaf31) {
      if (iVar2 < -0x5010a45a) {
        if (-0x6a3dd13e < iVar2) {
          iVar5 = -0x62a578a9;
          iVar3 = 0x684af31d;
          if (iVar2 != -0x5e9fd0ab) {
            iVar3 = iVar2;
          }
          iVar4 = 0x503cfd4f;
          if (iVar2 != -0x62a578a8) {
            iVar4 = iVar3;
          }
          iVar3 = -0x6a3dd13d;
          iVar6 = 0x2fdbbfbe;
          iVar7 = -0x2856cc2e;
          if (iVar2 != -0x655c8ce3) {
            iVar7 = iVar2;
          }
          goto LAB_0005456c;
        }
        if (iVar2 == -0x7c729da6) {
          _objc_msgSend(local_a8,local_98,local_a0,0);
          iVar4 = 0x712c3e4b;
        }
        else if (iVar2 == -0x77f33a8e) {
          iVar4 = 0x31c9d117;
          if (local_a9 == '\0') {
            iVar4 = 0x37daa680;
          }
        }
        else if (iVar2 == -0x6e6673bc) {
          _objc_release(local_70);
          iVar4 = -0x2fc6af06;
        }
      }
      else if (iVar2 < -0x498bfe30) {
        if (iVar2 < -0x4ba89dfa) {
          if (iVar2 == -0x5010a45a) {
            local_a8 = DAT_000a4070;
            local_a0 = _g_isMirroredMarkxz;
            iVar4 = 0x70c0b854;
          }
          else {
            iVar4 = 0x45228556;
            if (iVar2 != -0x4f7d92b8) {
              iVar4 = iVar2;
            }
          }
        }
        else if (iVar2 == -0x4ba89dfa) {
          local_88 = _g_isMirroredMarkxz;
          local_80 = "createDirectoryAtPath:withIntermediateDirectories:attributes:error:";
          local_78 = local_90;
          iVar4 = 0x4cd72c20;
        }
        else {
          iVar4 = -0x2856cc2e;
          if (iVar2 != -0x4a0aec94) {
            iVar4 = iVar2;
          }
        }
      }
      else if (iVar2 < -0x44ec9183) {
        iVar3 = -0x42ddaf31;
        if (iVar2 != -0x45e73a57) {
          iVar3 = iVar2;
        }
        iVar4 = 0x215d6a57;
        if (iVar2 != -0x498bfe30) {
          iVar4 = iVar3;
        }
      }
      else if (iVar2 == -0x44ec9183) {
        iVar4 = 0x4db2e68e;
      }
      else if (iVar2 == -0x43bf9dde) {
        iVar2 = _objc_msgSend(DAT_000a4070,local_b8,_g_isMirroredMarkxz);
        local_68 = pcVar8;
        iVar4 = 0x2c5b3663;
        if (iVar2 == 0) {
          iVar4 = 0x3326f0e2;
        }
      }
    }
    else if (iVar2 < -0x162a4f4a) {
      if (iVar2 < -0x2fc6af06) {
        iVar3 = -0x43bf9dde;
        pcVar1 = &cf_elbR;
        if (iVar2 != -0x31fd8263) {
          iVar3 = iVar2;
          pcVar1 = pcVar8;
        }
        iVar4 = 0x4eadf8a6;
        if (iVar2 != -0x3e57d6cb) {
          iVar4 = iVar3;
          unaff_x28 = pcVar1;
        }
        iVar3 = -0x77f33a8e;
        if (iVar2 != -0x3ecb5e85) {
          iVar3 = iVar2;
        }
        iVar5 = -0x3ecb5e85;
        if (iVar2 != -0x42ddaf31) {
          iVar5 = iVar3;
        }
        if (iVar2 < -0x3e57d6cb) {
          unaff_x28 = pcVar8;
          iVar4 = iVar5;
        }
      }
      else {
        if (-0x2856cc2f < iVar2) {
          iVar5 = -0x2856cc2e;
          iVar4 = 0x313a5a9c;
          iVar6 = -0x23516222;
          iVar3 = -0x97c5be2;
          goto LAB_00054914;
        }
        if (iVar2 == -0x2fc6af06) {
          _objc_release(local_70);
          iVar4 = -0x5e9fd0ab;
        }
        else if (iVar2 == -0x2aac39e4) {
          local_98 = "removeItemAtPath:error:";
          iVar4 = 0x43e82b62;
        }
      }
    }
    else if (iVar2 < 0xac76649) {
      if (iVar2 < 0x4fd3a08) {
        iVar3 = 0x70bd66e9;
        if (iVar2 != -0x97c5be2) {
          iVar3 = iVar2;
        }
        iVar4 = -0x5010a45a;
        if (iVar2 != -0x162a4f4a) {
          iVar4 = iVar3;
        }
      }
      else if (iVar2 == 0x4fd3a08) {
        iVar4 = 0x70e34e15;
      }
      else if (iVar2 == 0x6fca87f) {
        _AudioServicesPlaySystemSound(0x5f0);
        _objc_msgSend(DAT_000a4070,"fileExistsAtPath:",_g_isenabledw2ProChinese);
        iVar4 = 0x215d6a57;
      }
    }
    else if (iVar2 < 0x215d6a57) {
      iVar4 = -0x3ecb5e85;
      if ((iVar2 != 0xd0fcd81) && (iVar4 = iVar2, iVar2 == 0xac76649)) {
        return;
      }
    }
    else if (iVar2 == 0x215d6a57) {
      _AudioServicesPlaySystemSound(0x5f0);
      local_b8 = "fileExistsAtPath:";
      local_a9 = _objc_msgSend(DAT_000a4070,"fileExistsAtPath:",_g_isenabledw2ProChinese);
      iVar4 = -0x45e73a57;
    }
    else {
      iVar4 = 0x56b5262d;
      if (iVar2 != 0x226cabc2) {
        iVar4 = iVar2;
      }
    }
  }
  if (iVar2 < 0x4cd72c20) {
    if (iVar2 < 0x37daa680) {
      if (iVar2 < 0x2fdbbfbe) {
        iVar4 = -0x5010a45a;
        if (iVar2 != 0x2c5b3663) {
          iVar4 = iVar2;
        }
        iVar3 = -0x498bfe30;
        if (iVar2 != 0x2575c47d) {
          iVar3 = iVar4;
        }
        iVar4 = 0x503a52fe;
        if (iVar2 != 0x2313a64c) {
          iVar4 = iVar3;
        }
      }
      else if (iVar2 < 0x31c9d117) {
        iVar5 = 0x2fdbbfbe;
        iVar4 = -0x655c8ce3;
        iVar6 = 0x313a5a9c;
        iVar3 = 0x4681c375;
LAB_00054914:
        if (iVar2 != iVar6) {
          iVar3 = iVar2;
        }
        if (iVar2 != iVar5) {
          iVar4 = iVar3;
        }
      }
      else {
        iVar4 = 0x45228556;
        if ((iVar2 != 0x31c9d117) && (iVar4 = iVar2, iVar2 == 0x3326f0e2)) {
          local_90 = DAT_000a4070;
          iVar4 = -0x4ba89dfa;
        }
      }
      goto LAB_0005423c;
    }
    if (iVar2 < 0x43e82b62) {
      if (iVar2 < 0x3ec6f954) {
        iVar3 = 0x37daa680;
        iVar5 = -0x44ec9183;
        if (iVar2 != 0x3b1859aa) {
          iVar5 = iVar2;
        }
        goto LAB_000549a0;
      }
      iVar4 = -0x23516222;
      if ((iVar2 != 0x3ec6f954) && (iVar4 = iVar2, iVar2 == 0x432e6df7)) {
        local_70 = local_68;
        iVar4 = 0x226cabc2;
      }
      goto LAB_0005423c;
    }
    iVar5 = 0x4681c374;
    iVar3 = 0x4eadf8a6;
    if (iVar2 != 0x48462e42) {
      iVar3 = iVar2;
    }
    iVar4 = -0x44ec9183;
    if (iVar2 != 0x4681c375) {
      iVar4 = iVar3;
    }
    iVar3 = 0x4fd3a08;
    if (iVar2 != 0x45228556) {
      iVar3 = iVar2;
    }
    iVar6 = 0x712c3e4b;
    if (iVar2 != 0x43e82b62) {
      iVar6 = iVar3;
    }
  }
  else {
    if (0x70bd66e8 < iVar2) {
      if (iVar2 < 0x71510e41) {
        if (iVar2 < 0x70e34e15) {
          iVar3 = -0x2aac39e4;
          if (iVar2 != 0x70c0b854) {
            iVar3 = iVar2;
          }
          iVar4 = 0x7e339cd9;
          if (iVar2 != 0x70bd66e9) {
            iVar4 = iVar3;
          }
        }
        else {
          iVar4 = -0x23516222;
          if ((iVar2 != 0x70e34e15) && (iVar4 = iVar2, iVar2 == 0x712c3e4b)) {
            _objc_msgSend(local_a8,local_98,local_a0,0);
            iVar4 = -0x62a578a8;
          }
        }
      }
      else if (iVar2 < 0x7630ab9f) {
        if (iVar2 == 0x71510e41) {
          iVar4 = 0x432e6df7;
        }
        else {
          iVar4 = 0x7e339cd9;
          if (iVar2 != 0x76060759) {
            iVar4 = iVar2;
          }
        }
      }
      else {
        iVar3 = 0x7630ab9f;
        iVar5 = -0x31fd8263;
        if (iVar2 != 0x7e339cd9) {
          iVar5 = iVar2;
        }
LAB_000549a0:
        iVar4 = -0x6a3dd13d;
        if (iVar2 != iVar3) {
          iVar4 = iVar5;
        }
      }
      goto LAB_0005423c;
    }
    if (iVar2 < 0x503a52fe) {
      if (iVar2 == 0x4cd72c20) {
        _objc_msgSend(local_78,local_80,local_88,1,0,0);
        iVar4 = 0x503cfd4f;
      }
      else {
        iVar3 = 0x2575c47d;
        if (iVar2 != 0x4eadf8a6) {
          iVar3 = iVar2;
        }
        unaff_x28 = &cf_Rotatesuccess;
        iVar4 = -0x43bf9dde;
        if (iVar2 != 0x4db2e68e) {
          unaff_x28 = pcVar8;
          iVar4 = iVar3;
        }
      }
      goto LAB_0005423c;
    }
    iVar5 = 0x56b5262c;
    iVar3 = 0x503a52fe;
    if (iVar2 != 0x684af31d) {
      iVar3 = iVar2;
    }
    iVar4 = -0x2fc6af06;
    if (iVar2 != 0x56b5262d) {
      iVar4 = iVar3;
    }
    iVar3 = 0x503a52fe;
    iVar6 = 0xac76649;
    iVar7 = 0x432e6df7;
    if (iVar2 != 0x503cfd4f) {
      iVar7 = iVar2;
    }
LAB_0005456c:
    if (iVar2 != iVar3) {
      iVar6 = iVar7;
    }
  }
  if (iVar2 <= iVar5) {
    iVar4 = iVar6;
  }
  goto LAB_0005423c;
}
void FUN_00054b20(undefined8 param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  char **ppcVar5;
  int iVar6;
  dispatch_time_t dVar7;
  undefined8 uVar8;
  char *local_130;
  char *local_128;
  undefined8 local_120;
  char *local_118;
  char *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  char *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ppcVar5 = &local_130;
  local_110 = "createDirectoryAtPath:withIntermediateDirectories:attributes:error:";
  local_118 = "removeItemAtPath:error:";
  local_128 = "dismissViewControllerAnimated:completion:";
  local_130 = "fileExistsAtPath:";
  local_120 = param_1;
  iVar1 = 0x232b6646;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (iVar6 = iVar1, iVar1 = iVar6, -0x1eb78388 < iVar6) {
              if (iVar6 < 0x1125cfed) {
                if (iVar6 < -0x3e04685) {
                  iVar1 = -0x39d4b7f5;
                  if (iVar6 != -0x11a60b7b) {
                    iVar1 = iVar6;
                  }
                  iVar2 = -0x11a60b7b;
                  if (iVar6 != -0x1278aa47) {
                    iVar2 = iVar1;
                  }
                  iVar1 = -0x4a004c4f;
                  if (iVar6 != -0x1eb78387) {
                    iVar1 = iVar2;
                  }
                }
                else if (iVar6 < 0xd507d1a) {
                  iVar2 = -0x70ff8504;
                  if (iVar6 != 0x1197010) {
                    iVar2 = iVar6;
                  }
                  iVar1 = 0x32e92d7e;
                  if (iVar6 != -0x3e04685) {
                    iVar1 = iVar2;
                  }
                }
                else if (iVar6 == 0xd507d1a) {
                  _objc_msgSend(DAT_000a4070,local_118,_g_isenabledw2ProChinese,0);
                  local_d0 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___);
                  iVar1 = -0x1278aa47;
                }
                else if (iVar6 == 0x10a1711e) {
                  iVar6 = _objc_msgSend(local_e8,local_d8,local_e0);
                  iVar1 = 0x1125cfed;
                  if (iVar6 == 0) {
                    iVar1 = -0x328177af;
                  }
                }
              }
              else if (iVar6 < 0x24013590) {
                iVar2 = -0x58b83d9e;
                if (iVar6 != 0x232b6646) {
                  iVar2 = iVar6;
                }
                iVar1 = -0x70ff8504;
                if (iVar6 != 0x1b4a73c5) {
                  iVar1 = iVar2;
                }
                iVar2 = 0x65436fe6;
                if (iVar6 != 0x11feca0f) {
                  iVar2 = iVar6;
                }
                iVar3 = 0xd507d1a;
                if (iVar6 != 0x1125cfed) {
                  iVar3 = iVar2;
                }
                if (iVar6 < 0x1b4a73c5) {
                  iVar1 = iVar3;
                }
              }
              else if (iVar6 < 0x32e92d7e) {
                if (iVar6 == 0x24013590) {
                  _objc_msgSend(DAT_000a4070,local_110,_g_isenabledw2ProChinese,1,0,0);
                  _objc_msgSend(local_f0,local_f8,1,0);
                  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___);
                  uVar8 = _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(&_OBJC_CLASS___UIAlertController,
                                "alertControllerWithTitle:message:preferredStyle:",&cf__SO_Ne,uVar8,
                                1);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
                  uVar8 = _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(uVar8,"keyWindow");
                  uVar8 = _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(uVar8,"rootViewController");
                  _objc_retainAutoreleasedReturnValue();
                  iVar1 = -0x7d3cf045;
                }
                else if (iVar6 == 0x2e62ba05) {
                  _objc_msgSend(DAT_000a4070,local_118,_g_isenabledw2ProChinese,0);
                  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___);
                  iVar1 = 0xd507d1a;
                }
              }
              else {
                iVar1 = -0x50baf067;
                if ((iVar6 != 0x32e92d7e) && (iVar1 = iVar6, iVar6 == 0x65436fe6)) {
                  _objc_msgSend(local_a8,"presentViewController:animated:completion:",local_a0,1,0);
                  _objc_release(local_a8);
                  _objc_release(local_b0);
                  _objc_release(local_b8);
                  dVar7 = _dispatch_time(0,2000000000);
                  *local_108 = PTR___NSConcreteStackBlock_00068030;
                  *(undefined4 *)(local_108 + 1) = 0xc2000000;
                  *(undefined4 *)((long)local_108 + 0xc) = 0;
                  local_108[2] = FUN_0005eddc;
                  local_108[3] = &DAT_00068360;
                  puVar4 = local_108;
                  _objc_retain(local_c8);
                  puVar4[4] = local_c0;
                  _dispatch_after(dVar7,PTR___dispatch_main_q_00068058,local_108);
                  _objc_release(puVar4[4]);
                  _objc_release(local_c8);
                  _objc_release(local_d0);
                  iVar1 = 0x1197010;
                }
              }
            }
            if (-0x50baf068 < iVar6) break;
            if (iVar6 < -0x662a20b7) {
              if (iVar6 < -0x70ff8504) {
                if (iVar6 == -0x7d3cf045) {
                  _objc_msgSend(DAT_000a4070,local_110,_g_isenabledw2ProChinese,1,0,0);
                  _objc_msgSend(local_f0,local_f8,1,0);
                  local_98 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___);
                  _objc_retain(local_98);
                  local_90 = _objc_msgSend(&_OBJC_CLASS___UIAlertController,
                                           "alertControllerWithTitle:message:preferredStyle:",
                                           &cf__SO_Ne,local_98,1);
                  _objc_retain(local_90);
                  local_88 = local_90;
                  local_80 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
                  _objc_retain(local_80);
                  local_78 = _objc_msgSend(local_80,"keyWindow");
                  _objc_retain(local_78);
                  local_70 = _objc_msgSend(local_78,"rootViewController");
                  _objc_retain(local_70);
                  iVar1 = -0x3e04685;
                }
                else {
                  iVar1 = -0x285af810;
                  if (iVar6 != -0x78582044) {
                    iVar1 = iVar6;
                  }
                }
              }
              else if (iVar6 == -0x70ff8504) {
                iVar1 = -0x4b3fe238;
              }
              else if (iVar6 == -0x6bcd35aa) {
                _objc_retain(local_d0);
                _objc_msgSend(&_OBJC_CLASS___UIAlertController,
                              "alertControllerWithTitle:message:preferredStyle:",&cf_English,
                              local_d0,1);
                _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
                uVar8 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar8,"keyWindow");
                uVar8 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar8,"rootViewController");
                _objc_retainAutoreleasedReturnValue();
                iVar1 = -0x39d4b7f5;
              }
            }
            else if (iVar6 < -0x58be26e3) {
              if (iVar6 == -0x662a20b7) {
                _objc_msgSend(local_70,"presentViewController:animated:completion:",local_88,1,0);
                _objc_release(local_70);
                _objc_release(local_78);
                _objc_release(local_80);
                iVar1 = -0x50baf067;
              }
              else {
                iVar1 = -0x1eb78387;
                if (iVar6 != -0x5c5d7045) {
                  iVar1 = iVar6;
                }
              }
            }
            else {
              iVar1 = 0x1197010;
              if ((iVar6 != -0x58be26e3) && (iVar1 = iVar6, iVar6 == -0x58b83d9e)) {
                local_108 = ppcVar5 + -6;
                ppcVar5 = ppcVar5 + -0xc;
                local_100 = ppcVar5;
                iVar1 = -0x78582044;
              }
            }
          }
          if (iVar6 < -0x39d4b7f5) break;
          if (iVar6 < -0x2f819387) {
            if (iVar6 == -0x39d4b7f5) {
              _objc_retain(local_d0);
              local_c8 = _objc_msgSend(&_OBJC_CLASS___UIAlertController,
                                       "alertControllerWithTitle:message:preferredStyle:",
                                       &cf_English,local_d0,1);
              _objc_retain(local_c8);
              local_c0 = local_c8;
              local_b8 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
              _objc_retain(local_b8);
              local_b0 = _objc_msgSend(local_b8,"keyWindow");
              _objc_retain(local_b0);
              local_a8 = _objc_msgSend(local_b0,"rootViewController");
              _objc_retain(local_a8);
              local_a0 = local_c0;
              iVar1 = 0x11feca0f;
            }
            else {
              iVar1 = -0x7d3cf045;
              if (iVar6 != -0x328177af) {
                iVar1 = iVar6;
              }
            }
          }
          else {
            iVar1 = -0x58b83d9e;
            if ((iVar6 != -0x2f819387) && (iVar1 = iVar6, iVar6 == -0x285af810)) {
              _AudioServicesPlaySystemSound(0x5f0);
              local_f8 = local_128;
              local_f0 = local_120;
              _objc_msgSend(local_120,local_128,1,0);
              local_e8 = DAT_000a4070;
              local_e0 = _g_isenabledw2ProChinese;
              local_d8 = local_130;
              iVar1 = 0x10a1711e;
            }
          }
        }
        if (-0x4b3fe239 < iVar6) break;
        if (iVar6 == -0x50baf067) {
          _objc_msgSend(local_70,"presentViewController:animated:completion:",local_88,1,0);
          _objc_release(local_70);
          _objc_release(local_78);
          _objc_release(local_80);
          iVar1 = -0x5c5d7045;
        }
        else if (iVar6 == -0x4c9e6c01) {
          dVar7 = _dispatch_time(0,2000000000);
          *local_100 = PTR___NSConcreteStackBlock_00068030;
          *(undefined4 *)(local_100 + 1) = 0xc2000000;
          *(undefined4 *)((long)local_100 + 0xc) = 0;
          local_100[2] = FUN_0005ef04;
          local_100[3] = &DAT_00068360;
          puVar4 = local_100;
          _objc_retain(local_90);
          puVar4[4] = local_88;
          _dispatch_after(dVar7,PTR___dispatch_main_q_00068058,local_100);
          _objc_release(puVar4[4]);
          _objc_release(local_90);
          _objc_release(local_98);
          iVar1 = -0x4a004c4f;
        }
      }
      if (iVar6 != -0x4a004c4f) break;
      dVar7 = _dispatch_time(0,2000000000);
      *local_100 = PTR___NSConcreteStackBlock_00068030;
      *(undefined4 *)(local_100 + 1) = 0xc2000000;
      *(undefined4 *)((long)local_100 + 0xc) = 0;
      local_100[2] = FUN_0005ef04;
      local_100[3] = &DAT_00068360;
      puVar4 = local_100;
      _objc_retain(local_90);
      puVar4[4] = local_88;
      _dispatch_after(dVar7,PTR___dispatch_main_q_00068058,local_100);
      _objc_release(puVar4[4]);
      _objc_release(local_90);
      _objc_release(local_98);
      iVar1 = -0x58be26e3;
    }
  } while (iVar6 != -0x4b3fe238);
  return;
}
void FUN_000555e4(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  cfstringStruct *unaff_x27;
  cfstringStruct *unaff_x28;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  byte local_1f8;
  byte local_1f4;
  undefined8 local_1f0;
  char *local_1e8;
  char local_1d9;
  undefined8 local_1d8;
  undefined8 local_1d0;
  char local_1c1;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  byte local_191;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  char local_169;
  undefined8 local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  char *local_110;
  undefined8 local_108;
  char *local_100;
  char local_f1;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_92;
  byte local_91;
  undefined8 local_90;
  byte local_81;
  undefined8 local_80;
  byte local_71;
  undefined8 local_70;
  iVar3 = -0x78b167c;
LAB_00055650:
  iVar7 = iVar3;
  iVar3 = iVar7;
  if (iVar7 < 0x749834a) {
    if (iVar7 < -0x3c3bcd33) {
      if (iVar7 < -0x5853ec17) {
        if (iVar7 < -0x70673f77) {
          if (iVar7 < -0x7799735a) {
            iVar1 = -0x2ab348e0;
            if (iVar7 != -0x786be3bd) {
              iVar1 = iVar7;
            }
            iVar3 = 0x56bf1790;
            if (iVar7 != -0x790fd56d) {
              iVar3 = iVar1;
            }
            iVar1 = -0x52e69161;
            if (iVar7 != -0x7b662f95) {
              iVar1 = iVar7;
            }
            iVar2 = -0x67b27419;
            if (iVar7 != -0x7bd0d950) {
              iVar2 = iVar1;
            }
            if (iVar7 < -0x790fd56d) {
              iVar3 = iVar2;
            }
          }
          else if (iVar7 < -0x7494906c) {
            iVar1 = -0x347dc1c2;
            if (iVar7 != -0x74a69bca) {
              iVar1 = iVar7;
            }
            iVar3 = -0x4b594795;
            if (iVar7 != -0x7799735a) {
              iVar3 = iVar1;
            }
          }
          else if (iVar7 == -0x7494906c) {
            _objc_msgSend(local_140,local_148,local_150,0);
            local_138 = DAT_000a4070;
            local_130 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
            _objc_retain(local_130);
            local_128 = _objc_msgSend(local_130,"firstObject");
            iVar3 = -0x74a69bca;
          }
          else if (iVar7 == -0x73721466) {
            iVar3 = -0x50af0f6b;
          }
          else if (iVar7 == -0x73246add) {
            _AudioServicesPlaySystemSound(0x44e);
            iVar3 = 0x43a8b996;
          }
        }
        else if (iVar7 < -0x6342c18e) {
          if (iVar7 < -0x67b27419) {
            iVar3 = -0x17d9e09e;
            if ((iVar7 != -0x70673f77) && (iVar3 = iVar7, iVar7 == -0x6b99cdc7)) {
              _objc_release(local_b0);
              iVar3 = 0x4eb55601;
            }
          }
          else {
            iVar1 = 0x12871aae;
            if (iVar7 != -0x641531d0) {
              iVar1 = iVar7;
            }
            iVar3 = 0x3c9f0e36;
            if (iVar7 != -0x67b27419) {
              iVar3 = iVar1;
            }
          }
        }
        else if (iVar7 < -0x5d5d366b) {
          iVar1 = 0x2698c2b7;
          if (iVar7 != -0x6108edcc) {
            iVar1 = iVar7;
          }
          bVar6 = iVar7 != -0x6342c18e;
          pcVar4 = &cf_lg;
          if (bVar6) {
            pcVar4 = unaff_x28;
          }
          pcVar5 = &cf__sQ;
          if (bVar6) {
            pcVar5 = unaff_x27;
          }
          unaff_x27 = pcVar5;
          unaff_x28 = pcVar4;
          iVar3 = 0x398cfe85;
          if (bVar6) {
            iVar3 = iVar1;
          }
        }
        else if (iVar7 == -0x5d5d366b) {
          iVar3 = 0x52ee992c;
        }
        else {
          iVar3 = -0x790fd56d;
          if ((iVar7 != -0x5d269c53) && (iVar3 = iVar7, iVar7 == -0x588de6b7)) {
            local_178 = DAT_000a4070;
            iVar3 = 0x69fb0ec;
          }
        }
        goto LAB_00055650;
      }
      if (-0x4a52d572 < iVar7) {
        if (iVar7 < -0x468ab4eb) {
          if (iVar7 < -0x4a30325f) {
            if (iVar7 == -0x4a52d571) {
LAB_000570dc:
              iVar3 = 0x5a525d91;
            }
            else {
              iVar3 = -0x3186872d;
              if (iVar7 != -0x4a41b28c) {
                iVar3 = iVar7;
              }
            }
          }
          else if (iVar7 == -0x4a30325f) {
            iVar3 = 0x50310196;
          }
          else if (iVar7 == -0x49e9471c) {
            local_1c1 = _objc_msgSend(local_1d8,local_1e8,local_1d0);
            iVar3 = -0xac989fd;
          }
          else if (iVar7 == -0x47b2780a) {
            iVar3 = -0x12d2168b;
            if (local_169 == '\0') {
              iVar3 = 0x51a4f88d;
            }
          }
        }
        else if (iVar7 < -0x418781ae) {
          if (iVar7 == -0x468ab4eb) {
            _objc_msgSend(DAT_000a4070,local_1e8,_g_isMirroredMarkfbs);
            iVar3 = -0x1783ddc;
          }
          else if (iVar7 == -0x423854ab) {
            local_1b0 = local_1b8;
            iVar3 = 0x66d514b4;
          }
        }
        else if (iVar7 == -0x418781ae) {
          iVar3 = 0x575e0a06;
        }
        else if (iVar7 == -0x3f8802e0) {
          iVar3 = 0x42f784bc;
        }
        else if (iVar7 == -0x3e083431) {
          iVar3 = 0x37bb639c;
        }
        goto LAB_00055650;
      }
      if (iVar7 < -0x52e69161) {
        if (iVar7 < -0x555e87c2) {
          iVar1 = 0x352e462d;
          if (iVar7 != -0x57f70d6e) {
            iVar1 = iVar7;
          }
          iVar3 = -0x1d232d73;
          if (iVar7 != -0x5853ec17) {
            iVar3 = iVar1;
          }
        }
        else {
          iVar3 = 0x493ee1e;
          if ((iVar7 != -0x555e87c2) && (iVar3 = iVar7, iVar7 == -0x52edcff3)) {
            _AudioServicesPlaySystemSound(0x5f0);
            iVar3 = -0x1dab4ba3;
          }
        }
        goto LAB_00055650;
      }
      if (-0x51cb53a5 < iVar7) {
        if (iVar7 == -0x51cb53a4) {
          _objc_msgSend(local_140,local_148,local_150,0);
          _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          uVar11 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar11,"firstObject");
LAB_00056d5c:
          iVar3 = -0x7494906c;
        }
        else {
          iVar3 = 0x246b1c0;
          if ((iVar7 != -0x50af0f6b) && (iVar3 = iVar7, iVar7 == -0x4b594795)) {
            iVar3 = -0x6342c18e;
          }
        }
        goto LAB_00055650;
      }
      if (iVar7 == -0x52e69161) {
        iVar3 = 0x75171ae6;
        goto LAB_00055650;
      }
      if (iVar7 != -0x51e50455) goto LAB_00055650;
      _objc_retain(local_128);
      _objc_msgSend(local_128,local_128,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov);
      uVar11 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(local_138,local_148,uVar11,0);
      _objc_release(uVar11);
      _objc_release(local_128);
      _objc_release(local_130);
    }
    else {
      if (-0x17d9e09f < iVar7) {
        if (iVar7 < -0x78b167c) {
          if (iVar7 < -0xf9a4dc0) {
            if (iVar7 < -0x12d2168b) {
              if (iVar7 == -0x17d9e09e) {
                local_180 = local_70;
                iVar3 = -0x3e083431;
              }
              else if (iVar7 == -0x15b612f2) {
                _objc_release(local_188);
                iVar3 = 0x69cd204b;
              }
            }
            else {
              iVar1 = 0x7a8d9f6e;
              if (iVar7 != -0x1048c6c8) {
                iVar1 = iVar7;
              }
              iVar3 = 0x4d541737;
              if (iVar7 != -0x12d2168b) {
                iVar3 = iVar1;
              }
            }
          }
          else if (iVar7 < -0xac989fd) {
            if (iVar7 == -0xf9a4dc0) {
              iVar3 = -0x3f8802e0;
            }
            else if (iVar7 == -0xc2427c6) {
              _objc_retain(local_1b0);
              _objc_msgSend(local_1b0,"firstObject");
              uVar11 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar11,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov);
              uVar11 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_1c0,local_1e8,uVar11);
              iVar3 = 0x205ec5c;
            }
          }
          else if (iVar7 == -0xac989fd) {
            iVar3 = 0x1ba1e6e0;
          }
          else {
            iVar3 = -0xf9a4dc0;
            if ((iVar7 != -0xa51e7f3) && (iVar3 = iVar7, iVar7 == -0xa33f4a7)) {
              iVar3 = 0x53651e93;
            }
          }
        }
        else if (iVar7 < 0x205ec5c) {
          if (iVar7 < -0x1783ddc) {
            iVar3 = -0x1dab4ba3;
            if ((iVar7 != -0x78b167c) && (iVar3 = iVar7, iVar7 == -0x5ba4f72)) {
              iVar3 = -0x790fd56d;
            }
          }
          else if (iVar7 == -0x1783ddc) {
            local_1d9 = _objc_msgSend(DAT_000a4070,local_1e8,_g_isMirroredMarkfbs);
            iVar3 = 0x3f506569;
          }
          else if (iVar7 == -0xbb019d) {
            _objc_release(local_108);
            _objc_release(local_118);
            iVar3 = -0x35b0b643;
          }
          else if (iVar7 == 0x200322) {
            iVar3 = -0x1d232d73;
          }
        }
        else if (iVar7 < 0x493ee1e) {
          if (iVar7 == 0x205ec5c) {
            _objc_retain(local_1b0);
            _objc_msgSend(local_1b0,"firstObject");
            local_1a8 = _objc_retainAutoreleasedReturnValue();
            local_1a0 = _objc_msgSend(local_1a8,"stringByAppendingPathComponent:",
                                      &cf__w2avfictitious_mov);
            _objc_retain(local_1a0);
            local_191 = _objc_msgSend(local_1c0,local_1e8,local_1a0);
            iVar3 = -0x1918395c;
          }
          else {
            iVar3 = 0x77d9735d;
            if (iVar7 != 0x246b1c0) {
              iVar3 = iVar7;
            }
          }
        }
        else if (iVar7 == 0x493ee1e) {
          local_100 = "stringByAppendingPathComponent:";
          _objc_msgSend(local_108,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov);
          uVar11 = _objc_retainAutoreleasedReturnValue();
          local_f1 = _objc_msgSend(local_120,local_1e8,uVar11);
          _objc_release(uVar11);
          iVar3 = -0x5d5d366b;
        }
        else if (iVar7 == 0x59966cb) {
          _objc_retain(local_d0);
          local_c8 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          _objc_retain(local_c8);
          local_c0 = _objc_msgSend(local_c8,local_110);
          _objc_retain(local_c0);
          local_b8 = _objc_msgSend(local_c0,local_c0,local_100,&cf__w2avfictitiousCaches_mov);
          iVar3 = 0x6ba73ea2;
        }
        else if (iVar7 == 0x69fb0ec) {
          local_169 = _objc_msgSend(local_178,local_1e8,_g_tempFilestep2);
          iVar3 = 0x48ecff36;
        }
        goto LAB_00055650;
      }
      if (-0x2ab348e1 < iVar7) {
        if (iVar7 < -0x1dab4ba3) {
          if (iVar7 < -0x2286345a) {
            iVar3 = 0x6b7fed6d;
            if ((iVar7 != -0x2ab348e0) && (iVar3 = iVar7, iVar7 == -0x28204f3c)) {
              iVar3 = -0x17d9e09e;
            }
          }
          else if (iVar7 == -0x2286345a) {
            iVar3 = -0xa33f4a7;
          }
          else if (iVar7 == -0x218f24e5) {
            iVar3 = -0x47b2780a;
          }
          else if (iVar7 == -0x1dc7b0b0) {
            iVar3 = -0x588de6b7;
            if (local_92 == 0) {
              iVar3 = 0x6451a267;
            }
          }
        }
        else if (iVar7 < -0x1d232d73) {
          if (iVar7 == -0x1dab4ba3) {
            _AudioServicesPlaySystemSound(0x5f0);
            iVar3 = -0x4a41b28c;
          }
          else if (iVar7 == -0x1da9c564) {
            local_120 = DAT_000a4070;
            local_118 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
            _objc_retain(local_118);
            local_110 = "firstObject";
            local_108 = _objc_msgSend(local_118,"firstObject");
            _objc_retain(local_108);
            iVar3 = -0x555e87c2;
          }
        }
        else if (iVar7 == -0x1d232d73) {
          local_158 = "removeItemAtPath:error:";
          iVar3 = -0x641531d0;
        }
        else {
          iVar3 = -0x49e9471c;
          if ((iVar7 != -0x19871685) && (iVar3 = iVar7, iVar7 == -0x1918395c)) {
            local_210 = local_1b8;
            local_200 = local_1a8;
            local_208 = local_1a0;
            local_1f0 = 0x100000001;
            local_1f4 = 1;
            iVar3 = 0x7bb1ffa8;
            local_1f8 = local_191;
          }
        }
        goto LAB_00055650;
      }
      if (iVar7 < -0x35b0b643) {
        if (iVar7 < -0x39246af1) {
          iVar3 = 0x205ec5c;
          if ((iVar7 != -0x3c3bcd33) && (iVar3 = iVar7, iVar7 == -0x3b77038d)) {
            _objc_msgSend(local_168,local_158,local_160,0);
            iVar3 = 0x25bd92c2;
          }
        }
        else if (iVar7 == -0x39246af1) {
          iVar3 = -0x5853ec17;
        }
        else if (iVar7 == -0x368013ff) {
          iVar3 = 0x1d317671;
          if (local_91 == 0) {
            iVar3 = 0x685f16f6;
          }
        }
        goto LAB_00055650;
      }
      if (-0x33fe2442 < iVar7) {
        iVar3 = 0x4eb55601;
        if (((iVar7 != -0x33fe2441) && (iVar3 = 0x69cd204b, iVar7 != -0x32c85af3)) &&
           (iVar3 = iVar7, iVar7 == -0x3186872d)) {
          iVar3 = 0x3506c97f;
        }
        goto LAB_00055650;
      }
      if (iVar7 == -0x35b0b643) {
        _objc_release(local_108);
        _objc_release(local_118);
        iVar3 = 0x734343c9;
        goto LAB_00055650;
      }
      if (iVar7 != -0x347dc1c2) goto LAB_00055650;
    }
    iVar3 = 0x5e9b6c52;
    goto LAB_00055650;
  }
  if (iVar7 < 0x4eb55601) {
    if (iVar7 < 0x352e462d) {
      if (iVar7 < 0x1f33eabf) {
        if (iVar7 < 0x12871aae) {
          if (iVar7 < 0xf123d98) {
            iVar3 = -0xf9a4dc0;
            if ((iVar7 != 0x749834a) && (iVar3 = iVar7, iVar7 == 0x866ea16)) {
              local_1c0 = DAT_000a4070;
              local_1b8 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
              iVar3 = 0x57c855a7;
            }
          }
          else {
            iVar3 = -0x418781ae;
            if ((iVar7 != 0xf123d98) && (iVar3 = iVar7, iVar7 == 0x10e42375)) {
              _objc_msgSend(DAT_000a4070,"copyItemAtPath:toPath:error:",_g_tempFile,_g_tempFilestep2
                            ,0);
              local_140 = DAT_000a4070;
              local_150 = _g_tempFile;
              local_148 = "removeItemAtPath:error:";
              iVar3 = -0x4a30325f;
            }
          }
        }
        else if (iVar7 < 0x1b4580e8) {
          iVar3 = 0x25bd92c2;
          if ((iVar7 != 0x12871aae) && (iVar3 = iVar7, iVar7 == 0x130ef8bb)) {
            _objc_release(local_190);
            iVar3 = -0x73721466;
          }
        }
        else if (iVar7 == 0x1b4580e8) {
          local_b0 = local_a0;
          iVar3 = -0x33fe2441;
        }
        else {
          iVar3 = -0x418781ae;
          if ((iVar7 != 0x1ba1e6e0) && (iVar3 = iVar7, iVar7 == 0x1d317671)) goto LAB_000570dc;
        }
      }
      else if (iVar7 < 0x282b5175) {
        if (iVar7 < 0x25bd92c2) {
          iVar3 = -0x218f24e5;
          if ((iVar7 != 0x1f33eabf) && (iVar3 = iVar7, iVar7 == 0x2183f8d7)) {
            _objc_release(local_180);
            iVar3 = 0x4c2ab174;
          }
        }
        else if (iVar7 == 0x25bd92c2) {
          _objc_msgSend(local_168,local_158,local_160,0);
          iVar3 = 0x5047e638;
        }
        else if (iVar7 == 0x2698c2b7) {
          local_1e8 = "fileExistsAtPath:";
          iVar7 = _objc_msgSend(DAT_000a4070,"fileExistsAtPath:",_g_isenabledw2ProChinese);
          iVar3 = 0x32d903d1;
          if (iVar7 == 0) {
            iVar3 = 0x7c24699c;
          }
        }
        else if (iVar7 == 0x27241d4d) {
          iVar3 = 0x5443a593;
          if (local_81 == 0) {
            iVar3 = 0x6b7fed6d;
          }
        }
      }
      else if (iVar7 < 0x2f6f7031) {
        if (iVar7 == 0x282b5175) {
          local_1d8 = DAT_000a4070;
          local_1d0 = _g_tempFile;
          iVar3 = -0x19871685;
        }
        else if (iVar7 == 0x2b5d992d) {
LAB_00056e60:
          iVar3 = -0x423854ab;
        }
      }
      else {
        iVar3 = -0x1048c6c8;
        if (iVar7 != 0x2f6f7031) {
          if (iVar7 == 0x32d903d1) {
            iVar3 = -0xa51e7f3;
          }
          else {
            iVar3 = iVar7;
            if (iVar7 == 0x3506c97f) {
              iVar3 = -0x6108edcc;
            }
          }
        }
      }
    }
    else if (iVar7 < 0x3eb3c2bb) {
      if (iVar7 < 0x38323a5f) {
        if (iVar7 < 0x37bb639c) {
          iVar1 = 0x1b4580e8;
          if (iVar7 != 0x36ef2d4e) {
            iVar1 = iVar7;
          }
          iVar3 = -0x1dc7b0b0;
          if (iVar7 != 0x352e462d) {
            iVar3 = iVar1;
          }
        }
        else {
          iVar3 = 0x4c2ab174;
          if ((iVar7 != 0x37bb639c) && (iVar3 = iVar7, iVar7 == 0x38071ffb)) {
            iVar3 = -0x2286345a;
          }
        }
      }
      else if (iVar7 < 0x39b26b1c) {
        iVar3 = 0x246b1c0;
        if ((iVar7 != 0x38323a5f) && (iVar3 = iVar7, iVar7 == 0x398cfe85)) {
          local_a8 = unaff_x28;
          local_a0 = unaff_x27;
          iVar3 = -0x1783ddc;
        }
      }
      else {
        if (iVar7 == 0x39b26b1c) goto LAB_00056e60;
        iVar3 = 0x631316d4;
        if ((iVar7 != 0x3c5c2c02) && (iVar3 = iVar7, iVar7 == 0x3c9f0e36)) {
          _objc_release(local_a8);
          iVar3 = 0x36ef2d4e;
        }
      }
    }
    else if (iVar7 < 0x433ff10c) {
      if (iVar7 < 0x3f506569) {
        if (iVar7 == 0x3edab11e) {
          local_f0 = DAT_000a4070;
          local_e8 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          _objc_retain(local_e8);
          local_e0 = _objc_msgSend(local_e8,local_110);
          _objc_retain(local_e0);
          local_d8 = _objc_msgSend(local_e0,local_e0,local_100,&cf__w2avfictitious_mov);
          local_d0 = local_d8;
          iVar3 = 0x59966cb;
        }
        else if (iVar7 == 0x3f26ea5c) {
          _objc_msgSend(local_1d8,local_1e8,local_1d0);
          iVar3 = -0x49e9471c;
        }
        else if (iVar7 == 0x3eb3c2bb) {
          return;
        }
      }
      else if (iVar7 == 0x3f506569) {
        iVar3 = 0x282b5175;
        if (local_1d9 == '\0') {
          iVar3 = -0x1da9c564;
        }
      }
      else if (iVar7 == 0x42f784bc) {
        iVar3 = -0x4b594795;
      }
    }
    else if (iVar7 < 0x48ecff36) {
      iVar1 = -0x5d269c53;
      if (iVar7 != 0x43a8b996) {
        iVar1 = iVar7;
      }
      iVar3 = 0x5992b7e6;
      if (iVar7 != 0x433ff10c) {
        iVar3 = iVar1;
      }
    }
    else {
      iVar3 = -0x218f24e5;
      if (iVar7 != 0x48ecff36) {
        if (iVar7 == 0x4c2ab174) {
          _objc_release(local_180);
          iVar3 = -0x57f70d6e;
        }
        else {
          iVar3 = iVar7;
          if (iVar7 == 0x4d541737) {
            local_168 = DAT_000a4070;
            local_160 = _g_tempFilestep2;
            iVar3 = -0x39246af1;
          }
        }
      }
    }
    goto LAB_00055650;
  }
  if (iVar7 < 0x6451a267) {
    if (iVar7 < 0x575e0a06) {
      if (iVar7 < 0x52ee992c) {
        if (iVar7 < 0x5047e638) {
          if (iVar7 == 0x4eb55601) {
            _objc_release(local_b0);
            iVar3 = 0x3eb3c2bb;
          }
          else if (iVar7 == 0x50310196) goto LAB_00056d5c;
        }
        else {
          iVar3 = 0x51a4f88d;
          if ((iVar7 != 0x5047e638) && (iVar3 = iVar7, iVar7 == 0x51a4f88d)) {
LAB_00056980:
            iVar3 = 0x10e42375;
          }
        }
      }
      else if (iVar7 < 0x5443a593) {
        iVar3 = -0x35b0b643;
        if ((iVar7 != 0x52ee992c) && (iVar3 = iVar7, iVar7 == 0x53651e93)) {
          iVar3 = -0x7b662f95;
        }
      }
      else if (iVar7 == 0x5443a593) {
        local_188 = local_80;
        iVar3 = -0x32c85af3;
      }
      else if (iVar7 == 0x55c3cee1) {
        _AudioServicesPlaySystemSound(0x44e);
        iVar3 = -0x73246add;
      }
      else if (iVar7 == 0x56bf1790) {
LAB_00056e44:
        iVar3 = -0x67b27419;
      }
      goto LAB_00055650;
    }
    if (0x5ba05ff0 < iVar7) {
      if (iVar7 < 0x5e9b6c52) {
        if (iVar7 == 0x5ba05ff1) {
          _objc_release(local_190);
          iVar3 = 0x130ef8bb;
        }
        else if (iVar7 == 0x5e1257cc) {
          _objc_release(local_a8);
          iVar3 = 0x3c9f0e36;
        }
      }
      else if (iVar7 == 0x5e9b6c52) {
        _objc_retain(local_128);
        _objc_msgSend(local_128,local_128,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov)
        ;
        uVar11 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_138,local_148,uVar11,0);
        _objc_release(uVar11);
        _objc_release(local_128);
        _objc_release(local_130);
        iVar3 = -0x7bd0d950;
      }
      else {
        iVar3 = 0x4d541737;
        if ((iVar7 != 0x61cfdf18) && (iVar3 = iVar7, iVar7 == 0x631316d4)) {
          iVar3 = 0x27241d4d;
        }
      }
      goto LAB_00055650;
    }
    if (iVar7 < 0x5992b7e6) {
      if (iVar7 == 0x575e0a06) {
        local_1f0 = 0;
        iVar3 = 0x7bb1ffa8;
        if (local_1c1 == '\0') {
          iVar3 = 0x5a760424;
        }
        local_1f8 = 1;
        local_1f4 = 0;
      }
      else {
        iVar3 = 0x2b5d992d;
        if (iVar7 != 0x57c855a7) {
          iVar3 = iVar7;
        }
      }
      goto LAB_00055650;
    }
    if (iVar7 == 0x5992b7e6) {
      iVar3 = -0x368013ff;
      goto LAB_00055650;
    }
    if (iVar7 == 0x5a525d91) {
      local_190 = local_90;
      iVar3 = 0x66d0dc84;
      goto LAB_00055650;
    }
    if (iVar7 != 0x5a760424) goto LAB_00055650;
  }
  else {
    if (iVar7 < 0x71240394) {
      if (iVar7 < 0x69cd204b) {
        if (iVar7 < 0x66d514b4) {
          iVar1 = 0x74a64cdd;
          if (iVar7 != 0x66d0dc84) {
            iVar1 = iVar7;
          }
          iVar3 = -0x73246add;
          if (iVar7 != 0x6451a267) {
            iVar3 = iVar1;
          }
        }
        else if (iVar7 == 0x66d514b4) {
          iVar3 = -0x3c3bcd33;
        }
        else if (iVar7 == 0x685f16f6) {
          iVar3 = 0x631316d4;
        }
      }
      else if (iVar7 < 0x6ba73ea2) {
        if (iVar7 == 0x69cd204b) {
          _objc_release(local_188);
          iVar3 = -0x786be3bd;
        }
        else if (iVar7 == 0x6b7fed6d) {
          iVar3 = -0x1048c6c8;
        }
      }
      else {
        if (iVar7 == 0x6ba73ea2) {
          _objc_msgSend(local_b8,local_f0,"copyItemAtPath:toPath:error:",local_d8,local_b8,0);
          _objc_release(local_c0);
          _objc_release(local_c8);
          _objc_release(local_d0);
          _objc_release(local_e0);
          _objc_release(local_e8);
          uVar11 = DAT_000a4070;
          _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar8,local_110);
          uVar9 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar9,local_100,&cf__w2avfictitious_mov);
          uVar10 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar11,"removeItemAtPath:error:",uVar10,0);
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
          goto LAB_00056e44;
        }
        iVar3 = -0x7b662f95;
        if ((iVar7 != 0x6ba8f239) && (iVar3 = iVar7, iVar7 == 0x6f60e6ce)) {
          _objc_msgSend(local_108,"stringByAppendingPathComponent:",&cf__w2avfictitious_mov);
          uVar11 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_120,local_1e8,uVar11);
          _objc_release(uVar11);
          iVar3 = 0x493ee1e;
        }
      }
      goto LAB_00055650;
    }
    if (iVar7 < 0x77d9735d) {
      if (iVar7 < 0x74a64cdd) {
        iVar3 = 0x3506c97f;
        if (((iVar7 != 0x71240394) && (iVar3 = iVar7, iVar7 == 0x734343c9)) &&
           (iVar3 = 0x3edab11e, local_f1 == '\0')) {
          iVar3 = -0x67b27419;
        }
      }
      else {
        iVar3 = 0x130ef8bb;
        if (iVar7 != 0x74a64cdd) {
          if (iVar7 == 0x75171ae6) {
            unaff_x27 = &cf_Disabledsuccess;
            unaff_x28 = &cf_NotEnabled;
            iVar3 = 0x398cfe85;
          }
          else {
            iVar3 = iVar7;
            if (iVar7 == 0x7712c259) {
              _objc_msgSend(DAT_000a4070,"copyItemAtPath:toPath:error:",_g_tempFile,_g_tempFilestep2
                            ,0);
              goto LAB_00056980;
            }
          }
        }
      }
      goto LAB_00055650;
    }
    if (iVar7 < 0x7bb1ffa8) {
      iVar3 = 0x685f16f6;
      if (((iVar7 != 0x77d9735d) && (iVar3 = iVar7, iVar7 == 0x7a8d9f6e)) &&
         (iVar3 = -0x70673f77, local_71 == 0)) {
        iVar3 = -0x1dc7b0b0;
      }
      goto LAB_00055650;
    }
    if (iVar7 == 0x7bb1ffa8) {
      local_92 = local_1f8 & 1;
      local_91 = (byte)((ulong)local_1f0 >> 0x20) & 1;
      local_90 = local_208;
      local_81 = (byte)local_1f0 & 1;
      local_80 = local_200;
      local_71 = local_1f4 & 1;
      local_70 = local_210;
      iVar3 = 0x5992b7e6;
      goto LAB_00055650;
    }
    iVar3 = -0x2286345a;
    if ((iVar7 == 0x7c24699c) || (iVar3 = iVar7, iVar7 != 0x7c55cbe8)) goto LAB_00055650;
    _NSSearchPathForDirectoriesInDomains(0xd,1,1);
  }
  iVar3 = 0x866ea16;
  goto LAB_00055650;
}
void FUN_00057264(void)
{
  cfstringStruct *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  cfstringStruct *unaff_x27;
  undefined8 local_100;
  undefined8 local_f8;
  char *local_f0;
  char local_e2;
  char local_e1;
  undefined8 local_e0;
  char local_d1;
  undefined8 local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  iVar3 = -0x7529ff62;
LAB_000572d4:
  iVar8 = iVar3;
  iVar3 = iVar8;
  if (iVar8 < 0x3e77bf2) {
    if (iVar8 < -0x33971db8) {
      if (-0x63010058 < iVar8) {
        if (iVar8 < -0x41cb28bf) {
          if (iVar8 < -0x5858b728) {
            if (iVar8 == -0x63010057) {
              _objc_release(local_78);
              iVar3 = -0x66382a70;
            }
            else {
              pcVar1 = &cf_Enabledsuccess;
              if (iVar8 != -0x58a3d381) {
                pcVar1 = unaff_x27;
              }
              unaff_x27 = pcVar1;
              iVar3 = -0x333fb5c9;
              if (iVar8 != -0x58a3d381) {
                iVar3 = iVar8;
              }
            }
            goto LAB_000572d4;
          }
          if (iVar8 == -0x5858b728) {
            local_e0 = DAT_000a4070;
            iVar3 = 0x73d4f1c7;
            goto LAB_000572d4;
          }
          if (iVar8 != -0x58375705) {
            if (iVar8 == -0x4211fce8) goto LAB_00057ea0;
            goto LAB_000572d4;
          }
          bVar2 = local_d1 == '\0';
          iVar3 = 0x3d67c4b0;
        }
        else {
          if (iVar8 < -0x3ba69ede) {
            if (iVar8 == -0x41cb28bf) {
              uVar4 = _objc_retain(local_80);
              _NSSearchPathForDirectoriesInDomains(0xd,1,1);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar5,local_c0);
              uVar6 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar6,local_b0,&cf__w2avfictitious_mov);
              uVar7 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_98,"copyItemAtPath:toPath:error:",local_80,uVar7,0);
              _objc_release(uVar4);
              _objc_release(uVar7);
              _objc_release(uVar6);
              _objc_release(uVar5);
              _objc_release(local_88);
              _objc_release(local_90);
              uVar4 = DAT_000a4070;
              _NSSearchPathForDirectoriesInDomains(0xd,1,1);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar5,local_c0);
              uVar6 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar6,local_b0,&cf__w2avfictitiousCaches_mov);
              uVar7 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar4,"removeItemAtPath:error:",uVar7,0);
              _objc_release(uVar7);
              _objc_release(uVar6);
              _objc_release(uVar5);
LAB_0005808c:
              iVar3 = -0x176e96b6;
            }
            else {
              iVar3 = -0x5858b728;
              if (iVar8 != -0x3d9060dd) {
                iVar3 = iVar8;
              }
            }
            goto LAB_000572d4;
          }
          if (iVar8 != -0x3ba69ede) {
            iVar9 = -0x3a2c484e;
            iVar3 = -0x2c80622e;
            bVar2 = iVar8 == -0x37a65032;
            iVar10 = -0x58a3d381;
            goto LAB_00057bdc;
          }
          _objc_retain(local_a0);
          iVar3 = _objc_msgSend(local_d0,local_f0,local_a8);
          _objc_release(local_a0);
          _objc_release(local_b8);
          _objc_release(local_c8);
          bVar2 = iVar3 == 0;
          iVar3 = 0xdda513c;
        }
        if (bVar2) {
          iVar3 = 0x6d6f5f56;
        }
        goto LAB_000572d4;
      }
      if (-0x6edad8d9 < iVar8) {
        if (iVar8 < -0x6730b6b9) {
          if (iVar8 == -0x6edad8d8) {
            local_98 = DAT_000a4070;
            iVar3 = 0x54a87960;
          }
          else {
            iVar3 = 0x6d6f5f56;
            if (iVar8 != -0x6e5b41e4) {
              iVar3 = iVar8;
            }
          }
        }
        else {
          iVar3 = -0x63010057;
          if (iVar8 != -0x6730b6b9) {
            if (iVar8 == -0x66382a70) {
              iVar3 = 0x7c5de0c8;
            }
            else {
              iVar3 = iVar8;
              if (iVar8 == -0x656cd204) {
                iVar3 = -0x3a2c484e;
              }
            }
          }
        }
        goto LAB_000572d4;
      }
      if (-0x74d46b99 < iVar8) {
        if (iVar8 == -0x74d46b98) {
          iVar3 = -0xda154d9;
        }
        else if (iVar8 == -0x73bd2080) {
          local_100 = DAT_000a4070;
          local_f8 = _g_isenabledw2ProChinese;
          local_f0 = "fileExistsAtPath:";
          iVar3 = 0x4cda5584;
        }
        goto LAB_000572d4;
      }
      iVar9 = -0x7cd846ed;
      iVar3 = -0x2210a180;
      bVar2 = iVar8 == -0x7529ff62;
      iVar10 = -0x73bd2080;
    }
    else if (iVar8 < -0x1884ad1a) {
      if (iVar8 < -0x2c80622e) {
        if (iVar8 < -0x3272d2e8) {
          iVar3 = -0x5858b728;
          if ((iVar8 != -0x33971db8) && (iVar3 = iVar8, iVar8 == -0x333fb5c9)) {
            local_70 = unaff_x27;
            iVar3 = 0xd0ba476;
          }
        }
        else {
          iVar3 = 0xa463e65;
          if ((iVar8 != -0x3272d2e8) && (iVar3 = iVar8, iVar8 == -0x31e5a411)) {
            local_d1 = _objc_msgSend(local_e0,local_f0,_g_tempFilestep2);
            iVar3 = 0x21d552e;
          }
        }
        goto LAB_000572d4;
      }
      if (-0x2a7a843f < iVar8) {
        if (iVar8 == -0x2a7a843e) {
          _objc_msgSend(local_e0,local_f0,_g_tempFilestep2);
          iVar3 = -0x31e5a411;
        }
        else if (iVar8 == -0x2876e6ec) {
          _objc_release(local_78);
          iVar3 = -0x63010057;
        }
        else if (iVar8 == -0x2210a180) goto LAB_0005808c;
        goto LAB_000572d4;
      }
      iVar9 = -0x2c80622e;
      iVar3 = 0x4c04537d;
      bVar2 = iVar8 == -0x2bc82214;
      iVar10 = -0x58375705;
    }
    else {
      if (-0x1b95d4f < iVar8) {
        if (iVar8 < 0x626326) {
          pcVar1 = &cf__;
          if (iVar8 != -0x5bfb40) {
            pcVar1 = unaff_x27;
          }
          iVar10 = -0x333fb5c9;
          if (iVar8 != -0x5bfb40) {
            iVar10 = iVar8;
          }
          iVar3 = 0x2124e4f6;
          if (iVar8 != -0x1b95d4e) {
            unaff_x27 = pcVar1;
            iVar3 = iVar10;
          }
        }
        else {
          iVar3 = 0x5b78a8be;
          if (iVar8 != 0x626326) {
            if (iVar8 == 0x1ba8e8b) {
              local_e2 = _objc_msgSend(local_100,local_f0,local_f8);
              iVar3 = 0x72f1750c;
            }
            else {
              iVar3 = 0x7ad4e2fc;
              if (iVar8 != 0x21d552e) {
                iVar3 = iVar8;
              }
            }
          }
        }
        goto LAB_000572d4;
      }
      if (-0x176e96b7 < iVar8) {
        if (iVar8 == -0x176e96b6) {
          uVar4 = _objc_retain(local_80);
          _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar5,local_c0);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar6,local_b0,&cf__w2avfictitious_mov);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_98,"copyItemAtPath:toPath:error:",local_80,uVar7,0);
          _objc_release(uVar4);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(local_88);
          _objc_release(local_90);
          uVar4 = DAT_000a4070;
          _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar5,local_c0);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar6,local_b0,&cf__w2avfictitiousCaches_mov);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar4,"removeItemAtPath:error:",uVar7,0);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          iVar3 = -0x6e5b41e4;
        }
        else if (iVar8 == -0xda154d9) {
          local_78 = local_70;
          iVar3 = -0x1884ad1a;
        }
        else if (iVar8 == -0x9d4e8c3) {
          local_d0 = DAT_000a4070;
          iVar3 = 0x3e77bf2;
        }
        goto LAB_000572d4;
      }
      iVar9 = -0x1884ad1a;
      iVar3 = -0x6730b6b9;
      bVar2 = iVar8 == -0x17855a10;
      iVar10 = 0x2c8126c1;
    }
  }
  else {
    if (iVar8 < 0x49c3f81b) {
      if (iVar8 < 0x2124e4f6) {
        if (iVar8 < 0xaa67184) {
          if (iVar8 < 0x655ef4b) {
            if (iVar8 == 0x3e77bf2) {
              local_c8 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
              _objc_retain(local_c8);
              local_c0 = "firstObject";
              local_b8 = _objc_msgSend(local_c8,"firstObject");
              _objc_retain(local_b8);
              local_b0 = "stringByAppendingPathComponent:";
              local_a8 = _objc_msgSend(local_b8,"stringByAppendingPathComponent:",
                                       &cf__w2avfictitiousCaches_mov);
              local_a0 = local_a8;
              iVar3 = -0x3ba69ede;
            }
            else {
              iVar3 = 0x5b78a8be;
              if (iVar8 != 0x4676450) {
                iVar3 = iVar8;
              }
            }
          }
          else if (iVar8 == 0x655ef4b) {
            _NSSearchPathForDirectoriesInDomains(0xd,1,1);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar4,local_c0);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar4,local_b0,&cf__w2avfictitiousCaches_mov);
            iVar3 = 0x2c8126c1;
          }
          else {
            iVar3 = -0x5bfb40;
            if (iVar8 != 0xa463e65) {
              iVar3 = iVar8;
            }
          }
        }
        else if (iVar8 < 0xdda513c) {
          iVar3 = 0xa463e65;
          if ((iVar8 != 0xaa67184) && (iVar3 = iVar8, iVar8 == 0xd0ba476)) {
            _AudioServicesPlaySystemSound(0x5f0);
            local_e1 = _objc_msgSend(DAT_000a4070,local_f0,_g_isMirroredMarkfbs);
            iVar3 = 0x23a92e2a;
          }
        }
        else {
          iVar3 = -0x6edad8d8;
          if (((iVar8 != 0xdda513c) && (iVar3 = 0x7ff53a41, iVar8 != 0x1010a78a)) &&
             (iVar3 = iVar8, iVar8 == 0x17a428d8)) {
            _objc_msgSend(DAT_000a4070,"removeItemAtPath:error:",_g_tempFilestep2,0);
            iVar3 = 0x4676450;
          }
        }
      }
      else if (iVar8 < 0x2c8126c1) {
        if (iVar8 < 0x23a92e2a) {
          iVar9 = 0x2124e4f6;
          iVar3 = 0x5e0b02d8;
          bVar2 = iVar8 == 0x22762735;
          iVar10 = -0x37a65032;
          goto LAB_00057bdc;
        }
        if (iVar8 == 0x23a92e2a) {
          iVar3 = -0x3d9060dd;
          if (local_e1 == '\0') {
            iVar3 = -0x9d4e8c3;
          }
        }
        else if (iVar8 == 0x263cbaeb) {
          _AudioServicesPlaySystemSound(0x5f0);
          _objc_msgSend(DAT_000a4070,local_f0,_g_isMirroredMarkfbs);
          iVar3 = 0xd0ba476;
        }
        else if (iVar8 == 0x29ea910b) {
          iVar3 = -0x6edad8d8;
        }
      }
      else if (iVar8 < 0x3b7003b8) {
        if (iVar8 == 0x2c8126c1) {
          local_90 = _NSSearchPathForDirectoriesInDomains(0xd,1,1);
          _objc_retain(local_90);
          local_88 = _objc_msgSend(local_90,local_c0);
          _objc_retain(local_88);
          local_80 = _objc_msgSend(local_88,local_88,local_b0,&cf__w2avfictitiousCaches_mov);
          iVar3 = -0x7cd846ed;
        }
        else {
          iVar3 = -0x31e5a411;
          if (iVar8 != 0x2e4057c9) {
            iVar3 = iVar8;
          }
        }
      }
      else {
        iVar3 = 0x6d6f5f56;
        if (iVar8 != 0x3b7003b8) {
          if (iVar8 == 0x3d67c4b0) {
            _objc_msgSend(DAT_000a4070,"copyItemAtPath:toPath:error:",_g_tempFilestep2,_g_tempFile,0
                         );
            iVar3 = 0x17a428d8;
          }
          else {
            iVar3 = iVar8;
            if (iVar8 == 0x401e045a) {
              iVar3 = -0x73bd2080;
            }
          }
        }
      }
      goto LAB_000572d4;
    }
    iVar3 = -0x1b95d4e;
    if (0x6cb2956b < iVar8) {
      if (iVar8 < 0x791f4d69) {
        iVar10 = 0x2e4057c9;
        if (iVar8 != 0x73d4f1c7) {
          iVar10 = iVar8;
        }
        iVar9 = 0x1010a78a;
        if (iVar8 != 0x72f1750c) {
          iVar9 = iVar10;
        }
        if (iVar8 != 0x6df3a353) {
          iVar3 = iVar9;
        }
        iVar10 = -0xda154d9;
        if (iVar8 != 0x6d6f5f56) {
          iVar10 = iVar8;
        }
        iVar9 = 0x7ff53a41;
        if (iVar8 != 0x6cb2956c) {
          iVar9 = iVar10;
        }
        if (iVar8 < 0x6df3a353) {
          iVar3 = iVar9;
        }
      }
      else if (iVar8 < 0x7c5de0c8) {
        iVar10 = -0x2bc82214;
        if (iVar8 != 0x7ad4e2fc) {
          iVar10 = iVar8;
        }
        iVar3 = -0x2bc82214;
        if (iVar8 != 0x791f4d69) {
          iVar3 = iVar10;
        }
      }
      else if (iVar8 == 0x7f95c53b) {
        _objc_msgSend(local_100,local_f0,local_f8);
LAB_00057ea0:
        iVar3 = 0x1ba8e8b;
      }
      else if (iVar8 == 0x7ff53a41) {
        iVar3 = 0x49c3f81b;
      }
      else {
        iVar3 = iVar8;
        if (iVar8 == 0x7c5de0c8) {
          return;
        }
      }
      goto LAB_000572d4;
    }
    if (0x54a8795f < iVar8) {
      if (iVar8 < 0x5e0b02d8) {
        iVar9 = 0x54a87960;
        iVar3 = -0x17855a10;
        bVar2 = iVar8 == 0x5b78a8be;
        iVar10 = 0x3b7003b8;
        goto LAB_00057bdc;
      }
      if (iVar8 == 0x5e0b02d8) {
        iVar3 = 0x22762735;
      }
      else {
        iVar3 = -0x3a2c484e;
        if ((iVar8 != 0x6387602c) && (iVar3 = iVar8, iVar8 == 0x64e1b89c)) {
          iVar3 = -0x37a65032;
        }
      }
      goto LAB_000572d4;
    }
    if (iVar8 < 0x4c04537d) {
      if (iVar8 == 0x49c3f81b) {
        iVar3 = -0x656cd204;
        if (local_e2 == '\0') {
          iVar3 = 0x6df3a353;
        }
      }
      else if (iVar8 != 0x4bd16d76) {
        iVar3 = iVar8;
      }
      goto LAB_000572d4;
    }
    iVar9 = 0x4c04537d;
    iVar3 = -0x3272d2e8;
    bVar2 = iVar8 == 0x4cda5584;
    iVar10 = -0x4211fce8;
  }
LAB_00057bdc:
  if (!bVar2) {
    iVar10 = iVar8;
  }
  if (iVar8 != iVar9) {
    iVar3 = iVar10;
  }
  goto LAB_000572d4;
}
void FUN_0005817c(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)
{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  char *local_70;
  undefined *local_68;
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_retain(uVar1);
  uVar2 = _objc_msgSend(uVar1,"keyWindow");
  _objc_retain(uVar2);
  uVar6 = _objc_msgSend(uVar2,"bounds");
  uVar5 = 0x20c55607;
  do {
    while( true ) {
      while (uVar5 < 0x2f98b09e) {
        if (uVar5 == 0x20c55607) {
          local_70 = "setFrame:";
          _objc_msgSend(uVar6,param_2,param_3,param_4,DAT_000a4078,"setFrame:");
          _objc_release(uVar2);
          _objc_release(uVar1);
          local_68 = &_OBJC_CLASS___UIApplication;
          uVar5 = 0x2f98b09e;
        }
        else if (uVar5 == 0x2333f31d) {
          _objc_msgSend(local_68,"sharedApplication");
          uVar3 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar3,"keyWindow");
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar4,"bounds");
          _objc_msgSend(_g_maskLayer,local_70);
          _objc_release(uVar4);
          _objc_release(uVar3);
          uVar5 = 0x33f4b5a9;
        }
      }
      if (uVar5 != 0x2f98b09e) break;
      uVar5 = 0x2333f31d;
    }
  } while (uVar5 != 0x33f4b5a9);
  return;
}
void FUN_0005834c(long param_1,long param_2,undefined8 param_3)
{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long unaff_x24;
  char local_49;
  long local_48;
  _objc_retain(param_3);
  lVar2 = _objc_msgSend(&objc::class_t::GetFrame,"getCurrentFrame::",param_2,1);
  iVar1 = 0x63d7c45d;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar1, 0x1caf6d7d < iVar3) {
          if (iVar3 < 0x42e1e1b5) {
            if (iVar3 < 0x2d432546) {
              iVar1 = 0x5c1aae8;
              if (((iVar3 != 0x1caf6d7e) && (iVar1 = iVar3, iVar3 == 0x2b663b9a)) &&
                 (unaff_x24 = param_2, iVar1 = -0x6ca5841e, local_49 == '\0')) {
                iVar1 = 0x7fe2a45b;
              }
            }
            else if (iVar3 == 0x2d432546) {
              iVar1 = -0x3d7fc79a;
            }
            else {
              iVar1 = 0x5704c19;
              if (iVar3 != 0x3e8d2cea) {
                iVar1 = iVar3;
              }
            }
          }
          else if (iVar3 < 0x63d7c45d) {
            if (iVar3 == 0x42e1e1b5) {
              (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
                        (*(long *)(param_1 + 0x20),local_48,param_3);
              DAT_000a40a8 = 0;
              _objc_release(param_3);
              iVar1 = 0x6e2a6af2;
            }
            else {
              iVar1 = -0x146fba93;
              if (iVar3 != 0x57f188f4) {
                iVar1 = iVar3;
              }
            }
          }
          else {
            iVar1 = -0x3d7fc79a;
            if (iVar3 != 0x63d7c45d) {
              if (iVar3 == 0x7fe2a45b) {
                iVar1 = 0x42e1e1b5;
                local_48 = unaff_x24;
              }
              else {
                iVar1 = iVar3;
                if (iVar3 == 0x6e2a6af2) {
                  return;
                }
              }
            }
          }
        }
        if (iVar3 < -0x146fba93) break;
        if (iVar3 < 0x5c1aae8) {
          iVar4 = 0x5c1aae8;
          if (iVar3 != 0x5704c19) {
            iVar4 = iVar3;
          }
          iVar1 = 0xd782f0c;
          if (iVar3 != -0x146fba93) {
            iVar1 = iVar4;
          }
        }
        else if (iVar3 == 0x5c1aae8) {
          iVar1 = 0x2b663b9a;
        }
        else {
          iVar1 = iVar3;
          if (iVar3 == 0xd782f0c) {
            unaff_x24 = lVar2;
            iVar1 = 0x7fe2a45b;
          }
        }
      }
      if (-0x3d7fc79b < iVar3) break;
      if (iVar3 == -0x7a081069) {
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_48,param_3);
        DAT_000a40a8 = 0;
        _objc_release(param_3);
        iVar1 = 0x42e1e1b5;
      }
      else {
        iVar4 = -0x6ca5841e;
LAB_00058538:
        iVar1 = 0x57f188f4;
        if (iVar3 != iVar4) {
          iVar1 = iVar3;
        }
      }
    }
    if (iVar3 != -0x3d7fc79a) {
      iVar4 = -0x30bfb2ac;
      goto LAB_00058538;
    }
    local_49 = lVar2 != 0;
    iVar1 = 0x3e8d2cea;
  } while( true );
}
void FUN_00058670(long param_1,long param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_70;
  undefined8 local_68;
  iVar2 = -0x6b45f01d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar2, iVar2 = iVar3, -0x135cd7ad < iVar3) {
            if (iVar3 < 0x34d21401) {
              if (iVar3 == -0x135cd7ac) {
                __Block_object_assign(local_70,local_68,7);
                iVar2 = -0x580da8e9;
              }
              else {
                iVar2 = -0x135cd7ac;
                if (iVar3 != 0x69a6886) {
                  iVar2 = iVar3;
                }
              }
            }
            else if (iVar3 == 0x34d21401) {
              iVar2 = -0x2fc64d6d;
            }
            else if (iVar3 == 0x66f0cb93) {
              local_68 = *(void **)(param_2 + 0x20);
              iVar2 = -0x3a1778e6;
              local_70 = (void *)(param_1 + 0x20);
            }
          }
          if (iVar3 < -0x3a1778e6) break;
          iVar1 = -0x750c36d9;
          if (iVar3 != -0x2fc64d6d) {
            iVar1 = iVar3;
          }
          iVar2 = 0x69a6886;
          if (iVar3 != -0x3a1778e6) {
            iVar2 = iVar1;
          }
        }
        if (iVar3 != -0x6b45f01d) break;
        iVar2 = 0x66f0cb93;
      }
      if (iVar3 != -0x580da8e9) break;
      iVar2 = 0x34d21401;
    }
  } while (iVar3 != -0x750c36d9);
  return;
}
void FUN_000587e4(void)
{
                    // WARNING: Could not recover jumptable at 0x0005882c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_000a32f0)();
  return;
}
void FUN_00059a30(long param_1,long param_2)
{
  undefined8 *puVar1;
  int iVar2;
  undefined8 local_8;
  puVar1 = (undefined8 *)(param_2 + 0x28);
  iVar2 = -0x41103553;
  do {
    while( true ) {
      while (iVar2 < 0x10ae7a13) {
        if (iVar2 == -0x41103553) goto LAB_00059afc;
        if (iVar2 == -0x3855b652) {
          iVar2 = 0x6824ac4;
        }
        else if (iVar2 == 0x6824ac4) {
          *local_8 = 0;
          iVar2 = 0x7c5cf131;
        }
      }
      if (0x46b1605a < iVar2) break;
      if (iVar2 == 0x10ae7a13) {
        *(undefined8 *)(param_1 + 0x28) = *puVar1;
LAB_00059afc:
        iVar2 = 0x46b1605b;
      }
      else if (iVar2 == 0x12a16a76) {
        iVar2 = -0x3855b652;
      }
    }
    if (iVar2 == 0x7c5cf131) {
      return;
    }
    if (iVar2 == 0x46b1605b) {
      *(undefined8 *)(param_1 + 0x28) = *puVar1;
      iVar2 = 0x12a16a76;
      local_8 = puVar1;
    }
  } while( true );
}
void FUN_00059b3c(long param_1)
{
  int iVar1;
  int iVar2;
  long local_30;
  undefined8 local_28;
  iVar1 = -0x3dcf9a7;
  do {
    while( true ) {
      while (iVar2 = iVar1, iVar2 < -0x470b128) {
        if (iVar2 < -0x21ec3ecb) {
          if (iVar2 == -0x7752de8c) {
            iVar1 = 0x5162c4d2;
          }
          else {
            iVar1 = 0x5aee3dc1;
            if ((iVar2 != -0x530f7c26) && (iVar1 = iVar2, iVar2 == -0x3fb05978)) {
              local_30 = param_1;
              iVar1 = -0x7752de8c;
            }
          }
        }
        else if (iVar2 == -0x21ec3ecb) {
          _objc_release(local_28);
          iVar1 = 0x5aee3dc1;
        }
        else if (iVar2 == -0xc1fd8da) {
          local_28 = *(undefined8 *)(local_30 + 0x28);
          iVar1 = -0xa8c9139;
        }
        else {
          iVar1 = -0x530f7c26;
          if (iVar2 != -0xa8c9139) {
            iVar1 = iVar2;
          }
        }
      }
      if (iVar2 < 0x414f8e71) break;
      if (iVar2 == 0x414f8e71) {
        iVar1 = -0xc1fd8da;
      }
      else {
        iVar1 = -0xc1fd8da;
        if ((iVar2 != 0x5162c4d2) && (iVar1 = iVar2, iVar2 == 0x5aee3dc1)) {
          _objc_release(local_28);
          iVar1 = -0x470b128;
        }
      }
    }
    iVar1 = -0x3fb05978;
  } while (((iVar2 == -0x3dcf9a7) || (iVar1 = -0x3fb05978, iVar2 == 0x39129e05)) ||
          (iVar1 = iVar2, iVar2 != -0x470b128));
  return;
}
undefined8 FUN_00059d04(long param_1,undefined8 param_2,undefined8 param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_x24;
  long local_d0;
  char *local_c8;
  char local_b9;
  undefined8 local_b8;
  undefined8 local_b0;
  char local_a1;
  undefined8 local_a0;
  undefined8 local_98;
  char local_89;
  long *local_88;
  undefined8 local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  iVar4 = 0x5dd69c49;
LAB_00059d70:
  do {
    while (iVar2 = iVar4, iVar4 = iVar2, iVar2 < 0x1c9eca2a) {
      if (iVar2 < -0x3c705519) {
        if (iVar2 < -0x5591ccb3) {
          if (iVar2 < -0x76885682) {
            if (iVar2 == -0x7be8e73e) {
              local_88 = (long *)(*(long *)(local_d0 + 0x20) + 8);
              iVar4 = -0x425eeccd;
            }
            else {
              iVar3 = -0x7af136de;
              iVar4 = 0x3501160b;
              iVar5 = -0x2a70b153;
              if (iVar2 != -0x76dd35aa) {
                iVar5 = iVar2;
              }
LAB_0005a308:
              if (iVar2 != iVar3) {
                iVar4 = iVar5;
              }
            }
          }
          else if (iVar2 == -0x76885682) {
            iVar4 = -0x4ae7e783;
          }
          else {
            iVar4 = -0x4dd8ee4e;
            if ((iVar2 != -0x6c256bd3) && (iVar4 = iVar2, iVar2 == -0x6a3e1ad4)) {
              local_98 = _g_tempFile;
              iVar4 = 0x6494cd25;
            }
          }
        }
        else if (iVar2 < -0x442c68fb) {
          iVar4 = -0x76885682;
          if (iVar2 != -0x5591ccb3) {
            if (iVar2 == -0x4dd8ee4e) {
              local_b8 = DAT_000a4070;
              local_b0 = _g_isMirroredMarkfbs;
              iVar4 = -0x7af136de;
            }
            else {
              iVar4 = iVar2;
              if (iVar2 == -0x4ae7e783) {
                iVar4 = -0x76dd35aa;
                if (local_a1 == '\0') {
                  iVar4 = -0x2a98be71;
                }
              }
            }
          }
        }
        else {
          if (iVar2 != -0x442c68fb) {
            iVar3 = -0x425eeccd;
            iVar4 = -0x1f291b7d;
            iVar1 = -0x3ed94939;
            iVar5 = 0x5a91a16f;
            goto LAB_0005a304;
          }
          _objc_retain(local_80);
          iVar4 = -0x4067bea;
        }
      }
      else if (iVar2 < -0x25e07af4) {
        if (iVar2 < -0x2bed26bf) {
          if (iVar2 == -0x3c705519) {
            _objc_retain(param_3);
            _objc_msgSend(DAT_000a4070,"fileExistsAtPath:",_g_tempFile);
            iVar4 = -0xfa5e563;
          }
          else if (iVar2 == -0x34563875) {
            (*(code *)*local_70)(param_2,"fileDataRepresentationWithCustomizer:",param_3);
            unaff_x24 = _objc_retainAutoreleasedReturnValue();
            iVar4 = 0x2023957c;
          }
          else if (iVar2 == -0x304f9439) {
            _objc_release(param_3);
            _objc_release(param_2);
            _objc_autorelease(local_68);
            iVar4 = 0x209401aa;
          }
        }
        else if (iVar2 == -0x2bed26bf) {
          local_80 = *(undefined8 *)(*local_88 + 0x28);
          iVar4 = -0x3ed94939;
        }
        else if (iVar2 == -0x2a98be71) {
          local_78 = (long *)(local_d0 + 0x28);
          iVar4 = 0x65e9d62d;
        }
        else if (iVar2 == -0x2a70b153) {
          local_a0 = DAT_000a4070;
          iVar4 = 0x790c7195;
        }
      }
      else if (iVar2 < -0x19459f10) {
        if (iVar2 == -0x25e07af4) {
          local_a1 = _objc_msgSend(local_b8,local_c8,local_b0);
          iVar4 = 0x1cdd7277;
        }
        else {
          iVar4 = -0x2bed26bf;
          if (((iVar2 != -0x1f291b7d) && (iVar4 = iVar2, iVar2 == -0x19f0d11a)) &&
             (iVar4 = 0x37388125, local_b9 == '\0')) {
            iVar4 = -0x6c256bd3;
          }
        }
      }
      else if (iVar2 < -0x4067bea) {
        iVar4 = 0x42eaef8a;
        if ((iVar2 != -0x19459f10) && (iVar4 = iVar2, iVar2 == -0xfa5e563)) {
          _objc_retain(param_3);
          local_c8 = "fileExistsAtPath:";
          local_b9 = _objc_msgSend(DAT_000a4070,"fileExistsAtPath:",_g_tempFile);
          iVar4 = -0x19f0d11a;
        }
      }
      else if (iVar2 == -0x4067bea) {
        unaff_x24 = local_80;
        iVar4 = 0x2023957c;
      }
      else if (iVar2 == 0x1c76cfe9) {
        _objc_release(param_3);
        _objc_release(param_2);
        _objc_autorelease(local_68);
        iVar4 = -0x304f9439;
      }
    }
    iVar4 = -0x6a3e1ad4;
    if (iVar2 < 0x5446ca98) {
      if (iVar2 < 0x3b1954ff) {
        if (iVar2 < 0x2023957c) {
          iVar4 = -0x76885682;
          if (iVar2 != 0x1c9eca2a) {
            if (iVar2 == 0x1cdd7277) {
              iVar4 = 0x1c9eca2a;
            }
            else {
              iVar4 = iVar2;
              if (iVar2 == 0x1ff3f470) {
                iVar4 = -0x7be8e73e;
              }
            }
          }
        }
        else if (iVar2 < 0x3501160b) {
          if (iVar2 == 0x2023957c) {
            local_68 = unaff_x24;
            iVar4 = -0x304f9439;
          }
          else {
            iVar4 = iVar2;
            if (iVar2 == 0x209401aa) {
              return local_68;
            }
          }
        }
        else {
          iVar3 = -0x7be8e73e;
          if (iVar2 != 0x37388125) {
            iVar3 = iVar2;
          }
          iVar4 = -0x25e07af4;
          if (iVar2 != 0x3501160b) {
            iVar4 = iVar3;
          }
        }
      }
      else if (iVar2 < 0x4bbf2839) {
        if (iVar2 == 0x3b1954ff) {
          iVar4 = 0x4bbf2839;
        }
        else if (iVar2 == 0x42eaef8a) {
          local_89 = _objc_msgSend(local_a0,local_c8,local_98);
          iVar4 = 0x6fdec0df;
        }
        else {
          iVar4 = -0x2a70b153;
          if (iVar2 != 0x46b81df1) {
            iVar4 = iVar2;
          }
        }
      }
      else if (iVar2 == 0x4bbf2839) {
        local_70 = (undefined8 *)(*(long *)(*local_78 + 8) + 0x18);
        iVar4 = 0x7c08088c;
      }
      else if (iVar2 == 0x4d531b6b) {
        _objc_msgSend(local_b8,local_c8,local_b0);
        iVar4 = -0x25e07af4;
      }
      else if (iVar2 != 0x4ffb911e) {
        iVar4 = iVar2;
      }
      goto LAB_00059d70;
    }
    if (iVar2 < 0x65e9d62d) {
      if (iVar2 < 0x5acd971a) {
        if (iVar2 == 0x5446ca98) {
          _objc_retain(local_80);
          iVar4 = -0x442c68fb;
        }
        else {
          iVar3 = -0x442c68fb;
          if (iVar2 != 0x5a91a16f) {
            iVar3 = iVar2;
          }
          if (iVar2 != 0x54ad1341) {
            iVar4 = iVar3;
          }
        }
      }
      else if (iVar2 == 0x5acd971a) {
        iVar4 = -0x2bed26bf;
      }
      else if (iVar2 == 0x5dd69c49) {
        _objc_retain(param_2);
        local_d0 = param_1;
        iVar4 = 0x71f1d4c9;
      }
      else {
        iVar4 = -0x19459f10;
        if (iVar2 != 0x6494cd25) {
          iVar4 = iVar2;
        }
      }
    }
    else if (iVar2 < 0x7065a1f0) {
      iVar4 = 0x4bbf2839;
      if (((iVar2 != 0x65e9d62d) && (iVar4 = -0x4dd8ee4e, iVar2 != 0x67f46c42)) &&
         ((iVar4 = iVar2, iVar2 == 0x6fdec0df && (iVar4 = 0x37388125, local_89 == '\0')))) {
        iVar4 = -0x2a98be71;
      }
    }
    else {
      if (0x790c7194 < iVar2) {
        iVar3 = 0x790c7195;
        iVar4 = 0x4ffb911e;
        iVar1 = 0x7c08088c;
        iVar5 = -0x34563875;
LAB_0005a304:
        if (iVar2 != iVar1) {
          iVar5 = iVar2;
        }
        goto LAB_0005a308;
      }
      if (iVar2 == 0x7065a1f0) {
        _objc_msgSend(local_a0,local_c8,local_98);
        iVar4 = 0x42eaef8a;
      }
      else {
        iVar4 = -0xfa5e563;
        if (iVar2 != 0x71f1d4c9) {
          iVar4 = iVar2;
        }
      }
    }
  } while( true );
}
void FUN_0005a5a4(long param_1,long param_2)
{
  int iVar1;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  iVar1 = 0x259f9715;
  while( true ) {
    while( true ) {
      while (0x259f9714 < iVar1) {
        if (iVar1 < 0x32a51c42) {
          if (iVar1 == 0x259f9715) {
            iVar1 = 0x32a51c42;
          }
          else if (iVar1 == 0x31f31d5b) {
            iVar1 = -0x7125ae61;
          }
        }
        else if (iVar1 == 0x525bcb6c) {
          local_68 = (void *)(local_78 + 0x28);
          iVar1 = 0x31f31d5b;
        }
        else if (iVar1 == 0x32a51c42) {
          __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
          iVar1 = 0x11685e42;
          local_78 = param_1;
          local_70 = (undefined8 *)(param_2 + 0x28);
        }
      }
      if (iVar1 != -0x7125ae61) break;
      __Block_object_assign(local_68,(void *)*local_70,8);
      iVar1 = -0x63762f57;
    }
    if (iVar1 == -0x63762f57) break;
    if (iVar1 == 0x11685e42) {
      iVar1 = 0x525bcb6c;
    }
  }
  return;
}
void FUN_0005a71c(long param_1)
{
  int iVar1;
  int iVar2;
  undefined8 local_30;
  undefined8 local_28;
  iVar1 = 0x44934147;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar2 = iVar1, iVar1 = iVar2, iVar2 < 0x2b699568) {
            if (iVar2 < -0x449714e8) {
              if (iVar2 == -0x788a2ee0) {
                iVar1 = 0x17b9196b;
              }
              else if (iVar2 == -0x63bd61c0) {
                local_28 = (undefined8 *)(local_30 + 0x20);
                iVar1 = -0x152ea7f9;
              }
            }
            else if (iVar2 == -0x449714e8) {
              iVar1 = 0x3de736c8;
              local_30 = param_1;
            }
            else if (iVar2 == -0x152ea7f9) {
              iVar1 = -0x788a2ee0;
            }
            else if (iVar2 == 0x17b9196b) {
              __Block_object_dispose(*(void **)(local_30 + 0x28),8);
              __Block_object_dispose((void *)*local_28,8);
              iVar1 = 0x4479e91b;
            }
          }
          if (iVar2 < 0x44934147) break;
          iVar1 = -0x63bd61c0;
          if (iVar2 != 0x6ad1861e) {
            if (iVar2 == 0x66cbeec5) {
              iVar1 = -0x63bd61c0;
            }
            else {
              iVar1 = iVar2;
              if (iVar2 == 0x44934147) {
                iVar1 = -0x449714e8;
              }
            }
          }
        }
        iVar1 = -0x449714e8;
      } while (iVar2 == 0x2b699568);
      if (iVar2 != 0x3de736c8) break;
      iVar1 = 0x6ad1861e;
    }
    iVar1 = iVar2;
  } while (iVar2 != 0x4479e91b);
  return;
}
undefined8 FUN_0005a8dc(long param_1,undefined8 param_2)
{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 unaff_x26;
  undefined8 local_e8;
  undefined8 local_e0;
  char *local_d8;
  char local_c9;
  undefined8 local_c8;
  undefined8 local_c0;
  char local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  char local_99;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  uVar3 = _objc_retain(param_2);
  iVar1 = -0x29a0f98;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while (iVar4 = iVar1, iVar1 = iVar4, 0xd95f78e < iVar4) {
                if (iVar4 < 0x3a03cc58) {
                  if (iVar4 < 0x1fa294fc) {
                    if (iVar4 < 0x17aa49b0) {
                      iVar1 = 0xfea262c;
                      if (iVar4 != 0xd95f78f) {
                        if (iVar4 == 0xfea262c) {
                          _objc_retain(local_70);
                          iVar1 = 0x5a23d998;
                        }
                        else {
                          iVar1 = -0x4679d393;
                          if (iVar4 != 0x11201cf5) {
                            iVar1 = iVar4;
                          }
                        }
                      }
                    }
                    else if (iVar4 == 0x17aa49b0) {
                      _objc_retain(local_70);
                      iVar1 = 0xfea262c;
                    }
                    else {
                      iVar2 = -0x736e2e6b;
                      if (iVar4 != 0x1d326dcd) {
                        iVar2 = iVar4;
                      }
                      iVar1 = -0x70c85e5c;
                      if (iVar4 != 0x19dfcc93) {
                        iVar1 = iVar2;
                      }
                    }
                  }
                  else if (iVar4 < 0x369b902f) {
                    if (iVar4 == 0x1fa294fc) {
                      iVar1 = 0x7943d724;
                    }
                    else if (iVar4 == 0x2755e555) {
                      iVar1 = 0x4238c04e;
                    }
                    else if (iVar4 == 0x35a44b2a) {
                      local_98 = *(long *)(*(long *)(param_1 + 0x20) + 8);
                      iVar1 = 0x46d14ed;
                    }
                  }
                  else if (iVar4 == 0x369b902f) {
                    local_99 = _objc_msgSend(local_b0,local_d8,local_a8);
                    iVar1 = 0x37e0aab8;
                  }
                  else if (iVar4 == 0x37e0aab8) {
                    iVar1 = -0x263740ad;
                  }
                  else if (iVar4 == 0x380cdf2e) {
                    _objc_msgSend(local_e8,local_d8,local_e0);
                    iVar1 = 0xd497deb;
                  }
                }
                else if (iVar4 < 0x54e836df) {
                  if (iVar4 < 0x484dd7fb) {
                    if (iVar4 == 0x3a03cc58) {
                      local_b0 = DAT_000a4070;
                      local_a8 = _g_tempFile;
                      iVar1 = 0x11201cf5;
                    }
                    else {
                      iVar1 = 0x1d326dcd;
                      if ((iVar4 != 0x3cbd2c3e) && (iVar1 = iVar4, iVar4 == 0x4238c04e)) {
                        local_90 = *(undefined8 *)(local_98 + 0x28);
                        local_88 = local_90;
                        iVar1 = 0x1fa294fc;
                      }
                    }
                  }
                  else {
                    iVar1 = 0x3a03cc58;
                    if (iVar4 != 0x484dd7fb) {
                      if (iVar4 == 0x4e707ab6) {
                        _objc_release(uVar3);
                        _objc_autorelease(local_68);
                        iVar1 = -0x1d2f087a;
                      }
                      else {
                        iVar1 = iVar4;
                        if (iVar4 == 0x5109a180) {
                          _objc_msgSend(local_c8,local_d8,local_c0);
                          iVar1 = -0x674eb6fc;
                        }
                      }
                    }
                  }
                }
                else if (iVar4 < 0x617cac8a) {
                  iVar1 = 0xd497deb;
                  if (iVar4 != 0x54e836df) {
                    if (iVar4 == 0x5a23d998) {
                      unaff_x26 = local_78;
                      iVar1 = -0x265390db;
                    }
                    else {
                      iVar1 = iVar4;
                      if (iVar4 == 0x5cc18497) {
                        local_80 = *(long *)(param_1 + 0x28);
                        iVar1 = 0x617cac8a;
                      }
                    }
                  }
                }
                else if (iVar4 == 0x617cac8a) {
                  local_78 = (**(code **)(*(long *)(local_80 + 8) + 0x18))
                                       (uVar3,"fileDataRepresentation");
                  local_70 = local_78;
                  iVar1 = 0xd95f78f;
                }
                else if (iVar4 == 0x68e62280) {
                  _objc_retain(local_88);
                  iVar1 = -0x7d18b673;
                }
                else {
                  iVar1 = -0x7d18b673;
                  if (iVar4 != 0x7943d724) {
                    iVar1 = iVar4;
                  }
                }
              }
              if (-0x30283c1b < iVar4) break;
              if (iVar4 < -0x60371cf4) {
                if (iVar4 < -0x70c85e5c) {
                  if (iVar4 == -0x7d18b673) {
                    _objc_retain(local_88);
                    iVar1 = -0x66c29f69;
                  }
                  else if (iVar4 == -0x736e2e6b) {
                    iVar1 = 0x35a44b2a;
                    if (local_99 == '\0') {
                      iVar1 = 0x5cc18497;
                    }
                  }
                  else if (iVar4 == -0x719c9e68) {
                    _objc_release(uVar3);
                    _objc_autorelease(local_68);
                    iVar1 = 0x4e707ab6;
                  }
                }
                else if (iVar4 == -0x70c85e5c) {
                  local_c8 = DAT_000a4070;
                  iVar1 = 0xaa74cea;
                }
                else if (iVar4 == -0x674eb6fc) {
                  local_b1 = _objc_msgSend(local_c8,local_d8,local_c0);
                  iVar1 = -0x54561d1f;
                }
                else if (iVar4 == -0x66c29f69) {
                  unaff_x26 = local_90;
                  iVar1 = -0x265390db;
                }
              }
              else if (iVar4 < -0x4221c19f) {
                if (iVar4 == -0x60371cf4) {
                  _objc_msgSend(local_b0,local_d8,local_a8);
                  iVar1 = 0x369b902f;
                }
                else if (iVar4 == -0x54561d1f) {
                  iVar1 = 0x484dd7fb;
                  if (local_b1 == '\0') {
                    iVar1 = 0x5cc18497;
                  }
                }
                else {
                  iVar1 = 0x369b902f;
                  if (iVar4 != -0x4679d393) {
                    iVar1 = iVar4;
                  }
                }
              }
              else {
                iVar1 = -0x70c85e5c;
                if ((((iVar4 != -0x4221c19f) && (iVar1 = 0x3a03cc58, iVar4 != -0x313fb4c3)) &&
                    (iVar1 = iVar4, iVar4 == -0x307f3189)) && (iVar1 = 0x35a44b2a, local_c9 == '\0')
                   ) {
                  iVar1 = 0x19dfcc93;
                }
              }
            }
            if (iVar4 < -0xff0238e) break;
            if (iVar4 < 0x8e741ab) {
              iVar1 = 0x4238c04e;
              if (iVar4 != 0x46d14ed) {
                iVar1 = iVar4;
              }
              iVar2 = -0x229881ab;
              if (iVar4 != -0x29a0f98) {
                iVar2 = iVar1;
              }
              iVar1 = -0x229881ab;
              if (iVar4 != -0xff0238e) {
                iVar1 = iVar2;
              }
            }
            else if (iVar4 == 0x8e741ab) {
              local_c0 = _g_isMirroredMarkfbs;
              iVar1 = -0x30283c1a;
            }
            else if (iVar4 == 0xaa74cea) {
              iVar1 = 0x8e741ab;
            }
            else if (iVar4 == 0xd497deb) {
              local_c9 = _objc_msgSend(local_e8,local_d8,local_e0);
              iVar1 = -0x307f3189;
            }
          }
          if (-0x229881ac < iVar4) break;
          iVar1 = -0x674eb6fc;
          if (iVar4 != -0x30283c1a) {
            if (iVar4 == -0x265390db) {
              local_68 = unaff_x26;
              iVar1 = 0x4e707ab6;
            }
            else {
              iVar1 = 0x1d326dcd;
              if (iVar4 != -0x263740ad) {
                iVar1 = iVar4;
              }
            }
          }
        }
        if (iVar4 != -0x229881ab) break;
        local_e8 = DAT_000a4070;
        local_e0 = _g_tempFile;
        local_d8 = "fileExistsAtPath:";
        iVar1 = -0x1f147c0a;
      }
      if (iVar4 != -0x1f147c0a) break;
      iVar1 = 0x54e836df;
    }
  } while (iVar4 != -0x1d2f087a);
  return local_68;
}
undefined8 FUN_0005b0e8(undefined8 param_1,undefined8 param_2)
{
  int iVar1;
  int iVar2;
  iVar1 = 0x4ea4873d;
  do {
    while( true ) {
      while( true ) {
        while (iVar2 = iVar1, iVar1 = iVar2, iVar2 < -0x77f68d2) {
          if (iVar2 < -0x4489c649) {
            if (iVar2 == -0x7a2c271a) {
              iVar1 = -0x77f68d2;
            }
            else if (iVar2 == -0x5c6c016e) {
              _objc_release(param_2);
              iVar1 = -0x4489c649;
            }
          }
          else if (iVar2 == -0x4489c649) {
            _objc_release(param_2);
            iVar1 = 0x2160fc69;
          }
          else {
            iVar1 = -0x4489c649;
            if (iVar2 != -0xa1bd386) {
              iVar1 = iVar2;
            }
          }
        }
        if (0x2160fc68 < iVar2) break;
        if (iVar2 == -0x77f68d2) {
          iVar1 = -0xa1bd386;
        }
        else if (iVar2 == -0x46bf9bd) {
          _objc_retain(param_2);
          iVar1 = -0x7a2c271a;
        }
      }
      if (iVar2 != 0x4ea4873d) break;
      iVar1 = -0x46bf9bd;
    }
  } while (iVar2 != 0x2160fc69);
  return 0;
}
undefined8 FUN_0005b244(long param_1,undefined8 param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_x25;
  undefined8 local_d8;
  char *local_d0;
  char local_c1;
  undefined8 local_c0;
  undefined8 local_b8;
  char local_a9;
  undefined8 local_a8;
  char local_99;
  long local_98;
  undefined8 local_90;
  long *local_88;
  code *local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  iVar2 = 0x388b7356;
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              while (iVar3 = iVar2, iVar2 = iVar3, 0xfc447f9 < iVar3) {
                if (iVar3 < 0x50ff81fa) {
                  if (iVar3 < 0x27ac5f44) {
                    if (iVar3 < 0x1270ed35) {
                      iVar1 = 0x1270ed35;
                      if (iVar3 != 0x1204814a) {
                        iVar1 = iVar3;
                      }
                      iVar2 = -0x42554ae7;
                      if (iVar3 != 0xfc447fa) {
                        iVar2 = iVar1;
                      }
                    }
                    else if (iVar3 == 0x1270ed35) {
                      iVar2 = -0xa122447;
                      if (local_a9 == '\0') {
                        iVar2 = 0x50ff81fa;
                      }
                    }
                    else if (iVar3 == 0x1d7afc38) {
                      iVar2 = 0x57699c9a;
                    }
                    else if (iVar3 == 0x2355fd41) {
                      unaff_x25 = local_90;
                      iVar2 = -0x189419fd;
                    }
                  }
                  else if (iVar3 < 0x3a7fcadf) {
                    if (iVar3 == 0x27ac5f44) {
                      _objc_msgSend(local_a8,local_d0,_g_tempFile);
                      iVar2 = -0x7fc57b8c;
                    }
                    else if (iVar3 == 0x2db9bf4b) {
                      _objc_msgSend(local_d8,"fileExistsAtPath:",_g_tempFile);
                      iVar2 = -0x42554ae7;
                    }
                    else {
                      iVar2 = -0x50ffadad;
                      if (iVar3 != 0x388b7356) {
                        iVar2 = iVar3;
                      }
                    }
                  }
                  else if (iVar3 == 0x3a7fcadf) {
                    _objc_release(param_2);
                    iVar2 = 0x61564384;
                  }
                  else if (iVar3 == 0x45ff24b9) {
                    local_88 = (long *)(param_1 + 0x28);
                    iVar2 = 0x5ea93f67;
                  }
                  else if (iVar3 == 0x4beb0f70) {
                    _objc_retain(param_2);
                    iVar2 = -0x50ffadad;
                  }
                }
                else if (iVar3 < 0x5ea93f67) {
                  if (iVar3 < 0x57699c9a) {
                    iVar2 = 0x45ff24b9;
                    if ((iVar3 != 0x50ff81fa) && (iVar2 = iVar3, iVar3 == 0x56c16490)) {
                      local_a8 = DAT_000a4070;
                      iVar2 = -0x72804a;
                    }
                  }
                  else if (iVar3 == 0x57699c9a) {
                    iVar2 = 0xbb53020;
                    if (local_99 == '\0') {
                      iVar2 = 0x50ff81fa;
                    }
                  }
                  else {
                    iVar2 = -0x4d0ad52a;
                    if ((iVar3 != 0x57d3e66d) && (iVar2 = iVar3, iVar3 == 0x5b48d1c4)) {
                      local_a9 = _objc_msgSend(local_c0,local_d0,local_b8);
                      iVar2 = 0x7de4329b;
                    }
                  }
                }
                else if (iVar3 < 0x71f1efed) {
                  if (iVar3 == 0x5ea93f67) {
                    iVar2 = -0x53ed392;
                  }
                  else if (iVar3 == 0x61564384) {
                    _objc_release(param_2);
                    iVar2 = 0xb710966;
                  }
                  else {
                    iVar2 = 0x71f1efed;
                    if (iVar3 != 0x70e8228e) {
                      iVar2 = iVar3;
                    }
                  }
                }
                else if (iVar3 == 0x71f1efed) {
                  local_90 = *(undefined8 *)(*(long *)(local_98 + 8) + 0x18);
                  iVar2 = -0x4866463f;
                }
                else {
                  iVar1 = -0x7aa31dca;
                  if (iVar3 != 0x7f6c5aca) {
                    iVar1 = iVar3;
                  }
                  iVar2 = 0x1204814a;
                  if (iVar3 != 0x7de4329b) {
                    iVar2 = iVar1;
                  }
                }
              }
              if (-0x2edf59f6 < iVar3) break;
              if (iVar3 < -0x50ffadad) {
                if (iVar3 < -0x7aa31dca) {
                  if (iVar3 == -0x7fc57b8c) {
                    local_99 = _objc_msgSend(local_a8,local_d0,_g_tempFile);
                    iVar2 = 0x1d7afc38;
                  }
                  else if ((iVar3 == -0x7ea550fa) && (iVar2 = 0xbb53020, local_c1 == '\0')) {
                    iVar2 = -0x1cab6c45;
                  }
                }
                else if (iVar3 == -0x7aa31dca) {
                  local_70 = (*local_80)(param_2,local_78);
                  iVar2 = -0x414655b0;
                }
                else {
                  iVar1 = 0xfc447fa;
                  if (iVar3 != -0x609a612c) {
                    iVar1 = iVar3;
                  }
                  iVar2 = -0x7fc57b8c;
                  if (iVar3 != -0x6c6dceb7) {
                    iVar2 = iVar1;
                  }
                }
              }
              else if (iVar3 < -0x42554ae7) {
                if (iVar3 == -0x50ffadad) {
                  _objc_retain(param_2);
                  local_d8 = DAT_000a4070;
                  iVar2 = -0x609a612c;
                }
                else if (iVar3 == -0x4d0ad52a) {
                  local_c0 = DAT_000a4070;
                  local_b8 = _g_isMirroredMarkfbs;
                  iVar2 = -0xecf95a6;
                }
                else {
                  iVar2 = 0x2355fd41;
                  if (iVar3 != -0x4866463f) {
                    iVar2 = iVar3;
                  }
                }
              }
              else if (iVar3 == -0x42554ae7) {
                local_d0 = "fileExistsAtPath:";
                local_c1 = _objc_msgSend(local_d8,"fileExistsAtPath:",_g_tempFile);
                iVar2 = -0x7ea550fa;
              }
              else if (iVar3 == -0x414655b0) {
                unaff_x25 = local_70;
                iVar2 = -0x189419fd;
              }
              else {
                iVar2 = -0x7aa31dca;
                if (iVar3 != -0x412780bb) {
                  iVar2 = iVar3;
                }
              }
            }
            if (-0xa122448 < iVar3) break;
            if (iVar3 < -0x150cfa1d) {
              iVar2 = 0x1204814a;
              if (((iVar3 != -0x2edf59f5) && (iVar2 = -0x4d0ad52a, iVar3 != -0x1cab6c45)) &&
                 (iVar2 = iVar3, iVar3 == -0x189419fd)) {
                local_68 = unaff_x25;
                iVar2 = 0x61564384;
              }
            }
            else if (iVar3 == -0x150cfa1d) {
              iVar2 = 0x45ff24b9;
            }
            else if (iVar3 == -0xee7405b) {
              iVar2 = 0x71f1efed;
            }
            else {
              iVar2 = 0x5b48d1c4;
              if (iVar3 != -0xecf95a6) {
                iVar2 = iVar3;
              }
            }
          }
          if (0x25fcbe4 < iVar3) break;
          iVar2 = 0x56c16490;
          if (iVar3 != -0xa122447) {
            if (iVar3 == -0x53ed392) {
              local_80 = *(code **)(*(long *)(*local_88 + 8) + 0x18);
              local_78 = "pixelBuffer";
              iVar2 = 0x7f6c5aca;
            }
            else {
              iVar2 = -0x6c6dceb7;
              if (iVar3 != -0x72804a) {
                iVar2 = iVar3;
              }
            }
          }
        }
        iVar2 = 0x56c16490;
      } while (iVar3 == 0x25fcbe5);
      if (iVar3 != 0xbb53020) break;
      local_98 = *(long *)(param_1 + 0x20);
      iVar2 = 0x70e8228e;
    }
    iVar2 = iVar3;
  } while (iVar3 != 0xb710966);
  return local_68;
}
undefined8 FUN_0005b9b8(long param_1,undefined8 param_2)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_x26;
  long local_e0;
  undefined8 local_d8;
  char *local_d0;
  char local_c1;
  undefined8 local_c0;
  char local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 *local_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  iVar2 = 0x57b36e33;
LAB_0005ba28:
  do {
    while (iVar3 = iVar2, iVar2 = -0x7d2a6c07, iVar3 < 0x5a3922) {
      if (iVar3 < -0x470f7af3) {
        if (iVar3 < -0x5f0ef953) {
          if (iVar3 < -0x6fe529af) {
            if (iVar3 == -0x7d2a6c07) {
              iVar2 = 0x34ab774d;
            }
            else if (iVar3 == -0x7936040f) {
              local_d0 = "fileExistsAtPath:";
              local_c1 = _objc_msgSend(local_d8,"fileExistsAtPath:",_g_tempFile);
              iVar2 = 0x2d8b5150;
            }
            else {
              iVar2 = iVar3;
              if (iVar3 == -0x70789739) {
                local_c0 = DAT_000a4070;
                iVar2 = -0x4a4076b2;
              }
            }
          }
          else if (iVar3 < -0x634bd2d2) {
            iVar2 = 0x2ffafda8;
            if ((iVar3 != -0x6fe529af) && (iVar2 = iVar3, iVar3 == -0x6aa4ce02)) {
              _objc_release(param_2);
              iVar2 = 0x484c6a06;
            }
          }
          else if (iVar3 == -0x634bd2d2) {
            iVar2 = -0x22a47c5e;
          }
          else if (iVar3 != -0x5f7a5cec) {
            iVar2 = iVar3;
          }
        }
        else {
          if (-0x54f5da3e < iVar3) {
            iVar4 = -0x4a4076b3;
            iVar6 = 0x6c84581;
            if (iVar3 != -0x488d26ef) {
              iVar6 = iVar3;
            }
            iVar2 = -0x5f0ef953;
            if (iVar3 != -0x4a4076b2) {
              iVar2 = iVar6;
            }
            iVar5 = -0x54f5da3d;
            iVar6 = -0x5f7a5cec;
            iVar7 = 0x6d59642a;
            if (iVar3 != -0x4bc6c092) {
              iVar7 = iVar3;
            }
            goto LAB_0005be20;
          }
          if (iVar3 < -0x5a47acd9) {
            iVar6 = -0x336bf63e;
            if (iVar3 != -0x5a53a1bb) {
              iVar6 = iVar3;
            }
            iVar2 = 0x17be7b77;
            if (iVar3 != -0x5f0ef953) {
              iVar2 = iVar6;
            }
          }
          else if (iVar3 == -0x5a47acd9) {
            iVar2 = 0x6d59642a;
          }
          else {
            iVar2 = iVar3;
            if (iVar3 == -0x566b007e) {
              local_80 = (long *)(local_e0 + 0x28);
              iVar2 = -0x19fd1642;
            }
          }
        }
      }
      else if (iVar3 < -0x22a47c5e) {
        if (iVar3 < -0x370d3e56) {
          if (iVar3 < -0x4224293f) {
            iVar2 = -0x566b007e;
            if ((iVar3 != -0x470f7af3) && (iVar2 = iVar3, iVar3 == -0x44d51be9)) {
              return local_68;
            }
          }
          else {
            iVar2 = 0x25c04d0d;
            if ((iVar3 != -0x4224293f) && (iVar2 = iVar3, iVar3 == -0x41f9d8fb)) {
              _objc_msgSend(local_c0,local_d0,_g_isMirroredMarkfbs);
              iVar2 = 0x17be7b77;
            }
          }
        }
        else if (iVar3 < -0x2dc3080a) {
          iVar6 = 0x65f8144e;
          if (iVar3 != -0x336bf63e) {
            iVar6 = iVar3;
          }
          iVar2 = -0x7936040f;
          if (iVar3 != -0x370d3e56) {
            iVar2 = iVar6;
          }
        }
        else {
          iVar2 = -0x70789739;
          if ((iVar3 != -0x2dc3080a) && (iVar2 = iVar3, iVar3 == -0x2c7b926e)) {
            unaff_x26 = local_88;
            iVar2 = 0x6847d158;
          }
        }
      }
      else if (iVar3 < -0x18a9ab00) {
        if (iVar3 < -0x1c540fdc) {
          if (iVar3 == -0x22a47c5e) {
            local_a0 = local_b0;
            iVar2 = -0x81a3057;
          }
          else {
            iVar2 = iVar3;
            if (iVar3 == -0x1c932a71) {
              iVar2 = 0x25c04d0d;
            }
          }
        }
        else if (iVar3 == -0x1c540fdc) {
          iVar2 = -0x566b007e;
        }
        else {
          iVar2 = -0x4224293f;
          if (iVar3 != -0x19fd1642) {
            iVar2 = iVar3;
          }
        }
      }
      else if (iVar3 < -0x81a3057) {
        if (iVar3 == -0x18a9ab00) {
          unaff_x26 = local_70;
          iVar2 = 0x6847d158;
        }
        else {
          iVar2 = iVar3;
          if (iVar3 == -0x157ecf69) {
            _objc_msgSend(local_d8,"fileExistsAtPath:",_g_tempFile);
            iVar2 = -0x7936040f;
          }
        }
      }
      else {
        iVar4 = -0x81a3057;
        iVar2 = 0x18d107c7;
        iVar5 = -0x29faf67;
        iVar6 = -0x22a47c5e;
LAB_0005c184:
        if (iVar3 != iVar5) {
          iVar6 = iVar3;
        }
        if (iVar3 != iVar4) {
          iVar2 = iVar6;
        }
      }
    }
    if (0x5138c2a2 < iVar3) {
      if (iVar3 < 0x66ec5cd6) {
        if (iVar3 < 0x58060ee7) {
          if (iVar3 == 0x5138c2a3) {
            _objc_retain(param_2);
            iVar2 = 0x5717bf19;
          }
          else if (iVar3 == 0x5717bf19) {
            _objc_retain(param_2);
            local_d8 = DAT_000a4070;
            local_e0 = param_1;
            iVar2 = 0x6703fd76;
          }
          else {
            iVar2 = 0x5717bf19;
            if (iVar3 != 0x57b36e33) {
              iVar2 = iVar3;
            }
          }
          goto LAB_0005ba28;
        }
        if (0x5d2d1e1f < iVar3) {
          if (iVar3 == 0x5d2d1e20) {
            iVar2 = 0x6c84581;
          }
          else {
            iVar2 = iVar3;
            if (iVar3 == 0x65f8144e) {
              local_70 = (**(code **)(*local_78 + 0x18))(param_2,"CGImageRepresentation");
              iVar2 = -0x18a9ab00;
            }
          }
          goto LAB_0005ba28;
        }
        if (iVar3 == 0x58060ee7) {
          local_b0 = DAT_000a4070;
          local_a8 = _g_tempFile;
          iVar2 = 0x66ec5cd6;
          goto LAB_0005ba28;
        }
        iVar6 = 0x5900faff;
      }
      else {
        if (iVar3 < 0x6d4d054c) {
          if (iVar3 < 0x6847d158) {
            iVar4 = 0x66ec5cd6;
            iVar2 = -0x29faf67;
            iVar5 = 0x6703fd76;
            iVar6 = -0x370d3e56;
            goto LAB_0005c184;
          }
          if (iVar3 == 0x6847d158) {
            local_68 = unaff_x26;
            iVar2 = 0x484c6a06;
          }
          else {
            iVar2 = iVar3;
            if (iVar3 == 0x6b4c7c53) {
              local_88 = *local_90;
              iVar2 = -0x2c7b926e;
            }
          }
          goto LAB_0005ba28;
        }
        if (iVar3 < 0x7360d30b) {
          iVar2 = -0x70789739;
          if ((iVar3 != 0x6d4d054c) && (iVar2 = iVar3, iVar3 == 0x6d59642a)) {
            local_90 = (undefined8 *)(*(long *)(local_98 + 8) + 0x18);
            iVar2 = 0x2b1c45c4;
          }
          goto LAB_0005ba28;
        }
        if (iVar3 == 0x7360d30b) {
          iVar2 = 0x6b4c7c53;
          goto LAB_0005ba28;
        }
        iVar6 = 0x7f93ee8e;
      }
      iVar2 = 0x58060ee7;
      if (iVar3 != iVar6) {
        iVar2 = iVar3;
      }
      goto LAB_0005ba28;
    }
    if (iVar3 < 0x2b1c45c4) {
      if (iVar3 < 0xa0f4c71) {
        iVar2 = 0x6b4c7c53;
        if (iVar3 != 0x5a3922) {
          if (iVar3 == 0x6c84581) {
            local_98 = *(long *)(local_e0 + 0x20);
            iVar2 = 0x3e514734;
          }
          else {
            iVar2 = iVar3;
            if (iVar3 == 0x9c7d2c9) {
              (**(code **)(*local_78 + 0x18))(param_2,"CGImageRepresentation");
              iVar2 = 0x65f8144e;
            }
          }
        }
        goto LAB_0005ba28;
      }
      if (iVar3 < 0x18d107c7) {
        if (iVar3 != 0xa0f4c71) {
          iVar2 = iVar3;
          if (iVar3 == 0x17be7b77) {
            local_b1 = _objc_msgSend(local_c0,local_d0,_g_isMirroredMarkfbs);
            iVar2 = -0x54f5da3d;
          }
          goto LAB_0005ba28;
        }
        bVar1 = local_c1 == '\0';
        iVar3 = 0x6d4d054c;
      }
      else {
        if (iVar3 != 0x18d107c7) {
          iVar2 = iVar3;
          if (iVar3 == 0x25c04d0d) {
            local_78 = (long *)(*local_80 + 8);
            iVar2 = -0x5a53a1bb;
          }
          goto LAB_0005ba28;
        }
        iVar2 = _objc_msgSend(local_a0,local_d0,local_a8);
        bVar1 = iVar2 == 0;
        iVar3 = -0x470f7af3;
      }
      iVar2 = -0x488d26ef;
      if (bVar1) {
        iVar2 = iVar3;
      }
      goto LAB_0005ba28;
    }
    if (iVar3 < 0x34ab774d) {
      iVar4 = 0x2e4ee12b;
      iVar6 = 0xa0f4c71;
      if (iVar3 != 0x2ffafda8) {
        iVar6 = iVar3;
      }
      if (iVar3 != 0x2e4ee12c) {
        iVar2 = iVar6;
      }
      iVar5 = 0x2b1c45c4;
      iVar6 = 0x5a3922;
      iVar7 = -0x6fe529af;
      if (iVar3 != 0x2d8b5150) {
        iVar7 = iVar3;
      }
LAB_0005be20:
      if (iVar3 != iVar5) {
        iVar6 = iVar7;
      }
      if (iVar3 <= iVar4) {
        iVar2 = iVar6;
      }
    }
    else if (iVar3 < 0x3e514734) {
      if (iVar3 == 0x34ab774d) {
        iVar2 = 0x5900faff;
        if (local_b1 == '\0') {
          iVar2 = -0x470f7af3;
        }
      }
      else {
        iVar2 = 0x2ffafda8;
        if (iVar3 != 0x3b7b1a2b) {
          iVar2 = iVar3;
        }
      }
    }
    else if (iVar3 == 0x3e514734) {
      iVar2 = -0x4bc6c092;
    }
    else {
      iVar2 = iVar3;
      if (iVar3 == 0x484c6a06) {
        _objc_release(param_2);
        iVar2 = -0x44d51be9;
      }
    }
  } while( true );
}
undefined8 FUN_0005c3dc(long param_1,undefined8 param_2)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_x26;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  char local_a9;
  undefined8 local_a8;
  undefined8 local_a0;
  char local_91;
  long local_90;
  long *local_88;
  long *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  iVar2 = 0x7ceaa107;
LAB_0005c44c:
  while (iVar3 = iVar2, iVar2 = iVar3, iVar3 < 0x28ff3ab) {
    if (iVar3 < -0x4c41ae2f) {
      if (iVar3 < -0x65159aba) {
        if (iVar3 < -0x6b8f52bc) {
          if (iVar3 == -0x7cde36c0) {
            _objc_retain(param_2);
            local_e0 = DAT_000a4070;
            local_e8 = param_1;
            iVar2 = 0x70c67afd;
          }
          else if (iVar3 == -0x77a269e5) {
            iVar2 = 0x22dd22e2;
          }
          else if (iVar3 == -0x77786cee) {
            iVar2 = 0x4ac98d28;
          }
        }
        else if (iVar3 == -0x6b8f52bc) {
          iVar2 = -0xb19042;
        }
        else if (iVar3 == -0x6b0509d5) {
          local_a8 = DAT_000a4070;
          local_a0 = _g_tempFile;
          iVar2 = 0x76c8b44e;
        }
        else if (iVar3 == -0x6a38b266) {
          local_80 = (long *)(local_e8 + 0x28);
          iVar2 = -0x505007a8;
        }
      }
      else if (iVar3 < -0x505007a8) {
        iVar2 = -0xb19042;
        if (((iVar3 != -0x65159aba) && (iVar2 = 0x2efe2d34, iVar3 != -0x6176a225)) &&
           (iVar2 = iVar3, iVar3 == -0x51f33887)) {
          bVar1 = local_91 == '\0';
          iVar3 = -0xcd72fce;
LAB_0005cc20:
          iVar2 = -0x65159aba;
          if (bVar1) {
            iVar2 = iVar3;
          }
        }
      }
      else {
        iVar4 = -0x4c41ae2f;
        if (iVar3 != -0x4c61aaab) {
          iVar4 = iVar3;
        }
        iVar2 = 0x708ff0b8;
        if (iVar3 != -0x4e881453) {
          iVar2 = iVar4;
        }
        iVar4 = 0x28ff3ab;
        if (iVar3 != -0x4ea3cc69) {
          iVar4 = iVar3;
        }
        iVar5 = 0x6f7bd363;
        if (iVar3 != -0x505007a8) {
          iVar5 = iVar4;
        }
        if (iVar3 < -0x4e881453) {
          iVar2 = iVar5;
        }
      }
    }
    else if (iVar3 < -0x26eb3f45) {
      if (iVar3 < -0x3f07aa72) {
        if (iVar3 == -0x4c41ae2f) {
          local_91 = _objc_msgSend(local_a8,local_d0,local_a0);
          iVar2 = 0x68210822;
        }
        else {
          iVar2 = 0x52db6d1e;
          if ((iVar3 != -0x4c1d2e73) && (iVar2 = iVar3, iVar3 == -0x40dd7996)) {
            (**(code **)(*(long *)(local_78 + 8) + 0x18))(param_2,"previewCGImageRepresentation");
            iVar2 = 0x708ff0b8;
          }
        }
      }
      else {
        iVar2 = 0x2efe2d34;
        if (((iVar3 != -0x3f07aa72) && (iVar2 = -0x6b0509d5, iVar3 != -0x38cac919)) &&
           (iVar2 = iVar3, iVar3 == -0x2c462d07)) {
          local_68 = unaff_x26;
          iVar2 = 0x5d361a95;
        }
      }
    }
    else if (iVar3 < -0xcd72fce) {
      if (iVar3 == -0x26eb3f45) {
        iVar2 = 0x3e0c16be;
        if (local_a9 == '\0') {
          iVar2 = -0xcd72fce;
        }
      }
      else if (iVar3 == -0x11824518) {
        _objc_release(param_2);
        iVar2 = 0x5d361a95;
      }
      else if (iVar3 == -0xe698327) {
        unaff_x26 = local_70;
        iVar2 = -0x2c462d07;
      }
    }
    else if (iVar3 < -0x2a68878) {
      iVar2 = -0x6a38b266;
      if ((iVar3 != -0xcd72fce) && (iVar2 = iVar3, iVar3 == -0x66fbfac)) {
        _objc_msgSend(local_b8,local_d0,local_c0);
        iVar2 = 0x38fd73f4;
      }
    }
    else {
      iVar2 = 0x28ff3ab;
      if ((iVar3 != -0x2a68878) && (iVar2 = iVar3, iVar3 == -0xb19042)) {
        local_90 = *(long *)(local_e8 + 0x20);
        iVar2 = -0x77a269e5;
      }
    }
  }
  if (iVar3 < 0x50da8d17) {
    if (iVar3 < 0x385df0ec) {
      if (iVar3 < 0x2685058b) {
        if (iVar3 == 0x28ff3ab) {
          local_c8 = DAT_000a4070;
          local_c0 = _g_isMirroredMarkfbs;
          iVar2 = 0x385df0ec;
        }
        else if (iVar3 == 0x22dd22e2) {
          local_88 = (long *)(local_90 + 8);
          iVar2 = 0x24bf9365;
        }
        else if (iVar3 == 0x24bf9365) {
          unaff_x26 = *(undefined8 *)(*local_88 + 0x18);
          iVar2 = -0x2c462d07;
        }
      }
      else {
        if (iVar3 == 0x2685058b) {
          iVar2 = _objc_msgSend(local_e0,local_d0,local_d8);
          bVar1 = iVar2 == 0;
          iVar3 = -0x2a68878;
          goto LAB_0005cc20;
        }
        if (iVar3 == 0x2efe2d34) {
          iVar2 = -0x51f33887;
        }
        else if (iVar3 == 0x37a18322) {
          _objc_retain(param_2);
          iVar2 = -0x7cde36c0;
        }
      }
    }
    else if (iVar3 < 0x43cb0079) {
      if (iVar3 == 0x385df0ec) {
        iVar2 = 0x50da8d17;
      }
      else if (iVar3 == 0x38fd73f4) {
        local_a9 = _objc_msgSend(local_b8,local_d0,local_c0);
        iVar2 = -0x26eb3f45;
      }
      else {
        iVar2 = -0x6b0509d5;
        if (iVar3 != 0x3e0c16be) {
          iVar2 = iVar3;
        }
      }
    }
    else {
      if (iVar3 < 0x47b85f87) {
        iVar4 = 0x43cb0079;
        iVar2 = -0x4e881453;
        iVar5 = 0x38fd73f4;
        if (iVar3 != 0x45c5b8c3) {
          iVar5 = iVar3;
        }
        goto LAB_0005c9f4;
      }
      if (iVar3 == 0x4ac98d28) {
        local_78 = *local_80;
        iVar2 = 0x43cb0079;
      }
      else if (iVar3 == 0x47b85f87) {
        return local_68;
      }
    }
    goto LAB_0005c44c;
  }
  if (iVar3 < 0x708ff0b8) {
    if (iVar3 < 0x61073e0e) {
      if (iVar3 == 0x50da8d17) {
        local_b8 = local_c8;
        iVar2 = 0x45c5b8c3;
      }
      else if (iVar3 == 0x52db6d1e) {
        local_d8 = _g_tempFile;
        local_d0 = "fileExistsAtPath:";
        iVar2 = 0x7c4641db;
      }
      else if (iVar3 == 0x5d361a95) {
        _objc_release(param_2);
        iVar2 = 0x47b85f87;
      }
      goto LAB_0005c44c;
    }
    if (iVar3 == 0x61073e0e) {
      _objc_msgSend(local_a8,local_d0,local_a0);
      iVar2 = -0x4c41ae2f;
      goto LAB_0005c44c;
    }
    iVar4 = 0x68210822;
    iVar2 = -0x6176a225;
    iVar5 = 0x4ac98d28;
    if (iVar3 != 0x6f7bd363) {
      iVar5 = iVar3;
    }
  }
  else if (iVar3 < 0x76c8b44e) {
    if (iVar3 == 0x708ff0b8) {
      local_70 = (**(code **)(*(long *)(local_78 + 8) + 0x18))
                           (param_2,"previewCGImageRepresentation");
      iVar2 = -0xe698327;
      goto LAB_0005c44c;
    }
    iVar4 = 0x70c67afd;
    iVar2 = -0x4c1d2e73;
    iVar5 = 0x52db6d1e;
    if (iVar3 != 0x76b8e7c5) {
      iVar5 = iVar3;
    }
  }
  else {
    if (iVar3 < 0x7c4641db) {
      if (iVar3 == 0x76c8b44e) {
        iVar2 = -0x4c61aaab;
      }
      else if (iVar3 == 0x772ce9bc) {
        iVar2 = -0x6a38b266;
      }
      goto LAB_0005c44c;
    }
    iVar4 = 0x7c4641db;
    iVar2 = 0x2685058b;
    iVar5 = iVar3;
    if (iVar3 == 0x7ceaa107) {
      iVar5 = -0x7cde36c0;
    }
  }
LAB_0005c9f4:
  if (iVar3 != iVar4) {
    iVar2 = iVar5;
  }
  goto LAB_0005c44c;
}
void FUN_0005cc74(long param_1,long param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar1 = -0x466939b7;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar1, iVar3 < -0x1920214a) {
          if (iVar3 < -0x58cbcbc6) {
            iVar1 = 0x713d2ae2;
            if (iVar3 != -0x59a6b619) {
              iVar1 = iVar3;
            }
            iVar2 = 0x713d2ae2;
            if (iVar3 != -0x5c394316) {
              iVar2 = iVar1;
            }
            iVar1 = -0x59a6b619;
            if (iVar3 != -0x75a41a2d) {
              iVar1 = iVar2;
            }
          }
          else if (iVar3 == -0x58cbcbc6) {
            __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
            iVar1 = -0x75a41a2d;
          }
          else {
            iVar2 = 0x63ba7874;
            if (iVar3 != -0x26dd9c6f) {
              iVar2 = iVar3;
            }
            iVar1 = 0x680f27fd;
            if (iVar3 != -0x466939b7) {
              iVar1 = iVar2;
            }
          }
        }
        if (iVar3 < 0x63ba7874) break;
        iVar1 = -0x1920214a;
        if (iVar3 != 0x713d2ae2) {
          iVar1 = iVar3;
        }
        iVar2 = -0x26dd9c6f;
        if (iVar3 != 0x680f27fd) {
          iVar2 = iVar1;
        }
        iVar1 = -0x58cbcbc6;
        if (iVar3 != 0x63ba7874) {
          iVar1 = iVar2;
        }
      }
      if (iVar3 != -0x117ec054) break;
      __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
      iVar1 = -0x58cbcbc6;
    }
    iVar1 = 0x680f27fd;
  } while ((iVar3 == 0x4003ab7c) || (iVar1 = iVar3, iVar3 != -0x1920214a));
  return;
}
void FUN_0005ce24(long param_1)
{
  int iVar1;
  undefined8 local_68;
  iVar1 = 0x15f8366a;
  while( true ) {
    while (-0x69902152 < iVar1) {
      if (iVar1 < -0x2f5ec9d) {
        if (iVar1 == -0x69902151) {
          iVar1 = -0x75aa6e3e;
        }
        else if (iVar1 == -0x5efda500) {
          __Block_object_dispose(*(void **)(local_68 + 0x20),8);
          iVar1 = -0x69902151;
        }
      }
      else if (iVar1 == -0x2f5ec9d) {
        iVar1 = -0x74f1849a;
      }
      else if (iVar1 == 0x15f8366a) {
        iVar1 = -0x71be35d3;
      }
    }
    if (iVar1 == -0x75aa6e3e) break;
    if (iVar1 == -0x74f1849a) {
      iVar1 = -0x5efda500;
    }
    else if (iVar1 == -0x71be35d3) {
      iVar1 = -0x2f5ec9d;
      local_68 = param_1;
    }
  }
  return;
}
void FUN_0005cf64(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 )
{
  int iVar1;
  byte bVar2;
  cfstringStruct *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  cfstringStruct *unaff_x23;
  cfstringStruct *unaff_x28;
  double dVar10;
  long local_130;
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  undefined8 local_110;
  char *local_108;
  char local_f9;
  undefined8 local_f8;
  undefined8 local_f0;
  char local_e2;
  byte local_e1;
  long local_e0;
  byte local_d1;
  char *local_d0;
  byte local_c1;
  long local_c0;
  char *local_b8;
  char local_a9;
  double local_a8;
  char local_99;
  undefined8 local_98;
  undefined8 *local_90;
  code *local_88;
  char *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  iVar5 = -0x7a33d776;
LAB_0005d010:
  while (iVar7 = iVar5, iVar5 = iVar7, iVar7 < 0x7e9d805) {
    if (iVar7 < -0x3e8f2870) {
      if (iVar7 < -0x572c335d) {
        if (iVar7 < -0x662aba72) {
          if (iVar7 < -0x73ff420c) {
            if (iVar7 == -0x7ca48d4b) {
              local_90 = (undefined8 *)(*(long *)(*(long *)(local_130 + 0x20) + 8) + 0x18);
              iVar5 = 0x3d7242d8;
            }
            else {
              iVar9 = -0x1ceba7a1;
              if (iVar7 != -0x79d7a6c5) {
                iVar9 = iVar7;
              }
              iVar5 = -0x1ede1c49;
              if (iVar7 != -0x7a33d776) {
                iVar5 = iVar9;
              }
            }
          }
          else if (iVar7 == -0x73ff420c) {
            iVar5 = -0x3f98345a;
          }
          else if (iVar7 == -0x72b04016) {
            iVar5 = 0x71e6e489;
          }
          else if (iVar7 == -0x6a003b5f) {
            local_88 = (code *)*local_90;
            local_80 = "captureOutput:didOutputSampleBuffer:fromConnection:";
            iVar5 = -0x41f45e22;
          }
        }
        else if (iVar7 < -0x5b90cc22) {
          if (iVar7 == -0x662aba72) {
            iVar5 = 0x19d0bd7b;
          }
          else if (iVar7 == -0x5d5a3a7e) {
            iVar5 = -0x465fc0c9;
          }
          else if (iVar7 == -0x5bac321e) {
            local_d1 = local_e1 & local_e0 != 0;
            iVar5 = -0x22d6c513;
          }
        }
        else {
          iVar5 = 0x16aae114;
          if (((iVar7 != -0x5b90cc22) && (iVar5 = -0x662aba72, iVar7 != -0x59b34bca)) &&
             (iVar5 = iVar7, iVar7 == -0x599f67c6)) {
            local_108 = "fileExistsAtPath:";
            local_f9 = _objc_msgSend(local_110,"fileExistsAtPath:",_g_isenabledw2ProChinese);
            iVar5 = 0x4435e692;
          }
        }
      }
      else if (iVar7 < -0x45298bd2) {
        if (iVar7 < -0x4c69fd6d) {
          iVar5 = 0x24936d4a;
          if (((iVar7 != -0x572c335d) && (iVar5 = -0x1aebd949, iVar7 != -0x54defc83)) &&
             (iVar5 = iVar7, iVar7 == -0x4d55d4ab)) {
            iVar5 = -0x308041c7;
          }
        }
        else if (iVar7 == -0x4c69fd6d) {
          iVar5 = -0x43e9af8;
        }
        else {
          iVar9 = 0x2f5d3932;
          pcVar3 = &cf_Realisticvisuals;
          if (iVar7 != -0x465fc0c9) {
            iVar9 = iVar7;
            pcVar3 = unaff_x23;
          }
          if (iVar7 != -0x49d1615c) {
            unaff_x23 = pcVar3;
          }
          iVar5 = 0x1fa11d66;
          if (iVar7 != -0x49d1615c) {
            iVar5 = iVar9;
          }
        }
      }
      else if (iVar7 < -0x41f45e22) {
        if (iVar7 == -0x45298bd2) {
          DAT_000a41a0 = local_a8;
          _CMSampleBufferGetFormatDescription(param_4);
          iVar5 = 0x7e9d805;
        }
        else if (iVar7 == -0x4493d08e) {
          iVar5 = 0x314f3785;
          bVar2 = local_c1;
LAB_0005def4:
          unaff_x28 = local_78;
          if (bVar2 == 0) {
            iVar5 = 0x5b882cd9;
          }
        }
        else {
          iVar9 = -0x4480bdc3;
LAB_0005d654:
          if (iVar7 == iVar9) {
            iVar5 = 0x1be13a27;
          }
        }
      }
      else if (iVar7 == -0x41f45e22) {
        iVar5 = -0xee32495;
      }
      else {
        iVar5 = 0x7e9d805;
        if ((iVar7 != -0x41c4236b) && (iVar5 = iVar7, iVar7 == -0x3f98345a)) {
          iVar5 = -0x662aba72;
        }
      }
    }
    else if (iVar7 < -0x1eab3c15) {
      if (iVar7 < -0x2ed7a935) {
        if (iVar7 < -0x3a764a0e) {
          iVar5 = 0x3f0831fa;
          if (iVar7 != -0x3af00652) {
            iVar5 = iVar7;
          }
          iVar9 = -0x5d5a3a7e;
          if (iVar7 != -0x3d067c06) {
            iVar9 = iVar5;
          }
          iVar5 = -0x308041c7;
          if (iVar7 != -0x3e8f2870) {
            iVar5 = iVar9;
          }
        }
        else if (iVar7 == -0x3a764a0e) {
          iVar5 = 0x3d4444b2;
        }
        else if (iVar7 == -0x31e01c2f) {
          _CMVideoFormatDescriptionGetDimensions(local_98);
          iVar5 = 0x6c2590c6;
        }
        else if (iVar7 == -0x308041c7) {
          local_e1 = local_118 != 0;
          local_e0 = DAT_000a4078;
          iVar5 = 0x7561cf1d;
        }
      }
      else if (iVar7 < -0x22d6c513) {
        if (iVar7 == -0x2ed7a935) {
          _objc_msgSend(&_OBJC_CLASS___NSDate,"date");
          uVar6 = _objc_retainAutoreleasedReturnValue();
          dVar10 = (double)_objc_msgSend(uVar6,"timeIntervalSince1970");
          DAT_000a40c8 = dVar10 * 1000.0;
          _objc_release(uVar6);
          local_118 = _objc_msgSend(&objc::class_t::GetFrame,"getCurrentFrame::",param_4,0);
          local_110 = DAT_000a4070;
          iVar5 = -0x21fdaf29;
        }
        else if (iVar7 == -0x26e79fd5) {
          _objc_release(local_78);
          _objc_msgSend(DAT_000a4070,local_108,_g_isenabledw2ProChinese);
          iVar5 = 0x3f0831fa;
        }
        else if (iVar7 == -0x23c9fab5) {
          iVar5 = 0x16ecd06b;
        }
      }
      else if (iVar7 == -0x22d6c513) {
        iVar5 = 0x2686cc02;
      }
      else {
        iVar5 = -0x599f67c6;
        if ((iVar7 != -0x21fdaf29) && (iVar5 = iVar7, iVar7 == -0x1ede1c49)) {
          _objc_retain(param_2);
          _objc_retain(param_3);
          _objc_retain(param_5);
          local_130 = param_1;
          local_128 = param_3;
          local_120 = param_5;
          iVar5 = 0x3001eb16;
        }
      }
    }
    else if (iVar7 < -0xc85fbaa) {
      if (iVar7 < -0x1487426d) {
        iVar5 = -0x72b04016;
        if (iVar7 != -0x1eab3c15) {
          if (iVar7 == -0x1ceba7a1) {
            local_c1 = _objc_msgSend(local_e0,local_d0);
            iVar5 = -0x4493d08e;
          }
          else {
            iVar5 = iVar7;
            if (iVar7 == -0x1aebd949) {
              local_c0 = DAT_000a4078;
              local_b8 = "flush";
              iVar5 = 0x6f2dd3ba;
            }
          }
        }
      }
      else {
        iVar5 = 0x24936d4a;
        if (iVar7 != -0x1487426d) {
          if (iVar7 == -0x13274fc3) {
            unaff_x28 = &cf_W2Probuffer;
            iVar5 = 0x5b882cd9;
          }
          else {
            iVar5 = iVar7;
            if (iVar7 == -0xee32495) {
              if (local_e1 == 0) {
                local_118 = param_4;
              }
              (*local_88)(param_2,local_80,param_3,local_118,param_5);
              _objc_release(local_70);
              _objc_release(local_120);
              _objc_release(local_128);
              _objc_release(param_2);
              return;
            }
          }
        }
      }
    }
    else if (iVar7 < -0xf7cae7) {
      if (iVar7 == -0xc85fbaa) {
        DAT_000a4170 = 3;
        iVar5 = -0x73ff420c;
      }
      else {
        iVar9 = 0x27dcaf7e;
        if (iVar7 != -0x2c3ac5d) {
          iVar9 = iVar7;
        }
        iVar5 = 0x6c2590c6;
        if (iVar7 != -0x43e9af8) {
          iVar5 = iVar9;
        }
      }
    }
    else {
      iVar5 = -0xc85fbaa;
      if (iVar7 != -0xf7cae7) {
        if (iVar7 == 0xb4741) {
          iVar5 = -0x13274fc3;
        }
        else {
          iVar5 = iVar7;
          if (iVar7 == 0x39cf612) {
            _objc_retain(param_2);
            _objc_retain(param_3);
            _objc_retain(param_5);
            iVar5 = -0x1ede1c49;
          }
        }
      }
    }
  }
  if (iVar7 < 0x357637a6) {
    if (0x19d0bd7a < iVar7) {
      if (iVar7 < 0x2a07bf26) {
        if (iVar7 < 0x24936d4a) {
          iVar5 = -0x3e8f2870;
          if (iVar7 != 0x19d0bd7b) {
            if (iVar7 == 0x1be13a27) {
              iVar5 = 0xf6cd81f;
            }
            else {
              iVar5 = iVar7;
              if (iVar7 == 0x1fa11d66) {
                local_a8 = DAT_000a40c8;
                local_99 = 1000.0 < DAT_000a40c8 - DAT_000a41a0;
                iVar5 = 0x50f2daf3;
              }
            }
          }
        }
        else if (iVar7 == 0x24936d4a) {
          iVar5 = 0xc2de11c;
        }
        else {
          if (iVar7 == 0x2686cc02) {
            iVar5 = 0x70c06633;
            bVar2 = local_d1;
            goto LAB_0005def4;
          }
          if (iVar7 == 0x27dcaf7e) {
            iVar5 = -0x72b04016;
          }
        }
      }
      else if (iVar7 < 0x3001eb16) {
        if (iVar7 == 0x2a07bf26) {
          local_e2 = _objc_msgSend(local_f0,local_108,local_f8);
          iVar5 = -0x3a764a0e;
        }
        else {
          iVar5 = -0x3e8f2870;
          if ((iVar7 != 0x2e621e62) && (iVar5 = iVar7, iVar7 == 0x2f5d3932)) {
            _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
            uVar6 = _objc_retainAutoreleasedReturnValue();
            iVar5 = _objc_msgSend(uVar6,"boolForKey:",&cf_HookWaterMark);
            _objc_release(uVar6);
            bVar4 = iVar5 == 0;
            iVar7 = 0x487eb230;
            local_78 = unaff_x23;
LAB_0005d60c:
            iVar5 = 0x65be98b8;
            if (bVar4) {
              iVar5 = iVar7;
            }
          }
        }
      }
      else if (iVar7 == 0x3001eb16) {
        iVar5 = -0x2ed7a935;
      }
      else {
        iVar5 = -0x1aebd949;
        if ((iVar7 != 0x314f3785) && (iVar5 = iVar7, iVar7 == 0x31ae6e69)) {
          _objc_msgSend(local_c0,local_b8);
          _objc_msgSend(DAT_000a4078,"enqueueSampleBuffer:",local_118);
          iVar5 = -0x3af00652;
        }
      }
      goto LAB_0005d010;
    }
    if (0x1218f8ce < iVar7) {
      if (iVar7 < 0x16aae114) {
        iVar5 = -0x5bac321e;
        if (((iVar7 != 0x1218f8cf) && (iVar5 = 0x584c544d, iVar7 != 0x167b0451)) &&
           (iVar5 = iVar7, iVar7 == 0x1694821f)) {
          iVar5 = 0x5b882cd9;
          if (local_a9 == '\0') {
            iVar5 = 0x4c27304e;
          }
          unaff_x28 = &cf_w;
        }
      }
      else if (iVar7 == 0x16aae114) {
        local_f0 = DAT_000a4070;
        local_f8 = _g_isMirroredMarkxz;
        iVar5 = 0x7be12175;
      }
      else if (iVar7 == 0x16ecd06b) {
        iVar5 = 0xb4741;
      }
      else if (iVar7 == 0x197a8901) {
        DAT_000a4170 = 3;
        iVar5 = -0xc85fbaa;
      }
      goto LAB_0005d010;
    }
    if (iVar7 < 0xbab956b) {
      if (iVar7 != 0x7e9d805) {
        if (iVar7 != 0x9c73eef) {
          iVar9 = 0xb815503;
          goto LAB_0005d654;
        }
        goto LAB_0005dc78;
      }
      DAT_000a41a0 = local_a8;
      local_98 = _CMSampleBufferGetFormatDescription(param_4);
      iVar5 = -0x4c69fd6d;
      goto LAB_0005d010;
    }
    if (iVar7 == 0xbab956b) {
      iVar5 = -0x5bac321e;
      goto LAB_0005d010;
    }
    iVar8 = 0xc2de11c;
    iVar5 = 0x69603c77;
    iVar1 = 0xf6cd81f;
    iVar9 = -0x572c335d;
  }
  else {
    if (iVar7 < 0x584c544d) {
      if (iVar7 < 0x4435e692) {
        if (iVar7 < 0x3d7242d8) {
          iVar5 = -0x6a003b5f;
          if (((iVar7 != 0x357637a6) && (iVar5 = 0x2a07bf26, iVar7 != 0x3b398584)) &&
             (iVar5 = iVar7, iVar7 == 0x3d4444b2)) {
            bVar4 = local_e2 == '\0';
            iVar7 = -0xf7cae7;
            goto LAB_0005d60c;
          }
        }
        else if (iVar7 == 0x3d7242d8) {
          iVar5 = 0x357637a6;
        }
        else if (iVar7 == 0x3f0831fa) {
          _objc_release(local_78);
          local_a9 = _objc_msgSend(DAT_000a4070,local_108,_g_isenabledw2ProChinese);
          iVar5 = 0x1694821f;
        }
        else if (iVar7 == 0x43a2a3bf) {
          _objc_msgSend(local_f0,local_108,local_f8);
          iVar5 = 0x2a07bf26;
        }
      }
      else if (iVar7 < 0x4c27304e) {
        if (iVar7 == 0x4435e692) {
          iVar5 = 0x2f5d3932;
          if (local_f9 == '\0') {
            iVar5 = -0x4480bdc3;
          }
          unaff_x23 = &cf_s__ub;
        }
        else {
          iVar5 = 0x16aae114;
          if ((iVar7 != 0x487eb230) && (iVar5 = iVar7, iVar7 == 0x4b0d93bf)) {
LAB_0005dc78:
            iVar5 = -0x7ca48d4b;
          }
        }
      }
      else if (iVar7 == 0x4c27304e) {
        iVar5 = -0x23c9fab5;
      }
      else if (iVar7 == 0x4fda7c33) {
        _objc_msgSend(local_110,"fileExistsAtPath:",_g_isenabledw2ProChinese);
        iVar5 = -0x599f67c6;
      }
      else if (iVar7 == 0x50f2daf3) {
        iVar5 = -0x41c4236b;
        if (local_99 == '\0') {
          iVar5 = 0x4b0d93bf;
        }
      }
      goto LAB_0005d010;
    }
    if (iVar7 < 0x6f2dd3ba) {
      if (iVar7 < 0x67eb0b6e) {
        if (iVar7 == 0x584c544d) {
          local_d0 = "isReadyForMoreMediaData";
          iVar5 = -0x79d7a6c5;
        }
        else if (iVar7 == 0x5b882cd9) {
          local_70 = unaff_x28;
          iVar5 = 0x1fa11d66;
        }
        else if (iVar7 == 0x65be98b8) {
          DAT_000a4170 = 1;
          iVar5 = 0x2e621e62;
        }
      }
      else {
        iVar5 = 0x16ecd06b;
        if (((iVar7 != 0x67eb0b6e) && (iVar5 = -0x5d5a3a7e, iVar7 != 0x69603c77)) &&
           (iVar5 = iVar7, iVar7 == 0x6c2590c6)) {
          _CMVideoFormatDescriptionGetDimensions(local_98);
          iVar5 = -0x2c3ac5d;
        }
      }
      goto LAB_0005d010;
    }
    if (iVar7 < 0x72c58f50) {
      if (iVar7 == 0x6f2dd3ba) {
        iVar5 = 0x31ae6e69;
      }
      else {
        iVar5 = 0x584c544d;
        if ((iVar7 != 0x70c06633) && (iVar5 = iVar7, iVar7 == 0x71e6e489)) {
          iVar5 = 0x4b0d93bf;
        }
      }
      goto LAB_0005d010;
    }
    if (iVar7 == 0x72c58f50) {
      iVar5 = -0x6a003b5f;
      goto LAB_0005d010;
    }
    iVar8 = 0x7561cf1d;
    iVar5 = 0x1218f8cf;
    iVar1 = 0x7be12175;
    iVar9 = 0x3b398584;
  }
  if (iVar7 != iVar1) {
    iVar9 = iVar7;
  }
  if (iVar7 != iVar8) {
    iVar5 = iVar9;
  }
  goto LAB_0005d010;
}
void FUN_0005e024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)
{
  int iVar1;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  code *local_68;
  iVar1 = 0x601e02a3;
  while( true ) {
    while( true ) {
      while (0x1af7e7e < iVar1) {
        if (iVar1 < 0xa469bba) {
          if (iVar1 == 0x1af7e7f) {
            _objc_retain(param_2);
            _objc_retain(param_3);
            _objc_retain(param_4);
            iVar1 = 0x8135ec5;
            local_80 = param_3;
            local_78 = param_4;
            local_70 = param_5;
          }
          else if (iVar1 == 0x8135ec5) {
            iVar1 = -0x7c6197c6;
          }
        }
        else if (iVar1 == 0xa469bba) {
          (*local_68)(param_2,"captureOutput:didOutputMetadataObjects:fromConnection:",param_3,
                      param_4,param_5);
          _objc_release(local_70);
          _objc_release(local_78);
          _objc_release(local_80);
          _objc_release(param_2);
          iVar1 = -0x664f01ae;
        }
        else if (iVar1 == 0x601e02a3) {
          iVar1 = 0x1af7e7f;
        }
      }
      if (iVar1 != -0x7c6197c6) break;
      _objc_retain(local_70);
      local_68 = DAT_000a41a8;
      iVar1 = -0x4aaf60f;
    }
    if (iVar1 == -0x664f01ae) break;
    if (iVar1 == -0x4aaf60f) {
      iVar1 = 0xa469bba;
    }
  }
  return;
}
void FUN_0005e1d8(undefined8 param_1)
{
  undefined *puVar1;
  int iVar2;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  code *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  dispatch_queue_t local_80;
  dispatch_queue_t local_78;
  undefined8 *local_70;
  undefined4 *local_68;
  local_88 = param_1;
  _objc_retain(param_1);
  local_80 = _dispatch_get_global_queue(2,0);
  local_78 = local_80;
  _objc_retain(local_80);
  puVar1 = PTR___NSConcreteStackBlock_00068030;
  iVar2 = 0x11efc7f6;
  local_70 = &local_b0;
  do {
    while( true ) {
      while (0x11efc7f5 < iVar2) {
        if (iVar2 == 0x4f9b6730) {
          iVar2 = -0x69dd2bd2;
        }
        else if (iVar2 == 0x11efc7f6) {
          *local_70 = puVar1;
          local_a8 = 0xc2000000;
          iVar2 = 0x4f9b6730;
          local_68 = &uStack_a4;
        }
      }
      if (iVar2 != -0x69dd2bd2) break;
      *local_68 = 0;
      local_a0 = FUN_0005e33c;
      puStack_98 = &DAT_00068360;
      _objc_retain(local_88);
      local_90 = param_1;
      _dispatch_async(local_80,&local_b0);
      _objc_release(local_78);
      _objc_release(local_90);
      _objc_release(local_88);
      iVar2 = -0x27c423a4;
    }
  } while (iVar2 != -0x27c423a4);
  return;
}
void FUN_0005e33c(long param_1)
{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_b0 [8];
  undefined8 *local_a8;
  long local_a0;
  code *local_98;
  char local_89;
  undefined8 *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 local_68;
  puVar4 = (undefined8 *)auStack_b0;
  iVar3 = 0x5b35ff9c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar6 = iVar3, iVar3 = iVar6, 0x1c0dea4b < iVar6) {
            if (iVar6 < 0x432bd7a6) {
              if (iVar6 < 0x2870cce1) {
                if (iVar6 < 0x26733860) {
                  if (iVar6 == 0x1c0dea4c) {
                    local_a8[2] = FUN_0005ea0c;
                    local_a8[3] = &DAT_00068360;
                    puVar2 = local_a8;
                    uVar5 = _objc_retain(*(undefined8 *)(local_a0 + 0x20));
                    puVar2[4] = uVar5;
                    _dispatch_async(local_78,local_a8);
                    _objc_release(local_70);
                    local_68 = puVar2[4];
                    iVar3 = -0x6c506cec;
                  }
                  else {
                    iVar3 = -0x76a1f261;
                    if (iVar6 != 0x1f69a7ee) {
                      iVar3 = iVar6;
                    }
                  }
                }
                else if (iVar6 == 0x26733860) {
                  puVar4 = puVar4 + -6;
                  local_a8 = puVar4;
                  iVar3 = 0x55dab84c;
                }
                else {
                  iVar3 = 0x3715454c;
                  if (iVar6 != 0x26e19f08) {
                    iVar3 = iVar6;
                  }
                }
              }
              else if (iVar6 < 0x30d2f8f3) {
                if (iVar6 == 0x2870cce1) {
                  _objc_retain(PTR___dispatch_main_q_00068058);
                  *local_a8 = PTR___NSConcreteStackBlock_00068030;
                  *(undefined4 *)(local_a8 + 1) = 0xc2000000;
                  *(undefined4 *)((long)local_a8 + 0xc) = 0;
                  iVar3 = -0x45ea7f49;
                }
                else if (iVar6 == 0x3076b21a) {
                  local_a8[2] = FUN_0005ea0c;
                  local_a8[3] = &DAT_00068360;
                  puVar2 = local_a8;
                  uVar5 = _objc_retain(*(undefined8 *)(local_a0 + 0x20));
                  puVar2[4] = uVar5;
                  _dispatch_async(local_78,local_a8);
                  _objc_release(local_70);
                  iVar3 = 0x1c0dea4c;
                }
              }
              else if (iVar6 == 0x30d2f8f3) {
                iVar3 = -0x21a740e7;
              }
              else {
                iVar3 = 0x601db59b;
                if ((iVar6 != 0x3715454c) && (iVar3 = iVar6, iVar6 == 0x3f30ba89)) {
                  _objc_release(local_68);
                  iVar3 = 0x5d2aa349;
                }
              }
            }
            else if (iVar6 < 0x5b35ff9c) {
              if (iVar6 < 0x4aa73fec) {
                if (iVar6 == 0x432bd7a6) {
                  local_88 = (undefined8 *)(local_a0 + 0x20);
                  iVar3 = 0x26e19f08;
                }
                else if (iVar6 == 0x49f70e8f) {
                  iVar3 = 0x432bd7a6;
                }
              }
              else {
                iVar1 = 0x1f69a7ee;
                if (iVar6 != 0x55dab84c) {
                  iVar1 = iVar6;
                }
                iVar3 = 0x5d2aa349;
                if (iVar6 != 0x4aa73fec) {
                  iVar3 = iVar1;
                }
              }
            }
            else if (iVar6 < 0x601db59b) {
              iVar3 = 0x26733860;
              if ((iVar6 != 0x5b35ff9c) && (iVar3 = iVar6, iVar6 == 0x5d2aa349)) {
                _objc_release(local_68);
                iVar3 = 0x6422b59f;
              }
            }
            else if (iVar6 == 0x601db59b) {
              local_80 = *local_88;
              iVar3 = -0x417d2572;
            }
            else {
              iVar1 = -0x76a1f261;
              if (iVar6 != 0x7e92a529) {
                iVar1 = iVar6;
              }
              iVar3 = -0x5fe6fbd;
              if (iVar6 != 0x6422b59f) {
                iVar3 = iVar1;
              }
            }
          }
          if (-0x3a5633ca < iVar6) break;
          if (iVar6 < -0x58dd6db6) {
            if (iVar6 < -0x6e7bdc80) {
              if (iVar6 == -0x7ac8c9d3) {
                iVar3 = -0x2bc242d5;
              }
              else if (iVar6 == -0x76a1f261) {
                local_a0 = param_1;
                iVar3 = 0x30d2f8f3;
              }
            }
            else if (iVar6 == -0x6e7bdc80) {
              (*local_98)(local_80,1);
              iVar3 = -0x5fe6fbd;
            }
            else {
              iVar3 = 0x4aa73fec;
              if (iVar6 != -0x6c506cec) {
                iVar3 = iVar6;
              }
            }
          }
          else if (iVar6 < -0x48cbafe5) {
            iVar1 = -0x23a206a0;
            if (iVar6 != -0x4f746ddb) {
              iVar1 = iVar6;
            }
            iVar3 = 0x432bd7a6;
            if (iVar6 != -0x58dd6db6) {
              iVar3 = iVar1;
            }
          }
          else if (iVar6 == -0x48cbafe5) {
            iVar3 = -0x58dd6db6;
            if (local_89 == '\0') {
              iVar3 = -0x20aa4975;
            }
          }
          else if (iVar6 == -0x45ea7f49) {
            local_78 = PTR___dispatch_main_q_00068058;
            local_70 = PTR___dispatch_main_q_00068058;
            _objc_retain(PTR___dispatch_main_q_00068058);
            *local_a8 = PTR___NSConcreteStackBlock_00068030;
            *(undefined4 *)(local_a8 + 1) = 0xc2000000;
            *(undefined4 *)((long)local_a8 + 0xc) = 0;
            iVar3 = -0x7ac8c9d3;
          }
          else {
            iVar3 = -0x6e7bdc80;
            if (iVar6 != -0x417d2572) {
              iVar3 = iVar6;
            }
          }
        }
        if (-0x23a206a1 < iVar6) break;
        if (iVar6 < -0x315270df) {
          if (iVar6 == -0x3a5633c9) {
            _dlsym(0xfffffffffffffffe,"SBSOpenSensitiveURLAndUnlock");
            iVar3 = -0x315270df;
          }
          else {
            iVar3 = 0x26733860;
            if (iVar6 != -0x360a8013) {
              iVar3 = iVar6;
            }
          }
        }
        else if (iVar6 == -0x315270df) {
          local_98 = (code *)_dlsym(0xfffffffffffffffe,"SBSOpenSensitiveURLAndUnlock");
          local_89 = local_98 != (code *)0x0;
          iVar3 = -0x48cbafe5;
        }
        else {
          iVar1 = 0x1c0dea4c;
          if (iVar6 != -0x2bc242d5) {
            iVar1 = iVar6;
          }
          iVar3 = -0x4f746ddb;
          if (iVar6 != -0x2eaa3cb2) {
            iVar3 = iVar1;
          }
        }
      }
      if (iVar6 < -0x5fe6fbd) break;
      iVar3 = -0x4f746ddb;
      if ((iVar6 != -0x5fe6fbd) && (iVar3 = iVar6, iVar6 == 0xe10aa97)) {
        iVar3 = 0x601db59b;
      }
    }
    iVar3 = -0x315270df;
  } while (((iVar6 == -0x21a740e7) || (iVar3 = -0x45ea7f49, iVar6 == -0x20aa4975)) ||
          (iVar3 = iVar6, iVar6 != -0x23a206a0));
  return;
}
void FUN_0005ea0c(long param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  uVar4 = *(undefined8 *)PTR____NSDictionary0___00068038;
  iVar1 = -0x58a42edd;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar1, iVar1 = -0x1b44bcd1, iVar3 < 0x1a780c98) {
            if (iVar3 < -0x1b44bcd1) {
              iVar1 = 0x3e986165;
              if (iVar3 != -0x24b95bbf) {
                iVar1 = iVar3;
              }
              iVar2 = -0x24b95bbf;
              if (iVar3 != -0x53d78532) {
                iVar2 = iVar1;
              }
              iVar1 = 0x3122bb8c;
              if (iVar3 != -0x58a42edd) {
                iVar1 = iVar2;
              }
            }
            else if (iVar3 == -0x1b44bcd1) {
              iVar1 = 0x1a780c98;
            }
            else if (iVar3 == -0x130df507) {
              _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
              _objc_retainAutoreleasedReturnValue();
              iVar1 = 0x3122bb8c;
            }
            else if (iVar3 != 0x6e575ae) {
              iVar1 = iVar3;
            }
          }
          if (iVar3 < 0x3e986165) break;
          if (iVar3 == 0x3e986165) {
            _objc_msgSend(local_68,"openURL:options:completionHandler:",local_60,local_58,0);
            _objc_release(local_68);
            iVar1 = 0x65e34738;
          }
          else {
            iVar2 = 0x6e575ae;
            if (iVar3 != 0x65e34738) {
              iVar2 = iVar3;
            }
            if (iVar3 != 0x462b0dcc) {
              iVar1 = iVar2;
            }
          }
        }
        if (iVar3 != 0x3122bb8c) break;
        local_68 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
        _objc_retain(local_68);
        local_60 = *(undefined8 *)(param_1 + 0x20);
        local_58 = uVar4;
        iVar1 = -0x53d78532;
      }
      if (iVar3 != 0x3821b614) break;
      _objc_msgSend(local_68,"openURL:options:completionHandler:",local_60,local_58,0);
      _objc_release(local_68);
      iVar1 = 0x3e986165;
    }
    iVar1 = iVar3;
  } while (iVar3 != 0x1a780c98);
  return;
}
void FUN_0005ec40(long param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  iVar2 = -0x33a1490d;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar3 = iVar2, iVar2 = iVar3, iVar3 < 0x8920e96) {
            if (iVar3 < -0x2e11ee00) {
              iVar1 = 0x8920e96;
              if (iVar3 != -0x33a1490d) {
                iVar1 = iVar3;
              }
              iVar2 = 0xe659faa;
              if (iVar3 != -0x691077dd) {
                iVar2 = iVar1;
              }
            }
            else {
              iVar2 = 0x8920e96;
              if ((iVar3 != -0x2e11ee00) && (iVar2 = iVar3, iVar3 == -0x1f20e53c)) {
                local_38 = local_48;
                iVar2 = -0x691077dd;
              }
            }
          }
          if (0x2226b408 < iVar3) break;
          if (iVar3 == 0x8920e96) {
            local_48 = *(undefined8 *)(param_1 + 0x20);
            local_40 = "dismissViewControllerAnimated:completion:";
            iVar2 = 0x4fb40b87;
          }
          else if (iVar3 == 0xe659faa) {
            _objc_msgSend(local_38,local_40,1,0);
            iVar2 = 0x72e75105;
          }
        }
        if (iVar3 != 0x2226b409) break;
        _objc_msgSend(local_38,local_40,1,0);
        iVar2 = 0xe659faa;
      }
      if (iVar3 != 0x4fb40b87) break;
      iVar2 = -0x1f20e53c;
    }
  } while (iVar3 != 0x72e75105);
  return;
}
void FUN_0005eddc(long param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *local_8;
  iVar2 = 0x5a469c7e;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar2, 0x3c267cfb < iVar3) {
          if (iVar3 < 0x5a469c7e) {
            if (iVar3 == 0x3c267cfc) {
              iVar2 = -0x3700cd10;
              local_8 = (undefined8 *)(param_1 + 0x20);
            }
            else {
              iVar2 = -0x220a04e0;
              if (iVar3 != 0x4a8f1a5e) {
                iVar2 = iVar3;
              }
            }
          }
          else {
            iVar1 = iVar3;
            if (iVar3 == 0x5a469c7e) {
              iVar1 = -0x627e1bf4;
            }
            iVar2 = -0x627e1bf4;
            if (iVar3 != 0x7aa921ae) {
              iVar2 = iVar1;
            }
          }
        }
        if (-0x220a04e1 < iVar3) break;
        iVar1 = 0x1cb5ba9d;
        if (iVar3 != -0x3700cd10) {
          iVar1 = iVar3;
        }
        iVar2 = 0x4a8f1a5e;
        if (iVar3 != -0x627e1bf4) {
          iVar2 = iVar1;
        }
      }
      if (iVar3 != -0x220a04e0) break;
      iVar2 = 0x3c267cfc;
    }
    iVar2 = iVar3;
  } while (iVar3 != 0x1cb5ba9d);
  _objc_msgSend(*local_8,"dismissViewControllerAnimated:completion:",1,0);
  return;
}
void FUN_0005ef04(long param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  iVar1 = -0x581f3943;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar1, iVar3 < -0x1bc63b4c) {
          if (iVar3 < -0x578e95b3) {
            if (iVar3 == -0x7be744a0) {
              local_38 = *(undefined8 *)(param_1 + 0x20);
              iVar1 = -0x334e6548;
            }
            else {
              iVar2 = -0x7be744a0;
              if (iVar3 != -0x581f3943) {
                iVar2 = iVar3;
              }
              iVar1 = -0x7be744a0;
              if (iVar3 != -0x70ee4f75) {
                iVar1 = iVar2;
              }
            }
          }
          else {
            iVar1 = -0x1bc63b4c;
            if (iVar3 != -0x1d55a4af) {
              iVar1 = iVar3;
            }
            iVar2 = -0x703fac4;
            if (iVar3 != -0x334e6548) {
              iVar2 = iVar1;
            }
            iVar1 = -0x1bc63b4c;
            if (iVar3 != -0x578e95b3) {
              iVar1 = iVar2;
            }
          }
        }
        if (iVar3 < 0x47bda871) break;
        if (iVar3 == 0x47bda871) {
          _objc_msgSend(local_38,"dismissViewControllerAnimated:completion:",1,0);
          iVar1 = 0x785e7ec3;
        }
        else if (iVar3 == 0x5e58b7e7) {
          _objc_msgSend(local_38,"dismissViewControllerAnimated:completion:",1,0);
          iVar1 = 0x47bda871;
        }
        else {
          iVar1 = -0x578e95b3;
          if (iVar3 != 0x785e7ec3) {
            iVar1 = iVar3;
          }
        }
      }
      if (iVar3 != -0x1bc63b4c) break;
      iVar1 = 0x24e229e7;
    }
    iVar1 = 0x47bda871;
  } while ((iVar3 == -0x703fac4) || (iVar1 = iVar3, iVar3 != 0x24e229e7));
  return;
}
void FUN_0005f0d0(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar2 = -0x5107a827;
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = iVar2, iVar3 < -0x38d4e7b8) {
          if (iVar3 < -0x5107a827) {
            iVar2 = 0x5c53bfb6;
            if ((iVar3 != -0x7ad6963f) && (iVar2 = iVar3, iVar3 == -0x6d7e5444)) {
              ___cxa_atexit(FUN_00049e7c,0,0);
              iVar2 = -0x38d4e7b8;
            }
          }
          else {
            iVar1 = 0x5c53bfb6;
            if (iVar3 != -0x44916e08) {
              iVar1 = iVar3;
            }
            iVar2 = -0x38d4e7b8;
            if (iVar3 != -0x5107a827) {
              iVar2 = iVar1;
            }
          }
        }
        if (0x3e54e1ff < iVar3) break;
        if (iVar3 == -0x38d4e7b8) {
          ___cxa_atexit(FUN_00049e7c,0,0);
          iVar2 = 0x1f2d26bd;
        }
        else {
          iVar2 = -0x44916e08;
          if (iVar3 != 0x1f2d26bd) {
            iVar2 = iVar3;
          }
        }
      }
      if (iVar3 != 0x5c53bfb6) break;
      iVar2 = 0x3e54e200;
    }
    iVar2 = iVar3;
  } while (iVar3 != 0x3e54e200);
  return;
}
bool FUN_0005f228(int param_1,int param_2,int param_3)
{
  int iVar1;
  if (DAT_000a41c0 == -1) {
    iVar1 = DAT_000a41b0 - param_1;
    if (param_1 < DAT_000a41b0) {
      return true;
    }
  }
  else {
    _dispatch_once_f(&DAT_000a41c0,(void *)0x0,FUN_0005f2ec);
    iVar1 = DAT_000a41b0 - param_1;
    if (param_1 < DAT_000a41b0) {
      return true;
    }
  }
  if (iVar1 < 0 == SBORROW4(DAT_000a41b0,param_1)) {
    if (param_2 < DAT_000a41b4) {
      return true;
    }
    if (param_2 <= DAT_000a41b4) {
      return param_3 <= DAT_000a41b8;
    }
  }
  return false;
}
void FUN_0005f2ec(void)
{
  FUN_0005f440(1);
  return;
}
void FUN_0005f2f4(undefined4 param_1,int param_2,uint param_3,uint param_4)
{
  int iVar1;
  ulong uVar2;
  undefined4 local_40;
  uint uStack_3c;
  long local_38;
  local_38 = *(long *)PTR____stack_chk_guard_00068050;
  if (DAT_000a41c8 == -1) {
    if (DAT_000a41d0 == (code *)0x0) {
code_r0x0005f388:
      if (DAT_000a41c0 == -1) {
        iVar1 = DAT_000a41b0 - param_2;
      }
      else {
        _dispatch_once_f(&DAT_000a41c0,(void *)0x0,FUN_0005f2ec);
        iVar1 = DAT_000a41b0 - param_2;
      }
      if (param_2 < DAT_000a41b0) {
LAB_0005f3b8:
        uVar2 = 1;
      }
      else {
        if (iVar1 < 0 == SBORROW4(DAT_000a41b0,param_2)) {
          if ((int)param_3 < DAT_000a41b4) goto LAB_0005f3b8;
          if ((int)param_3 <= DAT_000a41b4) {
            uVar2 = (ulong)((int)param_4 <= DAT_000a41b8);
            goto LAB_0005f3c8;
          }
        }
        uVar2 = 0;
      }
      goto LAB_0005f3c8;
    }
  }
  else {
    _dispatch_once_f(&DAT_000a41c8,(void *)0x0,FUN_0005f438);
    if (DAT_000a41d0 == (code *)0x0) goto code_r0x0005f388;
  }
  uStack_3c = param_2 << 0x10 | (param_3 & 0xff) << 8 | param_4 & 0xff;
  local_40 = param_1;
  uVar2 = (*DAT_000a41d0)(1,&local_40);
LAB_0005f3c8:
  if (*(long *)PTR____stack_chk_guard_00068050 == local_38) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(uVar2);
}
void FUN_0005f438(void)
{
  FUN_0005f440(0);
  return;
}
void FUN_0005f440(FILE *param_1)
{
  int iVar1;
  uint uVar2;
  FILE *pFVar3;
  FILE *pFVar4;
  code *pcVar5;
  FILE *pFVar6;
  FILE *pFVar7;
  FILE *pFVar8;
  FILE *pFVar9;
  FILE *pFVar10;
  FILE *pFVar11;
  FILE *pFVar12;
  size_t sVar13;
  void *pvVar14;
  size_t sVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uchar *puVar21;
  char acStack_88 [32];
  long local_68;
  local_68 = *(long *)PTR____stack_chk_guard_00068050;
  pFVar3 = param_1;
  if ((DAT_000a41d0 == (FILE *)0x0 || (int)param_1 != 0) &&
     (((DAT_000a41d0 = (FILE *)_dlsym(0xfffffffffffffffe,"_availability_version_check"),
       DAT_000a41d0 == (FILE *)0x0 || (pFVar3 = DAT_000a41d0, (int)param_1 != 0)) &&
      (pFVar3 = (FILE *)_dlsym(0xfffffffffffffffe,"kCFAllocatorNull"), pFVar3 != (FILE *)0x0)))) {
    puVar21 = pFVar3->_p;
    pFVar4 = (FILE *)_dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
    pFVar3 = pFVar4;
    if (pFVar4 != (FILE *)0x0) {
      pcVar5 = (code *)_dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
      pFVar6 = (FILE *)_dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
      pFVar3 = pFVar6;
      if (((((pcVar5 != (code *)0x0 || pFVar6 != (FILE *)0x0) &&
            (pFVar7 = (FILE *)_dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy"),
            pFVar3 = pFVar7, pFVar7 != (FILE *)0x0)) &&
           ((pFVar8 = (FILE *)_dlsym(0xfffffffffffffffe,"CFDictionaryGetValue"), pFVar3 = pFVar8,
            pFVar8 != (FILE *)0x0 &&
            ((pFVar9 = (FILE *)_dlsym(0xfffffffffffffffe,"CFGetTypeID"), pFVar3 = pFVar9,
             pFVar9 != (FILE *)0x0 &&
             (pFVar10 = (FILE *)_dlsym(0xfffffffffffffffe,"CFStringGetTypeID"), pFVar3 = pFVar10,
             pFVar10 != (FILE *)0x0)))))) &&
          (pFVar11 = (FILE *)_dlsym(0xfffffffffffffffe,"CFStringGetCString"), pFVar3 = pFVar11,
          pFVar11 != (FILE *)0x0)) &&
         ((pFVar12 = (FILE *)_dlsym(0xfffffffffffffffe,"CFRelease"), pFVar3 = pFVar12,
          pFVar12 != (FILE *)0x0 &&
          (pFVar3 = _fopen("/System/Library/CoreServices/SystemVersion.plist","r"),
          pFVar3 != (FILE *)0x0)))) {
        _fseek(pFVar3,0,2);
        sVar13 = _ftell(pFVar3);
        if ((long)sVar13 < 0) {
          pvVar14 = (void *)0x0;
        }
        else {
          _rewind(pFVar3);
          pvVar14 = _malloc(sVar13);
          if (((pvVar14 != (void *)0x0) &&
              (sVar15 = _fread(pvVar14,1,sVar13,pFVar3), sVar15 == sVar13)) &&
             (lVar16 = (*(code *)pFVar4)(0,pvVar14,sVar13,puVar21), lVar16 != 0)) {
            if (pcVar5 == (code *)0x0) {
              lVar17 = (*(code *)pFVar6)(0,lVar16,0,0);
            }
            else {
              lVar17 = (*pcVar5)();
            }
            if (lVar17 != 0) {
              lVar18 = (*(code *)pFVar7)(0,"ProductVersion",0x600,puVar21);
              if (lVar18 != 0) {
                lVar19 = (*(code *)pFVar8)(lVar17,lVar18);
                (*(code *)pFVar12)(lVar18);
                if (lVar19 != 0) {
                  lVar18 = (*(code *)pFVar9)(lVar19);
                  lVar20 = (*(code *)pFVar10)();
                  if ((lVar18 == lVar20) &&
                     (iVar1 = (*(code *)pFVar11)(lVar19,acStack_88,0x20,0x8000100), iVar1 != 0)) {
                    _sscanf(acStack_88,"%d.%d.%d");
                  }
                }
              }
              (*(code *)pFVar12)(lVar17);
            }
            (*(code *)pFVar12)(lVar16);
          }
        }
        _free(pvVar14);
        uVar2 = _fclose(pFVar3);
        pFVar3 = (FILE *)(ulong)uVar2;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00068050 == local_68) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(pFVar3);
}
void FUN_0005f770(void)
{
  code *pcVar1;
  _CFBundleGetVersionNumber(0);
                    // WARNING: Does not return
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5f780);
  (*pcVar1)();
}
void _AudioServicesPlaySystemSound(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f788. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__AudioServicesPlaySystemSound_00068078)();
  return;
}
void _CATransform3DMakeRotation(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f794. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CATransform3DMakeRotation_00068080)();
  return;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
CCCryptorStatus
_CCCrypt(CCOperation op,CCAlgorithm alg,CCOptions options,void *key,size_t keyLength,void *iv,
        void *dataIn,size_t dataInLength,void *dataOut,size_t dataOutAvailable,size_t *dataOutMoved)
{
  CCCryptorStatus CVar1;
                    // WARNING: Could not recover jumptable at 0x0005f7a0. Too many branches
                    // WARNING: Treating indirect jump as call
  CVar1 = (*(code *)PTR__CCCrypt_00068088)(op,alg,options);
  return CVar1;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
uchar * _CC_MD5(void *data,CC_LONG len,uchar *md)
{
  uchar *puVar1;
                    // WARNING: Could not recover jumptable at 0x0005f7ac. Too many branches
                    // WARNING: Treating indirect jump as call
  puVar1 = (uchar *)(*(code *)PTR__CC_MD5_00068090)(data,len);
  return puVar1;
}
void _CFBundleGetVersionNumber(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f7b8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CFBundleGetVersionNumber_00068098)();
  return;
}
void _CFNotificationCenterAddObserver(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f7c4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CFNotificationCenterAddObserver_000680a0)();
  return;
}
void _CFNotificationCenterGetDarwinNotifyCenter(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f7d0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CFNotificationCenterGetDarwinNotifyCenter_000680a8)();
  return;
}
void _CFRelease(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f7dc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CFRelease_000680b0)();
  return;
}
void _CGAffineTransformConcat(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f7e8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CGAffineTransformConcat_000680b8)();
  return;
}
void _CGAffineTransformMakeRotation(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f7f4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CGAffineTransformMakeRotation_000680c0)();
  return;
}
void _CGAffineTransformMakeScale(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f800. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CGAffineTransformMakeScale_000680c8)();
  return;
}
void _CMFormatDescriptionGetMediaSubType(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f80c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMFormatDescriptionGetMediaSubType_000680d0)();
  return;
}
void _CMFormatDescriptionGetMediaType(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f818. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMFormatDescriptionGetMediaType_000680d8)();
  return;
}
void _CMGetAttachment(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f824. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMGetAttachment_000680e0)();
  return;
}
void _CMSampleBufferCreateCopy(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f830. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMSampleBufferCreateCopy_000680e8)();
  return;
}
void _CMSampleBufferCreateForImageBuffer(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f83c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMSampleBufferCreateForImageBuffer_000680f0)();
  return;
}
void _CMSampleBufferGetDecodeTimeStamp(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f848. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMSampleBufferGetDecodeTimeStamp_000680f8)();
  return;
}
void _CMSampleBufferGetDuration(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f854. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMSampleBufferGetDuration_00068100)();
  return;
}
void _CMSampleBufferGetFormatDescription(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f860. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMSampleBufferGetFormatDescription_00068108)();
  return;
}
void _CMSampleBufferGetImageBuffer(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f86c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMSampleBufferGetImageBuffer_00068110)();
  return;
}
void _CMSampleBufferGetPresentationTimeStamp(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f878. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMSampleBufferGetPresentationTimeStamp_00068118)();
  return;
}
void _CMSampleBufferIsValid(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f884. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMSampleBufferIsValid_00068120)();
  return;
}
void _CMSetAttachment(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f890. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMSetAttachment_00068128)();
  return;
}
void _CMVideoFormatDescriptionCreateForImageBuffer(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f89c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMVideoFormatDescriptionCreateForImageBuffer_00068130)();
  return;
}
void _CMVideoFormatDescriptionGetDimensions(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f8a8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__CMVideoFormatDescriptionGetDimensions_00068138)();
  return;
}
void _MSHookMessageEx(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f8b4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__MSHookMessageEx_00068140)();
  return;
}
void _NSClassFromString(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f8c0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__NSClassFromString_00068148)();
  return;
}
void _NSLog(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f8cc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__NSLog_00068150)();
  return;
}
void _NSSearchPathForDirectoriesInDomains(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f8d8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__NSSearchPathForDirectoriesInDomains_00068158)();
  return;
}
void _NSStringFromClass(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f8e4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__NSStringFromClass_00068160)();
  return;
}
void _UIImageJPEGRepresentation(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f8f0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__UIImageJPEGRepresentation_00068168)();
  return;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
void __Block_object_assign(void *param_1,void *param_2,int param_3)
{
                    // WARNING: Could not recover jumptable at 0x0005f8fc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Block_object_assign_00068170)(param_1,param_2,param_3);
  return;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
void __Block_object_dispose(void *param_1,int param_2)
{
                    // WARNING: Could not recover jumptable at 0x0005f908. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Block_object_dispose_00068178)(param_1,param_2);
  return;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
void __Unwind_Resume(_Unwind_Exception *exception_object)
{
                    // WARNING: Could not recover jumptable at 0x0005f914. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR___Unwind_Resume_00068180)();
  return;
}
void ___cxa_atexit(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f920. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____cxa_atexit_00068188)();
  return;
}
void ___stack_chk_fail(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f92c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_00068190)();
  return;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
u_int32_t _arc4random(void)
{
  u_int32_t uVar1;
                    // WARNING: Could not recover jumptable at 0x0005f938. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__arc4random_00068198)();
  return uVar1;
}
void _class_addMethod(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f944. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__class_addMethod_000681a0)();
  return;
}
void _class_getInstanceMethod(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f950. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__class_getInstanceMethod_000681a8)();
  return;
}
void _class_getMethodImplementation(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f95c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__class_getMethodImplementation_000681b0)();
  return;
}
void _class_getSuperclass(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f968. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__class_getSuperclass_000681b8)();
  return;
}
void _dispatch_after(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f974. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__dispatch_after_000681c0)();
  return;
}
void _dispatch_async(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f980. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__dispatch_async_000681c8)();
  return;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
dispatch_queue_t _dispatch_get_global_queue(dispatch_queue_priority_t priority,ulong flags)
{
  dispatch_queue_t pdVar1;
                    // WARNING: Could not recover jumptable at 0x0005f98c. Too many branches
                    // WARNING: Treating indirect jump as call
  pdVar1 = (dispatch_queue_t)(*(code *)PTR__dispatch_get_global_queue_000681d0)();
  return pdVar1;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
void _dispatch_once_f(dispatch_once_t *predicate,void *context,dispatch_function_t function)
{
                    // WARNING: Could not recover jumptable at 0x0005f998. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__dispatch_once_f_000681d8)();
  return;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
dispatch_time_t _dispatch_time(dispatch_time_t when,int64_t delta)
{
  dispatch_time_t dVar1;
                    // WARNING: Could not recover jumptable at 0x0005f9a4. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (*(code *)PTR__dispatch_time_000681e0)();
  return dVar1;
}
void _dlsym(void)
{
                    // WARNING: Could not recover jumptable at 0x0005f9b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__dlsym_000681e8)();
  return;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
int _fclose(FILE *param_1)
{
  int iVar1;
                    // WARNING: Could not recover jumptable at 0x0005f9bc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_000681f0)((int)param_1);
  return iVar1;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
FILE * _fopen(char *param_1,char *param_2)
{
  FILE *pFVar1;
                    // WARNING: Could not recover jumptable at 0x0005f9c8. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_000681f8)();
  return pFVar1;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)
{
  size_t sVar1;
                    // WARNING: Could not recover jumptable at 0x0005f9d4. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fread_00068200)();
  return sVar1;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
void _free(void *param_1)
{
                    // WARNING: Could not recover jumptable at 0x0005f9e0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_00068208)();
  return;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
int _fseek(FILE *param_1,long param_2,int param_3)
{
  int iVar1;
                    // WARNING: Could not recover jumptable at 0x0005f9ec. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fseek_00068210)((int)param_1,param_2,param_3);
  return iVar1;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
long _ftell(FILE *param_1)
{
  long lVar1;
                    // WARNING: Could not recover jumptable at 0x0005f9f8. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__ftell_00068218)();
  return lVar1;
}
void _imp_implementationWithBlock(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fa04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__imp_implementationWithBlock_00068220)();
  return;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
void * _malloc(size_t param_1)
{
  void *pvVar1;
                    // WARNING: Could not recover jumptable at 0x0005fa10. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_00068228)();
  return pvVar1;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
void * _memcpy(void *param_1,void *param_2,size_t param_3)
{
  void *pvVar1;
                    // WARNING: Could not recover jumptable at 0x0005fa1c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_00068230)();
  return pvVar1;
}
void _method_getImplementation(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fa28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__method_getImplementation_00068238)();
  return;
}
void _method_getTypeEncoding(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fa34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__method_getTypeEncoding_00068240)();
  return;
}
void _method_setImplementation(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fa40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__method_setImplementation_00068248)();
  return;
}
void _objc_alloc(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fa4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_alloc_00068250)();
  return;
}
void _objc_autorelease(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fa58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_autorelease_00068258)();
  return;
}
void _objc_autoreleasePoolPop(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fa64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_autoreleasePoolPop_00068260)();
  return;
}
void _objc_autoreleasePoolPush(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fa70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_autoreleasePoolPush_00068268)();
  return;
}
void _objc_autoreleaseReturnValue(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fa7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_autoreleaseReturnValue_00068270)();
  return;
}
void _objc_begin_catch(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fa88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_begin_catch_00068278)();
  return;
}
void _objc_end_catch(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fa94. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_end_catch_00068280)();
  return;
}
void _objc_enumerationMutation(void)
{
                    // WARNING: Could not recover jumptable at 0x0005faa0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_enumerationMutation_00068288)();
  return;
}
void _objc_getClass(void)
{
                    // WARNING: Could not recover jumptable at 0x0005faac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_getClass_00068290)();
  return;
}
void _objc_getProperty(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fab8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_getProperty_00068298)();
  return;
}
void _objc_msgSend(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fac4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_msgSend_000682a0)();
  return;
}
void _objc_msgSendSuper2(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fad0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_msgSendSuper2_000682a8)();
  return;
}
void _objc_release(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fadc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_release_000682b0)();
  return;
}
void _objc_retain(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fae8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_retain_000682b8)();
  return;
}
void _objc_retainAutorelease(void)
{
                    // WARNING: Could not recover jumptable at 0x0005faf4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_retainAutorelease_000682c0)();
  return;
}
void _objc_retainAutoreleaseReturnValue(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fb00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_000682c8)();
  return;
}
void _objc_retainAutoreleasedReturnValue(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fb0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_000682d0)();
  return;
}
void _objc_retainBlock(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fb18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_retainBlock_000682d8)();
  return;
}
void _objc_setProperty_nonatomic_copy(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fb24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_setProperty_nonatomic_copy_000682e0)();
  return;
}
void _objc_storeStrong(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fb30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_storeStrong_000682e8)();
  return;
}
void _objc_unsafeClaimAutoreleasedReturnValue(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fb3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__objc_unsafeClaimAutoreleasedReturnValue_000682f0)();
  return;
}
void _object_getClass(void)
{
                    // WARNING: Could not recover jumptable at 0x0005fb48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__object_getClass_000682f8)();
  return;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
void _rewind(FILE *param_1)
{
                    // WARNING: Could not recover jumptable at 0x0005fb54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__rewind_00068300)();
  return;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
uint _sleep(uint param_1)
{
  uint uVar1;
                    // WARNING: Could not recover jumptable at 0x0005fb60. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__sleep_00068308)(param_1);
  return uVar1;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
int _sscanf(char *param_1,char *param_2,...)
{
  int iVar1;
                    // WARNING: Could not recover jumptable at 0x0005fb6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__sscanf_00068310)((int)param_1);
  return iVar1;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
size_t _strlen(char *param_1)
{
  size_t sVar1;
                    // WARNING: Could not recover jumptable at 0x0005fb78. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_00068318)();
  return sVar1;
}
// WARNING: Unknown calling convention -- yet parameter storage is locked
int _uname(utsname *param_1)
{
  int iVar1;
                    // WARNING: Could not recover jumptable at 0x0005fb84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__uname_00068320)((int)param_1);
  return iVar1;
}
