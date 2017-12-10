[![HitCount](http://hits.dwyl.io/itraccoons/doe.svg)](http://hits.dwyl.io/itraccoons/doe)

### Project: doeZen ( Doezen Executions, Do Experiments, DevOps Environment)

Increasing perfomance by automating routing tasks.
Wrap your routine into own simple "tab-tab" CLI

This is "self-creating" tool for calling functions structured by purposes (modules).
Includes one core module "_self" with "init" and create" functions for self extending.

Main idea to wrap repeatable activities into "tab" completing 3-level CLI.
Rest of args/options could be transfered into function. 
_doe \<module\> \<function\> [options]_

    $ doe _self create -h
    doe _self create -m <MODULE> -f <FUNCTION> [-o <OPTIONS>] [-l <sh|perl|python>] [-h]

### Platform: sh/bash (macOS/ubuntu)
_not fully POSIX compliant because some bashism could be inplace_

### Quickstart

    $ cd ~ && git clone https://github.com/itraccoons/doe.git

or

    $ curl -fsSL https://doe.cloud/get | sh
    experimental - let me know if it's usefull for you


### Using DOE
    $ ~/doe/bin/doe _self init
    $ . ~/.bash_profile
    $ doe <TAB><TAB>
    $ doe _self create -m quick -f ubuntu -o c:h
    $ nano ~/doe/modules/quick/quick.ubuntu
    $ doe quick ubuntu
    $ doe quick ubuntu -c destroy


###### Oleksii Kucheruk (raccoon1)
