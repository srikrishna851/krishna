#!/usr/bin/env bash

function hello() {
	local name=$1
	echo "hello $name"
}

goodbye() {
echo "goodbye $1"
}

echo "calling hello function"
hello krishna

echo "calling goodbye function"
goodbye man

exit 0
