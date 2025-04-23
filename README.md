# How to use

## Local Test
mkcd build
cmake ..
make
./test_math

## Test with docker
docker build -t my_test_image .
docker run --rm -it my_test_image
./test_math
