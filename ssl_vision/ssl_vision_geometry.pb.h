/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.9-dev */

#ifndef PB_SSL_VISION_GEOMETRY_PB_H_INCLUDED
#define PB_SSL_VISION_GEOMETRY_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _SSL_FieldShapeType {
    SSL_FieldShapeType_Undefined = 0,
    SSL_FieldShapeType_CenterCircle = 1,
    SSL_FieldShapeType_TopTouchLine = 2,
    SSL_FieldShapeType_BottomTouchLine = 3,
    SSL_FieldShapeType_LeftGoalLine = 4,
    SSL_FieldShapeType_RightGoalLine = 5,
    SSL_FieldShapeType_HalfwayLine = 6,
    SSL_FieldShapeType_CenterLine = 7,
    SSL_FieldShapeType_LeftPenaltyStretch = 8,
    SSL_FieldShapeType_RightPenaltyStretch = 9,
    SSL_FieldShapeType_LeftFieldLeftPenaltyStretch = 10,
    SSL_FieldShapeType_LeftFieldRightPenaltyStretch = 11,
    SSL_FieldShapeType_RightFieldLeftPenaltyStretch = 12,
    SSL_FieldShapeType_RightFieldRightPenaltyStretch = 13
} SSL_FieldShapeType;

/* Struct definitions */
/* A 2D float vector. */
typedef struct _Vector2f {
    float x;
    float y;
} Vector2f;

/* Represents a field marking as a line segment represented by a start point p1,
 and end point p2, and a line thickness. The start and end points are along
 the center of the line, so the thickness of the line extends by thickness / 2
 on either side of the line. */
typedef struct _SSL_FieldLineSegment {
    /* Name of this field marking. */
    pb_callback_t name;
    /* Start point of the line segment. */
    Vector2f p1;
    /* End point of the line segment. */
    Vector2f p2;
    /* Thickness of the line segment. */
    float thickness;
    /* The type of this shape */
    bool has_type;
    SSL_FieldShapeType type;
} SSL_FieldLineSegment;

/* Represents a field marking as a circular arc segment represented by center point, a
 start angle, an end angle, and an arc thickness. */
typedef struct _SSL_FieldCircularArc {
    /* Name of this field marking. */
    pb_callback_t name;
    /* Center point of the circular arc. */
    Vector2f center;
    /* Radius of the arc. */
    float radius;
    /* Start angle in counter-clockwise order. */
    float a1;
    /* End angle in counter-clockwise order. */
    float a2;
    /* Thickness of the arc. */
    float thickness;
    /* The type of this shape */
    bool has_type;
    SSL_FieldShapeType type;
} SSL_FieldCircularArc;

typedef struct _SSL_GeometryFieldSize {
    int32_t field_length;
    int32_t field_width;
    int32_t goal_width;
    int32_t goal_depth;
    int32_t boundary_width;
    pb_callback_t field_lines;
    pb_callback_t field_arcs;
    bool has_penalty_area_depth;
    int32_t penalty_area_depth;
    bool has_penalty_area_width;
    int32_t penalty_area_width;
} SSL_GeometryFieldSize;

typedef struct _SSL_GeometryCameraCalibration {
    uint32_t camera_id;
    float focal_length;
    float principal_point_x;
    float principal_point_y;
    float distortion;
    float q0;
    float q1;
    float q2;
    float q3;
    float tx;
    float ty;
    float tz;
    bool has_derived_camera_world_tx;
    float derived_camera_world_tx;
    bool has_derived_camera_world_ty;
    float derived_camera_world_ty;
    bool has_derived_camera_world_tz;
    float derived_camera_world_tz;
    bool has_pixel_image_width;
    uint32_t pixel_image_width;
    bool has_pixel_image_height;
    uint32_t pixel_image_height;
} SSL_GeometryCameraCalibration;

/* Two-Phase model for straight-kicked balls.
 There are two phases with different accelerations during the ball kicks:
 1. Sliding
 2. Rolling
 The full model is described in the TDP of ER-Force from 2016, which can be found here:
 https://ssl.robocup.org/wp-content/uploads/2019/01/2016_ETDP_ER-Force.pdf */
