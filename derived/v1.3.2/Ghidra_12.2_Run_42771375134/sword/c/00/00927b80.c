/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00927b80; name: FUN_00927b80
 */


int FUN_00927b80(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5,
                uint param_6)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 local_48;
  
  puVar10 = (undefined8 *)(param_1 + 0x10);
  uVar8 = 0x50;
  if ((param_6 & 1) != 0) {
    uVar8 = 0x51;
  }
  FUN_008db2b0(*puVar10);
  uVar11 = *puVar10;
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar11,3,uVar1);
  uVar11 = *puVar10;
  uVar1 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar11,4,uVar1);
  FUN_008db3f0(*puVar10,0x15,param_5 & 0xff);
  FUN_008db3f0(*puVar10,0x16,param_4 & 0xff);
  FUN_008db460(*puVar10,0x52,0);
  FUN_008db460(*puVar10,0x53,0);
  FUN_008db460(*puVar10,0x3d,0xe);
  FUN_008db460(*puVar10,0x17,0x12);
  uVar9 = FUN_008e1810(param_3,0x11);
  if ((uVar9 & 1) != 0) {
    local_48 = FUN_008e1aa0(param_3,0x11);
    cVar2 = FUN_008ed2f0(&local_48);
    cVar3 = FUN_008db610(*puVar10,0x15);
    if (cVar3 == cVar2) {
      uVar9 = FUN_008ed380(&local_48);
      if ((uVar9 & 1) == 0) {
        uVar11 = 0x52;
      }
      else {
        uVar11 = 0x53;
      }
      FUN_008db590(*puVar10,uVar11,1);
    }
  }
  uVar9 = FUN_008e1810(param_3,0x15);
  if (((uVar9 & 1) != 0) && (iVar4 = FUN_008db610(*puVar10,0x16), iVar4 == 4)) {
    FUN_008db590(*puVar10,0x52,1);
  }
  uVar9 = FUN_008e1810(param_3,0x20);
  if (((uVar9 & 1) != 0) && (iVar4 = FUN_008db610(*puVar10,0x16), iVar4 == 4)) {
    FUN_008db590(*puVar10,0x52,1);
  }
  FUN_008dad40(*puVar10,uVar8);
  iVar5 = FUN_008db610(*puVar10,0x52);
  iVar6 = FUN_008db610(*puVar10,0x53);
  uVar7 = FUN_008db610(*puVar10,0x17);
  iVar4 = FUN_008db610(*puVar10,0x3d);
  FUN_008db2f0(*puVar10);
  if (iVar6 == 0) {
    if (iVar4 == 0xe) {
      iVar4 = FUN_008eba40(param_4,param_5);
    }
    if ((uVar7 & 0xff) != 0x12) {
      uVar8 = FUN_008eba40(uVar7,param_5);
      iVar4 = thunk_FUN_008892d0(iVar4,uVar8);
    }
    if (iVar4 == 0 && iVar5 != 0) {
      iVar4 = 7;
    }
  }
  else {
    iVar4 = 7;
  }
  return iVar4;
}


