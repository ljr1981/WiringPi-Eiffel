export WRAP_C=/home/larry/Documents/github/WrapC
export PATH=$PATH:$WRAP_C/bin

wrap_c --verbose --c_compile_options=-I/home/larry/Documents/github/WiringPi --script_pre_process=pre_script.sh --script_post_process=post_script.sh --output-dir=./generated_wrapper --full-header=/home/larry/Documents/github/WiringPi/wiringPi/wiringPi.h --config=config.xml
