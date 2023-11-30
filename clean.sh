#!/bin/bash

find . -type d -name 'ex*' -exec make -C {} fclean \;
