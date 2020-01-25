#ifndef SINGLETON_H_
#define SINGLETON_H_

template <class T>
class Singleton {
public:

	static inline T& GetInstance() {
		return *instance;
	}

protected:
	Singleton() = default;
	virtual ~Singleton() {}
private:
	std::unique_ptr<T> instance;

	Singleton(const Singleton&) = delete;
	Singleton(Singleton&&) = delete;
	Singleton& operator=(const Singleton&) = delete;
	Singleton&& operator=(const Singleton&&) = delete;
};

#endif
