#!/bin/bash
ifconfig -a | grep -E "ether" |cut -d " " -f2

