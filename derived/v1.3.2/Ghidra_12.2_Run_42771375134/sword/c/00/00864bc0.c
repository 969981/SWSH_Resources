/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00864bc0; name: FUN_00864bc0
 */


void FUN_00864bc0(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = DAT_029f5a88;
  if (param_1 == 0) {
    FUN_00885e80(DAT_029f5aa8,DAT_029f5a88);
    return;
  }
  uVar2 = FUN_008875b0(DAT_029f5ae8,param_1,param_2,DAT_029f5a88);
  if ((uVar2 & 1) == 0) {
    FUN_00885df0(uVar1,param_1,param_2);
    FUN_00887660(DAT_029f5ae8,uVar1);
    return;
  }
  return;
}


