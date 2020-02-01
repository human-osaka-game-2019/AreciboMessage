#ifndef ARECIBO_MESSAGE_H_
#define ARECIBO_MESSAGE_H_

#include "IUncopyable.h"
#include "TypeAliases.h"

namespace arecibo_message {

/// <summary>
/// アレシボメッセージクラス
/// </summary>
class AreciboMessage : private IUncopyable {
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="message">32ビットのデータ列(ビッグエンディアン)</param>
	explicit AreciboMessage(const UInt32Collection& message);

	~AreciboMessage();

	/// <summary>
	/// アレシボメッセージを出力する
	/// </summary>
	/// <remarks>出力先等はconfig.iniに記述すること</remarks>
	void Output() const;
};

} // namespace arecibo_message

#endif // !ARECIBO_MESSAGE_H_
