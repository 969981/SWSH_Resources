/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092e190; name: FUN_0092e190
 */


int FUN_0092e190(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar2 = FUN_00880c30(param_2);
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar7,3,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x28,iVar2);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x4c,0);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x48,0);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x29,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x88);
  iVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x48);
  iVar4 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x4c);
  iVar5 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x29);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  if ((iVar2 == 0) || (iVar6 = 0, iVar3 == 0)) {
    if (iVar2 != 0) {
      iVar5 = 0;
    }
    iVar6 = iVar5 + iVar2 << (iVar4 != 0);
  }
  return iVar6;
}


