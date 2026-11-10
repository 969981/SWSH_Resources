/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087e920; name: FUN_0087e920
 */


void FUN_0087e920(long param_1,uint param_2)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  byte bVar8;
  
  sVar2 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  uVar3 = FUN_00877740();
  iVar4 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),0);
  iVar5 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),1);
  bVar8 = 2;
  if (iVar4 == 0) {
    bVar8 = 1;
  }
  bVar1 = iVar4 != 0;
  if (iVar5 != 0) {
    bVar1 = bVar8;
  }
  iVar4 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),2);
  if (iVar4 != 0) {
    bVar1 = bVar1 + 1;
  }
  iVar4 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),3);
  if (iVar4 != 0) {
    bVar1 = bVar1 + 1;
  }
  if (sVar2 == 0) {
    if (bVar1 == 0) {
      uVar6 = FUN_00880a40(0x54,0);
      FUN_00870bc0(*(undefined8 *)(param_1 + 0x98),0,0x54);
      FUN_00870e80(*(undefined8 *)(param_1 + 0x98),0,0);
      uVar7 = *(undefined8 *)(param_1 + 0x98);
      param_2 = 0;
      goto LAB_0087ea78;
    }
  }
  else {
    if (bVar1 < 4) {
      FUN_0087bd30(param_1,uVar3);
      return;
    }
    if ((param_2 & 0xff) < 4) {
      uVar6 = FUN_00880a40(uVar3,0);
      FUN_00870bc0(*(undefined8 *)(param_1 + 0x98),param_2,uVar3);
      FUN_00870e80(*(undefined8 *)(param_1 + 0x98),param_2,0);
      uVar7 = *(undefined8 *)(param_1 + 0x98);
LAB_0087ea78:
      FUN_00870d20(uVar7,param_2,uVar6);
      return;
    }
  }
  return;
}


