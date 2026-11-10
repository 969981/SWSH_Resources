/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a53b60; name: FUN_00a53b60
 */


undefined8 FUN_00a53b60(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  ushort uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined4 uVar19;
  long *local_a8;
  ulong local_a0;
  long *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  
  if (((6 < *(uint *)(param_1 + 0x618)) || (*(long *)(param_1 + 0x610) == 0)) ||
     (plVar14 = *(long **)(param_1 + 0x608), plVar14 == (long *)0x0)) {
    return 0;
  }
  lVar11 = (**(code **)(*plVar14 + 0x7f8))(plVar14);
  lVar13 = *(long *)(param_1 + 0x650);
  if (lVar13 != 0) {
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
  }
  FUN_00a55930(*(undefined8 *)(param_1 + 0x678));
  FUN_00a55930(*(long *)(param_1 + 0x678) + 0xf0);
  FUN_00a55930(*(long *)(param_1 + 0x678) + 0x1e0);
  FUN_00a55930(*(long *)(param_1 + 0x678) + 0x2d0);
  FUN_00a55930(*(long *)(param_1 + 0x678) + 0x3c0);
  FUN_00a55930(*(long *)(param_1 + 0x678) + 0x4b0);
  FUN_00a55930(*(long *)(param_1 + 0x678) + 0x5a0);
  *(undefined8 *)(*(long *)(param_1 + 0x6b8) + 0x1b8) = 0;
  if (lVar11 == 0) {
    return 0;
  }
  uVar12 = FUN_008e1600(lVar11);
  if ((uVar12 & 1) != 0) {
    return 0;
  }
  uVar2 = param_2 | 2;
  lVar13 = *(long *)(param_1 + 0x610);
  uVar19 = 0x3f800000;
  if (uVar2 != 3) {
    uVar19 = 0;
  }
  lVar1 = param_1 + 0x100;
  FUN_00ffd510(uVar19,lVar1,&DAT_02154f20);
  lVar15 = *(long *)(lVar13 + 0x58) + (ulong)param_2 * 0xc0;
  FUN_00a556f0(*(undefined8 *)(param_1 + 0x678),*(undefined4 *)(lVar15 + 0xa0));
  FUN_00a556f0(*(long *)(param_1 + 0x678) + 0xf0,*(undefined4 *)(lVar15 + 0xa4));
  FUN_00a556f0(*(long *)(param_1 + 0x678) + 0x1e0,*(undefined4 *)(lVar15 + 0xa8));
  FUN_00a556f0(*(long *)(param_1 + 0x678) + 0x2d0,*(undefined4 *)(lVar15 + 0xac));
  FUN_00a556f0(*(long *)(param_1 + 0x678) + 0x3c0,*(undefined4 *)(lVar15 + 0xb0));
  FUN_00a556f0(*(long *)(param_1 + 0x678) + 0x4b0,*(undefined4 *)(lVar15 + 0xb4));
  FUN_00a556f0(*(long *)(param_1 + 0x678) + 0x5a0,*(undefined4 *)(lVar15 + 0xb8));
  iVar10 = (**(code **)(*plVar14 + 0x870))(plVar14);
  bVar4 = (**(code **)(*plVar14 + 0x998))(plVar14,0x4000);
  bVar5 = (**(code **)(*plVar14 + 0x9a0))(plVar14,0x40);
  local_a8 = *(long **)(param_1 + 0x628);
  local_a0 = *(ulong *)(param_1 + 0x620);
  local_88 = CONCAT44(local_88._4_4_,1);
  local_98 = plVar14;
  local_90 = lVar11;
  bVar6 = FUN_00a0a290(0);
  bVar7 = FUN_00a0a290(param_2);
  local_88 = CONCAT35(local_88._5_3_,CONCAT14(bVar6 ^ bVar7,(undefined4)local_88)) &
             0xffffff01ffffffff;
  FUN_00a11240(*(undefined8 *)(param_1 + 0x630),uVar2 == 3 & (iVar10 == 2 | bVar4 | bVar5));
  FUN_00a10760(*(undefined8 *)(param_1 + 0x630),&local_a8);
  uVar9 = FUN_008e2d10(lVar11);
  iVar10 = FUN_008e12a0(lVar11,0x12);
  lVar11 = FUN_00a0bde0(lVar13,param_2);
  local_70 = 0;
  if ((uVar2 == 3) || (iVar10 == 0)) {
    FUN_00ffd430(lVar1,&DAT_02154f28);
    FUN_00ffd010(lVar1,&DAT_02154f30);
  }
  else {
    local_70 = CONCAT44(iVar10,1);
    lVar13 = *(long *)(param_1 + 0x6b8);
    uVar12 = *(ulong *)(lVar13 + 0x1b8);
    if (uVar12 < *(ulong *)(lVar13 + 0x1c0)) {
      lVar18 = *(long *)(lVar13 + 0x1b0);
      uVar16 = *(undefined8 *)(lVar13 + 0x170);
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_00a54134;
      *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar16;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
      *(undefined8 *)(lVar18 + uVar12 * 8) = local_70;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
      *(long *)(lVar13 + 0x1b8) = *(long *)(lVar13 + 0x1b8) + 1;
    }
    else {
      local_a8 = (long *)(*(long *)(lVar13 + 0x1b0) + uVar12 * 8);
      FUN_00a54c00(auStack_68,lVar13 + 0x170,&local_a8,1,&local_70);
    }
    FUN_00ffd430(lVar1,&DAT_02154f30);
    FUN_00ffd010(lVar1,&DAT_02154f28);
  }
  if ((uVar2 == 3) || (uVar9 == 0)) {
    FUN_00ffd430(lVar1,&DAT_02154f38);
    FUN_00ffd010(lVar1,&DAT_02154f40);
    puVar3 = (undefined4 *)PTR_DAT_02710860;
  }
  else {
    local_70 = CONCAT44((uint)uVar9,2);
    lVar13 = *(long *)(param_1 + 0x6b8);
    uVar12 = *(ulong *)(lVar13 + 0x1b8);
    if (uVar12 < *(ulong *)(lVar13 + 0x1c0)) {
      lVar18 = *(long *)(lVar13 + 0x1b0);
      uVar16 = *(undefined8 *)(lVar13 + 0x170);
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar15 + 0x80)) {
LAB_00a54134:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar16;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
      *(undefined8 *)(lVar18 + uVar12 * 8) = local_70;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
      *(long *)(lVar13 + 0x1b8) = *(long *)(lVar13 + 0x1b8) + 1;
    }
    else {
      local_a8 = (long *)(*(long *)(lVar13 + 0x1b0) + uVar12 * 8);
      FUN_00a54c00(auStack_68,lVar13 + 0x170,&local_a8,1,&local_70);
    }
    FUN_00ffd430(lVar1,&DAT_02154f40);
    FUN_00ffd010(lVar1,&DAT_02154f38);
    puVar3 = (undefined4 *)PTR_DAT_02710860;
  }
  PTR_DAT_02710860 = (undefined *)puVar3;
  if (lVar11 != 0) {
    uVar17 = *(ulong *)(lVar11 + 0x48);
    uVar12 = (ulong)local_70 >> 0x20;
    local_70 = CONCAT44((int)uVar12,3);
    if (uVar17 != 0) {
      uVar12 = 0;
      do {
        while( true ) {
          iVar10 = (int)uVar12;
          local_70 = CONCAT44(iVar10,(undefined4)local_70);
          lVar11 = *(long *)(param_1 + 0x6b8);
          uVar12 = *(ulong *)(lVar11 + 0x1b8);
          if (*(ulong *)(lVar11 + 0x1c0) <= uVar12) break;
          lVar15 = *(long *)(lVar11 + 0x1b0);
          uVar16 = *(undefined8 *)(lVar11 + 0x170);
          lVar13 = nn::os::GetTlsValue(*puVar3);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00a54134;
          *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar16;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          *(undefined8 *)(lVar15 + uVar12 * 8) = local_70;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          *(long *)(lVar11 + 0x1b8) = *(long *)(lVar11 + 0x1b8) + 1;
          uVar12 = (ulong)(iVar10 + 1);
          if (uVar17 <= uVar12) goto LAB_00a54038;
        }
        local_a8 = (long *)(*(long *)(lVar11 + 0x1b0) + uVar12 * 8);
        FUN_00a54c00(auStack_68,lVar11 + 0x170,&local_a8,1,&local_70);
        uVar12 = (ulong)(iVar10 + 1);
      } while (uVar12 < uVar17);
    }
  }
LAB_00a54038:
  FUN_00a55d10(*(undefined8 *)(param_1 + 0x6b8));
  FUN_00a542c0(param_1,0);
  local_a0 = local_a0 & 0xffffffffffffff00;
  local_78 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = (long *)0x0;
  local_90 = 0;
  local_a8 = plVar14;
  uVar8 = (**(code **)(*plVar14 + 0x8e8))(plVar14,param_2);
  local_a0 = CONCAT71(local_a0._1_7_,uVar8);
  local_90 = 0x3cc08dd753ae9575;
  local_88 = *(undefined8 *)(param_1 + 0x768);
  local_80 = 0xc8e9c2e05cb54a73;
  local_78 = 0;
  lVar11 = *(long *)(param_1 + 0x658);
  local_98 = (long *)lVar1;
  bVar4 = FUN_00a0a600(&local_a8);
  *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | bVar4 & 1;
  FUN_019a65b0(*(undefined8 *)(param_1 + 0x660));
  FUN_019a65b0(*(undefined8 *)(param_1 + 0x668));
  return 1;
}


