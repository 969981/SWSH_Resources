/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ab7f0; name: FUN_014ab7f0
 */


undefined1  [16] FUN_014ab7f0(long param_1,undefined2 *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  short sVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  sVar5 = param_2[2];
  uVar6 = CONCAT22(sVar5,*param_2);
  bVar4 = *(byte *)(param_2 + 6);
  bVar1 = *(int *)(param_2 + 4) != 1;
  uVar11 = (ulong)bVar1 << 0x20;
  uVar2 = (ulong)*(byte *)((long)param_2 + 0xd) << 0x22;
  uVar3 = CONCAT14(*(int *)(param_2 + 4) == 1,uVar6) | uVar2;
  uVar8 = uVar3 | (ulong)bVar4 << 0x21;
  uVar2 = uVar2 & 0x400000000;
  uVar10 = uVar2 | CONCAT14(bVar1,uVar6);
  uVar9 = uVar8 & 0x600000000 | (ulong)CONCAT14(bVar1,uVar6);
  if ((ulong)bVar4 == 0) {
    lVar7 = FUN_00c8bba0(*(undefined8 *)(param_1 + 0x170),uVar8,0);
    if (lVar7 != 0) goto LAB_014ab8d4;
    lVar7 = FUN_00c8bba0(*(undefined8 *)(param_1 + 0x170),uVar9,0);
    if (lVar7 != 0) goto LAB_014ab8d8;
  }
  else {
    lVar7 = FUN_00c8bba0(*(undefined8 *)(param_1 + 0x170),uVar8,0);
    if (lVar7 != 0) {
LAB_014ab8d4:
      uVar9 = uVar8;
      goto LAB_014ab8d8;
    }
    lVar7 = FUN_00c8bba0(*(undefined8 *)(param_1 + 0x170),uVar3,0);
    uVar9 = uVar3;
    if (lVar7 != 0) goto LAB_014ab8d8;
    uVar9 = uVar8 & 0x6ffffffff | uVar11;
    lVar7 = FUN_00c8bba0(*(undefined8 *)(param_1 + 0x170),uVar9,0);
    if (lVar7 != 0) goto LAB_014ab8d8;
    lVar7 = FUN_00c8bba0(*(undefined8 *)(param_1 + 0x170),uVar10,0);
    if (lVar7 != 0) {
      uVar9 = uVar10;
      goto LAB_014ab8d8;
    }
  }
  uVar9 = uVar8 & 0x70000ffff;
  if (bVar4 == 0) {
    if (sVar5 != 0) {
      lVar7 = FUN_00c8bba0(*(undefined8 *)(param_1 + 0x170),uVar9,0);
      if (lVar7 != 0) goto LAB_014ab8d8;
      if (sVar5 != 0) {
        uVar9 = uVar8 & 0x600000000 | (ulong)CONCAT14(bVar1,uVar6) & 0xffffffff0000ffff;
        lVar7 = FUN_00c8bba0(*(undefined8 *)(param_1 + 0x170),uVar9,0);
joined_r0x014ab9dc:
        if (lVar7 != 0) goto LAB_014ab8d8;
      }
    }
  }
  else if (sVar5 == 0) {
    uVar8 = uVar11;
  }
  else {
    lVar7 = FUN_00c8bba0(*(undefined8 *)(param_1 + 0x170),uVar9,0);
    if (lVar7 != 0) goto LAB_014ab8d8;
    lVar7 = FUN_00c8bba0(*(undefined8 *)(param_1 + 0x170),uVar3 & 0x50000ffff,0);
    uVar9 = uVar3 & 0x50000ffff;
    if (lVar7 != 0) goto LAB_014ab8d8;
    uVar9 = uVar8 & 0x60000ffff | uVar11;
    lVar7 = FUN_00c8bba0(*(undefined8 *)(param_1 + 0x170),uVar9,0);
    if (lVar7 != 0) goto LAB_014ab8d8;
    uVar8 = uVar10;
    if (sVar5 != 0) {
      uVar8 = uVar2 | (ulong)CONCAT14(bVar1,uVar6) & 0x50000ffff;
      lVar7 = FUN_00c8bba0(*(undefined8 *)(param_1 + 0x170),uVar8,0);
      uVar9 = uVar8;
      goto joined_r0x014ab9dc;
    }
  }
  uVar9 = uVar8 & 0x3f800000000 | 0x19;
  FUN_00c8bba0(*(undefined8 *)(param_1 + 0x170),uVar9,0);
LAB_014ab8d8:
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar9;
  return auVar12;
}


