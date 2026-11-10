/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092b970; name: FUN_0092b970
 */


int FUN_0092b970(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 *param_5)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 local_58;
  
  uVar5 = FUN_00880d20(param_2);
  uVar4 = FUN_00880d80(param_2);
  uVar6 = FUN_00880d50(param_2);
  FUN_008ec700(uVar4,param_3,&local_58);
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = FUN_008e0a00(param_4);
  FUN_008db3f0(uVar10,4,uVar2);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar10,3,uVar2);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,param_2);
  FUN_008db680(*(undefined8 *)(param_1 + 0x10),0x1f,&local_58);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x1e,uVar5);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x48,0);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x29,uVar6);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x80);
  iVar7 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x1e);
  uVar8 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x29);
  cVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x48);
  iVar1 = 0;
  if (iVar7 != 0xffff) {
    iVar1 = iVar7;
  }
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  iVar7 = 0;
  if (((iVar1 != 0) && (0 < (int)uVar8)) && (cVar3 == '\0')) {
    uVar9 = FUN_008ebfa0(100);
    if (uVar9 < (uVar8 & 0xff)) {
      *param_5 = local_58;
      iVar7 = iVar1;
    }
    else {
      iVar7 = 0;
    }
  }
  return iVar7;
}


