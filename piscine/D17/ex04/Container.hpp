/**
 *
 *
 *
 */

#ifndef __CONTAINER_HPP__
#define	__CONTAINER_HPP__

#include <iostream>
#include <algorithm>
#include <stack>

template<typename Type>
void aff(Type t) {
	std::cout << "Valeur : " << t << std::endl;
}

template<typename Type>
void add(Type & t) {
	t = t + 1;
}

template<typename T, template<typename, typename> class Container>
class contain {
protected:
	Container<T, std::allocator<T> > container;

public:

	contain() {

	}

	virtual ~contain() {

	}

	void push(T t) {
		container.push_back(t);
	}

	void aff() {
		std::for_each(container.begin(), container.end(), &::aff<T>);
	}

	void add() {
		std::for_each(container.begin(), container.end(), &::add<T>);
	}

};

template<typename T>
void contain<T, std::stack<T, std::allocator<T> > >::push(T t) {
	container.push(t);
}

#endif

