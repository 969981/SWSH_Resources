/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0139b170; name: FUN_0139b170
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0139b170(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined1 *local_1c0;
  code *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  long alStack_1a0 [12];
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long alStack_120 [12];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  uVar8 = DAT_01d4c698;
  uVar7 = _UNK_01d4b8b8;
  uVar6 = _DAT_01d4b8b0;
  lVar21 = param_1 + (long)*(int *)(param_1 + 0x800) * 0x30;
  uVar4 = *(undefined8 *)(lVar21 + 0x108);
  uVar19 = *(undefined8 *)(lVar21 + 0x120);
  local_80 = *(undefined8 *)(lVar21 + 0x128);
  uVar3 = *(undefined8 *)(lVar21 + 0x110);
  uVar5 = *(undefined8 *)(lVar21 + 0x118);
  uStack_a0._4_4_ = (int)((ulong)uVar4 >> 0x20);
  local_a8._4_4_ = (int)((ulong)*(undefined8 *)(lVar21 + 0x100) >> 0x20);
  uStack_a0._0_4_ = (int)uVar4;
  local_88._0_4_ = (int)uVar19;
  local_88._4_4_ = (int)((ulong)uVar19 >> 0x20);
  uVar22 = (ulong)((int)uStack_a0 != 0);
  uVar2 = 2;
  if ((int)uStack_a0 == 0) {
    uVar2 = 1;
  }
  bVar10 = local_a8._4_4_ != 0;
  local_98._0_4_ = (int)uVar3;
  uVar1 = uVar22;
  if (bVar10) {
    uVar1 = uVar2;
  }
  bVar11 = uStack_a0._4_4_ != 0;
  local_98._4_4_ = (int)((ulong)uVar3 >> 0x20);
  if (bVar11) {
    uVar1 = uVar1 + 1;
  }
  bVar12 = (int)local_98 != 0;
  if (bVar12) {
    uVar1 = uVar1 + 1;
  }
  bVar13 = local_98._4_4_ != 0;
  if (bVar13) {
    uVar1 = uVar1 + 1;
  }
  local_90._0_4_ = (int)uVar5;
  local_90._4_4_ = (int)((ulong)uVar5 >> 0x20);
  bVar14 = (int)local_90 != 0;
  if (bVar14) {
    uVar1 = uVar1 + 1;
  }
  bVar15 = local_90._4_4_ != 0;
  if (bVar15) {
    uVar1 = uVar1 + 1;
  }
  bVar16 = (int)local_88 != 0;
  if (bVar16) {
    uVar1 = uVar1 + 1;
  }
  bVar17 = local_88._4_4_ != 0;
  if (bVar17) {
    uVar1 = uVar1 + 1;
  }
  bVar18 = (int)local_80 != 0;
  if (bVar18) {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 != 0) {
    lVar23 = 0;
    local_a8 = *(undefined8 *)(lVar21 + 0x100);
    uStack_a0 = uVar4;
    local_98 = uVar3;
    local_90 = uVar5;
    local_88 = uVar19;
    do {
      uVar19 = FUN_0139bf40(*(undefined8 *)(param_1 + 0x6a8 + lVar23),&local_c0);
      puVar20 = (undefined8 *)FUN_012dcaa0(param_1);
      local_c0 = CONCAT44((float)((ulong)*puVar20 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                          (float)*puVar20 + (float)uVar6);
      uStack_b8 = CONCAT44((float)((ulong)puVar20[1] >> 0x20) + (float)((ulong)uVar7 >> 0x20),
                           (float)puVar20[1] + (float)uVar7);
      FUN_0139d080(uVar8,uVar19,&local_c0);
      if (lVar23 == 0) {
        local_140 = &LAB_0139c270;
        local_138 = FUN_0139c2b0;
        local_130 = &LAB_0139c2c0;
        local_128 = &LAB_0139c2d0;
        alStack_120[0] = param_1;
        FUN_0139cc40(uVar19,2,&local_140);
        pcVar9 = local_138;
        if (local_138 != (code *)0x0) {
          local_130 = (undefined1 *)0x0;
          local_128 = (undefined1 *)0x0;
          local_140 = (undefined1 *)0x0;
          local_138 = (code *)0x0;
          (*pcVar9)(alStack_120);
        }
        local_1b0 = &LAB_0139c490;
        local_1a8 = &LAB_0139c4a0;
        local_1c0 = &LAB_0139c2e0;
        local_1b8 = FUN_0139c400;
        alStack_1a0[0] = param_1;
        FUN_0139cc40(uVar19,3,&local_1c0);
        pcVar9 = local_1b8;
        if (local_1b8 != (code *)0x0) {
          local_1b0 = (undefined1 *)0x0;
          local_1a8 = (undefined1 *)0x0;
          local_1c0 = (undefined1 *)0x0;
          local_1b8 = (code *)0x0;
          (*pcVar9)(alStack_1a0);
        }
      }
      lVar23 = lVar23 + 8;
    } while ((uVar22 + bVar11 + (ulong)bVar12 + (ulong)bVar13 + (ulong)bVar14 + (ulong)bVar15 +
              (ulong)bVar16 + (ulong)bVar17 + (ulong)bVar18 + (ulong)bVar10) * 8 != lVar23);
  }
  return;
}


