#!/bin/bash

# Define the root directory where the script is located
ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" &>/dev/null && pwd)"

# Define the directories containing the .proto files
SSL_VISION_DIR="${ROOT_DIR}/ssl_vision"
ACTION_DIR="${ROOT_DIR}/robot_action"

# Create the directories if they don't already exist
mkdir -p "${SSL_VISION_DIR}"
mkdir -p "${ACTION_DIR}"

# Function to generate C code from proto files in a directory
generate_c_code() {
	local dir_path="$1"
	for PROTO_FILE in "${dir_path}"/*.proto; do
		protoc --c_out="${dir_path}" --proto_path="${dir_path}" "${PROTO_FILE}"
	done
}

# Generate C code for each directory
echo "Generating C code for SSL Vision proto files..."
generate_c_code "${SSL_VISION_DIR}"

echo "Generating C code for Robot Action proto files..."
generate_c_code "${ACTION_DIR}"
