/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00883ae0; name: FUN_00883ae0
 */


bool FUN_00883ae0(long *param_1,undefined8 param_2,long param_3,int *param_4)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = *param_4;
  if (iVar3 == 5) {
    return true;
  }
  if (iVar3 == 7) {
    if (param_3 != 0) {
      uVar2 = FUN_008787f0(param_3);
      uVar4 = (**(code **)(*param_1 + 0x28))(param_1,uVar2);
      if (((uVar4 & 1) == 0) && (uVar4 = FUN_0087d610(param_3,2), (uVar4 & 1) == 0)) {
        iVar3 = FUN_008783b0(param_2);
        if ((iVar3 == 0x268) && (iVar3 = FUN_008783b0(param_3), iVar3 == 0x24c)) {
          return true;
        }
        iVar3 = FUN_008783b0(param_2);
        if ((iVar3 == 0x24c) && (iVar3 = FUN_008783b0(param_3), iVar3 == 0x268)) {
          return true;
        }
      }
    }
  }
  else if (iVar3 == 6) {
    sVar1 = FUN_008787f0(param_2);
    return sVar1 == (short)param_4[1];
  }
  return false;
}


