#!/usr/bin/bash

DIR_LIST=("bin/" "build/" "src/dist/" " src/external/antlr4/")
for DIR in ${DIR_LIST[@]}; do
    echo "Removing $DIR..."
    rm -rf $DIR
    echo "Done."
done

