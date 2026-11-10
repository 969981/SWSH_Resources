/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f64e20; name: FUN_00f64e20
 */


void FUN_00f64e20(long *param_1,undefined8 param_2,long *param_3)

{
  byte *pbVar1;
  long *plVar2;
  undefined4 uVar3;
  long *plVar4;
  byte *pbVar5;
  long lVar6;
  
  lVar6 = *param_1;
  if (lVar6 == 0) {
    FUN_01760310(0);
  }
  else {
    FUN_01760c90(lVar6,0xfff0b9d8,(long)(int)param_1[1]);
    if (*param_1 != lVar6) {
      FUN_0175edc0(*param_1,lVar6,1);
    }
  }
  lVar6 = *param_1;
  pbVar1 = (byte *)*param_3;
  plVar2 = (long *)param_3[1];
  uVar3 = FUN_0175ef10(lVar6);
  (*(code *)**(undefined8 **)*plVar2)((undefined8 *)*plVar2,lVar6);
  plVar4 = (long *)*plVar2;
  *plVar2 = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  pbVar5 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbVar5 = pbVar1 + 1;
  }
  FUN_017613e0(lVar6,uVar3,pbVar5);
  FUN_0175ef30(*param_1,0xfffffffe);
  return;
}


