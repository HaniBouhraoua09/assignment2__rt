// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from assignment2_custom_msg:srv/GetLastVelocity.idl
// generated code does not contain a copyright notice

#include "assignment2_custom_msg/srv/detail/get_last_velocity__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_assignment2_custom_msg
const rosidl_type_hash_t *
assignment2_custom_msg__srv__GetLastVelocity__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x17, 0x53, 0xe7, 0x0d, 0x90, 0x59, 0xd9, 0xe3,
      0xe0, 0xf8, 0x22, 0xb7, 0x41, 0x68, 0xd8, 0xbd,
      0x53, 0xda, 0x01, 0xad, 0x1a, 0x62, 0xbe, 0xc8,
      0x50, 0xe3, 0x94, 0x79, 0xa3, 0x12, 0xbb, 0xad,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_assignment2_custom_msg
const rosidl_type_hash_t *
assignment2_custom_msg__srv__GetLastVelocity_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x57, 0xff, 0xe2, 0x7d, 0x47, 0x04, 0x92, 0xa7,
      0xee, 0xce, 0x58, 0x16, 0xb0, 0x75, 0x93, 0xa8,
      0x35, 0x36, 0x77, 0x90, 0x89, 0x9c, 0xdf, 0xa2,
      0x26, 0x11, 0x21, 0x38, 0x1b, 0xd9, 0x1f, 0x48,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_assignment2_custom_msg
const rosidl_type_hash_t *
assignment2_custom_msg__srv__GetLastVelocity_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe9, 0xd1, 0x79, 0xa6, 0xe2, 0xff, 0x78, 0xb5,
      0x11, 0xee, 0x31, 0x77, 0xd8, 0x08, 0x50, 0xb6,
      0x48, 0x6e, 0xb6, 0xf5, 0xb5, 0x8d, 0xd7, 0x43,
      0x2a, 0x9d, 0x50, 0xc9, 0x2a, 0x2a, 0x52, 0x45,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_assignment2_custom_msg
const rosidl_type_hash_t *
assignment2_custom_msg__srv__GetLastVelocity_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7d, 0x6b, 0x2d, 0x36, 0xce, 0x5f, 0x48, 0x46,
      0x02, 0x9a, 0xb7, 0xdf, 0xc3, 0xf6, 0xf8, 0x2c,
      0xdc, 0x20, 0xb7, 0x1e, 0xaa, 0x76, 0x30, 0x84,
      0xaf, 0x18, 0xec, 0x80, 0x66, 0x16, 0x7f, 0x76,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char assignment2_custom_msg__srv__GetLastVelocity__TYPE_NAME[] = "assignment2_custom_msg/srv/GetLastVelocity";
