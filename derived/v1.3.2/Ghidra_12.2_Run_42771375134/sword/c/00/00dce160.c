/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dce160; name: FUN_00dce160
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00dce160(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 (*pauVar3) [12];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined8 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  long local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (*(long *)(param_1 + 0x340) == 0) {
    lVar10 = *(long *)(param_1 + 0x560);
    if ((lVar10 != 0) &&
       (0 < (int)((ulong)(*(long *)(lVar10 + 0x228) - *(long *)(lVar10 + 0x220)) >> 7))) {
      lVar16 = 0;
      uVar17 = 0;
      do {
        lVar13 = *(long *)(param_1 + 0xaf0);
        lVar10 = FUN_00753d80(lVar10,uVar17 & 0xffffffff);
        uVar15 = *(undefined8 *)(lVar10 + 0x38);
        fVar18 = (float)*(undefined8 *)(lVar10 + 0x20);
        fVar21 = (float)*(undefined8 *)(lVar10 + 0x30);
        fVar19 = (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20);
        fVar22 = (float)((ulong)*(undefined8 *)(lVar10 + 0x30) >> 0x20);
        fVar20 = (float)*(undefined8 *)(lVar10 + 0x28);
        fVar23 = (float)uVar15;
        lVar13 = lVar13 + lVar16;
        fVar24 = (fVar18 + fVar21) * 0.5;
        fVar25 = (fVar19 + fVar22) * 0.5;
        fVar27 = (fVar20 + fVar23) * 0.5;
        pauVar3 = (undefined1 (*) [12])(lVar13 + 0x50);
        uVar33 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x58) >> 0x20);
        fVar31 = (float)*(undefined8 *)*pauVar3;
        fVar32 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
        auVar28._12_4_ = uVar33;
        auVar28._0_12_ = *pauVar3;
        auVar8._12_4_ = uVar33;
        auVar8._0_12_ = *pauVar3;
        auVar28 = NEON_ext(auVar28,auVar8,8,1);
        fVar26 = (float)*(undefined8 *)(lVar13 + 0x40);
        fVar29 = (float)((ulong)*(undefined8 *)(lVar13 + 0x40) >> 0x20);
        fVar30 = (float)*(undefined8 *)(lVar13 + 0x48);
        uVar17 = uVar17 + 1;
        lVar16 = lVar16 + 0x80;
        *(ulong *)(lVar13 + 0x68) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar10 + 0x28) >> 0x20) + 0.0,
                      auVar28._0_4_ + fVar27 + (fVar20 - fVar27) * fVar30);
        *(ulong *)(lVar13 + 0x60) =
             CONCAT44(fVar32 + fVar25 + (fVar19 - fVar25) * fVar29,
                      fVar31 + fVar24 + (fVar18 - fVar24) * fVar26);
        *(ulong *)(lVar13 + 0x78) =
             CONCAT44((float)((ulong)uVar15 >> 0x20) + 0.0,
                      auVar28._0_4_ + fVar27 + (fVar23 - fVar27) * fVar30);
        *(ulong *)(lVar13 + 0x70) =
             CONCAT44(fVar32 + fVar25 + (fVar22 - fVar25) * fVar29,
                      fVar31 + fVar24 + (fVar21 - fVar24) * fVar26);
        lVar10 = *(long *)(param_1 + 0x560);
      } while ((long)uVar17 <
               (long)(int)((ulong)(*(long *)(lVar10 + 0x228) - *(long *)(lVar10 + 0x220)) >> 7));
    }
  }
  else {
    puVar12 = *(undefined8 **)(param_1 + 0xaf0);
    local_f0 = *puVar12;
    local_e8 = puVar12[1];
    puVar1 = (undefined8 *)(param_1 + 0xaf0);
    local_e0 = puVar12[2];
    local_d8 = puVar12[3];
    puVar11 = puVar12;
    if (local_d8 != 0) {
      (**(code **)(*(long *)(local_d8 + 0x48) + 0x10))();
      puVar11 = (undefined8 *)*puVar1;
    }
    local_b8 = puVar12[7];
    local_c8 = puVar12[5];
    local_d0 = puVar12[4];
    local_c0 = puVar12[6];
    uStack_a8 = puVar12[9];
    uStack_98 = (undefined4)puVar12[0xb];
    uStack_94 = (undefined4)((ulong)puVar12[0xb] >> 0x20);
    local_b0 = puVar12[8];
    pauVar3 = (undefined1 (*) [12])(puVar12 + 10);
    local_a0 = *(undefined8 *)*pauVar3;
    fVar22 = (float)((ulong)*(undefined8 *)(param_1 + 0x1a0) >> 0x20);
    fVar18 = (float)*(undefined8 *)(param_1 + 400);
    fVar21 = (float)*(undefined8 *)(param_1 + 0x1a0);
    fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 400) >> 0x20);
    fVar20 = (float)*(undefined8 *)(param_1 + 0x198);
    fVar23 = (float)*(undefined8 *)(param_1 + 0x1a8);
    fVar24 = (fVar18 + fVar21) * 0.5;
    fVar25 = (fVar19 + fVar22) * 0.5;
    fVar26 = (fVar20 + fVar23) * 0.5;
    fVar29 = (float)((ulong)local_b0 >> 0x20);
    fVar27 = (float)((ulong)local_a0 >> 0x20);
    auVar4._12_4_ = uStack_94;
    auVar4._0_12_ = *pauVar3;
    auVar5._12_4_ = uStack_94;
    auVar5._0_12_ = *pauVar3;
    auVar28 = NEON_ext(auVar4,auVar5,8,1);
    local_90 = CONCAT44(fVar27 + fVar25 + (fVar19 - fVar25) * fVar29,
                        (float)local_a0 + fVar24 + (fVar18 - fVar24) * (float)local_b0);
    uStack_88 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x198) >> 0x20) + 0.0,
                         auVar28._0_4_ + fVar26 + (fVar20 - fVar26) * (float)uStack_a8);
    local_80 = CONCAT44(fVar27 + fVar25 + (fVar22 - fVar25) * fVar29,
                        (float)local_a0 + fVar24 + (fVar21 - fVar24) * (float)local_b0);
    uStack_78 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1a8) >> 0x20) + 0.0,
                         auVar28._0_4_ + fVar26 + (fVar23 - fVar26) * (float)uStack_a8);
    puVar12 = *(undefined8 **)(param_1 + 0xaf8);
    while (puVar9 = puVar12, puVar9 != puVar11) {
      puVar12 = puVar9 + -0x10;
      if (puVar9[-0xd] != 0) {
        (**(code **)(*(long *)(puVar9[-0xd] + 0x48) + 0x18))();
        puVar9[-0xd] = 0;
      }
    }
    *(undefined8 **)(param_1 + 0xaf8) = puVar11;
    if (puVar11 == *(undefined8 **)(param_1 + 0xb00)) {
      FUN_00dd2720(puVar1,&local_f0);
    }
    else {
      uVar15 = *(undefined8 *)(param_1 + 0xb08);
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00dce7d4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar15;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      *puVar11 = local_f0;
      puVar11[1] = local_e8;
      puVar11[2] = local_e0;
      puVar11[3] = local_d8;
      if (local_d8 != 0) {
        (**(code **)(*(long *)(local_d8 + 0x48) + 0x10))();
      }
      puVar11[7] = local_b8;
      puVar11[4] = local_d0;
      puVar11[5] = local_c8;
      puVar11[6] = local_c0;
      puVar11[0xb] = CONCAT44(uStack_94,uStack_98);
      puVar11[9] = uStack_a8;
      puVar11[10] = local_a0;
      puVar11[8] = local_b0;
      puVar11[0xd] = uStack_88;
      puVar11[0xc] = local_90;
      puVar11[0xe] = local_80;
      puVar11[0xf] = uStack_78;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      *(long *)(param_1 + 0xaf8) = *(long *)(param_1 + 0xaf8) + 0x80;
    }
    lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x340) + 0x360) + 0x68);
    if ((int)((ulong)(*(long *)(lVar10 + 0x268) - *(long *)(lVar10 + 0x260)) >> 5) * -0x55555555 !=
        0) {
      lVar16 = 0;
      uVar15 = *(undefined8 *)PTR_DAT_02715420;
      uVar2 = *(undefined8 *)(PTR_DAT_02715420 + 8);
      uVar17 = 0;
      do {
        local_170 = 0xcbf29ce484222645;
        local_168 = &DAT_01d38550;
        local_160 = 0;
        local_158 = 0;
        local_140 = 0;
        local_150 = 0x44fa0000457a0000;
        local_148 = 0x44fa0000;
        local_120 = 0;
        local_118 = 0;
        puVar11 = (undefined8 *)(*(long *)(lVar10 + 0x260) + lVar16);
        fVar22 = (float)((ulong)puVar11[2] >> 0x20);
        fVar18 = (float)*puVar11;
        fVar21 = (float)puVar11[2];
        fVar19 = (float)((ulong)*puVar11 >> 0x20);
        fVar20 = (float)puVar11[1];
        fVar23 = (float)puVar11[3];
        fVar24 = (fVar18 + fVar21) * 0.5;
        fVar25 = (fVar19 + fVar22) * 0.5;
        fVar26 = (fVar20 + fVar23) * 0.5;
        fVar29 = (float)((ulong)local_b0 >> 0x20);
        auVar7._8_4_ = uStack_98;
        auVar7._0_8_ = local_a0;
        auVar6._8_4_ = uStack_98;
        auVar6._0_8_ = local_a0;
        fVar27 = (float)((ulong)local_a0 >> 0x20);
        auVar6._12_4_ = uStack_94;
        auVar7._12_4_ = uStack_94;
        auVar28 = NEON_ext(auVar6,auVar7,8,1);
        local_110 = CONCAT44(fVar27 + fVar25 + (fVar19 - fVar25) * fVar29,
                             (float)local_a0 + fVar24 + (fVar18 - fVar24) * (float)local_b0);
        uStack_108 = CONCAT44((float)((ulong)puVar11[1] >> 0x20) + 0.0,
                              auVar28._0_4_ + fVar26 + (fVar20 - fVar26) * (float)uStack_a8);
        local_100 = CONCAT44(fVar27 + fVar25 + (fVar22 - fVar25) * fVar29,
                             (float)local_a0 + fVar24 + (fVar21 - fVar24) * (float)local_b0);
        uStack_f8 = CONCAT44((float)((ulong)puVar11[3] >> 0x20) + 0.0,
                             auVar28._0_4_ + fVar26 + (fVar23 - fVar26) * (float)uStack_a8);
        puVar11 = *(undefined8 **)(param_1 + 0xaf8);
        local_130 = uVar15;
        local_128 = uVar2;
        if (puVar11 == *(undefined8 **)(param_1 + 0xb00)) {
          FUN_00dd2720(puVar1,&local_170);
        }
        else {
          uVar14 = *(undefined8 *)(param_1 + 0xb08);
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00dce7d4;
          *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar14;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          *puVar11 = local_170;
          puVar11[1] = local_168;
          puVar11[2] = local_160;
          puVar11[3] = local_158;
          if (local_158 != 0) {
            (**(code **)(*(long *)(local_158 + 0x48) + 0x10))();
          }
          puVar11[7] = local_138;
          puVar11[4] = local_150;
          puVar11[5] = local_148;
          puVar11[6] = CONCAT44(uStack_13c,local_140);
          puVar11[0xb] = local_118;
          puVar11[9] = local_128;
          puVar11[10] = local_120;
          puVar11[8] = local_130;
          puVar11[0xd] = uStack_108;
          puVar11[0xc] = local_110;
          puVar11[0xe] = local_100;
          puVar11[0xf] = uStack_f8;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          *(long *)(param_1 + 0xaf8) = *(long *)(param_1 + 0xaf8) + 0x80;
        }
        if (local_158 != 0) {
          (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
          local_158 = 0;
        }
        lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x340) + 0x360) + 0x68);
        uVar17 = uVar17 + 1;
        lVar16 = lVar16 + 0x60;
      } while (uVar17 < (uint)((int)((ulong)(*(long *)(lVar10 + 0x268) - *(long *)(lVar10 + 0x260))
                                    >> 5) * -0x55555555));
    }
    if (local_d8 != 0) {
      (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
    }
  }
  return;
}


