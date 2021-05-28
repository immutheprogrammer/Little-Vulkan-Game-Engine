workspace "Learn Vulkan"
    configurations {"Debug", "Release"}
    architecture "x64"

project "Learn Vulkan"
    location "Learn Vulkan"
    kind "ConsoleApp"
    language "C++"
    targetdir "bin/%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}/%{prj.name}"
    objdir "bin-int/%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}/%{prj.name}"

    files
	{
		"%{prj.name}/src/**.hpp",
		"%{prj.name}/src/**.cpp"
	}

    libdirs {"libs", "C:/VulkanSDK/1.2.176.1/Lib"}
    links {"glfw3", "vulkan-1"}
    includedirs {"vendor/GLFW/include", "vendor/GLM/glm", "C:/VulkanSDK/1.2.176.1/Include"}

    filter "configurations:Debug"
        symbols "On"
    filter "configurations:Release"
        optimize "On"
    
	filter "system:windows"
        cppdialect "C++17"
        systemversion "10.0.19041.0"
