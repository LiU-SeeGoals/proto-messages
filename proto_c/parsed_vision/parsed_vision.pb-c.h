/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: parsed_vision.proto */

#ifndef PROTOBUF_C_parsed_5fvision_2eproto__INCLUDED
#define PROTOBUF_C_parsed_5fvision_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1005000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "robot_action/robot_action.pb-c.h"

typedef struct Robot Robot;
typedef struct Ball Ball;
typedef struct ParsedFrame ParsedFrame;


/* --- enums --- */


/* --- messages --- */

struct  Robot
{
  ProtobufCMessage base;
  uint32_t robot_id;
  Vector3D *pos;
  Vector3D *vel;
};
#define ROBOT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&robot__descriptor) \
    , 0, NULL, NULL }


struct  Ball
{
  ProtobufCMessage base;
  Vector2D *pos;
  Vector2D *vel;
};
#define BALL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ball__descriptor) \
    , NULL, NULL }


struct  ParsedFrame
{
  ProtobufCMessage base;
  size_t n_robots;
  Robot **robots;
  Ball *ball;
};
#define PARSED_FRAME__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&parsed_frame__descriptor) \
    , 0,NULL, NULL }


/* Robot methods */
void   robot__init
                     (Robot         *message);
size_t robot__get_packed_size
                     (const Robot   *message);
size_t robot__pack
                     (const Robot   *message,
                      uint8_t             *out);
size_t robot__pack_to_buffer
                     (const Robot   *message,
                      ProtobufCBuffer     *buffer);
Robot *
       robot__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   robot__free_unpacked
                     (Robot *message,
                      ProtobufCAllocator *allocator);
/* Ball methods */
void   ball__init
                     (Ball         *message);
size_t ball__get_packed_size
                     (const Ball   *message);
size_t ball__pack
                     (const Ball   *message,
                      uint8_t             *out);
size_t ball__pack_to_buffer
                     (const Ball   *message,
                      ProtobufCBuffer     *buffer);
Ball *
       ball__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ball__free_unpacked
                     (Ball *message,
                      ProtobufCAllocator *allocator);
/* ParsedFrame methods */
void   parsed_frame__init
                     (ParsedFrame         *message);
size_t parsed_frame__get_packed_size
                     (const ParsedFrame   *message);
size_t parsed_frame__pack
                     (const ParsedFrame   *message,
                      uint8_t             *out);
size_t parsed_frame__pack_to_buffer
                     (const ParsedFrame   *message,
                      ProtobufCBuffer     *buffer);
ParsedFrame *
       parsed_frame__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   parsed_frame__free_unpacked
                     (ParsedFrame *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Robot_Closure)
                 (const Robot *message,
                  void *closure_data);
typedef void (*Ball_Closure)
                 (const Ball *message,
                  void *closure_data);
typedef void (*ParsedFrame_Closure)
                 (const ParsedFrame *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor robot__descriptor;
extern const ProtobufCMessageDescriptor ball__descriptor;
extern const ProtobufCMessageDescriptor parsed_frame__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_parsed_5fvision_2eproto__INCLUDED */
