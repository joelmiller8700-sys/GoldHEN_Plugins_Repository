#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

#include "plugin_common.h"

attr_public const char *g_pluginName = "gtav_mod_menu";
attr_public const char *g_pluginDesc = "GTA V 1.56 Mod Menu (CUSA00419)";
attr_public const char *g_pluginAuth = "JoelMiller";
attr_public uint32_t g_pluginVersion = 0x00000100;

int32_t attr_public plugin_load(int32_t argc, const char* argv[])
{
    final_printf("[GoldHEN] %s Plugin Started.\n", g_pluginName);
    final_printf("[GoldHEN] <%s\\Ver.0x%08x> %s\n", g_pluginName, g_pluginVersion, g_pluginDesc);
    final_printf("[GoldHEN] Plugin Author(s): %s\n", g_pluginAuth);

    char msg[128] = {0};
    snprintf(msg, sizeof(msg), "GTA V 1.56 Menu Loaded!\nBy: %s", g_pluginAuth);
    NotifyStatic(TEX_ICON_SYSTEM, msg);

    return 0;
}

int32_t attr_public plugin_unload(int32_t argc, const char* argv[])
{
    final_printf("[GoldHEN] %s Plugin Ended.\n", g_pluginName);
    return 0;
}

int32_t attr_module_hidden module_start(size_t argc, const void *args)
{
    return 0;
}

int32_t attr_module_hidden module_stop(size_t argc, const void *args)
{
    return 0;
}
