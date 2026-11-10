/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa13e0; name: FUN_00fa13e0
 */


void FUN_00fa13e0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    FUN_01760310(0);
  }
  else {
    FUN_01760c90(lVar4,0xfff0b9d8,(long)(int)param_1[1]);
    if (*param_1 != lVar4) {
      FUN_0175edc0(*param_1,lVar4,1);
    }
  }
  lVar4 = *param_1;
  uVar1 = *param_3;
  puVar2 = (undefined4 *)param_3[1];
  uVar3 = FUN_0175ef10(lVar4);
  FUN_01760350(lVar4,*puVar2);
  FUN_017613e0(lVar4,uVar3,uVar1);
  lVar4 = *param_1;
  uVar1 = param_3[2];
  puVar2 = (undefined4 *)param_3[3];
  uVar3 = FUN_0175ef10(lVar4);
  FUN_01760350(lVar4,*puVar2);
  FUN_017613e0(lVar4,uVar3,uVar1);
  lVar4 = *param_1;
  uVar1 = param_3[4];
  puVar2 = (undefined4 *)param_3[5];
  uVar3 = FUN_0175ef10(lVar4);
  FUN_01760350(lVar4,*puVar2);
  FUN_017613e0(lVar4,uVar3,uVar1);
  lVar4 = *param_1;
  uVar1 = param_3[6];
  puVar2 = (undefined4 *)param_3[7];
  uVar3 = FUN_0175ef10(lVar4);
  FUN_01760350(lVar4,*puVar2);
  FUN_017613e0(lVar4,uVar3,uVar1);
  FUN_0175ef30(*param_1,0xfffffffe);
  return;
}


