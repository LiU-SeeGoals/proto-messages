#!/bin/bash

# Define the root directory where the script is located
ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" &>/dev/null && pwd)"

# Function to generate C code from proto files in a directory
# Function to generate C code from proto files in a directory
generate_c_code() {
	local dir_path="${ROOT_DIR}/$1"
	local out_dir="${ROOT_DIR}/proto_c/$1"
	mkdir -p "${out_dir}"
	for PROTO_FILE in "${dir_path}"/*.proto; do
		protoc-c --c_out="${out_dir}" --proto_path="${dir_path}" --proto_path="$PWD" "${PROTO_FILE}"
	done
}

# Generate C code for each directory
echo "Generating C code for SSL Vision proto files..."
generate_c_code "parsed_vision"

echo "Generating C code for Robot Action proto files..."
generate_c_code "robot_action"
