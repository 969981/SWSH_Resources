/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013ba5f0; name: FUN_013ba5f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013ba5f0(long param_1)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  long local_200;
  long local_1f8;
  undefined1 *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  long *local_1d0 [13];
  long local_168 [9];
  code *local_120 [4];
  undefined1 **local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_58;
  
  FUN_013bd140();
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar17 != (undefined8 *)0x0)) {
    plVar13 = (long *)(**(code **)*puVar17)(puVar17);
    lVar14 = FUN_0132d9a0();
    for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      if (plVar13 == (long *)lVar14) {
        puVar20 = puVar17 + -10;
        local_58 = puVar17[0x61];
        goto joined_r0x013bad54;
      }
    }
  }
  puVar20 = (undefined8 *)0x0;
  local_58 = lRam0000000000000358;
joined_r0x013bad54:
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  lVar14 = param_1 + 0x1d0;
  FUN_0132a650(local_168,lVar14,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  lVar21 = puVar20[0x6b];
  if (lVar21 != 0) {
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
  }
  local_1d0[0] = local_168;
  local_1f0 = &LAB_013c04a0;
  local_1e8 = FUN_013c0550;
  local_100 = &local_1f0;
  local_1e0 = &LAB_013c0560;
  local_1d8 = &LAB_013c0570;
  local_120[0] = (code *)PTR_LAB_02727810;
  local_120[1] = (code *)PTR_FUN_02727818;
  local_120[2] = (code *)PTR_LAB_02727820;
  local_120[3] = (code *)PTR_LAB_02727828;
  FUN_01306a00(lVar21,local_120);
  pcVar9 = local_120[1];
  if (local_120[1] != (code *)0x0) {
    local_120[2] = (code *)0x0;
    local_120[3] = (code *)0x0;
    local_120[0] = (code *)0x0;
    local_120[1] = (code *)0x0;
    (*pcVar9)(local_120 + 4);
  }
  pcVar9 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar9)(local_1d0);
  }
  if (lVar21 != 0) {
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
  }
  FUN_0132f7f0(local_120,puVar20);
  uVar15 = FUN_01329840(local_120[0]);
  if ((uVar15 & 1) == 0) {
    uVar15 = FUN_013b95c0(param_1);
    if (local_120[0] != (code *)0x0) {
      (**(code **)(*(long *)(local_120[0] + 0x48) + 0x18))();
      local_120[0] = (code *)0x0;
    }
    if ((uVar15 & 1) == 0) {
      return;
    }
  }
  else if (local_120[0] != (code *)0x0) {
    (**(code **)(*(long *)(local_120[0] + 0x48) + 0x18))();
    local_120[0] = (code *)0x0;
  }
  FUN_013c0580(local_168,local_120);
  puVar7 = PTR_DAT_02710848;
  fVar22 = (float)FUN_01029020(DAT_01d4bdf4,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
  puVar8 = PTR_SinCosSampleTable_02715d20;
  fVar6 = DAT_01d4c580;
  fVar5 = DAT_01d4c034;
  fVar4 = DAT_01d4bfd4;
  fVar3 = DAT_01d4bc78;
  fVar23 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
  fVar25 = *(float *)PTR_FloatPi_02715160;
  lVar21 = 0;
  fVar26 = DAT_01d4c454;
  do {
    if (*(long *)((long)local_168 + lVar21) == 0) break;
    fVar24 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)puVar7 + 0x98));
    fVar22 = fVar22 + fVar24 * fVar5 + fVar4;
    uVar15 = (ulong)((fVar23 / fVar25) * fVar22);
    pfVar1 = (float *)(puVar8 + (uVar15 >> 0x18 & 0xff) * 0x10);
    fVar24 = (float)((uint)uVar15 & 0xffffff) * fVar3;
    local_120[0] = (code *)CONCAT44((float)((ulong)_DAT_02a72280 >> 0x20) + 0.0,
                                    (float)_DAT_02a72280 + fVar26 * (*pfVar1 + pfVar1[2] * fVar24));
    local_120[1] = (code *)CONCAT44((float)((ulong)uRam0000000002a72288 >> 0x20) + 0.0,
                                    (float)uRam0000000002a72288 +
                                    fVar26 * (pfVar1[1] + pfVar1[3] * fVar24));
    FUN_012dc9c0(*(undefined8 *)((long)local_168 + lVar21),local_120);
    fVar24 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)puVar7 + 0x98));
    fVar26 = fVar26 + fVar24 * fVar6 + fVar6;
    lVar21 = lVar21 + 8;
  } while (lVar21 != 0x48);
  local_120[1] = (code *)_UNK_01d4ab28;
  local_120[0] = _DAT_01d4ab20;
  local_120[3] = (code *)_UNK_01d4ace8;
  local_120[2] = (code *)_DAT_01d4ace0;
  uStack_f8 = _UNK_01d4afe8;
  local_100 = (undefined1 **)_DAT_01d4afe0;
  uStack_e8 = _UNK_01d49f78;
  local_f0 = _DAT_01d49f70;
  lVar21 = puVar20[0x78];
  if (lVar21 != 0) {
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
  }
  lVar18 = *(long *)(lVar21 + 0x4d8);
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
  lVar21 = puVar20[0x78];
  if (lVar21 != 0) {
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
  }
  lVar19 = *(long *)(lVar21 + 0x4e0);
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
  local_1f8 = lVar18;
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
  }
  iVar10 = FUN_0132ab80(lVar14,&local_1f8);
  local_200 = lVar19;
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
  }
  iVar11 = FUN_0132aec0(lVar14,&local_200);
  if (local_200 != 0) {
    (**(code **)(*(long *)(local_200 + 0x48) + 0x18))();
    local_200 = 0;
  }
  iVar11 = iVar11 + iVar10;
  if (local_1f8 != 0) {
    (**(code **)(*(long *)(local_1f8 + 0x48) + 0x18))();
    local_1f8 = 0;
  }
  uVar16 = 2;
  if (iVar11 < 0x15) {
    uVar16 = (uint)(10 < iVar11);
  }
  uVar2 = 3;
  if (iVar11 < 0x1f) {
    uVar2 = uVar16;
  }
  uVar16 = 4;
  if (iVar11 < 0x29) {
    uVar16 = uVar2;
  }
  uVar2 = 5;
  if (iVar11 < 0x33) {
    uVar2 = uVar16;
  }
  if (uVar2 != 0) {
    uVar15 = 0;
    do {
      if (3 < uVar15) break;
      if (local_168[uVar15] != 0) {
        local_220 = CONCAT44((float)((ulong)local_120[uVar15 * 2] >> 0x20) +
                             (float)((ulong)_DAT_02a72280 >> 0x20),
                             SUB84(local_120[uVar15 * 2],0) + (float)_DAT_02a72280);
        uStack_218 = CONCAT44((float)((ulong)local_120[uVar15 * 2 + 1] >> 0x20) +
                              (float)((ulong)uRam0000000002a72288 >> 0x20),
                              SUB84(local_120[uVar15 * 2 + 1],0) + (float)uRam0000000002a72288);
        FUN_012dc9c0(local_168[uVar15],&local_220);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar2);
  }
  local_220 = (ulong)local_220._4_4_ << 0x20;
  local_210 = 0;
  uStack_208 = 0;
  if (local_168[0] != 0) {
    uVar12 = FUN_012e4e90();
    local_220 = CONCAT44(local_220._4_4_,uVar12);
    puVar17 = (undefined8 *)FUN_012dcaa0(local_168[0]);
    local_210 = *puVar17;
    uStack_208 = puVar17[1];
  }
  FUN_0132a9a0(lVar14,0,&local_220);
  local_220 = local_220 & 0xffffffff00000000;
  local_210 = 0;
  uStack_208 = 0;
  if (local_168[1] != 0) {
    uVar12 = FUN_012e4e90();
    local_220 = CONCAT44(local_220._4_4_,uVar12);
    puVar17 = (undefined8 *)FUN_012dcaa0(local_168[1]);
    local_210 = *puVar17;
    uStack_208 = puVar17[1];
  }
  FUN_0132a9a0(lVar14,1,&local_220);
  local_220 = local_220 & 0xffffffff00000000;
  local_210 = 0;
  uStack_208 = 0;
  if (local_168[2] != 0) {
    uVar12 = FUN_012e4e90();
    local_220 = CONCAT44(local_220._4_4_,uVar12);
    puVar17 = (undefined8 *)FUN_012dcaa0(local_168[2]);
    local_210 = *puVar17;
    uStack_208 = puVar17[1];
  }
  FUN_0132a9a0(lVar14,2,&local_220);
  local_220 = local_220 & 0xffffffff00000000;
  local_210 = 0;
  uStack_208 = 0;
  if (local_168[3] != 0) {
    uVar12 = FUN_012e4e90();
    local_220 = CONCAT44(local_220._4_4_,uVar12);
    puVar17 = (undefined8 *)FUN_012dcaa0(local_168[3]);
    local_210 = *puVar17;
    uStack_208 = puVar17[1];
  }
  FUN_0132a9a0(lVar14,3,&local_220);
  local_220 = local_220 & 0xffffffff00000000;
  local_210 = 0;
  uStack_208 = 0;
  if (local_168[4] != 0) {
    uVar12 = FUN_012e4e90();
    local_220 = CONCAT44(local_220._4_4_,uVar12);
    puVar17 = (undefined8 *)FUN_012dcaa0(local_168[4]);
    local_210 = *puVar17;
    uStack_208 = puVar17[1];
  }
  FUN_0132a9a0(lVar14,4,&local_220);
  local_220 = local_220 & 0xffffffff00000000;
  local_210 = 0;
  uStack_208 = 0;
  if (local_168[5] != 0) {
    uVar12 = FUN_012e4e90();
    local_220 = CONCAT44(local_220._4_4_,uVar12);
    puVar17 = (undefined8 *)FUN_012dcaa0(local_168[5]);
    local_210 = *puVar17;
    uStack_208 = puVar17[1];
  }
  FUN_0132a9a0(lVar14,5,&local_220);
  local_220 = local_220 & 0xffffffff00000000;
  local_210 = 0;
  uStack_208 = 0;
  if (local_168[6] != 0) {
    uVar12 = FUN_012e4e90();
    local_220 = CONCAT44(local_220._4_4_,uVar12);
    puVar17 = (undefined8 *)FUN_012dcaa0(local_168[6]);
    local_210 = *puVar17;
    uStack_208 = puVar17[1];
  }
  FUN_0132a9a0(lVar14,6,&local_220);
  local_220 = local_220 & 0xffffffff00000000;
  local_210 = 0;
  uStack_208 = 0;
  if (local_168[7] != 0) {
    uVar12 = FUN_012e4e90();
    local_220 = CONCAT44(local_220._4_4_,uVar12);
    puVar17 = (undefined8 *)FUN_012dcaa0(local_168[7]);
    local_210 = *puVar17;
    uStack_208 = puVar17[1];
  }
  FUN_0132a9a0(lVar14,7,&local_220);
  local_220 = local_220 & 0xffffffff00000000;
  local_210 = 0;
  uStack_208 = 0;
  if (local_168[8] != 0) {
    uVar12 = FUN_012e4e90();
    local_220 = CONCAT44(local_220._4_4_,uVar12);
    puVar17 = (undefined8 *)FUN_012dcaa0(local_168[8]);
    local_210 = *puVar17;
    uStack_208 = puVar17[1];
  }
  FUN_0132a9a0(lVar14,8,&local_220);
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
  }
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
  }
  return;
}