typedef struct _SSL_BallModelStraightTwoPhase {
    /* Ball sliding acceleration [m/s^2] (should be negative) */
    double acc_slide;
    /* Ball rolling acceleration [m/s^2] (should be negative) */
    double acc_roll;
    /* Fraction of the initial velocity where the ball starts to roll */
    double k_switch;
} SSL_BallModelStraightTwoPhase;

/* Fixed-Loss model for chipped balls.
 Uses fixed damping factors for xy and z direction per hop. */
typedef struct _SSL_BallModelChipFixedLoss {
    /* Chip kick velocity damping factor in XY direction for the first hop */
    double damping_xy_first_hop;
    /* Chip kick velocity damping factor in XY direction for all following hops */
    double damping_xy_other_hops;
    /* Chip kick velocity damping factor in Z direction for all hops */
    double damping_z;
} SSL_BallModelChipFixedLoss;

typedef struct _SSL_GeometryModels {
    bool has_straight_two_phase;
    SSL_BallModelStraightTwoPhase straight_two_phase;
    bool has_chip_fixed_loss;
    SSL_BallModelChipFixedLoss chip_fixed_loss;
} SSL_GeometryModels;

typedef struct _SSL_GeometryData {
    SSL_GeometryFieldSize field;
    pb_callback_t calib;
    bool has_models;
    SSL_GeometryModels models;
} SSL_GeometryData;


#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _SSL_FieldShapeType_MIN SSL_FieldShapeType_Undefined
#define _SSL_FieldShapeType_MAX SSL_FieldShapeType_RightFieldRightPenaltyStretch
#define _SSL_FieldShapeType_ARRAYSIZE ((SSL_FieldShapeType)(SSL_FieldShapeType_RightFieldRightPenaltyStretch+1))


#define SSL_FieldLineSegment_type_ENUMTYPE SSL_FieldShapeType

#define SSL_FieldCircularArc_type_ENUMTYPE SSL_FieldShapeType








