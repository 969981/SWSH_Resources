/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00672cf0; name: FUN_00672cf0
 */


undefined8 FUN_00672cf0(long param_1,long *param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[0] = 0;
  param_4[1] = 0;
  iVar1 = (**(code **)(*param_2 + 0xd8))(param_2,1);
  *param_4 = iVar1;
  iVar1 = (**(code **)(*param_2 + 0xd8))(param_2,1);
  param_4[1] = iVar1;
  iVar1 = (**(code **)(*param_2 + 0xd8))(param_2,1);
  param_4[2] = iVar1;
  iVar1 = (**(code **)(*param_2 + 0xd8))(param_2,1);
  uVar2 = 0;
  param_4[3] = iVar1;
  if (((iVar1 == 2) && (*param_4 == 3)) && (param_4[2] == 0 && param_4[1] == 0)) {
    uVar2 = 1;
    iVar1 = (**(code **)(*param_2 + 0xd8))(param_2,1);
    param_4[4] = iVar1;
    iVar1 = (**(code **)(*param_2 + 0xd8))(param_2,1);
    param_4[5] = iVar1;
    FUN_00682fc0(param_2,(long)param_3);
    (**(code **)(*param_2 + 0x118))(param_2,param_1 + 0x50,1);
    FUN_00682fc0(param_2,(long)param_3);
  }
  return uVar2;
}


