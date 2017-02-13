/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: storage.proto */

#ifndef PROTOBUF_C_storage_2eproto__INCLUDED
#define PROTOBUF_C_storage_2eproto__INCLUDED

#if __has_include(<protobuf-c/protobuf-c.h>)
#include <protobuf-c/protobuf-c.h>
#elif __has_include(<protobuf_c/protobuf-c.h>)
#include <protobuf_c/protobuf-c.h>
#else
#include "protobuf-c.h"
#endif

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Wickr__Proto__RootKeys Wickr__Proto__RootKeys;
typedef struct _Wickr__Proto__StorageKeys Wickr__Proto__StorageKeys;


/* --- enums --- */


/* --- messages --- */

struct  _Wickr__Proto__RootKeys
{
  ProtobufCMessage base;
  uint32_t version;
  protobuf_c_boolean has_node_storage_root;
  ProtobufCBinaryData node_storage_root;
  protobuf_c_boolean has_remote_storage_root;
  ProtobufCBinaryData remote_storage_root;
  protobuf_c_boolean has_node_signature_root;
  ProtobufCBinaryData node_signature_root;
};
#define WICKR__PROTO__ROOT_KEYS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&wickr__proto__root_keys__descriptor) \
    , 0, 0,{0,NULL}, 0,{0,NULL}, 0,{0,NULL} }


struct  _Wickr__Proto__StorageKeys
{
  ProtobufCMessage base;
  uint32_t version;
  protobuf_c_boolean has_local_storage;
  ProtobufCBinaryData local_storage;
  protobuf_c_boolean has_remote_storage;
  ProtobufCBinaryData remote_storage;
};
#define WICKR__PROTO__STORAGE_KEYS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&wickr__proto__storage_keys__descriptor) \
    , 0, 0,{0,NULL}, 0,{0,NULL} }


/* Wickr__Proto__RootKeys methods */
void   wickr__proto__root_keys__init
                     (Wickr__Proto__RootKeys         *message);
size_t wickr__proto__root_keys__get_packed_size
                     (const Wickr__Proto__RootKeys   *message);
size_t wickr__proto__root_keys__pack
                     (const Wickr__Proto__RootKeys   *message,
                      uint8_t             *out);
size_t wickr__proto__root_keys__pack_to_buffer
                     (const Wickr__Proto__RootKeys   *message,
                      ProtobufCBuffer     *buffer);
Wickr__Proto__RootKeys *
       wickr__proto__root_keys__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   wickr__proto__root_keys__free_unpacked
                     (Wickr__Proto__RootKeys *message,
                      ProtobufCAllocator *allocator);
/* Wickr__Proto__StorageKeys methods */
void   wickr__proto__storage_keys__init
                     (Wickr__Proto__StorageKeys         *message);
size_t wickr__proto__storage_keys__get_packed_size
                     (const Wickr__Proto__StorageKeys   *message);
size_t wickr__proto__storage_keys__pack
                     (const Wickr__Proto__StorageKeys   *message,
                      uint8_t             *out);
size_t wickr__proto__storage_keys__pack_to_buffer
                     (const Wickr__Proto__StorageKeys   *message,
                      ProtobufCBuffer     *buffer);
Wickr__Proto__StorageKeys *
       wickr__proto__storage_keys__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   wickr__proto__storage_keys__free_unpacked
                     (Wickr__Proto__StorageKeys *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Wickr__Proto__RootKeys_Closure)
                 (const Wickr__Proto__RootKeys *message,
                  void *closure_data);
typedef void (*Wickr__Proto__StorageKeys_Closure)
                 (const Wickr__Proto__StorageKeys *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor wickr__proto__root_keys__descriptor;
extern const ProtobufCMessageDescriptor wickr__proto__storage_keys__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_storage_2eproto__INCLUDED */
