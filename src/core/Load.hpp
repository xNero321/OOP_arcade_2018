/*
** EPITECH PROJECT, 2017
** OOP_arcade_2018
** File description:
** Load.hpp
*/

#ifndef __LOADER_HPP_
#define __LOADER_HPP_
#include <exception>
#include <memory>
#include <dlfcn.h>
#include <string>
#include <iostream>
#include <fstream>

Class Load {
    public:
        Load();
        ~Load();
        void *changeLib(std::string &lib);
        void closeLib(void *lib);
        template<typename T>
        std::shared_ptr<T> getInstance(void *lib, const std::string &type) {
            using allocClass = T *(*)();
            using deleteClass = void (*)(T *)
            auto allocFunc = reinterpret_cast<allocClass>(
                dlsym(lib, const_cast<char*>(std::string("allocator" + type).cstr())));
            auto deleteFunc = reinterpret_cast<deleteClass>(
                dlsym(lib, const_cast<char*>(std::string("deleter" + type).cstr())));
            if (!allocFunc || !deleteFunc)
                throw std::exception();
            return std::shared_ptr<T>(
                allocFunc(), [deleteFunc](T *p){deleteFunc(p);});
            )
        }
};
#endif /* __LOADER_HPP_ */
