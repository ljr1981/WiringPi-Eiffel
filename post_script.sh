#!/bin/sh
# Post processing script

sudo chown -R larry generated_wrapper
sudo chgrp -R larry generated_wrapper
sudo chmod -R 777 generated_wrapper

#copy Makefile
cp Makefile.SH  ./generated_wrapper/c/src                  

cp config.sh ./generated_wrapper/c/src
cp /usr/local/Eiffel_19.05/studio/spec/linux-armv7/include/*.h ./generated_wrapper/c/include
cp /usr/local/Eiffel_19.05/studio/spec/linux-armv7/include/*.decl ./generated_wrapper/c/include
cp /usr/local/Eiffel_19.05/studio/spec/linux-armv7/include/*.interface ./generated_wrapper/c/include

cd generated_wrapper/c/src/
#sudo /usr/local/Eiffel_19.05/studio/spec/linux-armv7/bin/finish_freezing -library
/usr/local/Eiffel_19.05/studio/spec/linux-armv7/bin/finish_freezing -library
#finish_freezing -library
