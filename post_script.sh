#!/bin/sh
# Post processing script

#copy Makefile
cp Makefile.SH  ./generated_wrapper/c/src                  

cd generated_wrapper/c/src/
finish_freezing -library
