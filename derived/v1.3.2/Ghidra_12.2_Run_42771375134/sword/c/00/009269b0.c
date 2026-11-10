/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009269b0; name: FUN_009269b0
 */


bool FUN_009269b0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  bVar2 = FUN_00880ca0(param_4);
  if (bVar2 == 6) {
    iVar6 = 6;
  }
  else {
    uVar5 = FUN_008e3700(param_2);
    iVar6 = (uVar5 & 0xff) + (uint)bVar2;
  }
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar10,4,uVar3);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar10,3,uVar3);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x2f,iVar6);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x48,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x45);
  iVar6 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x48);
  bVar1 = iVar6 == 0;
  uVar10 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x2f);
  uVar7 = FUN_008ec950(uVar10,3);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  if ((bVar2 != 6) && (iVar6 == 0)) {
    cVar4 = thunk_FUN_008fa2d0(*(undefined8 *)(param_1 + 8),param_2);
    uVar9 = 1;
    if (cVar4 == -1) {
      uVar9 = 2;
    }
    uVar8 = FUN_008ec390(uVar7,uVar9);
    if ((uVar8 & 1) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      *(bool *)param_5 = cVar4 == -1;
    }
  }
  return bVar1;
}


