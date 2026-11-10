/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b3240; name: FUN_012b3240
 */


void FUN_012b3240(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x68))();
  uVar2 = FUN_00787110(param_1[0x4b],uVar1);
  if ((uVar2 & 1) == 0) {
    FUN_00786f10(param_1[0x4b],uVar1,1);
  }
  FUN_00786fd0(0,param_1[0x4b],uVar1);
  FUN_00787170(param_1[0x4b],uVar1,1);
  return;
}


