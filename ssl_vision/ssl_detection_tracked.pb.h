/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.9-dev */

#ifndef PB_SSL_DETECTION_TRACKED_PB_H_INCLUDED
#define PB_SSL_DETECTION_TRACKED_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
/* The team color of the robot */
typedef enum _TeamColor {
    /* team not set */
    TeamColor_TEAM_COLOR_UNKNOWN = 0,
    /* yellow team */
    TeamColor_TEAM_COLOR_YELLOW = 1,
    /* blue team */
    TeamColor_TEAM_COLOR_BLUE = 2
} TeamColor;

/* Capabilities that a source implementation can have */
typedef enum _Capability {
    Capability_CAPABILITY_UNKNOWN = 0,
    Capability_CAPABILITY_DETECT_FLYING_BALLS = 1,
    Capability_CAPABILITY_DETECT_MULTIPLE_BALLS = 2,
    Capability_CAPABILITY_DETECT_KICKED_BALLS = 3
} Capability;

/* Struct definitions */
/* A vector with two dimensions */
typedef struct _Vector2 {
    float x;
    float y;
} Vector2;

/* A vector with three dimensions */
typedef struct _Vector3 {
    float x;
    float y;
    float z;
} Vector3;

/* A unique robot id with team information */
typedef struct _RobotId {
    /* The robot number */
    uint32_t id;
    /* The team color */
    TeamColor team_color;
} RobotId;

/* A single tracked ball */
typedef struct _TrackedBall {
    /* The position (x, y, height) [m] in the ssl-vision coordinate system */
    Vector3 pos;
    /* The velocity [m/s] in the ssl-vision coordinate system */
    bool has_vel;
    Vector3 vel;
    /* The visibility of the ball
 A value between 0 (not visible) and 1 (visible)
 The exact implementation depends on the source software */
    bool has_visibility;
    float visibility;
} TrackedBall;

/* A ball kicked by a robot, including predictions when the ball will come to a
 stop */
typedef struct _KickedBall {
    /* The initial position [m] from which the ball was kicked */
    Vector2 pos;
    /* The initial velocity [m/s] with which the ball was kicked */
    Vector3 vel;
    /* The unix timestamp [s] when the kick was performed */
    double start_timestamp;
    /* The predicted unix timestamp [s] when the ball comes to a stop */
    bool has_stop_timestamp;
    double stop_timestamp;
    /* The predicted position [m] at which the ball will come to a stop */
    bool has_stop_pos;
    Vector2 stop_pos;
    /* The robot that kicked the ball */
    bool has_robot_id;
    RobotId robot_id;
} KickedBall;

/* A single tracked robot */
typedef struct _TrackedRobot {
    RobotId robot_id;
    /* The position [m] in the ssl-vision coordinate system */
    Vector2 pos;
    /* The orientation [rad] in the ssl-vision coordinate system */
    float orientation;
    /* The velocity [m/s] in the ssl-vision coordinate system */
    bool has_vel;
    Vector2 vel;
    /* The angular velocity [rad/s] in the ssl-vision coordinate system */
    bool has_vel_angular;
    float vel_angular;
    /* The visibility of the robot
 A value between 0 (not visible) and 1 (visible)
 The exact implementation depends on the source software */
    bool has_visibility;
    float visibility;
} TrackedRobot;

/* A frame that contains all currently tracked objects on the field on all
 cameras */
typedef struct _TrackedFrame {
    /* A monotonous increasing frame counter */
    uint32_t frame_number;
    /* The unix timestamp in [s] of the data */
    double timestamp;
    /* The list of detected balls
 The first ball is the primary one
 Sources may add additional balls based on their capabilities */
    pb_callback_t balls;
    /* The list of detected robots of both teams */
    pb_callback_t robots;
    /* Information about a kicked ball, if the ball was kicked by a robot and is
 still moving Note: This field is optional. Some source implementations
 might not set this at any time */
    bool has_kicked_ball;
    KickedBall kicked_ball;
    /* List of capabilities of the source implementation */
    pb_callback_t capabilities;
} TrackedFrame;


