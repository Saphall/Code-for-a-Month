# -----------------LINUX------------------- #
# This file helps to build the C++ programs into 'build/' folder.

# Commands :
# _________________________________________
# | chmod +x run_c++.sh (first time only) |
# | ./run_c++.sh                          |
# | ./build/FILE_NAME_HERE                |
# -_______________________________________-
# eg. To run file `0-hello_world.cpp`, AFTER RUNNING `./run_c++.sh` RUN THE PROGRAM AS `./build/0-hello_world`

# This compiles every C++ files(inside any directory) into `build/` folder.
# So, after running `./run_c++.sh`, you can run program as:
# ----------------------------------------
# >  ./build/FILE_NAME_HERE
# ----------------------------------------
#                           - Saphal Shakha


#! /bin/bash
rm -rf build
mkdir build

for files in `ls *cpp`; do
    build_file="${files::-4}"
    g++ $files -o build/$build_file
done

for folder in `ls`; do
    if [ $folder == build ]; then
        echo "Now run command >   ./build/'FILE_NAME_HERE' "
    else
        if [ -d $folder ];then
            cd $folder
            if [ "$(ls -A .)" ]; then
                for files in `ls *cpp`; do
                    g++ $files -o ../build/"${files::-4}"
                done
            fi
            cd ..
        fi
    fi
done

