#!/usr/bin/env bash
set -e

cd "$(dirname "$(readlink -f "$BASH_SOURCE")")/."

{
	cat <<- 'EOH'
		#This file list all inviduals having contributed content to repository
	EOH
	echo
<<<<<<< HEAD
	git log --format='%aN <%aE>' | LC_ALL=C.UTF.8 sort -uf
=======
	git log --format='%aN <%aE>' | LC_ALL=C.UTF-8 sort -uf
>>>>>>> 2c24f5015914613b5421d024cf1a25ea058b4351
} > AUTHORS
