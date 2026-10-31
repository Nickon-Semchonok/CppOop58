#pragma once
#include "linked_list.h"
// реалізація структури даних "черга"
template<typename T>
class Queue {
private:
	LinkedList<T>* queue = NULL;
public:
	void enqueue(T data) { // поставити в чергу
		queue->add(data);
	}
	T dequeue() {   // вилучити за черги (черговий елемент)
		if (getLengh() > 0) {
			return queue->remove(0);
		}
		else {
			return T(0);
		}
	}
	size_t getLengh() {
		return queue->getSize();
	}

	Queue() {
		queue = new LinkedList<T>();
	}
	Queue(Queue<T>& other) {
		// "глибоке" копіювання - створення повної копії ресурсу (переліку)
		// TODO: реалізувати
	}
	Queue(Queue<T>&& other) {
		this->queue = other->queue;
		other->queue = NULL;
	}
	~Queue() {
		if (queue) delete queue;
	}
};