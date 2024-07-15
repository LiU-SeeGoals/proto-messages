/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: robot_action.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "robot_action.pb-c.h"
void   command__init
                     (Command         *message)
{
  static const Command init_value = COMMAND__INIT;
  *message = init_value;
}
size_t command__get_packed_size
                     (const Command *message)
{
  assert(message->base.descriptor == &command__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t command__pack
                     (const Command *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &command__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t command__pack_to_buffer
                     (const Command *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &command__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Command *
       command__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Command *)
     protobuf_c_message_unpack (&command__descriptor,
                                allocator, len, data);
}
void   command__free_unpacked
                     (Command *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &command__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   vector3_d__init
                     (Vector3D         *message)
{
  static const Vector3D init_value = VECTOR3_D__INIT;
  *message = init_value;
}
size_t vector3_d__get_packed_size
                     (const Vector3D *message)
{
  assert(message->base.descriptor == &vector3_d__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t vector3_d__pack
                     (const Vector3D *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &vector3_d__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t vector3_d__pack_to_buffer
                     (const Vector3D *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &vector3_d__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Vector3D *
       vector3_d__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Vector3D *)
     protobuf_c_message_unpack (&vector3_d__descriptor,
                                allocator, len, data);
}
void   vector3_d__free_unpacked
                     (Vector3D *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &vector3_d__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   vector2_d__init
                     (Vector2D         *message)
{
  static const Vector2D init_value = VECTOR2_D__INIT;
  *message = init_value;
}
size_t vector2_d__get_packed_size
                     (const Vector2D *message)
{
  assert(message->base.descriptor == &vector2_d__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t vector2_d__pack
                     (const Vector2D *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &vector2_d__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t vector2_d__pack_to_buffer
                     (const Vector2D *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &vector2_d__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Vector2D *
       vector2_d__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Vector2D *)
     protobuf_c_message_unpack (&vector2_d__descriptor,
                                allocator, len, data);
}
void   vector2_d__free_unpacked
                     (Vector2D *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &vector2_d__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor command__field_descriptors[7] =
{
  {
    "command_id",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Command, command_id),
    &action_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "robot_id",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Command, robot_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "kick_speed",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Command, kick_speed),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pos",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Command, pos),
    &vector3_d__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dest",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Command, dest),
    &vector3_d__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "direction",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Command, direction),
    &vector2_d__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "angular_vel",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Command, angular_vel),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned command__field_indices_by_name[] = {
  6,   /* field[6] = angular_vel */
  0,   /* field[0] = command_id */
  4,   /* field[4] = dest */
  5,   /* field[5] = direction */
  2,   /* field[2] = kick_speed */
  3,   /* field[3] = pos */
  1,   /* field[1] = robot_id */
};
static const ProtobufCIntRange command__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 7 }
};
const ProtobufCMessageDescriptor command__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Command",
  "Command",
  "Command",
  "",
  sizeof(Command),
  7,
  command__field_descriptors,
  command__field_indices_by_name,
  1,  command__number_ranges,
  (ProtobufCMessageInit) command__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor vector3_d__field_descriptors[3] =
{
  {
    "x",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Vector3D, x),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "y",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Vector3D, y),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "w",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_FLOAT,
    0,   /* quantifier_offset */
    offsetof(Vector3D, w),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned vector3_d__field_indices_by_name[] = {
  2,   /* field[2] = w */
  0,   /* field[0] = x */
  1,   /* field[1] = y */
};
static const ProtobufCIntRange vector3_d__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor vector3_d__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Vector3D",
  "Vector3D",
  "Vector3D",
  "",
  sizeof(Vector3D),
  3,
  vector3_d__field_descriptors,
  vector3_d__field_indices_by_name,
  1,  vector3_d__number_ranges,
  (ProtobufCMessageInit) vector3_d__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor vector2_d__field_descriptors[2] =
{
  {
    "x",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Vector2D, x),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "y",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Vector2D, y),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned vector2_d__field_indices_by_name[] = {
  0,   /* field[0] = x */
  1,   /* field[1] = y */
};
static const ProtobufCIntRange vector2_d__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor vector2_d__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Vector2D",
  "Vector2D",
  "Vector2D",
  "",
  sizeof(Vector2D),
  2,
  vector2_d__field_descriptors,
  vector2_d__field_indices_by_name,
  1,  vector2_d__number_ranges,
  (ProtobufCMessageInit) vector2_d__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue action_type__enum_values_by_number[7] =
{
  { "KICK_ACTION", "ACTION_TYPE__KICK_ACTION", 0 },
  { "STOP_ACTION", "ACTION_TYPE__STOP_ACTION", 1 },
  { "MOVE_TO_ACTION", "ACTION_TYPE__MOVE_TO_ACTION", 2 },
  { "INIT_ACTION", "ACTION_TYPE__INIT_ACTION", 3 },
  { "MOVE_ACTION", "ACTION_TYPE__MOVE_ACTION", 4 },
  { "ROTATE_ACTION", "ACTION_TYPE__ROTATE_ACTION", 5 },
  { "PING", "ACTION_TYPE__PING", 6 },
};
static const ProtobufCIntRange action_type__value_ranges[] = {
{0, 0},{0, 7}
};
static const ProtobufCEnumValueIndex action_type__enum_values_by_name[7] =
{
  { "INIT_ACTION", 3 },
  { "KICK_ACTION", 0 },
  { "MOVE_ACTION", 4 },
  { "MOVE_TO_ACTION", 2 },
  { "PING", 6 },
  { "ROTATE_ACTION", 5 },
  { "STOP_ACTION", 1 },
};
const ProtobufCEnumDescriptor action_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "ActionType",
  "ActionType",
  "ActionType",
  "",
  7,
  action_type__enum_values_by_number,
  7,
  action_type__enum_values_by_name,
  1,
  action_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
