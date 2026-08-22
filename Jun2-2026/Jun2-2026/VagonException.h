#pragma once

#include <exception>
#include <iostream>

using namespace std;

class VagonException : public exception {
public:
	const char* what() const noexcept override {
		return "Masa vagona je veca od mase tereta!\n";
	}
};
