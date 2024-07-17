// source: website/website.proto
/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

var jspb = require('google-protobuf');
var goog = jspb;
var global = Function('return this')();

var robot_action_robot_action_pb = require('../robot_action/robot_action_pb.js');
goog.object.extend(proto, robot_action_robot_action_pb);
var simulation_ssl_simulation_control_pb = require('../simulation/ssl_simulation_control_pb.js');
goog.object.extend(proto, simulation_ssl_simulation_control_pb);
var ssl_vision_ssl_wrapper_pb = require('../ssl_vision/ssl_wrapper_pb.js');
goog.object.extend(proto, ssl_vision_ssl_wrapper_pb);
goog.exportSymbol('proto.WebsiteCommand', null, global);
/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.WebsiteCommand = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.WebsiteCommand.repeatedFields_, null);
};
goog.inherits(proto.WebsiteCommand, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.WebsiteCommand.displayName = 'proto.WebsiteCommand';
}

/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.WebsiteCommand.repeatedFields_ = [3,4];



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * Optional fields that are not set will be set to undefined.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     net/proto2/compiler/js/internal/generator.cc#kKeyword.
 * @param {boolean=} opt_includeInstance Deprecated. whether to include the
 *     JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @return {!Object}
 */
proto.WebsiteCommand.prototype.toObject = function(opt_includeInstance) {
  return proto.WebsiteCommand.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.WebsiteCommand} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.WebsiteCommand.toObject = function(includeInstance, msg) {
  var f, obj = {
    control: (f = msg.getControl()) && ssl_vision_ssl_wrapper_pb.SSL_WrapperPacket.toObject(includeInstance, f),
    config: (f = msg.getConfig()) && simulation_ssl_simulation_control_pb.SimulatorCommand.toObject(includeInstance, f),
    actioncommandsList: jspb.Message.toObjectList(msg.getActioncommandsList(),
    robot_action_robot_action_pb.Command.toObject, includeInstance),
    logMessagesList: (f = jspb.Message.getRepeatedField(msg, 4)) == null ? undefined : f
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.WebsiteCommand}
 */
proto.WebsiteCommand.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.WebsiteCommand;
  return proto.WebsiteCommand.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.WebsiteCommand} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.WebsiteCommand}
 */
proto.WebsiteCommand.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new ssl_vision_ssl_wrapper_pb.SSL_WrapperPacket;
      reader.readMessage(value,ssl_vision_ssl_wrapper_pb.SSL_WrapperPacket.deserializeBinaryFromReader);
      msg.setControl(value);
      break;
    case 2:
      var value = new simulation_ssl_simulation_control_pb.SimulatorCommand;
      reader.readMessage(value,simulation_ssl_simulation_control_pb.SimulatorCommand.deserializeBinaryFromReader);
      msg.setConfig(value);
      break;
    case 3:
      var value = new robot_action_robot_action_pb.Command;
      reader.readMessage(value,robot_action_robot_action_pb.Command.deserializeBinaryFromReader);
      msg.addActioncommands(value);
      break;
    case 4:
      var value = /** @type {string} */ (reader.readString());
      msg.addLogMessages(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.WebsiteCommand.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.WebsiteCommand.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.WebsiteCommand} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.WebsiteCommand.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getControl();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      ssl_vision_ssl_wrapper_pb.SSL_WrapperPacket.serializeBinaryToWriter
    );
  }
  f = message.getConfig();
  if (f != null) {
    writer.writeMessage(
      2,
      f,
      simulation_ssl_simulation_control_pb.SimulatorCommand.serializeBinaryToWriter
    );
  }
  f = message.getActioncommandsList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      3,
      f,
      robot_action_robot_action_pb.Command.serializeBinaryToWriter
    );
  }
  f = message.getLogMessagesList();
  if (f.length > 0) {
    writer.writeRepeatedString(
      4,
      f
    );
  }
};


/**
 * optional SSL_WrapperPacket control = 1;
 * @return {?proto.SSL_WrapperPacket}
 */
proto.WebsiteCommand.prototype.getControl = function() {
  return /** @type{?proto.SSL_WrapperPacket} */ (
    jspb.Message.getWrapperField(this, ssl_vision_ssl_wrapper_pb.SSL_WrapperPacket, 1));
};


/**
 * @param {?proto.SSL_WrapperPacket|undefined} value
 * @return {!proto.WebsiteCommand} returns this
*/
proto.WebsiteCommand.prototype.setControl = function(value) {
  return jspb.Message.setWrapperField(this, 1, value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.WebsiteCommand} returns this
 */
proto.WebsiteCommand.prototype.clearControl = function() {
  return this.setControl(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.WebsiteCommand.prototype.hasControl = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * optional SimulatorCommand config = 2;
 * @return {?proto.SimulatorCommand}
 */
proto.WebsiteCommand.prototype.getConfig = function() {
  return /** @type{?proto.SimulatorCommand} */ (
    jspb.Message.getWrapperField(this, simulation_ssl_simulation_control_pb.SimulatorCommand, 2));
};


/**
 * @param {?proto.SimulatorCommand|undefined} value
 * @return {!proto.WebsiteCommand} returns this
*/
proto.WebsiteCommand.prototype.setConfig = function(value) {
  return jspb.Message.setWrapperField(this, 2, value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.WebsiteCommand} returns this
 */
proto.WebsiteCommand.prototype.clearConfig = function() {
  return this.setConfig(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.WebsiteCommand.prototype.hasConfig = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * repeated Command ActionCommands = 3;
 * @return {!Array<!proto.Command>}
 */
proto.WebsiteCommand.prototype.getActioncommandsList = function() {
  return /** @type{!Array<!proto.Command>} */ (
    jspb.Message.getRepeatedWrapperField(this, robot_action_robot_action_pb.Command, 3));
};


/**
 * @param {!Array<!proto.Command>} value
 * @return {!proto.WebsiteCommand} returns this
*/
proto.WebsiteCommand.prototype.setActioncommandsList = function(value) {
  return jspb.Message.setRepeatedWrapperField(this, 3, value);
};


/**
 * @param {!proto.Command=} opt_value
 * @param {number=} opt_index
 * @return {!proto.Command}
 */
proto.WebsiteCommand.prototype.addActioncommands = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 3, opt_value, proto.Command, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 * @return {!proto.WebsiteCommand} returns this
 */
proto.WebsiteCommand.prototype.clearActioncommandsList = function() {
  return this.setActioncommandsList([]);
};


/**
 * repeated string log_messages = 4;
 * @return {!Array<string>}
 */
proto.WebsiteCommand.prototype.getLogMessagesList = function() {
  return /** @type {!Array<string>} */ (jspb.Message.getRepeatedField(this, 4));
};


/**
 * @param {!Array<string>} value
 * @return {!proto.WebsiteCommand} returns this
 */
proto.WebsiteCommand.prototype.setLogMessagesList = function(value) {
  return jspb.Message.setField(this, 4, value || []);
};


/**
 * @param {string} value
 * @param {number=} opt_index
 * @return {!proto.WebsiteCommand} returns this
 */
proto.WebsiteCommand.prototype.addLogMessages = function(value, opt_index) {
  return jspb.Message.addToRepeatedField(this, 4, value, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 * @return {!proto.WebsiteCommand} returns this
 */
proto.WebsiteCommand.prototype.clearLogMessagesList = function() {
  return this.setLogMessagesList([]);
};


goog.object.extend(exports, proto);
