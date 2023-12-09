#!/bin/bash

# Define the root directory where the script is located
ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" &> /dev/null && pwd)"

# Function to generate Go code from proto files in a directory
generate_go_code() {
    local dir_name="$1"
    local dir_path="${ROOT_DIR}/${dir_name}"
    for PROTO_FILE in "${dir_path}"/*.proto; do
        # Generate Go code in the directory of the script
        protoc --proto_path="${dir_path}" --go_out="${dir_path}" "${PROTO_FILE}"
    done
}

# Generate Go code for proto files in the action directory
generate_go_code "action"

# Generate Go code for proto files in the grsim directory
generate_go_code "grsim"

# Generate Go code for proto files in the ssl_vision directory
generate_go_code "ssl_vision"

echo "Proto files built in ${ROOT_DIR}"