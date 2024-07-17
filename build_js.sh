#!/bin/bash

# Define the root directory where the script is located
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" &>/dev/null && pwd)"

# Function to generate TypeScript and gRPC-Web code from proto files in a directory
generate_ts_code() {
    local dir_name="$1"
    local dir_path="${SCRIPT_DIR}/${dir_name}"
    local output_dir="${SCRIPT_DIR}/proto_js"

    # Ensure the output directory exists
    mkdir -p "${output_dir}"

    # Check if the source directory exists
    if [ -d "${dir_path}" ]; then
        # Find all .proto files and generate TypeScript and gRPC-Web code
        find "${dir_path}" -name '*.proto' -exec protoc --proto_path="${SCRIPT_DIR}" \
            --plugin=protoc-gen-ts_proto=$(which protoc-gen-ts_proto) \
            --ts_proto_out="${output_dir}" \
            --js_out=import_style=commonjs,binary:"${output_dir}" \
            --grpc-web_out=import_style=commonjs,mode=grpcwebtext:"${output_dir}" {} +
    else
        echo "Warning: Directory ${dir_path} does not exist."
    fi
}

# Make sure we have the newest version of proto repository before creating new ones.
git submodule update --remote --merge

# Generate TypeScript and gRPC-Web code for proto files in the directories
generate_ts_code "website"

echo "Proto files built in ${SCRIPT_DIR}/proto_output"
