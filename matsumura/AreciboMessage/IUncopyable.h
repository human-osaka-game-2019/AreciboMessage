#ifndef IUNCOPYABLE_H_
#define IUNCOPYABLE_H_

namespace arecibo_message {

/// <summary>
/// コピー禁止属性を持つクラス用のインターフェイス
/// </summary>
/// <remarks>
/// コピーを禁止するクラスは、このインターフェイスをprivate継承すること
/// (参考) https://ja.wikibooks.org/wiki/More_C%2B%2B_Idioms/コピー禁止ミックスイン(Non-copyable_Mixin)
/// </remarks>
class IUncopyable {
protected:
    IUncopyable() = default;
    ~IUncopyable() = default;

    IUncopyable(const IUncopyable&) = delete;
    IUncopyable& operator=(const IUncopyable&) = delete;
};

} // namespace arecibo_message

#endif // !IUNCOPYABLE_H_
