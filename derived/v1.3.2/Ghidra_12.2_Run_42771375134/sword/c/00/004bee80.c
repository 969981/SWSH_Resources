/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bee80; name: FUN_004bee80
 */


bool FUN_004bee80(long *param_1,long param_2,int *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_24 [4];
  
  iVar1 = FUN_00480360(param_1,auStack_24);
  *param_3 = iVar1;
  if (iVar1 == 3) {
    if ((param_2 == 0) || (iVar1 = (**(code **)(*param_1 + 0x20))(param_1), iVar1 == 9)) {
      iVar1 = 2;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x228))(param_1,param_2);
      iVar1 = 1;
      if ((uVar2 & 1) != 0) {
        iVar1 = 2;
      }
    }
    *param_3 = iVar1;
  }
  return iVar1 != 1;
}


