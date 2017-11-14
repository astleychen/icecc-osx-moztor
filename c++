#!/bin/bash

# Get the current working directory
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

export ICECC_VERSION="x86_64:$DIR/9936e71bea727beed5a647ba0d46045e.tar.gz"
"$DIR/icecc/icecc" "$DIR/clang_darwin_on_darwin/bin/clang++" -mmacosx-version-min=10.11 $*
# clang++ -mmacosx-version-min=10.11 $*
exit $?
