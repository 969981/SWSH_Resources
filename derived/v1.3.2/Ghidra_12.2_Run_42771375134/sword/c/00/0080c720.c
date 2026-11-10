/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080c720; name: FUN_0080c720
 */


undefined8 FUN_0080c720(long *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x60))();
  if (param_3 < iVar1) {
    return 0;
  }
  lVar3 = (**(code **)(*param_1 + 0x70))(param_1,param_2);
  if (lVar3 - param_2 != (long)iVar1) {
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
    FUN_0080c430(iVar1,uVar2,lVar3 - param_2 & 0xffffffff,param_1);
  }
  return 1;
}


