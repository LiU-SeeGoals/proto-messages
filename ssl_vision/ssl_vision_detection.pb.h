/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.9-dev */

#ifndef PB_SSL_VISION_DETECTION_PB_H_INCLUDED
#define PB_SSL_VISION_DETECTION_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _SSL_DetectionBall {
    /* Confidence in [0-1] of the detection */
    float confidence;
    bool has_area;
    uint32_t area;
    /* X-coordinate in [mm] in global ssl-vision coordinate system */
    float x;
    /* Y-coordinate in [mm] in global ssl-vision coordinate system */
    float y;
    /* Z-coordinate in [mm] in global ssl-vision coordinate system
 Not supported by ssl-vision, but might be set by simulators */
    bool has_z;
    float z;
    /* X-coordinate in [pixel] in the image */
    float pixel_x;
    /* Y-coordinate in [pixel] in the image */
    float pixel_y;
} SSL_DetectionBall;

typedef struct _SSL_DetectionRobot {
    /* Confidence in [0-1] of the detection */
    float confidence;
    /* Id of the robot */
    bool has_robot_id;
    uint32_t robot_id;
    /* X-coordinate in [mm] in global ssl-vision coordinate system */
    float x;
    /* Y-coordinate in [mm] in global ssl-vision coordinate system */
    float y;
    /* Orientation in [rad] */
    bool has_orientation;
    float orientation;
    /* X-coordinate in [pixel] in the image */
    float pixel_x;
    /* Y-coordinate in [pixel] in the image */
    float pixel_y;
    /* Height, as configured in ssl-vision for the respective team */
    bool has_height;
    float height;
} SSL_DetectionRobot;

typedef struct _SSL_DetectionFrame {
    /* monotonously increasing frame number */
    uint32_t frame_number;
    /* Unix timestamp in [seconds] at which the image has been received by
 ssl-vision */
    double t_capture;
    /* Unix timestamp in [seconds] at which this message has been sent to the
 network */
    double t_sent;
    /* Identifier of the camera */
    uint32_t camera_id;
    /* Detected balls */
    pb_callback_t balls;
    /* Detected yellow robots */
    pb_callback_t robots_yellow;
    /* Detected blue robots */
    pb_callback_t robots_blue;
    /* Camera timestamp in [seconds] as reported by the camera, if supported
 This is not necessarily a unix timestamp */
    bool has_t_capture_camera;
    double t_capture_camera;
} SSL_DetectionFrame;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define SSL_DetectionBall_init_default           {0, false, 0, 0, 0, false, 0, 0, 0}
#define SSL_DetectionRobot_init_default          {0, false, 0, 0, 0, false, 0, 0, 0, false, 0}
#define SSL_DetectionFrame_init_default          {0, 0, 0, 0, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, false, 0}
#define SSL_DetectionBall_init_zero              {0, false, 0, 0, 0, false, 0, 0, 0}
#define SSL_DetectionRobot_init_zero             {0, false, 0, 0, 0, false, 0, 0, 0, false, 0}
#define SSL_DetectionFrame_init_zero             {0, 0, 0, 0, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define SSL_DetectionBall_confidence_tag         1
#define SSL_DetectionBall_area_tag               2
#define SSL_DetectionBall_x_tag                  3
#define SSL_DetectionBall_y_tag                  4
#define SSL_DetectionBall_z_tag                  5
#define SSL_DetectionBall_pixel_x_tag            6
#define SSL_DetectionBall_pixel_y_tag            7
#define SSL_DetectionRobot_confidence_tag        1
#define SSL_DetectionRobot_robot_id_tag          2
#define SSL_DetectionRobot_x_tag                 3
#define SSL_DetectionRobot_y_tag                 4
#define SSL_DetectionRobot_orientation_tag       5
#define SSL_DetectionRobot_pixel_x_tag           6
#define SSL_DetectionRobot_pixel_y_tag           7
#define SSL_DetectionRobot_height_tag            8
#define SSL_DetectionFrame_frame_number_tag      1
#define SSL_DetectionFrame_t_capture_tag         2
#define SSL_DetectionFrame_t_sent_tag            3
#define SSL_DetectionFrame_camera_id_tag         4
#define SSL_DetectionFrame_balls_tag             5
#define SSL_DetectionFrame_robots_yellow_tag     6
#define SSL_DetectionFrame_robots_blue_tag       7
#define SSL_DetectionFrame_t_capture_camera_tag  8

