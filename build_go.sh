#!/bin/bash

# Define the root directory where the script is located
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" &>/dev/null && pwd)"

# Function to generate Go code from proto files in a directory
generate_go_code() {
	local dir_name="$1"
	local dir_path="${SCRIPT_DIR}/${dir_name}" # Corrected path
	local output_dir="${SCRIPT_DIR}/go/"       # Output directory

	# Ensure the output directory exists
	mkdir -p "${output_dir}"

	# Check if the source directory exists
	if [ -d "${dir_path}" ]; then
		for PROTO_FILE in "${dir_path}"/*.proto; do
			# Generate Go code in the output directory
			protoc --proto_path="${dir_path}" --go_out="${output_dir}" "${PROTO_FILE}"
		done
	else
		echo "Warning: Directory ${dir_path} does not exist."
	fi
}

# Generate Go code for proto files in the action, grsim, and ssl_vision directories
generate_go_code "robot_action"
generate_go_code "grsim"

echo "Proto files built in ${SCRIPT_DIR}/go"
