/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00452ea0; name: FUN_00452ea0
 */


undefined8 FUN_00452ea0(long param_1,undefined4 *param_2,void *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  
  memcpy(auStack_60,param_3,0x30);
  uVar1 = FUN_004530c0(param_1,auStack_60,param_2 + 10);
  *param_2 = uVar1;
  memcpy(auStack_90,param_3,0x30);
  uVar1 = FUN_004533e0(param_1,auStack_90,0x1a);
  param_2[0xb] = uVar1;
  memcpy(auStack_c0,param_3,0x30);
  uVar1 = FUN_004533e0(param_1,auStack_c0,0x19);
  param_2[0xc] = uVar1;
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_00452c80(param_1,param_2 + 0xd,0x13,param_3);
    FUN_00452c80(param_1,param_2 + 0xe,0x14,param_3);
    FUN_00452c80(param_1,param_2 + 0xf,0x15,param_3);
    FUN_00452c80(param_1,param_2 + 0x10,0x16,param_3);
    FUN_00452c80(param_1,param_2 + 0x11,0x3c,param_3);
    FUN_00452c80(param_1,param_2 + 0x12,0x3d,param_3);
    FUN_00452c80(param_1,param_2 + 0x13,0x3e,param_3);
    FUN_00452c80(param_1,param_2 + 0x14,0x3f,param_3);
    FUN_00452c80(param_1,param_2 + 0x15,0x40,param_3);
    FUN_00452c80(param_1,param_2 + 0x16,0x41,param_3);
    FUN_00452c80(param_1,param_2 + 0x17,0x42,param_3);
    FUN_00452c80(param_1,param_2 + 0x18,0x43,param_3);
    param_2[0x19] = **(undefined4 **)(param_1 + 0x88);
    param_2[0x1a] = *(undefined4 *)(*(long *)(param_1 + 0x88) + 4);
    param_2[0x1b] = *(undefined4 *)(*(long *)(param_1 + 0x88) + 8);
    param_2[0x1c] = *(undefined4 *)(*(long *)(param_1 + 0x88) + 0xc);
  }
  *(byte *)(param_2 + 0x20) = (byte)(*(uint *)(param_1 + 0x9c) >> 0x12) & 1;
  FUN_00452c80(param_1,param_2 + 0x1d,0x17,param_3);
  FUN_00452c80(param_1,param_2 + 0x1e,0x44,param_3);
  FUN_00452c80(param_1,param_2 + 0x1f,0x45,param_3);
  return 1;
}


