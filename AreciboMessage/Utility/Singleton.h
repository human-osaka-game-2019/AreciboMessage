#ifndef SINGLETON_H_
#define SINGLETON_H_

template <class T>
class Singleton {
public:

	/*
	//作成
	static void Create() {
		if (instance == nullptr) {
			instance = new InstanceType();
		}
	}

	//破棄
	static void Destroy() {
		if (instance != nullptr) {
			delete instance;
			instance = nullptr;
		}
	}
	*/

	static inline T& GetInstance() {
		static T instance;
		return instance;
	}
	

protected:
	Singleton() = default;
	virtual ~Singleton() {}
private:
	Singleton(const Singleton&) = delete;
	Singleton(Singleton&&) = delete;
	Singleton& operator=(const Singleton&) = delete;
	Singleton&& operator=(const Singleton&&) = delete;
};

#endif
