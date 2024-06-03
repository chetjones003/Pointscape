#pragma once

#include <memory>

#include "spdlog/spdlog.h"

namespace Pointscape {

	class Log {
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger> GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger> GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

#define POINTSCAPE_CORE_FATAL(...) ::Pointscape::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define POINTSCAPE_CORE_ERROR(...) ::Pointscape::Log::GetCoreLogger()->error(__VA_ARGS__)
#define POINTSCAPE_CORE_WARN(...)  ::Pointscape::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define POINTSCAPE_CORE_INFO(...)  ::Pointscape::Log::GetCoreLogger()->info(__VA_ARGS__)
#define POINTSCAPE_CORE_TRACE(...) ::Pointscape::Log::GetCoreLogger()->trace(__VA_ARGS__)

#define POINTSCAPE_FATAL(...)     ::Pointscape::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define POINTSCAPE_ERROR(...)     ::Pointscape::Log::GetClientLogger()->error(__VA_ARGS__)
#define POINTSCAPE_WARN(...)      ::Pointscape::Log::GetClientLogger()->warn(__VA_ARGS__)
#define POINTSCAPE_INFO(...)      ::Pointscape::Log::GetClientLogger()->info(__VA_ARGS__)
#define POINTSCAPE_TRACE(...)     ::Pointscape::Log::GetClientLogger()->trace(__VA_ARGS__)
