/**
 * @file src/cpdetect/signatures/yara/database/x86/pe/compiler/compiler_08.cpp
 * @brief Database of signatures.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

const char *x86PeCompiler_08 =
R"x86_pe_compiler(rule rule_311_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		pattern = "6A??68????????E8????????8B45"
	strings:
		$1 = { 6A ?? 68 ?? ?? ?? ?? E8 ?? ?? ?? ?? 8B 45 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_312_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		pattern = "6A??68????????E8????????8D45"
	strings:
		$1 = { 6A ?? 68 ?? ?? ?? ?? E8 ?? ?? ?? ?? 8D 45 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_313_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		pattern = "6A??68????????E8????????B?94000000"
	strings:
		$1 = { 6A ?? 68 ?? ?? ?? ?? E8 ?? ?? ?? ?? B? 94 00 00 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_314_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		pattern = "6A??68????????E8????????FF35????????E8????????59A3"
	strings:
		$1 = { 6A ?? 68 ?? ?? ?? ?? E8 ?? ?? ?? ?? FF 35 ?? ?? ?? ?? E8 ?? ?? ?? ?? 59 A3 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_315_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		pattern = "817C2404"
	strings:
		$1 = { ( 81 | 83 ) 7C 24 04 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_317_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		pattern = "837C2408017505E8????????FF7424048B4C24108B54240CE8????????59C20C00"
	strings:
		$1 = { 83 7C 24 08 01 75 05 E8 ?? ?? ?? ?? FF 74 24 04 8B 4C 24 10 8B 54 24 0C E8 ?? ?? ?? ?? 59 C2 0C 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_318_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		pattern = "8B442404"
	strings:
		$1 = { 8B ( 44 | 4C ) 24 ( 04 | 08 | 0C ) }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_324_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		pattern = "8BC05355568B74241485F657B8010000000F84"
	strings:
		$1 = { 8B C0 53 55 56 8B 74 24 14 85 F6 57 B8 01 00 00 00 0F 84 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_325_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		pattern = "8BC0558BEC"
	strings:
		$1 = { 8B C0 55 8B EC }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_326_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "4.2"
		pattern = "64A100000000558BEC6AFF68????????68????????5064????????????83????53565789"
	strings:
		$1 = { 64 A1 00 00 00 00 55 8B EC 6A FF 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 50 64 ?? ?? ?? ?? ?? ?? 83 ?? ?? 53 56 57 89 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_327_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "4.2"
		pattern = "53B8010000008B5C240C565785DB5575"
	strings:
		$1 = { 53 B8 01 00 00 00 8B 5C 24 0C 56 57 85 DB 55 75 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_328_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "4.x"
		pattern = "64A1000000005589E56AFF68????????68????????506489250000000083EC??535657"
	strings:
		$1 = { 64 A1 00 00 00 00 55 89 E5 6A FF 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 50 64 89 25 00 00 00 00 83 EC ?? 53 56 57 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_329_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "4.x"
		pattern = "64A100000000558BEC6AFF68????????68????????506489250000000083EC??535657"
	strings:
		$1 = { 64 A1 00 00 00 00 55 8B EC 6A FF 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 50 64 89 25 00 00 00 00 83 EC ?? 53 56 57 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_330_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		pattern = "558BEC6AFF68?0??400064A100000000506489250000000051B8??7?0100E8?DE?FFFF5356578965F0C?85????F?FF"
	strings:
		$1 = { 55 8B EC 6A FF 68 ?0 ?? 40 00 64 A1 00 00 00 00 50 64 89 25 00 00 00 00 51 B8 ?? 7? 01 00 E8 ?D E? FF FF 53 56 57 89 65 F0 C? 85 ?? ?? F? FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_331_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		extra = "Visual Studio 2005"
		pattern = "E8??0?0000E936FDFFFF"
	strings:
		$1 = { E8 ?? 0? 00 00 E9 36 FD FF FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_332_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		pattern = "E9????????E9????????E9????????E9????????E9????????E9????????E9????????E9????????E9????????E9????????E9????????E9????????E9????????E9????????E9????????E9????????E9????????E9????????E9????????E9????????E9"
	strings:
		$1 = { E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 ?? ?? ?? ?? E9 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_333_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "8.0"
		extra = "Visual Studio 2005"
		pattern = "6A1468????????E8????????BB94000000536A008B??????????FFD750FF??????????8BF085F6750A6A12E8????????59EB18891E56FF??????????5685C0751450FFD750FF??????????B8"
	strings:
		$1 = { 6A 14 68 ?? ?? ?? ?? E8 ?? ?? ?? ?? BB 94 00 00 00 53 6A 00 8B ?? ?? ?? ?? ?? FF D7 50 FF ?? ?? ?? ?? ?? 8B F0 85 F6 75 0A 6A 12 E8 ?? ?? ?? ?? 59 EB 18 89 1E 56 FF ?? ?? ?? ?? ?? 56 85 C0 75 14 50 FF D7 50 FF ?? ?? ?? ?? ?? B8 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_334_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "8.0"
		extra = "Visual Studio 2005"
		pattern = "83EC04837C240C01560F85??00000068"
	strings:
		$1 = { 83 EC 04 83 7C 24 0C 01 56 0F 85 ?? 00 00 00 68 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_335_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "8.0"
		extra = "Visual Studio 2005"
		pattern = "83EC4456FF15????????8BF08A0?3C2275"
	strings:
		$1 = { 83 EC 44 56 FF 15 ?? ?? ?? ?? 8B F0 8A 0? 3C 22 75 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_336_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		pattern = "53565755BB010000008B?C24183B??752AA1"
	strings:
		$1 = { 53 56 57 55 BB 01 00 00 00 8B ?C 24 18 3B ?? 75 2A A1 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_337_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		pattern = "53565764A1200000008BD88B74241085F60F85"
	strings:
		$1 = { 53 56 57 64 A1 20 00 00 00 8B D8 8B 74 24 10 85 F6 0F 85 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_338_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		pattern = "5356578B7C241483FF01"
	strings:
		$1 = { 53 56 57 8B 7C 24 14 83 FF 01 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_339_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		pattern = "803D????????007512E81200000084C0B0007409C605????????01B001C20C00"
	strings:
		$1 = { 80 3D ?? ?? ?? ?? 00 75 12 E8 12 00 00 00 84 C0 B0 00 74 09 C6 05 ?? ?? ?? ?? 01 B0 01 C2 0C 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_340_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "debug"
		pattern = "E9????0000E9????0000E9????0000E9????0000E9????0000E9????0000E9????0000E9????0000E9????0000E9????0000E9????0000E9????0000E9????0000E9????0000E9????0000E9????0000E9????0000E9????0000E9????0000E9????0000"
	strings:
		$1 = { E9 ?? ?? 00 00 E9 ?? ?? 00 00 E9 ?? ?? 00 00 E9 ?? ?? 00 00 E9 ?? ?? 00 00 E9 ?? ?? 00 00 E9 ?? ?? 00 00 E9 ?? ?? 00 00 E9 ?? ?? 00 00 E9 ?? ?? 00 00 E9 ?? ?? 00 00 E9 ?? ?? 00 00 E9 ?? ?? 00 00 E9 ?? ?? 00 00 E9 ?? ?? 00 00 E9 ?? ?? 00 00 E9 ?? ?? 00 00 E9 ?? ?? 00 00 E9 ?? ?? 00 00 E9 ?? ?? 00 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_341_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "8.0 debug"
		extra = "Visual Studio 2005"
		pattern = "558BECE8?80?0000E8030000005DC3CC558BEC6AFE68????400068?0??400064A1000000005083C4E4535657A1???040003145F833C5508D45F064A3000000008965E8C745FC00000000C745DC00000000E80A0200008B40048945E0C745E4000000006A"
	strings:
		$1 = { 55 8B EC E8 ?8 0? 00 00 E8 03 00 00 00 5D C3 CC 55 8B EC 6A FE 68 ?? ?? 40 00 68 ?0 ?? 40 00 64 A1 00 00 00 00 50 83 C4 E4 53 56 57 A1 ?? ?0 40 00 31 45 F8 33 C5 50 8D 45 F0 64 A3 00 00 00 00 89 65 E8 C7 45 FC 00 00 00 00 C7 45 DC 00 00 00 00 E8 0A 02 00 00 8B 40 04 89 45 E0 C7 45 E4 00 00 00 00 6A }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_342_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "8.0"
		extra = "Visual Studio 2005"
		pattern = "E8??030000E99EFDFFFF558BEC81EC28030000A3????4000890D????40008915????4000891D????40008935????4000893D????4000668C15????4000668C0D????4000668C1D????4000668C05????4000668C25????4000668C2D????40009C8F05"
	strings:
		$1 = { E8 ?? 03 00 00 E9 9E FD FF FF 55 8B EC 81 EC 28 03 00 00 A3 ?? ?? 40 00 89 0D ?? ?? 40 00 89 15 ?? ?? 40 00 89 1D ?? ?? 40 00 89 35 ?? ?? 40 00 89 3D ?? ?? 40 00 66 8C 15 ?? ?? 40 00 66 8C 0D ?? ?? 40 00 66 8C 1D ?? ?? 40 00 66 8C 05 ?? ?? 40 00 66 8C 25 ?? ?? 40 00 66 8C 2D ?? ?? 40 00 9C 8F 05 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_343_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "8.0"
		extra = "Visual Studio 2005"
		pattern = "FF25???04?00CCCC03300100070000000000000016800C0000042ACC0330010007000000000000001680020000042ACC0330010007000000000000001680070000042ACC03300100070000000000000016800F0000042ACC033001000700000000000000"
	strings:
		$1 = { FF 25 ?? ?0 4? 00 CC CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 0C 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 02 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 07 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 0F 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 00 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_344_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "8.0"
		extra = "Visual Studio 2005"
		pattern = "FF250030400000000?????0?0?0?000000000000????0000000000?0??????0?000???????????0?0?0?000000000000????????000???????????0?0?0?000000000000??????0?000???????????0?0?0?000000000000??????0?000???????????0?"
	strings:
		$1 = { FF 25 00 30 40 00 00 00 0? ?? ?? 0? 0? 0? 00 00 00 00 00 00 ?? ?? 00 00 00 00 00 ?0 ?? ?? ?? 0? 00 0? ?? ?? ?? ?? ?? 0? 0? 0? 00 00 00 00 00 00 ?? ?? ?? ?? 00 0? ?? ?? ?? ?? ?? 0? 0? 0? 00 00 00 00 00 00 ?? ?? ?? 0? 00 0? ?? ?? ?? ?? ?? 0? 0? 0? 00 00 00 00 00 00 ?? ?? ?? 0? 00 0? ?? ?? ?? ?? ?? 0? }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_345_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "8.0 debug"
		extra = "Visual Studio 2005"
		pattern = "FF25003040000000033001000F0000000000000023000000000000F07F80070000042ACC0330010007000000000000001680120000042ACC0330010007000000000000001680040000042ACC03300100070000000000000016800C0000042ACC03300100"
	strings:
		$1 = { FF 25 00 30 40 00 00 00 03 30 01 00 0F 00 00 00 00 00 00 00 23 00 00 00 00 00 00 F0 7F 80 07 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 12 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 04 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 0C 00 00 04 2A CC 03 30 01 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_346_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "8.0 debug"
		extra = "Visual Studio 2005"
		pattern = "FF258??04?00CCCCCCCCCCCCCCCCCCCCCCCC03300100070000000000000016800D0000042ACC0330010007000000000000001680030000042ACC0330010007000000000000001680080000042ACC0330010007000000000000001680100000042ACC0330"
	strings:
		$1 = { FF 25 8? ?0 4? 00 CC CC CC CC CC CC CC CC CC CC CC CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 0D 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 03 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 08 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 10 00 00 04 2A CC 03 30 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_347_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "9.0 debug"
		extra = "Visual Studio 2008"
		pattern = "8BFF558BECE8?60?0000E8110000005DC3CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC8BFF558BEC6AFE68????400068?0??400064A1000000005083C4E4535657A1???040003145F833C5508D45F064A3000000008965E8C745FC00000000C745DC00000000E8"
	strings:
		$1 = { 8B FF 55 8B EC E8 ?6 0? 00 00 E8 11 00 00 00 5D C3 CC CC CC CC CC CC CC CC CC CC CC CC CC CC CC 8B FF 55 8B EC 6A FE 68 ?? ?? 40 00 68 ?0 ?? 40 00 64 A1 00 00 00 00 50 83 C4 E4 53 56 57 A1 ?? ?0 40 00 31 45 F8 33 C5 50 8D 45 F0 64 A3 00 00 00 00 89 65 E8 C7 45 FC 00 00 00 00 C7 45 DC 00 00 00 00 E8 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_348_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "9.0"
		extra = "Visual Studio 2008"
		pattern = "E8??040000E99FFDFFFF8BFF558BEC81EC28030000A3????4000890D????40008915????4000891D????40008935????4000893D????4000668C15????4000668C0D????4000668C1D????4000668C05????4000668C25????4000668C2D????40009C8F"
	strings:
		$1 = { E8 ?? 04 00 00 E9 9F FD FF FF 8B FF 55 8B EC 81 EC 28 03 00 00 A3 ?? ?? 40 00 89 0D ?? ?? 40 00 89 15 ?? ?? 40 00 89 1D ?? ?? 40 00 89 35 ?? ?? 40 00 89 3D ?? ?? 40 00 66 8C 15 ?? ?? 40 00 66 8C 0D ?? ?? 40 00 66 8C 1D ?? ?? 40 00 66 8C 05 ?? ?? 40 00 66 8C 25 ?? ?? 40 00 66 8C 2D ?? ?? 40 00 9C 8F }
	condition:
		for any of them : ( $ at pe.entry_point )
}
)x86_pe_compiler";
