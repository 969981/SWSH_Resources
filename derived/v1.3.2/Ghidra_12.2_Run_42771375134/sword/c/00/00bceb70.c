/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bceb70; name: FUN_00bceb70
 */


int FUN_00bceb70(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_00bccb30();
  if (lVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar1 = FUN_00878830(lVar2,param_5);
    iVar3 = 0;
    if (iVar1 + 1U < 3) {
      iVar3 = iVar1 + 1;
    }
    FUN_00878860(lVar2,param_5,iVar3);
    FUN_00bce610(param_1,param_2,param_3,param_4);
  }
  return iVar3;
}


