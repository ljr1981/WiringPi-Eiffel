# WiringPi-Eiffel

## Dependencies
Install wiringPi to your local Raspian Linux if you have not already done so.

You can find the most current version of WiringPi here: https://github.com/WiringPi/WiringPi

Please read the Readme.md file located there.

## Installing WiringPi

Clone into the repo above and then run 'sudo ./build' from a command line to build and install on your local system.

## WiringPi-Eiffel

This repo has an RPi-4 compiled object (.a) file already compiled and ready to go. However, if you need to freshen this code, please run 'sudo ./generator.sh' to regenerate it fresh on your system.

NOTE: There is a know issue that is presently being resolved with permissions with respect to GitHub that causees the last finish_freezinng -library to fail. We are aware of the issue and we are working to resolve it ASAP. Thank you.
