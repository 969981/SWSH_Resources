/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fa280; name: FUN_004fa280
 */


undefined8 FUN_004fa280(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 0x14) == 0) {
    return 0x1f;
  }
  if ((*(int *)(param_2 + 8) != 0) && (*(float *)(param_2 + 0x40) < 0.0)) {
    return 0x1f;
  }
  if (((*(byte *)(param_2 + 0x18) >> 1 & 1) != 0) && (0x3ff < *(int *)(param_2 + 0x44) - 1U)) {
    return 0x1f;
  }
  *(int *)(param_1 + 0x610) = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x614) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x618) = param_3;
  *(undefined4 *)(param_1 + 0x61c) = *(undefined4 *)(param_2 + 0x4c);
  iVar1 = FUN_004fe310(param_1 + 0x2a0,param_2,param_1);
  if (iVar1 == 1) {
    uVar2 = FUN_004ffad0(param_1,param_2 + 0x20);
    return uVar2;
  }
  return 2;
}


