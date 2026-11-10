/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0026d240; name: FUN_0026d240
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0026d240(long param_1,undefined8 *param_2,undefined8 param_3,uint param_4,uint *param_5)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  undefined1 *puVar15;
  float fVar16;
  float fVar17;
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
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  ulong uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 uVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStack_130 [16];
  undefined *local_120 [4];
  undefined8 local_100;
  undefined8 *puStack_f8;
  undefined8 *local_f0;
  undefined1 local_e8;
  undefined8 *local_e0;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined1 *local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uStack_68 = _UNK_01d4ae58;
  local_70 = _DAT_01d4ae50;
  uStack_58 = _UNK_01d4b588;
  local_60 = _DAT_01d4b580;
  uStack_48 = _UNK_01d49dc8;
  local_50 = _DAT_01d49dc0;
  fVar20 = *(float *)(param_2 + 1);
  fVar24 = *(float *)((long)param_2 + 0x14);
  fVar21 = (float)*param_2;
  fVar25 = (float)*(undefined8 *)((long)param_2 + 0xc);
  fVar26 = fVar25 - fVar21;
  fVar22 = (float)((ulong)*param_2 >> 0x20);
  fVar23 = (float)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
  fVar27 = fVar23 - fVar22;
  fVar28 = fVar24 - fVar20;
  auVar38._4_4_ = fVar27;
  auVar38._0_4_ = fVar26;
  auVar38._8_4_ = fVar28;
  auVar38._12_4_ = 0;
  auVar42._4_4_ = fVar27;
  auVar42._0_4_ = fVar26;
  auVar42._8_4_ = fVar28;
  auVar42._12_4_ = 0;
  auVar38 = NEON_ext(auVar38,auVar42,8,1);
  fVar18 = *(float *)(param_2 + 4);
  fVar16 = (float)param_2[3];
  fVar29 = fVar16 - fVar21;
  fVar17 = (float)((ulong)param_2[3] >> 0x20);
  fVar32 = fVar17 - fVar22;
  fVar34 = fVar18 - fVar20;
  auVar8._4_4_ = fVar32;
  auVar8._0_4_ = fVar29;
  auVar8._8_4_ = fVar34;
  auVar8._12_4_ = 0;
  auVar9._4_4_ = fVar32;
  auVar9._0_4_ = fVar29;
  auVar9._8_4_ = fVar34;
  auVar9._12_4_ = 0;
  auVar42 = NEON_ext(auVar8,auVar9,8,1);
  fVar30 = fVar26 * fVar32 - fVar27 * fVar29;
  uVar40 = NEON_ext(CONCAT44(fVar27 * fVar34 - fVar28 * fVar32,fVar30),
                    CONCAT44(auVar38._4_4_ * fVar32 - fVar27 * auVar42._4_4_,
                             auVar38._0_4_ * fVar29 - fVar26 * auVar42._0_4_),4,1);
  fVar28 = (float)uVar40;
  fVar29 = (float)((ulong)uVar40 >> 0x20);
  fVar32 = fVar28 * fVar28;
  fVar34 = fVar29 * fVar29;
  auVar10._4_4_ = fVar34;
  auVar10._0_4_ = fVar32;
  auVar10._8_4_ = fVar30 * fVar30;
  auVar10._12_4_ = 0;
  auVar11._4_4_ = fVar34;
  auVar11._0_4_ = fVar32;
  auVar11._8_4_ = fVar30 * fVar30;
  auVar11._12_4_ = 0;
  auVar38 = NEON_ext(auVar10,auVar11,8,1);
  fVar27 = auVar38._0_4_ + auVar38._4_4_;
  fVar26 = fVar32 + fVar34 + fVar27;
  fVar27 = fVar32 + fVar34 + fVar27;
  uVar40 = NEON_frsqrte(CONCAT44(fVar27,fVar26),4);
  fVar32 = (float)uVar40;
  fVar34 = (float)((ulong)uVar40 >> 0x20);
  uVar40 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar32 * fVar32),CONCAT44(fVar27,fVar26),4);
  fVar32 = fVar32 * (float)uVar40;
  fVar34 = fVar34 * (float)((ulong)uVar40 >> 0x20);
  uVar40 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar32 * fVar32),CONCAT44(fVar27,fVar26),4);
  fVar32 = fVar32 * (float)uVar40;
  fVar34 = fVar34 * (float)((ulong)uVar40 >> 0x20);
  uVar40 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar32 * fVar32),CONCAT44(fVar27,fVar26),4);
  fVar32 = fVar32 * (float)uVar40;
  fVar34 = fVar34 * (float)((ulong)uVar40 >> 0x20);
  uVar40 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar32 * fVar32),CONCAT44(fVar27,fVar26),4);
  uVar37 = CONCAT44(fVar27 * fVar34 * (float)((ulong)uVar40 >> 0x20),fVar26 * fVar32 * (float)uVar40
                   );
  uVar37 = uVar37 ^ (uVar37 ^ CONCAT44(fVar27,fVar26)) &
                    CONCAT44(-(uint)(fVar26 == 0.0),-(uint)(fVar26 == 0.0));
  uVar40 = NEON_frecpe(uVar37,4);
  uVar41 = NEON_frecps(uVar37,uVar40,4);
  fVar26 = (float)uVar40 * (float)uVar41;
  fVar27 = (float)((ulong)uVar40 >> 0x20) * (float)((ulong)uVar41 >> 0x20);
  uVar40 = NEON_frecps(uVar37,CONCAT44(fVar27,fVar26),4);
  fVar26 = fVar26 * (float)uVar40;
  fVar27 = fVar27 * (float)((ulong)uVar40 >> 0x20);
  uVar40 = NEON_frecps(uVar37,CONCAT44(fVar27,fVar26),4);
  fVar26 = fVar26 * (float)uVar40;
  fVar27 = fVar27 * (float)((ulong)uVar40 >> 0x20);
  uVar40 = NEON_frecps(uVar37,CONCAT44(fVar27,fVar26),4);
  fVar26 = fVar26 * (float)uVar40;
  uVar40 = NEON_frecps(uVar37,CONCAT44(fVar27 * (float)((ulong)uVar40 >> 0x20),fVar26),4);
  fVar26 = fVar26 * (float)uVar40;
  auVar39._0_4_ = fVar21 * fVar28 * fVar26;
  auVar39._4_4_ = fVar22 * fVar29 * fVar26;
  auVar39._8_4_ = fVar20 * fVar30 * fVar26;
  auVar39._12_4_ = 0;
  auVar38 = NEON_ext(auVar39,auVar39,8,1);
  fVar27 = *(float *)(param_1 + 0x11b0) * fVar28 * fVar26;
  fVar28 = *(float *)(param_1 + 0x11b4) * fVar29 * fVar26;
  fVar26 = *(float *)(param_1 + 0x11b8) * fVar30 * fVar26;
  fVar29 = *(float *)(param_1 + 0x11bc) * 0.0;
  auVar12._4_4_ = fVar28;
  auVar12._0_4_ = fVar27;
  auVar12._8_4_ = fVar26;
  auVar12._12_4_ = fVar29;
  auVar13._4_4_ = fVar28;
  auVar13._0_4_ = fVar27;
  auVar13._8_4_ = fVar26;
  auVar13._12_4_ = fVar29;
  auVar42 = NEON_ext(auVar12,auVar13,8,1);
  if (0.0 <= (fVar27 + fVar28 + auVar42._0_4_ + auVar42._4_4_) -
             (auVar39._0_4_ + auVar39._4_4_ + auVar38._0_4_ + auVar38._4_4_)) {
    fVar35 = (float)*(undefined8 *)(param_1 + 0x948);
    fVar31 = (float)*(undefined8 *)(param_1 + 0x940);
    fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x940) >> 0x20);
    fVar26 = *(float *)(param_1 + 0x950);
    fVar27 = *(float *)(param_1 + 0x954);
    fVar28 = *(float *)(param_1 + 0x958);
    puStack_f8 = &local_70;
    fVar43 = (float)*(undefined8 *)(param_1 + 0x960);
    fVar44 = (float)((ulong)*(undefined8 *)(param_1 + 0x960) >> 0x20);
    fVar45 = (float)*(undefined8 *)(param_1 + 0x968);
    fVar32 = (float)*(undefined8 *)(param_1 + 0x978);
    fVar36 = (float)((ulong)*(undefined8 *)(param_1 + 0x978) >> 0x20);
    fVar29 = (float)*(undefined8 *)(param_1 + 0x970);
    fVar30 = (float)((ulong)*(undefined8 *)(param_1 + 0x970) >> 0x20);
    fVar34 = fVar29 + fVar31 * fVar21 + fVar26 * fVar22 + fVar43 * fVar20;
    fVar19 = fVar30 + fVar33 * fVar21 + fVar27 * fVar22 + fVar44 * fVar20;
    local_a0 = CONCAT44(fVar19,fVar34);
    fVar21 = fVar32 + fVar35 * fVar21 + fVar28 * fVar22 + fVar45 * fVar20;
    uStack_98 = CONCAT44(fVar36 + 0.0,fVar21);
    local_b0 = 5;
    fVar22 = fVar29 + fVar31 * fVar25 + fVar26 * fVar23 + fVar43 * fVar24;
    fVar20 = fVar30 + fVar33 * fVar25 + fVar27 * fVar23 + fVar44 * fVar24;
    uStack_90 = CONCAT44(fVar20,fVar22);
    fVar25 = fVar32 + fVar35 * fVar25 + fVar28 * fVar23 + fVar45 * fVar24;
    uStack_88 = CONCAT44(fVar36 + 0.0,fVar25);
    fVar29 = fVar29 + fVar31 * fVar16 + fVar26 * fVar17 + fVar43 * fVar18;
    fVar30 = fVar30 + fVar33 * fVar16 + fVar27 * fVar17 + fVar44 * fVar18;
    local_80 = CONCAT44(fVar30,fVar29);
    fVar32 = fVar32 + fVar35 * fVar16 + fVar28 * fVar17 + fVar45 * fVar18;
    uStack_78 = CONCAT44(fVar36 + 0.0,fVar32);
    local_ac = 0;
    local_c0 = &DAT_7f7fffff00000000;
    uStack_b8 = 0x7f7fffff7f7fffff;
    uStack_c8 = (ulong)(uint)((fVar32 + fVar21 + fVar25) * 0.333333);
    local_d0 = CONCAT44((fVar30 + fVar19 + fVar20) * 0.333333,(fVar29 + fVar34 + fVar22) * 0.333333)
    ;
    local_100 = *(undefined8 *)(param_1 + 0x910);
    local_e8 = 1;
    local_120[0] = PTR_DAT_02711ef8 + 0x10;
    local_e0 = &local_d0;
    uVar5 = *(uint *)(param_1 + 0x988);
                    /* try { // try from 0026d4f8 to 0026d51b has its CatchHandler @ 0026d944 */
    local_f0 = puStack_f8;
    FUN_0028b890(param_1,&local_d0,param_3,param_5,param_4,*(undefined8 *)(param_1 + 0x11c0),
                 local_120,*(undefined8 *)(param_1 + 0x11c8),*(undefined8 *)(param_1 + 0x980),
                 (uint *)(param_1 + 0x988),param_1 + 0x900,auStack_130);
    if (uVar5 < *(uint *)(param_1 + 0x988)) {
      if ((param_4 >> 3 & 1) == 0) {
        uVar3 = *param_5;
        uVar4 = param_5[1];
        uVar6 = uVar4;
        if (uVar4 <= uVar3) {
          uVar6 = uVar3;
          uVar3 = uVar4;
        }
        if (*(int *)(param_1 + 0xe94) != 0x80) {
          uVar4 = uVar6 | uVar3 << 0x10;
          uVar4 = uVar4 + (uVar4 << 0xf ^ 0xffffffff);
          uVar4 = (uVar4 ^ uVar4 >> 10) * 9;
          uVar4 = uVar4 ^ uVar4 >> 6;
          uVar4 = uVar4 + (uVar4 << 0xb ^ 0xffffffff);
          lVar1 = param_1 + (ulong)((uVar4 ^ uVar4 >> 0x10) & 0x7f);
          bVar7 = *(byte *)(lVar1 + 0xe14);
          if (bVar7 == 0xff) {
            puVar15 = (undefined1 *)(lVar1 + 0xe14);
          }
          else {
            do {
              uVar37 = (ulong)bVar7;
              if ((*(uint *)(param_1 + uVar37 * 8 + 0x994) == uVar3) &&
                 (*(uint *)(param_1 + uVar37 * 8 + 0x998) == uVar6)) goto LAB_0026d5f8;
              bVar7 = *(byte *)(param_1 + uVar37 + 0xd94);
            } while (bVar7 != 0xff);
            puVar15 = (undefined1 *)(param_1 + uVar37 + 0xd94);
          }
          *puVar15 = (char)*(int *)(param_1 + 0xe94);
          *(undefined1 *)(param_1 + 0x994 + (ulong)*(uint *)(param_1 + 0xe94) + 0x400) = 0xff;
          uVar4 = *(uint *)(param_1 + 0xe94);
          *(uint *)(param_1 + 0xe94) = uVar4 + 1;
          *(ulong *)(param_1 + 0x994 + (ulong)uVar4 * 8) = CONCAT44(uVar6,uVar3);
        }
      }
LAB_0026d5f8:
      if (((param_4 & 0xff) >> 4 & 1) == 0) {
        uVar3 = param_5[1];
        uVar4 = param_5[2];
        uVar6 = uVar4;
        if (uVar4 <= uVar3) {
          uVar6 = uVar3;
          uVar3 = uVar4;
        }
        if (*(int *)(param_1 + 0xe94) != 0x80) {
          uVar4 = uVar6 | uVar3 << 0x10;
          uVar4 = uVar4 + (uVar4 << 0xf ^ 0xffffffff);
          uVar4 = (uVar4 ^ uVar4 >> 10) * 9;
          uVar4 = uVar4 ^ uVar4 >> 6;
          uVar4 = uVar4 + (uVar4 << 0xb ^ 0xffffffff);
          lVar1 = param_1 + (ulong)((uVar4 ^ uVar4 >> 0x10) & 0x7f);
          bVar7 = *(byte *)(lVar1 + 0xe14);
          if (bVar7 == 0xff) {
            puVar15 = (undefined1 *)(lVar1 + 0xe14);
          }
          else {
            do {
              uVar37 = (ulong)bVar7;
              if ((*(uint *)(param_1 + uVar37 * 8 + 0x994) == uVar3) &&
                 (*(uint *)(param_1 + uVar37 * 8 + 0x998) == uVar6)) goto LAB_0026d6c4;
              bVar7 = *(byte *)(param_1 + uVar37 + 0xd94);
            } while (bVar7 != 0xff);
            puVar15 = (undefined1 *)(param_1 + uVar37 + 0xd94);
          }
          *puVar15 = (char)*(int *)(param_1 + 0xe94);
          *(undefined1 *)(param_1 + 0x994 + (ulong)*(uint *)(param_1 + 0xe94) + 0x400) = 0xff;
          uVar4 = *(uint *)(param_1 + 0xe94);
          *(uint *)(param_1 + 0xe94) = uVar4 + 1;
          *(ulong *)(param_1 + 0x994 + (ulong)uVar4 * 8) = CONCAT44(uVar6,uVar3);
        }
      }
LAB_0026d6c4:
      if (((param_4 & 0xff) >> 5 & 1) == 0) {
        uVar3 = param_5[2];
        uVar4 = *param_5;
        uVar6 = uVar4;
        if (uVar4 <= uVar3) {
          uVar6 = uVar3;
          uVar3 = uVar4;
        }
        if (*(int *)(param_1 + 0xe94) != 0x80) {
          uVar4 = uVar6 | uVar3 << 0x10;
          uVar4 = uVar4 + (uVar4 << 0xf ^ 0xffffffff);
          uVar4 = (uVar4 ^ uVar4 >> 10) * 9;
          uVar4 = uVar4 ^ uVar4 >> 6;
          uVar4 = uVar4 + (uVar4 << 0xb ^ 0xffffffff);
          lVar1 = param_1 + (ulong)((uVar4 ^ uVar4 >> 0x10) & 0x7f);
          bVar7 = *(byte *)(lVar1 + 0xe14);
          if (bVar7 == 0xff) {
            puVar15 = (undefined1 *)(lVar1 + 0xe14);
          }
          else {
            do {
              uVar37 = (ulong)bVar7;
              if ((*(uint *)(param_1 + uVar37 * 8 + 0x994) == uVar3) &&
                 (*(uint *)(param_1 + uVar37 * 8 + 0x998) == uVar6)) goto LAB_0026d794;
              bVar7 = *(byte *)(param_1 + uVar37 + 0xd94);
            } while (bVar7 != 0xff);
            puVar15 = (undefined1 *)(param_1 + uVar37 + 0xd94);
          }
          *puVar15 = (char)*(int *)(param_1 + 0xe94);
          *(undefined1 *)(param_1 + 0x994 + (ulong)*(uint *)(param_1 + 0xe94) + 0x400) = 0xff;
          uVar4 = *(uint *)(param_1 + 0xe94);
          *(uint *)(param_1 + 0xe94) = uVar4 + 1;
          *(ulong *)(param_1 + 0x994 + (ulong)uVar4 * 8) = CONCAT44(uVar6,uVar3);
        }
      }
LAB_0026d794:
      iVar14 = *(int *)(param_1 + 0x11a8);
      if (iVar14 != 0x80) {
        uVar6 = *param_5;
        pbVar2 = (byte *)(param_1 + (ulong)(uVar6 & 0x7f) + 0x1128);
        bVar7 = *pbVar2;
        while (bVar7 != 0xff) {
          if (*(uint *)(param_1 + (ulong)bVar7 * 4 + 0xea8) == uVar6) goto LAB_0026d818;
          pbVar2 = (byte *)(param_1 + (ulong)bVar7 + 0x10a8);
          bVar7 = *pbVar2;
        }
        *pbVar2 = (byte)iVar14;
        *(undefined1 *)(param_1 + 0xea8 + (ulong)*(uint *)(param_1 + 0x11a8) + 0x200) = 0xff;
        uVar3 = *(uint *)(param_1 + 0x11a8);
        *(uint *)(param_1 + 0x11a8) = uVar3 + 1;
        *(uint *)(param_1 + 0xea8 + (ulong)uVar3 * 4) = uVar6;
        iVar14 = *(int *)(param_1 + 0x11a8);
LAB_0026d818:
        if (iVar14 != 0x80) {
          uVar6 = param_5[1];
          pbVar2 = (byte *)(param_1 + (ulong)(uVar6 & 0x7f) + 0x1128);
          bVar7 = *pbVar2;
          while (bVar7 != 0xff) {
            if (*(uint *)(param_1 + (ulong)bVar7 * 4 + 0xea8) == uVar6) goto LAB_0026d898;
            pbVar2 = (byte *)(param_1 + (ulong)bVar7 + 0x10a8);
            bVar7 = *pbVar2;
          }
          *pbVar2 = (byte)iVar14;
          *(undefined1 *)(param_1 + 0xea8 + (ulong)*(uint *)(param_1 + 0x11a8) + 0x200) = 0xff;
          uVar3 = *(uint *)(param_1 + 0x11a8);
          *(uint *)(param_1 + 0x11a8) = uVar3 + 1;
          *(uint *)(param_1 + 0xea8 + (ulong)uVar3 * 4) = uVar6;
          iVar14 = *(int *)(param_1 + 0x11a8);
LAB_0026d898:
          if (iVar14 != 0x80) {
            uVar6 = param_5[2];
            pbVar2 = (byte *)(param_1 + (ulong)(uVar6 & 0x7f) + 0x1128);
            bVar7 = *pbVar2;
            while (bVar7 != 0xff) {
              if (*(uint *)(param_1 + (ulong)bVar7 * 4 + 0xea8) == uVar6) goto LAB_0026d914;
              pbVar2 = (byte *)(param_1 + (ulong)bVar7 + 0x10a8);
              bVar7 = *pbVar2;
            }
            *pbVar2 = (byte)iVar14;
            *(undefined1 *)(param_1 + 0xea8 + (ulong)*(uint *)(param_1 + 0x11a8) + 0x200) = 0xff;
            uVar3 = *(uint *)(param_1 + 0x11a8);
            *(uint *)(param_1 + 0x11a8) = uVar3 + 1;
            *(uint *)(param_1 + 0xea8 + (ulong)uVar3 * 4) = uVar6;
          }
        }
      }
LAB_0026d914:
                    /* try { // try from 0026d914 to 0026d923 has its CatchHandler @ 0026d940 */
      FUN_0026c490(param_1,auStack_130,uVar5);
    }
    uVar40 = 1;
  }
  else {
    uVar40 = 0;
  }
  return uVar40;
}