/* Initializer values for message structs */
#define Vector2f_init_default                    {0, 0}
#define SSL_FieldLineSegment_init_default        {{{NULL}, NULL}, Vector2f_init_default, Vector2f_init_default, 0, false, _SSL_FieldShapeType_MIN}
#define SSL_FieldCircularArc_init_default        {{{NULL}, NULL}, Vector2f_init_default, 0, 0, 0, 0, false, _SSL_FieldShapeType_MIN}
#define SSL_GeometryFieldSize_init_default       {0, 0, 0, 0, 0, {{NULL}, NULL}, {{NULL}, NULL}, false, 0, false, 0}
#define SSL_GeometryCameraCalibration_init_default {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, false, 0, false, 0, false, 0, false, 0, false, 0}
#define SSL_BallModelStraightTwoPhase_init_default {0, 0, 0}
#define SSL_BallModelChipFixedLoss_init_default  {0, 0, 0}
#define SSL_GeometryModels_init_default          {false, SSL_BallModelStraightTwoPhase_init_default, false, SSL_BallModelChipFixedLoss_init_default}
#define SSL_GeometryData_init_default            {SSL_GeometryFieldSize_init_default, {{NULL}, NULL}, false, SSL_GeometryModels_init_default}
#define Vector2f_init_zero                       {0, 0}
#define SSL_FieldLineSegment_init_zero           {{{NULL}, NULL}, Vector2f_init_zero, Vector2f_init_zero, 0, false, _SSL_FieldShapeType_MIN}
#define SSL_FieldCircularArc_init_zero           {{{NULL}, NULL}, Vector2f_init_zero, 0, 0, 0, 0, false, _SSL_FieldShapeType_MIN}
#define SSL_GeometryFieldSize_init_zero          {0, 0, 0, 0, 0, {{NULL}, NULL}, {{NULL}, NULL}, false, 0, false, 0}
#define SSL_GeometryCameraCalibration_init_zero  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, false, 0, false, 0, false, 0, false, 0, false, 0}
#define SSL_BallModelStraightTwoPhase_init_zero  {0, 0, 0}
#define SSL_BallModelChipFixedLoss_init_zero     {0, 0, 0}
#define SSL_GeometryModels_init_zero             {false, SSL_BallModelStraightTwoPhase_init_zero, false, SSL_BallModelChipFixedLoss_init_zero}
#define SSL_GeometryData_init_zero               {SSL_GeometryFieldSize_init_zero, {{NULL}, NULL}, false, SSL_GeometryModels_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define Vector2f_x_tag                           1
#define Vector2f_y_tag                           2
#define SSL_FieldLineSegment_name_tag            1
#define SSL_FieldLineSegment_p1_tag              2
#define SSL_FieldLineSegment_p2_tag              3
#define SSL_FieldLineSegment_thickness_tag       4
#define SSL_FieldLineSegment_type_tag            5
#define SSL_FieldCircularArc_name_tag            1
#define SSL_FieldCircularArc_center_tag          2
#define SSL_FieldCircularArc_radius_tag          3
#define SSL_FieldCircularArc_a1_tag              4
#define SSL_FieldCircularArc_a2_tag              5
#define SSL_FieldCircularArc_thickness_tag       6
#define SSL_FieldCircularArc_type_tag            7
#define SSL_GeometryFieldSize_field_length_tag   1
#define SSL_GeometryFieldSize_field_width_tag    2
#define SSL_GeometryFieldSize_goal_width_tag     3
#define SSL_GeometryFieldSize_goal_depth_tag     4
#define SSL_GeometryFieldSize_boundary_width_tag 5
#define SSL_GeometryFieldSize_field_lines_tag    6
#define SSL_GeometryFieldSize_field_arcs_tag     7
#define SSL_GeometryFieldSize_penalty_area_depth_tag 8
#define SSL_GeometryFieldSize_penalty_area_width_tag 9
#define SSL_GeometryCameraCalibration_camera_id_tag 1
#define SSL_GeometryCameraCalibration_focal_length_tag 2
#define SSL_GeometryCameraCalibration_principal_point_x_tag 3
#define SSL_GeometryCameraCalibration_principal_point_y_tag 4
#define SSL_GeometryCameraCalibration_distortion_tag 5
#define SSL_GeometryCameraCalibration_q0_tag     6
#define SSL_GeometryCameraCalibration_q1_tag     7
#define SSL_GeometryCameraCalibration_q2_tag     8
#define SSL_GeometryCameraCalibration_q3_tag     9
#define SSL_GeometryCameraCalibration_tx_tag     10
#define SSL_GeometryCameraCalibration_ty_tag     11
#define SSL_GeometryCameraCalibration_tz_tag     12
#define SSL_GeometryCameraCalibration_derived_camera_world_tx_tag 13
#define SSL_GeometryCameraCalibration_derived_camera_world_ty_tag 14
#define SSL_GeometryCameraCalibration_derived_camera_world_tz_tag 15
#define SSL_GeometryCameraCalibration_pixel_image_width_tag 16
#define SSL_GeometryCameraCalibration_pixel_image_height_tag 17
#define SSL_BallModelStraightTwoPhase_acc_slide_tag 1
#define SSL_BallModelStraightTwoPhase_acc_roll_tag 2
#define SSL_BallModelStraightTwoPhase_k_switch_tag 3
#define SSL_BallModelChipFixedLoss_damping_xy_first_hop_tag 1
#define SSL_BallModelChipFixedLoss_damping_xy_other_hops_tag 2
#define SSL_BallModelChipFixedLoss_damping_z_tag 3
#define SSL_GeometryModels_straight_two_phase_tag 1
#define SSL_GeometryModels_chip_fixed_loss_tag   2
#define SSL_GeometryData_field_tag               1
#define SSL_GeometryData_calib_tag               2
#define SSL_GeometryData_models_tag              3

/* Struct field encoding specification for nanopb */
#define Vector2f_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, FLOAT,    x,                 1) \
X(a, STATIC,   REQUIRED, FLOAT,    y,                 2)
#define Vector2f_CALLBACK NULL
#define Vector2f_DEFAULT NULL

