#/bin/bash

cd /Users/tebariousbag/school/atlas-low_level_programming/atlas-low_level_programming-1/static_libraries

for file in *.c; do
    gcc -c "$file"
done
echo "All .c files compiled to .o files"
