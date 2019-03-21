#!/bin/bash
ifconfig | grep "ether " |  awk -F 'ether ' '{print $2}' | cut -c 1-17