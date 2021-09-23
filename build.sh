#!/bin/sh

## #### VARIABLE DEFINITIONS ####

OUTPUT_FOLDER=out/
SOURCE_ROOT=src/

APP_NAME=anotherLink

## #### 

rm -fr ${OUTPUT_FOLDER}
mkdir ${OUTPUT_FOLDER}

## ########

g++ ${SOURCE_ROOT}/main.cpp -o ${OUTPUT_FOLDER}/${APP_NAME}

gcc ${SOURCE_ROOT}/writer.c -o ${OUTPUT_FOLDER}/writer

gcc ${SOURCE_ROOT}/reader.c -o ${OUTPUT_FOLDER}/reader