#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _TeamColor_MIN TeamColor_TEAM_COLOR_UNKNOWN
#define _TeamColor_MAX TeamColor_TEAM_COLOR_BLUE
#define _TeamColor_ARRAYSIZE ((TeamColor)(TeamColor_TEAM_COLOR_BLUE+1))

#define _Capability_MIN Capability_CAPABILITY_UNKNOWN
#define _Capability_MAX Capability_CAPABILITY_DETECT_KICKED_BALLS
#define _Capability_ARRAYSIZE ((Capability)(Capability_CAPABILITY_DETECT_KICKED_BALLS+1))



#define RobotId_team_color_ENUMTYPE TeamColor




#define TrackedFrame_capabilities_ENUMTYPE Capability


/* Initializer values for message structs */
#define Vector2_init_default                     {0, 0}
#define Vector3_init_default                     {0, 0, 0}
#define RobotId_init_default                     {0, _TeamColor_MIN}
#define TrackedBall_init_default                 {Vector3_init_default, false, Vector3_init_default, false, 0}
#define KickedBall_init_default                  {Vector2_init_default, Vector3_init_default, 0, false, 0, false, Vector2_init_default, false, RobotId_init_default}
#define TrackedRobot_init_default                {RobotId_init_default, Vector2_init_default, 0, false, Vector2_init_default, false, 0, false, 0}
#define TrackedFrame_init_default                {0, 0, {{NULL}, NULL}, {{NULL}, NULL}, false, KickedBall_init_default, {{NULL}, NULL}}
#define Vector2_init_zero                        {0, 0}
#define Vector3_init_zero                        {0, 0, 0}
#define RobotId_init_zero                        {0, _TeamColor_MIN}
#define TrackedBall_init_zero                    {Vector3_init_zero, false, Vector3_init_zero, false, 0}
#define KickedBall_init_zero                     {Vector2_init_zero, Vector3_init_zero, 0, false, 0, false, Vector2_init_zero, false, RobotId_init_zero}
#define TrackedRobot_init_zero                   {RobotId_init_zero, Vector2_init_zero, 0, false, Vector2_init_zero, false, 0, false, 0}
#define TrackedFrame_init_zero                   {0, 0, {{NULL}, NULL}, {{NULL}, NULL}, false, KickedBall_init_zero, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define Vector2_x_tag                            1
#define Vector2_y_tag                            2
#define Vector3_x_tag                            1
#define Vector3_y_tag                            2
#define Vector3_z_tag                            3
#define RobotId_id_tag                           1
#define RobotId_team_color_tag                   2
#define TrackedBall_pos_tag                      1
#define TrackedBall_vel_tag                      2
#define TrackedBall_visibility_tag               3
#define KickedBall_pos_tag                       1
#define KickedBall_vel_tag                       2
#define KickedBall_start_timestamp_tag           3
#define KickedBall_stop_timestamp_tag            4
#define KickedBall_stop_pos_tag                  5
#define KickedBall_robot_id_tag                  6
#define TrackedRobot_robot_id_tag                1
#define TrackedRobot_pos_tag                     2
#define TrackedRobot_orientation_tag             3
#define TrackedRobot_vel_tag                     4
#define TrackedRobot_vel_angular_tag             5
#define TrackedRobot_visibility_tag              6
#define TrackedFrame_frame_number_tag            1
#define TrackedFrame_timestamp_tag               2
#define TrackedFrame_balls_tag                   3
#define TrackedFrame_robots_tag                  4
#define TrackedFrame_kicked_ball_tag             5
#define TrackedFrame_capabilities_tag            6

/* Struct field encoding specification for nanopb */
#define Vector2_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, FLOAT,    x,                 1) \
X(a, STATIC,   REQUIRED, FLOAT,    y,                 2)
#define Vector2_CALLBACK NULL
#define Vector2_DEFAULT NULL

#define Vector3_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, FLOAT,    x,                 1) \
X(a, STATIC,   REQUIRED, FLOAT,    y,                 2) \
X(a, STATIC,   REQUIRED, FLOAT,    z,                 3)
#define Vector3_CALLBACK NULL
#define Vector3_DEFAULT NULL

