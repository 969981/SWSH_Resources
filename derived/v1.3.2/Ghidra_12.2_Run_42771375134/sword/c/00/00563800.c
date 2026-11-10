/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00563800; name: FUN_00563800
 */


uint FUN_00563800(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined1 auStack_40 [16];
  
  if ((DAT_027605d2 & 1) == 0) {
    DAT_027605d2 = 1;
    DAT_02760730 = "_RVALUE";
    DAT_02760738 = "_GVALUE";
    DAT_02760740 = "_BVALUE";
    DAT_02760748 = "_AVALUE";
    DAT_02760750 = "_RGBA8";
    DAT_02760758 = "_ARGB8";
    DAT_02760760 = "_ABGR8";
  }
  FUN_00550fe0(auStack_40,param_3);
  FUN_005528d0(auStack_50,auStack_40,DAT_02760730);
  uVar1 = FUN_00563090(param_1,param_2,local_48);
  FUN_00551380(auStack_50);
  FUN_005528d0(auStack_50,auStack_40,DAT_02760738);
  uVar2 = FUN_00563090(param_1,param_2 + 0x58,local_48);
  if (-1 < (int)uVar2) {
    uVar2 = uVar1 & (int)uVar1 >> 0x1f;
  }
  FUN_00551380(auStack_50);
  FUN_005528d0(auStack_50,auStack_40,DAT_02760740);
  uVar1 = FUN_00563090(param_1,param_2 + 0xb0,local_48);
  if (-1 < (int)uVar1) {
    uVar1 = uVar2;
  }
  FUN_00551380(auStack_50);
  FUN_005528d0(auStack_50,auStack_40,DAT_02760748);
  uVar2 = FUN_00563090(param_1,param_2 + 0x108,local_48);
  if (-1 < (int)uVar2) {
    uVar2 = uVar1;
  }
  FUN_00551380(auStack_50);
  FUN_005528d0(auStack_50,auStack_40,DAT_02760750);
  uVar1 = FUN_00563090(param_1,param_2 + 0x160,local_48);
  if (-1 < (int)uVar1) {
    uVar1 = uVar2;
  }
  FUN_00551380(auStack_50);
  FUN_005528d0(auStack_50,auStack_40,DAT_02760758);
  uVar2 = FUN_00563090(param_1,param_2 + 0x1b8,local_48);
  if (-1 < (int)uVar2) {
    uVar2 = uVar1;
  }
  FUN_00551380(auStack_50);
  FUN_005528d0(auStack_50,auStack_40,DAT_02760760);
  uVar1 = FUN_00563090(param_1,param_2 + 0x210,local_48);
  if (-1 < (int)uVar1) {
    uVar1 = uVar2;
  }
  FUN_00551380(auStack_50);
  FUN_00551380(auStack_40);
  return uVar1;
}


