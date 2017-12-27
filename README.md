[![Build Status](https://circleci.com/gh/itraccoons/doe.svg?style=shield)](https://circleci.com/gh/itraccoons/doe/tree/master)

### Project: doeZen
_doe: DOzen Executions, DO Experiments, DevOps Environment_

Increasing perfomance by automating routing tasks.
Wrap your routine into own simple "tab-tab" CLI

This is "self-creating" tool for calling functions structured by purposes (modules).
Includes one core module "completion" and create" functions for self extending.

Main idea to wrap repeatable activities into "tab" completing 3-level CLI.
Rest of args/options could be transfered into function. 

_doe \<module\> \<function\> [options]_

    $ doe create -h
    doe create -m <MODULE> -f <FUNCTION> [-h]

### Platform:

bash, szh
Linux 4.10.0-35-generic #39~16.04.1-Ubuntu SMP Wed Sep 13 09:02:42 UTC 2017 x86_64 GNU/Linux

### Quickstart

    $ curl -fsSL https://doe.cloud/get | sudo sh

### Using doe
    $ . <(doe completion)
    $ doe <TAB><TAB>
    $ doe create -m quick -f ubuntu
    $ nano ~/.doe/modules/quick/quick.ubuntu
    $ doe quick ubuntu
    $ doe quick ubuntu -c destroy


###### Oleksii Kucheruk (raccoon1)
[![HitCount](http://hits.dwyl.io/itraccoons/doe.svg)](http://hits.dwyl.io/itraccoons/doe)
