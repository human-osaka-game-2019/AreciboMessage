#ifndef DETECT_MEMORY_LEAKS_H_
#define DETECT_MEMORY_LEAKS_H_

#if _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif

namespace arecibo_message {
namespace utility {

/// <summary>
/// メモリーリークの検知を開始する
/// </summary>
/// <remarks>
/// プログラム終了時に、リークしている領域がデバッグウィンドウに出力される
/// </remarks>
inline void StartDetectingMemoryLeaks() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
}

} // namespace utility
} // namespace arecibo_message

#endif // !DETECT_MEMORY_LEAKS_H_