/* Struct field encoding specification for nanopb */
#define SSL_DetectionBall_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, FLOAT,    confidence,        1) \
X(a, STATIC,   OPTIONAL, UINT32,   area,              2) \
X(a, STATIC,   REQUIRED, FLOAT,    x,                 3) \
X(a, STATIC,   REQUIRED, FLOAT,    y,                 4) \
X(a, STATIC,   OPTIONAL, FLOAT,    z,                 5) \
X(a, STATIC,   REQUIRED, FLOAT,    pixel_x,           6) \
X(a, STATIC,   REQUIRED, FLOAT,    pixel_y,           7)
#define SSL_DetectionBall_CALLBACK NULL
#define SSL_DetectionBall_DEFAULT NULL

#define SSL_DetectionRobot_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, FLOAT,    confidence,        1) \
X(a, STATIC,   OPTIONAL, UINT32,   robot_id,          2) \
X(a, STATIC,   REQUIRED, FLOAT,    x,                 3) \
X(a, STATIC,   REQUIRED, FLOAT,    y,                 4) \
X(a, STATIC,   OPTIONAL, FLOAT,    orientation,       5) \
X(a, STATIC,   REQUIRED, FLOAT,    pixel_x,           6) \
X(a, STATIC,   REQUIRED, FLOAT,    pixel_y,           7) \
X(a, STATIC,   OPTIONAL, FLOAT,    height,            8)
#define SSL_DetectionRobot_CALLBACK NULL
#define SSL_DetectionRobot_DEFAULT NULL

#define SSL_DetectionFrame_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UINT32,   frame_number,      1) \
X(a, STATIC,   REQUIRED, DOUBLE,   t_capture,         2) \
X(a, STATIC,   REQUIRED, DOUBLE,   t_sent,            3) \
X(a, STATIC,   REQUIRED, UINT32,   camera_id,         4) \
X(a, CALLBACK, REPEATED, MESSAGE,  balls,             5) \
X(a, CALLBACK, REPEATED, MESSAGE,  robots_yellow,     6) \
X(a, CALLBACK, REPEATED, MESSAGE,  robots_blue,       7) \
X(a, STATIC,   OPTIONAL, DOUBLE,   t_capture_camera,   8)
#define SSL_DetectionFrame_CALLBACK pb_default_field_callback
#define SSL_DetectionFrame_DEFAULT NULL
#define SSL_DetectionFrame_balls_MSGTYPE SSL_DetectionBall
#define SSL_DetectionFrame_robots_yellow_MSGTYPE SSL_DetectionRobot
#define SSL_DetectionFrame_robots_blue_MSGTYPE SSL_DetectionRobot

extern const pb_msgdesc_t SSL_DetectionBall_msg;
extern const pb_msgdesc_t SSL_DetectionRobot_msg;
extern const pb_msgdesc_t SSL_DetectionFrame_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define SSL_DetectionBall_fields &SSL_DetectionBall_msg
#define SSL_DetectionRobot_fields &SSL_DetectionRobot_msg
#define SSL_DetectionFrame_fields &SSL_DetectionFrame_msg

/* Maximum encoded size of messages (where known) */
/* SSL_DetectionFrame_size depends on runtime parameters */
#define SSL_DetectionBall_size                   36
#define SSL_DetectionRobot_size                  41
#define SSL_VISION_DETECTION_PB_H_MAX_SIZE       SSL_DetectionRobot_size

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
