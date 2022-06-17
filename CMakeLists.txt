cmake_minimum_required(VERSION 3.22)
project(C___project)

set(CMAKE_CXX_STANDARD 11)

add_executable(C___project User.cpp User.h Customer.h Customer.cpp Administrator.h Administrator.cpp Facility.cpp Facility.h main.cpp FacilityShow.cpp FacilityShow.h CustomerListEdit.cpp CustomerListEdit.h CustomerLogin.cpp CustomerLogin.h CustomerReservation.cpp CustomerReservation.h FacilityListEdit.cpp FacilityListEdit.h CustomerShow.cpp CustomerShow.h TypeCheck.cpp TypeCheck.h)
