#!/bin/sh
# Post processing script

#sudo chmod 777 generated_wrapper

#copy Makefile
cp Makefile.SH  ./generated_wrapper/c/src                  

cd generated_wrapper/c/src/
#sudo /usr/local/Eiffel_19.05/studio/spec/linux-armv7/bin/finish_freezing -library
#/usr/local/Eiffel_19.05/studio/spec/linux-armv7/bin/finish_freezing -library
finish_freezing -library
