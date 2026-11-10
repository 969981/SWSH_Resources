/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a97670; name: FUN_00a97670
 */


int FUN_00a97670(long param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x818))();
  uVar2 = FUN_009141c0();
  if ((uVar2 & 0xff) == 0) {
    iVar9 = 0;
    iVar10 = 0;
  }
  else {
    iVar9 = 0;
    iVar10 = 0;
    uVar8 = 0;
    do {
      uVar6 = FUN_00914330(uVar5,uVar8);
      iVar3 = FUN_008e12a0(uVar6,0xf);
      iVar10 = iVar10 + iVar3;
      iVar3 = FUN_008e12a0(uVar6,0xd);
      uVar8 = uVar8 + 1;
      iVar9 = iVar9 + iVar3;
    } while ((uVar8 & 0xff) < (uVar2 & 0xff));
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x828))(*(long **)(param_1 + 8),0);
  uVar2 = FUN_009141c0();
  if ((uVar2 & 0xff) == 0) {
    iVar11 = 0;
    iVar3 = 0;
  }
  else {
    iVar11 = 0;
    iVar3 = 0;
    uVar8 = 0;
    do {
      uVar6 = FUN_00914330(uVar5,uVar8);
      iVar4 = FUN_008e12a0(uVar6,0xf);
      iVar3 = iVar3 + iVar4;
      iVar4 = FUN_008e12a0(uVar6,0xd);
      uVar8 = uVar8 + 1;
      iVar11 = iVar11 + iVar4;
    } while ((uVar8 & 0xff) < (uVar2 & 0xff));
  }
  cVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x8c0))();
  if (cVar1 != '\x05') {
    uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x820))();
    uVar2 = FUN_009141c0();
    if ((uVar2 & 0xff) != 0) {
      uVar8 = 0;
      do {
        uVar6 = FUN_00914330(uVar5,uVar8);
        iVar4 = FUN_008e12a0(uVar6,0xf);
        iVar10 = iVar10 + iVar4;
        iVar4 = FUN_008e12a0(uVar6,0xd);
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + iVar4;
      } while ((uVar8 & 0xff) < (uVar2 & 0xff));
    }
  }
  uVar7 = (**(code **)(**(long **)(param_1 + 8) + 0x890))();
  if ((uVar7 & 1) != 0) {
    uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x828))(*(long **)(param_1 + 8),1);
    uVar2 = FUN_009141c0();
    if ((uVar2 & 0xff) != 0) {
      uVar8 = 0;
      do {
        uVar6 = FUN_00914330(uVar5,uVar8);
        iVar4 = FUN_008e12a0(uVar6,0xf);
        iVar3 = iVar3 + iVar4;
        iVar4 = FUN_008e12a0(uVar6,0xd);
        uVar8 = uVar8 + 1;
        iVar11 = iVar11 + iVar4;
      } while ((uVar8 & 0xff) < (uVar2 & 0xff));
    }
  }
  if (iVar10 < 2) {
    iVar10 = 1;
  }
  iVar4 = 0;
  if (iVar10 != 0) {
    iVar4 = (iVar9 * 100) / iVar10;
  }
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  iVar10 = 0;
  if (iVar3 != 0) {
    iVar10 = (iVar11 * 100) / iVar3;
  }
  if (iVar4 <= iVar10) {
    iVar10 = iVar4;
  }
  return 5 - iVar10 / 0x14;
}