#define SSL_FieldLineSegment_FIELDLIST(X, a) \
X(a, CALLBACK, REQUIRED, STRING,   name,              1) \
X(a, STATIC,   REQUIRED, MESSAGE,  p1,                2) \
X(a, STATIC,   REQUIRED, MESSAGE,  p2,                3) \
X(a, STATIC,   REQUIRED, FLOAT,    thickness,         4) \
X(a, STATIC,   OPTIONAL, UENUM,    type,              5)
#define SSL_FieldLineSegment_CALLBACK pb_default_field_callback
#define SSL_FieldLineSegment_DEFAULT NULL
#define SSL_FieldLineSegment_p1_MSGTYPE Vector2f
#define SSL_FieldLineSegment_p2_MSGTYPE Vector2f

#define SSL_FieldCircularArc_FIELDLIST(X, a) \
X(a, CALLBACK, REQUIRED, STRING,   name,              1) \
X(a, STATIC,   REQUIRED, MESSAGE,  center,            2) \
X(a, STATIC,   REQUIRED, FLOAT,    radius,            3) \
X(a, STATIC,   REQUIRED, FLOAT,    a1,                4) \
X(a, STATIC,   REQUIRED, FLOAT,    a2,                5) \
X(a, STATIC,   REQUIRED, FLOAT,    thickness,         6) \
X(a, STATIC,   OPTIONAL, UENUM,    type,              7)
#define SSL_FieldCircularArc_CALLBACK pb_default_field_callback
#define SSL_FieldCircularArc_DEFAULT NULL
#define SSL_FieldCircularArc_center_MSGTYPE Vector2f

#define SSL_GeometryFieldSize_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, INT32,    field_length,      1) \
X(a, STATIC,   REQUIRED, INT32,    field_width,       2) \
X(a, STATIC,   REQUIRED, INT32,    goal_width,        3) \
X(a, STATIC,   REQUIRED, INT32,    goal_depth,        4) \
X(a, STATIC,   REQUIRED, INT32,    boundary_width,    5) \
X(a, CALLBACK, REPEATED, MESSAGE,  field_lines,       6) \
X(a, CALLBACK, REPEATED, MESSAGE,  field_arcs,        7) \
X(a, STATIC,   OPTIONAL, INT32,    penalty_area_depth,   8) \
X(a, STATIC,   OPTIONAL, INT32,    penalty_area_width,   9)
#define SSL_GeometryFieldSize_CALLBACK pb_default_field_callback
#define SSL_GeometryFieldSize_DEFAULT NULL
#define SSL_GeometryFieldSize_field_lines_MSGTYPE SSL_FieldLineSegment
#define SSL_GeometryFieldSize_field_arcs_MSGTYPE SSL_FieldCircularArc

#define SSL_GeometryCameraCalibration_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UINT32,   camera_id,         1) \
X(a, STATIC,   REQUIRED, FLOAT,    focal_length,      2) \
X(a, STATIC,   REQUIRED, FLOAT,    principal_point_x,   3) \
X(a, STATIC,   REQUIRED, FLOAT,    principal_point_y,   4) \
X(a, STATIC,   REQUIRED, FLOAT,    distortion,        5) \
X(a, STATIC,   REQUIRED, FLOAT,    q0,                6) \
X(a, STATIC,   REQUIRED, FLOAT,    q1,                7) \
X(a, STATIC,   REQUIRED, FLOAT,    q2,                8) \
X(a, STATIC,   REQUIRED, FLOAT,    q3,                9) \
X(a, STATIC,   REQUIRED, FLOAT,    tx,               10) \
X(a, STATIC,   REQUIRED, FLOAT,    ty,               11) \
X(a, STATIC,   REQUIRED, FLOAT,    tz,               12) \
X(a, STATIC,   OPTIONAL, FLOAT,    derived_camera_world_tx,  13) \
X(a, STATIC,   OPTIONAL, FLOAT,    derived_camera_world_ty,  14) \
X(a, STATIC,   OPTIONAL, FLOAT,    derived_camera_world_tz,  15) \
X(a, STATIC,   OPTIONAL, UINT32,   pixel_image_width,  16) \
X(a, STATIC,   OPTIONAL, UINT32,   pixel_image_height,  17)
#define SSL_GeometryCameraCalibration_CALLBACK NULL
#define SSL_GeometryCameraCalibration_DEFAULT NULL

