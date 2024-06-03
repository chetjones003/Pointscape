workspace "Pointscape"
    architecture "x64"

    configurations
    {
        "Debug",
        "Release",
        "Dist"
    }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Pointscape"
    location "Pointscape"
    kind "ConsoleApp"
    language "C++"

    targetdir ("bin/" .. outputdir .. "/%{prj.name}")
    objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp",
    }

    includedirs
    {
        "%{prj.name}/vendor/spdlog/include",
    }

    filter "system:windows"
        cppdialect "C++20"
        staticruntime "On"
        systemversion "latest"

        defines
        {
            "POINTSCAPE_PLATFORM_WINDOWS",
        }

    filter "configurations:Debug"
        defines 
        {
            "POINTSCAPE_DEBUG",
        }
        symbols "On"

    filter "configurations:Release"
        defines 
        {
            "POINTSCAPE_RELEASE",
        }
        optimize "On"

    filter "configurations:Dist"
        defines 
        {
            "POINTSCAPE_DIST",
        }
        optimize "On"
