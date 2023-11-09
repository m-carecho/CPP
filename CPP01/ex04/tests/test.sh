#!/bin/bash

# Run tests for ex04
# Usage: ./run_tests.sh

# Colors
red='\033[31m'
green='\033[32m'
reset='\033[0m'

make

echo -e "\n${green}Starting tests...${reset}"


# Test 1
echo -e "\nTest 1"
./fileTextReplacer tests/no_matches.txt aaaaa bbbbb
	echo -e "${green}generated file${reset}"


# Test 2
echo -e "\nTest 2"
./fileTextReplacer tests/one_match_per_line.txt 42 24
	echo -e "${green}generated file${reset}"


# Test 3
echo -e "\nTest 3"
./fileTextReplacer tests/multiple_matches.txt morango uva
	echo -e "${green}generated file${reset}"

# Test 4
echo -e "\nTest 4"
./fileTextReplacer tests/numbers.txt 5 Z
	echo -e "${green}generated file${reset}"

# Test 5
echo -e "\nTest 5"
./fileTextReplacer tests/special_chars.txt "$" "\"*
\""
	echo -e "${green}generated file${reset}"

echo -e "\n${green}all generated tests, now compare them${reset}"
