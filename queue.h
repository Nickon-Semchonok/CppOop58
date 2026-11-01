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
		if (getLength() > 0) {
			return queue->remove(0);
		}
		else {
			throw std::length_error("Queue<T>::dequeue(): Dequeue requested for empty queue");
		}
	}
	size_t getLength() {
		return queue->getSize();
	}

	bool isEmpty() {
		return getLength() == 0;
	}

	Queue() {
		queue = new LinkedList<T>();
	}
	Queue(Queue<T>& other) {
		// "глибоке" копіювання - створення повної копії ресурсу (переліку)
		// TODO: реалізувати
	}
	Queue(Queue<T>&& other) {
		this->queue = other.queue;
		other.queue = NULL;
	}
	~Queue() {
		if (queue) delete queue;
	}
};