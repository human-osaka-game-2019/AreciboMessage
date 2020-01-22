#ifndef SETTINGS_H_
#define SETTINGS_H_

#include <tchar.h>
#include <Windows.h>
#include "Singleton.h"

namespace arecibo_message {
namespace utility {

/// <summary>
/// 設定読み込みクラス
/// </summary>
class Settings : public Singleton<Settings> {
public:
	/// <summary>
	/// 設定情報から数値型のキーを読み込む
	/// </summary>
	/// <param name="section">セクション</param>
	/// <param name="key">キー</param>
	/// <returns>数値型の設定値</returns>
	/// <remarks>セクション及びキーは、Windowsのiniファイル形式を想定している</remarks>
	UINT GetIntValue(LPCTSTR section, LPCTSTR key);

private:
	friend Singleton<Settings>;
	Settings() = default;
};

} // namespace utility
} // namespace arecibo_message

#endif // !SETTINGS_H_
