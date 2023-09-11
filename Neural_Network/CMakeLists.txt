cmake_minimum_required(VERSION 3.10)
project(my_tensorflow_app)

find_package(TensorFlow REQUIRED)

add_executable(my_tensorflow_app nn.c)

target_link_libraries(my_tensorflow_app TensorFlow::TensorFlow)