static char assignment2_custom_msg__srv__GetLastVelocity_Event__TYPE_NAME[] = "assignment2_custom_msg/srv/GetLastVelocity_Event";
static char assignment2_custom_msg__srv__GetLastVelocity_Request__TYPE_NAME[] = "assignment2_custom_msg/srv/GetLastVelocity_Request";
static char assignment2_custom_msg__srv__GetLastVelocity_Response__TYPE_NAME[] = "assignment2_custom_msg/srv/GetLastVelocity_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char assignment2_custom_msg__srv__GetLastVelocity__FIELD_NAME__request_message[] = "request_message";
static char assignment2_custom_msg__srv__GetLastVelocity__FIELD_NAME__response_message[] = "response_message";
static char assignment2_custom_msg__srv__GetLastVelocity__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field assignment2_custom_msg__srv__GetLastVelocity__FIELDS[] = {
  {
    {assignment2_custom_msg__srv__GetLastVelocity__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {assignment2_custom_msg__srv__GetLastVelocity_Request__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msg__srv__GetLastVelocity__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {assignment2_custom_msg__srv__GetLastVelocity_Response__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msg__srv__GetLastVelocity__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {assignment2_custom_msg__srv__GetLastVelocity_Event__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription assignment2_custom_msg__srv__GetLastVelocity__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {assignment2_custom_msg__srv__GetLastVelocity_Event__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msg__srv__GetLastVelocity_Request__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msg__srv__GetLastVelocity_Response__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
assignment2_custom_msg__srv__GetLastVelocity__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {assignment2_custom_msg__srv__GetLastVelocity__TYPE_NAME, 42, 42},
      {assignment2_custom_msg__srv__GetLastVelocity__FIELDS, 3, 3},
    },
    {assignment2_custom_msg__srv__GetLastVelocity__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = assignment2_custom_msg__srv__GetLastVelocity_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = assignment2_custom_msg__srv__GetLastVelocity_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = assignment2_custom_msg__srv__GetLastVelocity_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char assignment2_custom_msg__srv__GetLastVelocity_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field assignment2_custom_msg__srv__GetLastVelocity_Request__FIELDS[] = {
  {
    {assignment2_custom_msg__srv__GetLastVelocity_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
assignment2_custom_msg__srv__GetLastVelocity_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {assignment2_custom_msg__srv__GetLastVelocity_Request__TYPE_NAME, 50, 50},
      {assignment2_custom_msg__srv__GetLastVelocity_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char assignment2_custom_msg__srv__GetLastVelocity_Response__FIELD_NAME__avg_linear[] = "avg_linear";
static char assignment2_custom_msg__srv__GetLastVelocity_Response__FIELD_NAME__avg_angular[] = "avg_angular";

static rosidl_runtime_c__type_description__Field assignment2_custom_msg__srv__GetLastVelocity_Response__FIELDS[] = {
  {
    {assignment2_custom_msg__srv__GetLastVelocity_Response__FIELD_NAME__avg_linear, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msg__srv__GetLastVelocity_Response__FIELD_NAME__avg_angular, 11, 11},
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
assignment2_custom_msg__srv__GetLastVelocity_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {assignment2_custom_msg__srv__GetLastVelocity_Response__TYPE_NAME, 51, 51},
      {assignment2_custom_msg__srv__GetLastVelocity_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char assignment2_custom_msg__srv__GetLastVelocity_Event__FIELD_NAME__info[] = "info";
static char assignment2_custom_msg__srv__GetLastVelocity_Event__FIELD_NAME__request[] = "request";
static char assignment2_custom_msg__srv__GetLastVelocity_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field assignment2_custom_msg__srv__GetLastVelocity_Event__FIELDS[] = {
  {
    {assignment2_custom_msg__srv__GetLastVelocity_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msg__srv__GetLastVelocity_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {assignment2_custom_msg__srv__GetLastVelocity_Request__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msg__srv__GetLastVelocity_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {assignment2_custom_msg__srv__GetLastVelocity_Response__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription assignment2_custom_msg__srv__GetLastVelocity_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {assignment2_custom_msg__srv__GetLastVelocity_Request__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {assignment2_custom_msg__srv__GetLastVelocity_Response__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
assignment2_custom_msg__srv__GetLastVelocity_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {assignment2_custom_msg__srv__GetLastVelocity_Event__TYPE_NAME, 48, 48},
      {assignment2_custom_msg__srv__GetLastVelocity_Event__FIELDS, 3, 3},
    },
    {assignment2_custom_msg__srv__GetLastVelocity_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = assignment2_custom_msg__srv__GetLastVelocity_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = assignment2_custom_msg__srv__GetLastVelocity_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "float32 avg_linear\n"
  "float32 avg_angular";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
assignment2_custom_msg__srv__GetLastVelocity__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {assignment2_custom_msg__srv__GetLastVelocity__TYPE_NAME, 42, 42},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 43, 43},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
assignment2_custom_msg__srv__GetLastVelocity_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {assignment2_custom_msg__srv__GetLastVelocity_Request__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
assignment2_custom_msg__srv__GetLastVelocity_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {assignment2_custom_msg__srv__GetLastVelocity_Response__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
assignment2_custom_msg__srv__GetLastVelocity_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {assignment2_custom_msg__srv__GetLastVelocity_Event__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
assignment2_custom_msg__srv__GetLastVelocity__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *assignment2_custom_msg__srv__GetLastVelocity__get_individual_type_description_source(NULL),
    sources[1] = *assignment2_custom_msg__srv__GetLastVelocity_Event__get_individual_type_description_source(NULL);
    sources[2] = *assignment2_custom_msg__srv__GetLastVelocity_Request__get_individual_type_description_source(NULL);
    sources[3] = *assignment2_custom_msg__srv__GetLastVelocity_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
assignment2_custom_msg__srv__GetLastVelocity_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *assignment2_custom_msg__srv__GetLastVelocity_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
assignment2_custom_msg__srv__GetLastVelocity_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *assignment2_custom_msg__srv__GetLastVelocity_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
assignment2_custom_msg__srv__GetLastVelocity_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *assignment2_custom_msg__srv__GetLastVelocity_Event__get_individual_type_description_source(NULL),
    sources[1] = *assignment2_custom_msg__srv__GetLastVelocity_Request__get_individual_type_description_source(NULL);
    sources[2] = *assignment2_custom_msg__srv__GetLastVelocity_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
