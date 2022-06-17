cmake_minimum_required(VERSION 3.22)
project(C___project)

set(CMAKE_CXX_STANDARD 11)

add_executable(C___project UserFunction/User.cpp UserFunction/User.h UserFunction/Customer/Customer.h UserFunction/Customer/Customer.cpp UserFunction/Administrator/Administrator.h UserFunction/Administrator/Administrator.cpp Facility/Facility.cpp Facility/Facility.h main.cpp Facility/FacilityShow.cpp Facility/FacilityShow.h UserFunction/Customer/CustomerListEdit.cpp UserFunction/Customer/CustomerListEdit.h UserFunction/Customer/CustomerLogin.cpp UserFunction/Customer/CustomerLogin.h UserFunction/Customer/CustomerReservation.cpp UserFunction/Customer/CustomerReservation.h Facility/FacilityListEdit.cpp Facility/FacilityListEdit.h UserFunction/Customer/CustomerShow.cpp UserFunction/Customer/CustomerShow.h Error/TypeCheck.cpp Error/TypeCheck.h)
