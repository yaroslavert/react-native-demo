#pragma once
#include "MainPage.g.h"
#include <winrt/Microsoft.ReactNative.h>

namespace winrt::m1::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();
    };
}

namespace winrt::m1::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}

