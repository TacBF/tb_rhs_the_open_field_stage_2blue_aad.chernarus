#include "tb_defines.hpp"

zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY,     {3}      	, {}    , 1      , {}        , 0    , "%3" },
{ 2, TEAM_RED, 		SPAWN_XRAY,     {}			, {}    , 1      , {}        , 0    , "%3" },

{ 3, TEAM_RED, 		SPAWN_NEVER,    {4}      	, {}   	, 1      , {}        , 0    , "%1" },
{ 4, TEAM_RED, 		SPAWN_NEVER,    {5,6}  		, {}    , 1      , {}        , 0    , "%1" },
{ 5, TEAM_RED, 		SPAWN_NEVER,    {7}      	, {6}  	, 1      , {}        , 0    , "%1" },
{ 6, TEAM_RED, 		SPAWN_NEVER,    {7}      	, {5}   , 1      , {}        , 0    , "%1" },
{ 7, TEAM_RED,	 	SPAWN_NEVER,    {8}			, {}    , 1      , {}        , 0    , "%1" },
{ 8, TEAM_RED, 		SPAWN_NEVER,    {9}      	, {}    , 1      , {}		 , 0    , "%1" },
{ 9, TEAM_RED, 		SPAWN_NEVER,  	{2}			, {}    , 1      , {}    	 , 0    , "%1" },

{ 10,TEAM_RED, 		SPAWN_INSTANT,  {}			, {}    , 1	     , {4,8}     , 2    , "HIDDEN" },
{ 11,TEAM_RED, 		SPAWN_INSTANT,  {}			, {}    , 1      , {2,7}   	 , 2    , "HIDDEN" }
};