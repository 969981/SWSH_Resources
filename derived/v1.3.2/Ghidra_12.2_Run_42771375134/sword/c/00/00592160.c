/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00592160; name: FUN_00592160
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00592160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4 [16],
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,byte param_15,undefined4 param_16,
                 undefined4 param_17)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = param_4._0_8_;
  if ((DAT_02760728 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_02760728);
    uVar2 = (ulong)param_4._0_4_;
    if (iVar1 != 0) {
      __cxa_guard_release(param_10,param_1,param_2,param_3,&DAT_02760728,param_6,param_7,param_8,
                          param_9);
      uVar2 = (ulong)param_4._0_4_;
    }
  }
  if ((DAT_027605d6 & 1) == 0) {
    DAT_027605d6 = 1;
    DAT_02760808 = 0;
    DAT_02760810 = 0;
    _DAT_02760800 = 0;
    _DAT_02760814 = 0x3f800000;
    DAT_0276081c = 0xbf5db3d800000000;
    _DAT_02760824 = 0x3effffff;
    DAT_0276082c = 0xbf5db3d700000000;
    _DAT_02760834 = 0xbf000001;
    DAT_0276083c = 0x33bbbd2e00000000;
    _DAT_02760844 = 0xbf800000;
    DAT_0276084c = 0x3f5db3d800000000;
    DAT_02760854 = 0xbefffffd;
    DAT_0276085c = 0x3f5db3d400000000;
    DAT_02760864 = 0x3f000006;
    DAT_0276086c = 0;
  }
  FUN_00591c60(param_1,param_2,param_3,0x40000000,uVar2,0x40000000,param_5,param_6,param_7,param_8,
               param_9,7,&DAT_02760800,param_10,param_11,param_12,param_13,param_14,param_15 & 1,
               param_16,param_17);
  return;
}


