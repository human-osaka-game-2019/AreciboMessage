#ifndef SINGLETON_H_
#define SINGLETON_H_

#include "IUncopyable.h"

namespace arecibo_message {
namespace utility {

/// <summary>
/// シングルトンの基底クラス
/// </summary>
/// <remarks>
/// <para>内容は下記URLからほぼそのまま拝借。</para>
/// <para>http://cflat-inc.hatenablog.com/entry/2014/03/04/214608</para>
/// </remarks>
template <class T>
class Singleton : private IUncopyable {
public:
	/// <summary>
	/// インスタンスを取得する
	/// </summary>
	/// <returns>生成済みのインスタンス</returns>
	static T& Instance() {
		static typename T::SingletonPointerType s_singleton(T::CreateInstance());

		return GetReference(s_singleton);
	}

private:
	using SingletonPointerType = UniquePtr<T>;

	inline static T* CreateInstance() { return new T(); }

	inline static T& GetReference(const SingletonPointerType& ptr) { return *ptr; }

protected:
	Singleton() = default;

private:
	// コピー禁止に加え、ムーブも禁止
	Singleton(Singleton&&) = delete;
	Singleton& operator=(Singleton&&) = delete;
};

} // namespace utility
} // namespace arecibo_message

#endif // !SINGLETON_H_
