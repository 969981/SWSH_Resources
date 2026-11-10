/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f51c80; name: FUN_00f51c80
 */


void FUN_00f51c80(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    FUN_01760310(0);
  }
  else {
    FUN_01760c90(lVar2,0xfff0b9d8,(long)(int)param_2[1]);
    if (*param_2 != lVar2) {
      FUN_0175edc0(*param_2,lVar2,1);
    }
  }
  lVar3 = *param_2;
  FUN_01760900(lVar3,0xffffffff,param_3);
  FUN_01760900(*param_2,0xffffffff,*param_4);
  lVar2 = *param_2;
  *param_1 = lVar2;
  FUN_0175f270(lVar2,0xffffffff);
  uVar1 = FUN_0175dbf0(lVar2,0xfff0b9d8);
  *(undefined4 *)(param_1 + 1) = uVar1;
  FUN_0175ef30(lVar3,0xfffffffd);
  FUN_0175ef30(*param_2,0xfffffffe);
  return;
}