#define SSL_BallModelStraightTwoPhase_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, DOUBLE,   acc_slide,         1) \
X(a, STATIC,   REQUIRED, DOUBLE,   acc_roll,          2) \
X(a, STATIC,   REQUIRED, DOUBLE,   k_switch,          3)
#define SSL_BallModelStraightTwoPhase_CALLBACK NULL
#define SSL_BallModelStraightTwoPhase_DEFAULT NULL

#define SSL_BallModelChipFixedLoss_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, DOUBLE,   damping_xy_first_hop,   1) \
X(a, STATIC,   REQUIRED, DOUBLE,   damping_xy_other_hops,   2) \
X(a, STATIC,   REQUIRED, DOUBLE,   damping_z,         3)
#define SSL_BallModelChipFixedLoss_CALLBACK NULL
#define SSL_BallModelChipFixedLoss_DEFAULT NULL

#define SSL_GeometryModels_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  straight_two_phase,   1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  chip_fixed_loss,   2)
#define SSL_GeometryModels_CALLBACK NULL
#define SSL_GeometryModels_DEFAULT NULL
#define SSL_GeometryModels_straight_two_phase_MSGTYPE SSL_BallModelStraightTwoPhase
#define SSL_GeometryModels_chip_fixed_loss_MSGTYPE SSL_BallModelChipFixedLoss

#define SSL_GeometryData_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, MESSAGE,  field,             1) \
X(a, CALLBACK, REPEATED, MESSAGE,  calib,             2) \
X(a, STATIC,   OPTIONAL, MESSAGE,  models,            3)
#define SSL_GeometryData_CALLBACK pb_default_field_callback
#define SSL_GeometryData_DEFAULT NULL
#define SSL_GeometryData_field_MSGTYPE SSL_GeometryFieldSize
#define SSL_GeometryData_calib_MSGTYPE SSL_GeometryCameraCalibration
#define SSL_GeometryData_models_MSGTYPE SSL_GeometryModels

extern const pb_msgdesc_t Vector2f_msg;
extern const pb_msgdesc_t SSL_FieldLineSegment_msg;
extern const pb_msgdesc_t SSL_FieldCircularArc_msg;
extern const pb_msgdesc_t SSL_GeometryFieldSize_msg;
extern const pb_msgdesc_t SSL_GeometryCameraCalibration_msg;
extern const pb_msgdesc_t SSL_BallModelStraightTwoPhase_msg;
extern const pb_msgdesc_t SSL_BallModelChipFixedLoss_msg;
extern const pb_msgdesc_t SSL_GeometryModels_msg;
extern const pb_msgdesc_t SSL_GeometryData_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define Vector2f_fields &Vector2f_msg
#define SSL_FieldLineSegment_fields &SSL_FieldLineSegment_msg
#define SSL_FieldCircularArc_fields &SSL_FieldCircularArc_msg
#define SSL_GeometryFieldSize_fields &SSL_GeometryFieldSize_msg
#define SSL_GeometryCameraCalibration_fields &SSL_GeometryCameraCalibration_msg
#define SSL_BallModelStraightTwoPhase_fields &SSL_BallModelStraightTwoPhase_msg
#define SSL_BallModelChipFixedLoss_fields &SSL_BallModelChipFixedLoss_msg
#define SSL_GeometryModels_fields &SSL_GeometryModels_msg
#define SSL_GeometryData_fields &SSL_GeometryData_msg

/* Maximum encoded size of messages (where known) */
/* SSL_FieldLineSegment_size depends on runtime parameters */
/* SSL_FieldCircularArc_size depends on runtime parameters */
/* SSL_GeometryFieldSize_size depends on runtime parameters */
/* SSL_GeometryData_size depends on runtime parameters */
#define SSL_BallModelChipFixedLoss_size          27
#define SSL_BallModelStraightTwoPhase_size       27
#define SSL_GeometryCameraCalibration_size       90
#define SSL_GeometryModels_size                  58
#define SSL_VISION_GEOMETRY_PB_H_MAX_SIZE        SSL_GeometryCameraCalibration_size
#define Vector2f_size                            10

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
