/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f9ea30; name: FUN_00f9ea30
 */


void FUN_00f9ea30(long *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    FUN_01760310(0);
  }
  else {
    FUN_01760c90(lVar2,0xfff0b9d8,(long)(int)param_1[1]);
    if (*param_1 != lVar2) {
      FUN_0175edc0(*param_1,lVar2,1);
    }
  }
  lVar2 = *param_1;
  plVar3 = *(long **)(param_3 + 8);
  uVar1 = FUN_0175ef10(lVar2);
  if (*plVar3 == 0) {
    FUN_01760310(lVar2);
  }
  else {
    FUN_01760c90(*plVar3,0xfff0b9d8,(long)(int)plVar3[1]);
    if (*plVar3 != lVar2) {
      FUN_0175edc0(*plVar3,lVar2,1);
    }
  }
  FUN_01761960(lVar2,uVar1);
  FUN_0175ef30(*param_1,0xfffffffe);
  return;
}


