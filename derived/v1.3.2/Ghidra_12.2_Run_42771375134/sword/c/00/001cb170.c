/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cb170; name: FUN_001cb170
 */


void FUN_001cb170(long param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  FUN_003d99e0(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x1fa0) = 0;
  *(undefined8 *)(param_1 + 0x1fa8) = 0;
                    /* try { // try from 001cb1ac to 001cb21b has its CatchHandler @ 001cb8b4 */
  iVar2 = FUN_003ff600();
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    pcVar7 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = physx::shdfnd::MutexImpl]"
    ;
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    uVar6 = (*pcVar7)(plVar3,iVar2,pcVar1,"./../../../../PxShared/src/foundation/include\\PsMutex.h"
                      ,0x71);
  }
  *(undefined8 *)(param_1 + 0x1fb0) = uVar6;
  FUN_003ff550();
  *(undefined2 *)(param_1 + 0x1fb8) = 0;
                    /* try { // try from 001cb228 to 001cb233 has its CatchHandler @ 001cb89c */
  FUN_001cb900(param_1 + 0x1fc0,0x4000);
  *(undefined8 *)(param_1 + 0x1fe8) = 0;
  *(undefined8 *)(param_1 + 0x1ff0) = 0;
  *(undefined8 *)(param_1 + 0x1ff8) = 0;
  *(undefined8 *)(param_1 + 0x2000) = 0;
  *(undefined8 *)(param_1 + 0x2008) = 0;
  *(undefined8 *)(param_1 + 0x2010) = 0xffffffff3f400000;
  *(undefined8 *)(param_1 + 0x2018) = 0;
                    /* try { // try from 001cb260 to 001cb26f has its CatchHandler @ 001cb894 */
  FUN_001d1d20(param_1 + 0x1fe8,0x40);
  *(undefined8 *)(param_1 + 0x2020) = 0;
  *(undefined8 *)(param_1 + 0x2028) = 0;
  *(undefined8 *)(param_1 + 0x2030) = 0;
  *(undefined8 *)(param_1 + 0x2038) = 0;
  *(undefined8 *)(param_1 + 0x2040) = 0;
  *(undefined8 *)(param_1 + 0x2048) = 0;
  *(undefined8 *)(param_1 + 0x2050) = 0;
  *(undefined8 *)(param_1 + 0x2058) = 0;
  *(undefined8 *)(param_1 + 0x2060) = 0;
  *(undefined8 *)(param_1 + 0x2068) = 0;
  *(undefined8 *)(param_1 + 0x2070) = 0;
  *(undefined8 *)(param_1 + 0x2078) = 0xffffffff3f400000;
  *(undefined8 *)(param_1 + 0x2080) = 0;
                    /* try { // try from 001cb2ac to 001cb2bb has its CatchHandler @ 001cb884 */
  FUN_001d1d20(param_1 + 0x2050,0x40);
  *(undefined8 *)(param_1 + 0x2088) = 0;
  *(undefined8 *)(param_1 + 0x2090) = 0;
  *(undefined8 *)(param_1 + 0x2098) = 0;
  *(undefined8 *)(param_1 + 0x20a0) = 0;
  *(undefined8 *)(param_1 + 0x20a8) = 0;
  *(undefined8 *)(param_1 + 0x20b0) = 0xffffffff3f400000;
  *(undefined8 *)(param_1 + 0x20b8) = 0;
                    /* try { // try from 001cb2e0 to 001cb2eb has its CatchHandler @ 001cb874 */
  FUN_001d1d20(param_1 + 0x2088,0x40);
  *(undefined8 *)(param_1 + 0x20c0) = 0;
  *(undefined8 *)(param_1 + 0x20c8) = 0;
  *(undefined8 *)(param_1 + 0x20d0) = 0;
  *(undefined8 *)(param_1 + 0x20d8) = 0;
  *(undefined8 *)(param_1 + 0x20e0) = 0;
  *(undefined8 *)(param_1 + 0x20e8) = 0xffffffff3f400000;
  *(undefined8 *)(param_1 + 0x20f0) = 0;
                    /* try { // try from 001cb310 to 001cb31b has its CatchHandler @ 001cb6a0 */
  FUN_001d1d20(param_1 + 0x20c0,0x40);
  *(undefined8 *)(param_1 + 0x20f8) = 0;
  *(undefined8 *)(param_1 + 0x2100) = 0;
  *(undefined8 *)(param_1 + 0x2108) = 0;
  *(undefined8 *)(param_1 + 0x2110) = 0;
  *(undefined8 *)(param_1 + 0x2118) = 0;
  *(undefined8 *)(param_1 + 0x2120) = 0xffffffff3f400000;
  *(undefined8 *)(param_1 + 0x2128) = 0;
                    /* try { // try from 001cb340 to 001cb34b has its CatchHandler @ 001cb640 */
  FUN_001d1d20(param_1 + 0x20f8,0x40);
  *(undefined8 *)(param_1 + 0x2130) = 0;
  *(undefined8 *)(param_1 + 0x2138) = 0;
  *(undefined8 *)(param_1 + 0x2140) = 0;
  *(undefined8 *)(param_1 + 0x2148) = 0;
  *(undefined8 *)(param_1 + 0x2150) = 0;
  *(undefined8 *)(param_1 + 0x2158) = 0xffffffff3f400000;
  *(undefined8 *)(param_1 + 0x2160) = 0;
                    /* try { // try from 001cb370 to 001cb37b has its CatchHandler @ 001cb5d8 */
  FUN_001d1d20(param_1 + 0x2130,0x40);
  *(undefined8 *)(param_1 + 0x2168) = 0;
  *(undefined8 *)(param_1 + 0x2170) = 0;
  *(undefined8 *)(param_1 + 0x2178) = 0;
  *(undefined8 *)(param_1 + 0x2180) = 0;
  *(undefined8 *)(param_1 + 0x2188) = 0;
  *(undefined8 *)(param_1 + 0x2190) = 0xffffffff3f400000;
  *(undefined8 *)(param_1 + 0x2198) = 0;
                    /* try { // try from 001cb3a0 to 001cb3ab has its CatchHandler @ 001cb574 */
  FUN_001d1d20(param_1 + 0x2168,0x40);
  *(undefined8 *)(param_1 + 0x21a0) = 0;
  *(undefined8 *)(param_1 + 0x21a8) = 0;
  *(undefined8 *)(param_1 + 0x21b0) = 0;
  *(undefined8 *)(param_1 + 0x21b8) = 0;
  *(undefined8 *)(param_1 + 0x21c0) = 0;
  *(undefined8 *)(param_1 + 0x21c8) = 0xffffffff3f400000;
  *(undefined8 *)(param_1 + 0x21d0) = 0;
                    /* try { // try from 001cb3d0 to 001cb3db has its CatchHandler @ 001cb50c */
  FUN_001d1d20(param_1 + 0x21a0,0x40);
  *(undefined8 *)(param_1 + 0x21d8) = 0;
  *(undefined8 *)(param_1 + 0x21e0) = 0;
  *(undefined8 *)(param_1 + 0x21e8) = 0;
  *(undefined8 *)(param_1 + 0x21f0) = 0;
  *(undefined8 *)(param_1 + 0x21f8) = 0;
  *(undefined8 *)(param_1 + 0x2200) = 0xffffffff3f400000;
  *(undefined8 *)(param_1 + 0x2208) = 0;
                    /* try { // try from 001cb400 to 001cb40b has its CatchHandler @ 001cb4a8 */
  FUN_001d1d20(param_1 + 0x21d8,0x40);
  *(undefined4 *)(param_1 + 0x2210) = *(undefined4 *)(param_2 + 0xe0);
                    /* try { // try from 001cb41c to 001cb41f has its CatchHandler @ 001cb444 */
  FUN_001cba80(param_1 + 0x2218);
  *(undefined4 *)(param_1 + 0x2418) = 0;
  return;
}


