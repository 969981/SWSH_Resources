/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f59470; name: FUN_00f59470
 */


void FUN_00f59470(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x18);
  FUN_01760e60(lVar2,0,0);
  *param_1 = lVar2;
  FUN_0175f270(lVar2,0xffffffff);
  iVar1 = FUN_0175dbf0(lVar2,0xfff0b9d8);
  *(int *)(param_1 + 1) = iVar1;
  FUN_0175ef30(lVar2,0xfffffffe);
  lVar3 = *(long *)(param_2 + 0x18);
  FUN_0175ef10(lVar3);
  if (lVar2 == 0) {
    FUN_01760310(lVar3);
  }
  else {
    FUN_01760c90(lVar2,0xfff0b9d8,(long)iVar1);
    if (lVar2 != lVar3) {
      FUN_0175edc0(lVar2,lVar3,1);
    }
  }
  FUN_01761120(lVar3,param_3);
  return;
}


