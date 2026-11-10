/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00686310; name: FUN_00686310
 */


int FUN_00686310(undefined8 param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = (**(code **)(*param_2 + 0x78))(param_2);
  iVar2 = (**(code **)(*param_2 + 0x60))(param_2);
  iVar2 = iVar2 + iVar1;
  iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  if (0 < iVar1) {
    lVar4 = 0;
    do {
      uVar3 = (**(code **)(*param_2 + 0x68))(param_2,lVar4);
      iVar1 = FUN_00686310(param_1,uVar3);
      iVar2 = iVar1 + iVar2;
      lVar4 = lVar4 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
    } while (lVar4 < iVar1);
  }
  return iVar2;
}


