// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently

#pragma once

#pragma warning(disable:4995)
#include "xr_3da/stdafx.h"
#pragma warning(disable:4995)
#include <d3dx9.h>
#pragma warning(default:4995)
#pragma warning(disable:4714)
#pragma warning( 4 : 4018 )
#pragma warning( 4 : 4244 )

#define		R_R1	1
#define		R_R2	2
#define		RENDER	R_R1

#include "xr_3da/ResourceManager.h"
#include "xr_3da/vis_common.h"
#include "xr_3da/Render.h"
#include "xr_3da/IGame_Level.h"
#include "xr_3da/blenders/Blender.h"
#include "xr_3da/blenders/Blender_CLSID.h"
#include "xrParticles/psystem.h"
#include "xr_3da/xrRender/xrRender_console.h"
#include "FStaticRender.h"

#define		TEX_POINT_ATT	"internal\\internal_light_attpoint"
#define		TEX_SPOT_ATT	"internal\\internal_light_attclip"