#define RobotId_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UINT32,   id,                1) \
X(a, STATIC,   REQUIRED, UENUM,    team_color,        2)
#define RobotId_CALLBACK NULL
#define RobotId_DEFAULT NULL

#define TrackedBall_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, MESSAGE,  pos,               1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  vel,               2) \
X(a, STATIC,   OPTIONAL, FLOAT,    visibility,        3)
#define TrackedBall_CALLBACK NULL
#define TrackedBall_DEFAULT NULL
#define TrackedBall_pos_MSGTYPE Vector3
#define TrackedBall_vel_MSGTYPE Vector3

#define KickedBall_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, MESSAGE,  pos,               1) \
X(a, STATIC,   REQUIRED, MESSAGE,  vel,               2) \
X(a, STATIC,   REQUIRED, DOUBLE,   start_timestamp,   3) \
X(a, STATIC,   OPTIONAL, DOUBLE,   stop_timestamp,    4) \
X(a, STATIC,   OPTIONAL, MESSAGE,  stop_pos,          5) \
X(a, STATIC,   OPTIONAL, MESSAGE,  robot_id,          6)
#define KickedBall_CALLBACK NULL
#define KickedBall_DEFAULT NULL
#define KickedBall_pos_MSGTYPE Vector2
#define KickedBall_vel_MSGTYPE Vector3
#define KickedBall_stop_pos_MSGTYPE Vector2
#define KickedBall_robot_id_MSGTYPE RobotId

#define TrackedRobot_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, MESSAGE,  robot_id,          1) \
X(a, STATIC,   REQUIRED, MESSAGE,  pos,               2) \
X(a, STATIC,   REQUIRED, FLOAT,    orientation,       3) \
X(a, STATIC,   OPTIONAL, MESSAGE,  vel,               4) \
X(a, STATIC,   OPTIONAL, FLOAT,    vel_angular,       5) \
X(a, STATIC,   OPTIONAL, FLOAT,    visibility,        6)
#define TrackedRobot_CALLBACK NULL
#define TrackedRobot_DEFAULT NULL
#define TrackedRobot_robot_id_MSGTYPE RobotId
#define TrackedRobot_pos_MSGTYPE Vector2
#define TrackedRobot_vel_MSGTYPE Vector2

#define TrackedFrame_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UINT32,   frame_number,      1) \
X(a, STATIC,   REQUIRED, DOUBLE,   timestamp,         2) \
X(a, CALLBACK, REPEATED, MESSAGE,  balls,             3) \
X(a, CALLBACK, REPEATED, MESSAGE,  robots,            4) \
X(a, STATIC,   OPTIONAL, MESSAGE,  kicked_ball,       5) \
X(a, CALLBACK, REPEATED, UENUM,    capabilities,      6)
#define TrackedFrame_CALLBACK pb_default_field_callback
#define TrackedFrame_DEFAULT NULL
#define TrackedFrame_balls_MSGTYPE TrackedBall
#define TrackedFrame_robots_MSGTYPE TrackedRobot
#define TrackedFrame_kicked_ball_MSGTYPE KickedBall

extern const pb_msgdesc_t Vector2_msg;
extern const pb_msgdesc_t Vector3_msg;
extern const pb_msgdesc_t RobotId_msg;
extern const pb_msgdesc_t TrackedBall_msg;
extern const pb_msgdesc_t KickedBall_msg;
extern const pb_msgdesc_t TrackedRobot_msg;
extern const pb_msgdesc_t TrackedFrame_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define Vector2_fields &Vector2_msg
#define Vector3_fields &Vector3_msg
#define RobotId_fields &RobotId_msg
#define TrackedBall_fields &TrackedBall_msg
#define KickedBall_fields &KickedBall_msg
#define TrackedRobot_fields &TrackedRobot_msg
#define TrackedFrame_fields &TrackedFrame_msg

/* Maximum encoded size of messages (where known) */
/* TrackedFrame_size depends on runtime parameters */
#define KickedBall_size                          69
#define RobotId_size                             8
#define SSL_DETECTION_TRACKED_PB_H_MAX_SIZE      KickedBall_size
#define TrackedBall_size                         39
#define TrackedRobot_size                        49
#define Vector2_size                             10
#define Vector3_size                             15

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
