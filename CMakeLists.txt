cmake_minimum_required(VERSION 3.29)
project(oop-group-project)

set(CMAKE_CXX_STANDARD 20)

add_executable(oop-group-project main.cpp
        RoomDirect/Room.cpp
        RoomDirect/Room.h
        Restaurant.cpp
        Restaurant.h
        MemberDirect/Member.cpp
        MemberDirect/Member.h
        MemberDirect/Manager.cpp
        MemberDirect/Manager.h
        MemberDirect/RoomService.cpp
        MemberDirect/RoomService.h
        MemberDirect/Waiter.cpp
        MemberDirect/Waiter.h
        MemberDirect/Reception.cpp
        MemberDirect/Reception.h
        Client.cpp
        Client.h
        Hotel.cpp
        Hotel.h
        MemberDirect/Chef.cpp
        MemberDirect/Chef.h
        Meal.h
)
