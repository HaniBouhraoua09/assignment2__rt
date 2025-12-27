// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from assignment2_custom_msg:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

#include "assignment2_custom_msg/msg/detail/obstacle_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_assignment2_custom_msg
const rosidl_type_hash_t *
assignment2_custom_msg__msg__ObstacleInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x97, 0x32, 0xdc, 0xef, 0xa8, 0x49, 0x38, 0x82,
      0x61, 0x56, 0x25, 0x40, 0xd2, 0xc6, 0xb0, 0x2b,
      0x65, 0xda, 0xc0, 0x1f, 0xe3, 0xc5, 0x5f, 0xdb,
      0x5b, 0x33, 0x62, 0x70, 0x1d, 0xfe, 0xa1, 0xf3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char assignment2_custom_msg__msg__ObstacleInfo__TYPE_NAME[] = "assignment2_custom_msg/msg/ObstacleInfo";

// Define type names, field names, and default values
static char assignment2_custom_msg__msg__ObstacleInfo__FIELD_NAME__distance[] = "distance";
static char assignment2_custom_msg__msg__ObstacleInfo__FIELD_NAME__direction[] = "direction";
static char assignment2_custom_msg__msg__ObstacleInfo__FIELD_NAME__threshold[] = "threshold";

static rosidl_runtime_c__type_description__Field assignment2_custom_msg__msg__ObstacleInfo__FIELDS[] = {
  {
    {assignment2_custom_msg__msg__ObstacleInfo__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msg__msg__ObstacleInfo__FIELD_NAME__direction, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msg__msg__ObstacleInfo__FIELD_NAME__threshold, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
assignment2_custom_msg__msg__ObstacleInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {assignment2_custom_msg__msg__ObstacleInfo__TYPE_NAME, 39, 39},
      {assignment2_custom_msg__msg__ObstacleInfo__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 distance\n"
  "string direction\n"
  "float32 threshold\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
assignment2_custom_msg__msg__ObstacleInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {assignment2_custom_msg__msg__ObstacleInfo__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 53, 53},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
assignment2_custom_msg__msg__ObstacleInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *assignment2_custom_msg__msg__ObstacleInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
