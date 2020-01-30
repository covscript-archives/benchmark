#include <napi.h>

using namespace Napi;

String hello(const CallbackInfo& info)
{
	return String::New(info.Env(), "world");
}

Napi::Object  Init(Env env, Object exports)
{
	exports.Set("hello", Function::New(env, hello));
	return exports;
}

NODE_API_MODULE(addon, Init)