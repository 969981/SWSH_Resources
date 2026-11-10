/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007163c0; name: FUN_007163c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007163c0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,uint *param_6)

{
  long *plVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  bool bVar27;
  size_t sVar28;
  uint uVar29;
  ulong uVar30;
  long *plVar31;
  undefined1 (*pauVar32) [12];
  long lVar33;
  ulong uVar34;
  undefined4 uVar35;
  long lVar36;
  ulong uVar37;
  byte *pbVar38;
  uint uVar39;
  long *plVar40;
  long lVar41;
  ulong *puVar42;
  long lVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [12];
  float fVar55;
  float fVar56;
  float fVar58;
  undefined1 auVar52 [16];
  float fVar57;
  float fVar59;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar60;
  int iVar64;
  float fVar65;
  int iVar77;
  int iVar82;
  undefined1 auVar66 [12];
  float fVar76;
  float fVar78;
  float fVar83;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar79;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  uint uVar80;
  float fVar81;
  uint uVar84;
  float fVar85;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  int iVar86;
  float fVar87;
  undefined8 uVar88;
  undefined1 auVar90 [16];
  undefined8 uVar89;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar98;
  float fVar99;
  float fVar102;
  float fVar103;
  float fVar104;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float local_270;
  float fStack_26c;
  uint local_260;
  uint uStack_25c;
  uint uStack_258;
  uint uStack_254;
  float local_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float local_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float local_210;
  float fStack_20c;
  float fStack_208;
  undefined8 local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  uint *local_98;
  
  uVar30 = (ulong)(int)*param_6;
  plVar1 = (long *)(param_5 + 0x1d0);
  lVar36 = *(long *)(param_5 + 0x1d8) - *(long *)(param_5 + 0x1d0) >> 4;
  uVar37 = lVar36 * -0xf0f0f0f0f0f0f0f;
  if (uVar37 < uVar30) {
    FUN_0071fe80(plVar1,uVar30 + lVar36 * 0xf0f0f0f0f0f0f0f);
    uVar29 = *param_6;
    uVar8 = DAT_01cd4f98;
    uVar9 = DAT_01cd5070;
    uVar10 = DAT_01cd50b8;
    uVar11 = DAT_01cd5190;
    uVar12 = DAT_01cd51d0;
    uVar13 = DAT_01cd5250;
    uVar14 = DAT_01cd53f0;
    uVar15 = DAT_01cd5418;
    uVar16 = DAT_01cd5420;
    uVar17 = _DAT_01d4a4a0;
    uVar18 = _UNK_01d4a4a8;
    uVar19 = _DAT_01d4ab60;
    uVar20 = _UNK_01d4ab68;
    uVar21 = _DAT_01d4b1c0;
    uVar22 = _UNK_01d4b1c8;
    uVar23 = _DAT_01d4b2f0;
    uVar24 = _UNK_01d4b2f8;
    uVar25 = _DAT_01d4b9d0;
    uVar26 = _UNK_01d4b9d8;
  }
  else {
    if (uVar37 != uVar30) {
      lVar41 = *(long *)(param_5 + 0x1d0) + uVar30 * 0x110;
      lVar36 = *(long *)(param_5 + 0x1d8);
      while (lVar33 = lVar36, lVar41 != lVar33) {
        lVar36 = *(long *)(lVar33 + -0x48);
        if (lVar36 != 0) {
          *(long *)(lVar33 + -0x40) = lVar36;
          (**(code **)(**(long **)(lVar33 + -0x30) + 0x18))
                    (*(long **)(lVar33 + -0x30),lVar36,*(long *)(lVar33 + -0x38) - lVar36,4);
        }
        if (*(long *)(lVar33 + -0xd8) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar33 + -0xd8) + 0x48) + 0x18))();
          *(undefined8 *)(lVar33 + -0xd8) = 0;
        }
        lVar36 = lVar33 + -0x110;
        if (*(long *)(lVar33 + -0xf8) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar33 + -0xf8) + 0x48) + 0x18))();
          *(undefined8 *)(lVar33 + -0xf8) = 0;
        }
      }
      *(long *)(param_5 + 0x1d8) = lVar41;
    }
    uVar29 = *param_6;
    uVar8 = DAT_01cd4f98;
    uVar9 = DAT_01cd5070;
    uVar10 = DAT_01cd50b8;
    uVar11 = DAT_01cd5190;
    uVar12 = DAT_01cd51d0;
    uVar13 = DAT_01cd5250;
    uVar14 = DAT_01cd53f0;
    uVar15 = DAT_01cd5418;
    uVar16 = DAT_01cd5420;
    uVar17 = _DAT_01d4a4a0;
    uVar18 = _UNK_01d4a4a8;
    uVar19 = _DAT_01d4ab60;
    uVar20 = _UNK_01d4ab68;
    uVar21 = _DAT_01d4b1c0;
    uVar22 = _UNK_01d4b1c8;
    uVar23 = _DAT_01d4b2f0;
    uVar24 = _UNK_01d4b2f8;
    uVar25 = _DAT_01d4b9d0;
    uVar26 = _UNK_01d4b9d8;
  }
  DAT_01cd4f98 = uVar8;
  DAT_01cd5070 = uVar9;
  DAT_01cd50b8 = uVar10;
  DAT_01cd5190 = uVar11;
  DAT_01cd51d0 = uVar12;
  DAT_01cd5250 = uVar13;
  DAT_01cd53f0 = uVar14;
  DAT_01cd5418 = uVar15;
  DAT_01cd5420 = uVar16;
  _DAT_01d4a4a0 = uVar17;
  _UNK_01d4a4a8 = uVar18;
  _DAT_01d4ab60 = uVar19;
  _UNK_01d4ab68 = uVar20;
  _DAT_01d4b1c0 = uVar21;
  _UNK_01d4b1c8 = uVar22;
  _DAT_01d4b2f0 = uVar23;
  _UNK_01d4b2f8 = uVar24;
  _DAT_01d4b9d0 = uVar25;
  _UNK_01d4b9d8 = uVar26;
  if (uVar29 != 0) {
    local_98 = param_6 + 1;
    puVar2 = local_98 + uVar29;
    fVar50 = *(float *)PTR_Float1Divided2Pi_02715148;
    fVar56 = *(float *)PTR_Float2Pi_02715150;
    fVar44 = *(float *)PTR_FloatPiDivided2_02715158;
    fVar60 = *(float *)PTR_FloatPi_02715160;
    fVar58 = *(float *)((long)PTR_SinCoefficients_02715168 + 4);
    fVar65 = *(float *)((long)PTR_SinCoefficients_02715168 + 0xc);
    fVar45 = -fVar44;
    fVar61 = -fVar60;
    fVar93 = -*(float *)((long)PTR_SinCoefficients_02715168 + 8);
    fVar87 = -*(float *)PTR_SinCoefficients_02715168;
    fVar98 = -*(float *)((long)PTR_SinCoefficients_02715168 + 0x10);
    fVar46 = -*(float *)PTR_CosCoefficients_02715170;
    fVar78 = *(float *)((long)PTR_CosCoefficients_02715170 + 4);
    fVar47 = -*(float *)((long)PTR_CosCoefficients_02715170 + 8);
    fVar83 = *(float *)((long)PTR_CosCoefficients_02715170 + 0xc);
    fVar48 = -*(float *)((long)PTR_CosCoefficients_02715170 + 0x10);
    auVar54 = NEON_fmov(0xbf800000,4);
    auVar52 = NEON_fmov(0x3f800000,4);
    lVar36 = 0;
    do {
      lVar41 = *plVar1;
      piVar3 = (int *)((long)local_98 + (ulong)*local_98);
      *(int *)(lVar41 + lVar36 * 0x110 + 0x40) = (int)lVar36;
      if (*(ushort *)((long)piVar3 - (long)*piVar3) < 7) {
        uVar35 = 0;
      }
      else {
        uVar30 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3];
        uVar35 = 0;
        if (uVar30 != 0) {
          uVar35 = *(undefined4 *)((long)piVar3 + uVar30);
        }
      }
      *(undefined4 *)(lVar41 + lVar36 * 0x110 + 0x100) = uVar35;
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
         (uVar30 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar30 == 0)) {
        lVar33 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar3 + uVar30);
        lVar33 = (long)puVar4 + (ulong)*puVar4;
      }
      sVar28 = strlen((char *)(lVar33 + 4));
      bVar7 = *(byte *)(lVar33 + 4);
      uVar30 = 0xcbf29ce484222645;
      if (bVar7 != 0) {
        uVar30 = 0xcbf29ce484222645;
        pbVar38 = (byte *)(lVar33 + 5);
        do {
          uVar30 = (uVar30 ^ bVar7) * 0x100000001b3;
          bVar7 = *pbVar38;
          pbVar38 = pbVar38 + 1;
        } while (bVar7 != 0);
      }
      puVar42 = (ulong *)(lVar41 + lVar36 * 0x110);
      *puVar42 = uVar30;
      puVar42[1] = (ulong)(lVar33 + 4);
      puVar42[2] = sVar28;
      puVar42 = puVar42 + 3;
      if (*puVar42 != 0) {
        (**(code **)(*(long *)(*puVar42 + 0x48) + 0x18))();
        *puVar42 = 0;
      }
      *puVar42 = 0;
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0x19) ||
         (uVar30 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0xc], uVar30 == 0)) {
        bVar27 = true;
      }
      else {
        bVar27 = *(char *)((long)piVar3 + uVar30) != '\0';
      }
      *(bool *)(lVar41 + lVar36 * 0x110 + 0x104) = bVar27;
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) ||
         (uVar30 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar30 == 0)) {
        uVar29 = 0;
        *(undefined4 *)(lVar41 + lVar36 * 0x110 + 0x44) = 0;
LAB_007167e0:
        piVar5 = (int *)((long)(param_6 + (ulong)uVar29 + 1) + (ulong)param_6[(ulong)uVar29 + 1]);
        if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
           (uVar30 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar30 == 0)) {
          lVar33 = 0;
        }
        else {
          puVar4 = (uint *)((long)piVar5 + uVar30);
          lVar33 = (long)puVar4 + (ulong)*puVar4;
        }
        sVar28 = strlen((char *)(lVar33 + 4));
        bVar7 = *(byte *)(lVar33 + 4);
        uVar30 = 0xcbf29ce484222645;
        if (bVar7 != 0) {
          uVar30 = 0xcbf29ce484222645;
          pbVar38 = (byte *)(lVar33 + 5);
          do {
            uVar30 = (uVar30 ^ bVar7) * 0x100000001b3;
            bVar7 = *pbVar38;
            pbVar38 = pbVar38 + 1;
          } while (bVar7 != 0);
        }
        lVar43 = lVar41 + lVar36 * 0x110;
        plVar40 = (long *)(lVar43 + 0x38);
        *(ulong *)(lVar43 + 0x20) = uVar30;
        *(char **)(lVar43 + 0x28) = (char *)(lVar33 + 4);
        *(size_t *)(lVar43 + 0x30) = sVar28;
        if (*plVar40 != 0) {
          plVar31 = (long *)(*plVar40 + 0x48);
          (**(code **)(*plVar31 + 0x18))(plVar31);
          *plVar40 = 0;
        }
        *plVar40 = 0;
      }
      else {
        uVar29 = *(uint *)((long)piVar3 + uVar30);
        *(uint *)(lVar41 + lVar36 * 0x110 + 0x44) = uVar29;
        if (-1 < (int)uVar29) goto LAB_007167e0;
      }
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0xf) ||
         (uVar30 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[7], uVar30 == 0)) {
        puVar42 = (ulong *)0x0;
      }
      else {
        puVar42 = (ulong *)((long)piVar3 + uVar30);
      }
      uStack_b8 = (ulong)(uint)puVar42[1];
      local_c0 = *puVar42;
      lVar33 = lVar41 + lVar36 * 0x110 + 0x50;
      FUN_0075e300(lVar33,&local_c0);
      fVar57 = auVar52._8_4_;
      fVar59 = auVar52._12_4_;
      fStack_26c = auVar52._4_4_;
      local_270 = auVar52._0_4_;
      local_260 = auVar54._0_4_;
      uStack_25c = auVar54._4_4_;
      uStack_258 = auVar54._8_4_;
      uStack_254 = auVar54._12_4_;
      puVar6 = (undefined8 *)
               ((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (0x10 - (long)*piVar3)));
      fVar62 = *(float *)(puVar6 + 1);
      uVar88 = *puVar6;
      fVar49 = (float)uVar88;
      fVar63 = fVar49 * fVar50;
      fVar55 = (float)((ulong)uVar88 >> 0x20);
      fVar76 = fVar55 * fVar50;
      fVar79 = fVar62 * fVar50;
      auVar67._0_4_ = (int)(fVar63 + (float)(-(uint)(0.0 <= fVar63) & 0x80000000 ^ 0xbf000000));
      auVar67._4_4_ = (int)(fVar76 + (float)(-(uint)(0.0 <= fVar76) & 0x80000000 ^ 0xbf000000));
      auVar67._8_4_ = (int)(fVar79 + (float)(-(uint)(0.0 <= fVar79) & 0x80000000 ^ 0xbf000000));
      auVar67._12_4_ =
           (int)(fVar50 * 0.0 + (float)(-(uint)(0.0 <= fVar50 * 0.0) & 0x80000000 ^ 0xbf000000));
      auVar68 = NEON_scvtf(auVar67,4);
      fVar49 = fVar49 - auVar68._0_4_ * fVar56;
      fVar55 = fVar55 - auVar68._4_4_ * fVar56;
      fVar62 = fVar62 - auVar68._8_4_ * fVar56;
      fVar63 = 0.0 - auVar68._12_4_ * fVar56;
      uVar29 = (uint)local_270 ^ ((uint)local_270 ^ local_260) & -(uint)(fVar44 < fVar49);
      uVar39 = (uint)fStack_26c ^ ((uint)fStack_26c ^ uStack_25c) & -(uint)(fVar44 < fVar55);
      uVar80 = (uint)fVar57 ^ ((uint)fVar57 ^ uStack_258) & -(uint)(fVar44 < fVar62);
      uVar84 = (uint)fVar59 ^ ((uint)fVar59 ^ uStack_254) & -(uint)(fVar44 < fVar63);
      fVar49 = (float)((uint)fVar49 ^
                      ((uint)fVar49 ^ (uint)(fVar60 - fVar49)) & -(uint)(fVar44 < fVar49));
      fVar55 = (float)((uint)fVar55 ^
                      ((uint)fVar55 ^ (uint)(fVar60 - fVar55)) & -(uint)(fVar44 < fVar55));
      fVar62 = (float)((uint)fVar62 ^
                      ((uint)fVar62 ^ (uint)(fVar60 - fVar62)) & -(uint)(fVar44 < fVar62));
      fVar63 = (float)((uint)fVar63 ^
                      ((uint)fVar63 ^ (uint)(fVar60 - fVar63)) & -(uint)(fVar44 < fVar63));
      fVar99 = (float)((uint)fVar49 ^
                      ((uint)fVar49 ^ (uint)(fVar61 - fVar49)) & -(uint)(fVar49 < fVar45));
      fVar102 = (float)((uint)fVar55 ^
                       ((uint)fVar55 ^ (uint)(fVar61 - fVar55)) & -(uint)(fVar55 < fVar45));
      fVar103 = (float)((uint)fVar62 ^
                       ((uint)fVar62 ^ (uint)(fVar61 - fVar62)) & -(uint)(fVar62 < fVar45));
      fVar104 = (float)((uint)fVar63 ^
                       ((uint)fVar63 ^ (uint)(fVar61 - fVar63)) & -(uint)(fVar63 < fVar45));
      fVar76 = fVar99 * fVar99;
      fVar79 = fVar102 * fVar102;
      fVar81 = fVar103 * fVar103;
      fVar85 = fVar104 * fVar104;
      auVar90._0_4_ =
           (local_270 +
           fVar76 * (fVar98 + fVar76 * (fVar65 + fVar76 * (fVar93 + fVar76 * (fVar58 + fVar76 * 
                                                  fVar87))))) * fVar99;
      auVar90._4_4_ =
           (fStack_26c +
           fVar79 * (fVar98 + fVar79 * (fVar65 + fVar79 * (fVar93 + fVar79 * (fVar58 + fVar79 * 
                                                  fVar87))))) * fVar102;
      auVar90._8_4_ =
           (fVar57 + fVar81 * (fVar98 + fVar81 * (fVar65 + fVar81 * (fVar93 + fVar81 * (fVar58 + 
                                                  fVar81 * fVar87))))) * fVar103;
      auVar90._12_4_ =
           (fVar59 + fVar85 * (fVar98 + fVar85 * (fVar65 + fVar85 * (fVar93 + fVar85 * (fVar58 + 
                                                  fVar85 * fVar87))))) * fVar104;
      auVar68._0_4_ =
           (local_270 +
           fVar76 * (fVar48 + fVar76 * (fVar83 + fVar76 * (fVar47 + fVar76 * (fVar78 + fVar76 * 
                                                  fVar46))))) *
           (float)(uVar29 ^ (uVar29 ^ local_260) & -(uint)(fVar49 < fVar45));
      auVar68._4_4_ =
           (fStack_26c +
           fVar79 * (fVar48 + fVar79 * (fVar83 + fVar79 * (fVar47 + fVar79 * (fVar78 + fVar79 * 
                                                  fVar46))))) *
           (float)(uVar39 ^ (uVar39 ^ uStack_25c) & -(uint)(fVar55 < fVar45));
      auVar68._8_4_ =
           (fVar57 + fVar81 * (fVar48 + fVar81 * (fVar83 + fVar81 * (fVar47 + fVar81 * (fVar78 + 
                                                  fVar81 * fVar46))))) *
           (float)(uVar80 ^ (uVar80 ^ uStack_258) & -(uint)(fVar62 < fVar45));
      auVar68._12_4_ =
           (fVar59 + fVar85 * (fVar48 + fVar85 * (fVar83 + fVar85 * (fVar47 + fVar85 * (fVar78 + 
                                                  fVar85 * fVar46))))) *
           (float)(uVar84 ^ (uVar84 ^ uStack_254) & -(uint)(fVar63 < fVar45));
      auVar94 = NEON_ext(auVar90,auVar90,8,1);
      auVar100 = NEON_ext(auVar68,auVar68,8,1);
      fVar49 = auVar100._0_4_;
      fVar55 = auVar94._0_4_;
      fVar85 = auVar68._4_4_ * fVar49;
      auVar109._0_8_ = CONCAT44(auVar68._4_4_ * fVar55,fVar85);
      auVar109._8_4_ = (float)uVar14 * auVar90._4_4_;
      auVar109._12_4_ = (float)((ulong)uVar14 >> 0x20) * 0.0;
      fVar63 = (float)uVar9 * auVar68._4_4_;
      local_210 = (float)uVar17;
      fStack_20c = (float)((ulong)uVar17 >> 0x20);
      fStack_208 = (float)uVar18;
      local_220 = (float)uVar21;
      fStack_21c = (float)((ulong)uVar21 >> 0x20);
      fStack_218 = (float)uVar22;
      fVar76 = fVar55 * auVar68._0_4_ * local_210 + auVar90._4_4_ * fVar49 * auVar90._0_4_;
      fVar79 = fVar49 * auVar68._0_4_ * fStack_20c + auVar90._4_4_ * fVar55 * auVar90._0_4_;
      fVar81 = auVar68._0_4_ * 0.0 * fStack_208 + fVar63 * auVar90._0_4_;
      fVar62 = fVar49 * auVar90._0_4_ * fStack_21c + auVar90._4_4_ * fVar55 * auVar68._0_4_;
      fVar63 = auVar90._0_4_ * 0.0 * fStack_218 + fVar63 * auVar68._0_4_;
      local_240 = (float)uVar25;
      fStack_23c = (float)((ulong)uVar25 >> 0x20);
      fStack_238 = (float)uVar26;
      fStack_234 = (float)((ulong)uVar26 >> 0x20);
      local_230 = (float)uVar19;
      fStack_22c = (float)((ulong)uVar19 >> 0x20);
      fStack_228 = (float)uVar20;
      fStack_224 = (float)((ulong)uVar20 >> 0x20);
      local_250 = (float)uVar23;
      fStack_24c = (float)((ulong)uVar23 >> 0x20);
      fStack_248 = (float)uVar24;
      fStack_244 = (float)((ulong)uVar24 >> 0x20);
      uVar88 = NEON_ext(auVar109._0_8_,
                        CONCAT44(fVar62,fVar55 * auVar90._0_4_ * local_220 +
                                        auVar90._4_4_ * fVar49 * auVar68._0_4_),4,1);
      auVar68 = NEON_ext(auVar109,auVar109,8,1);
      local_270 = local_230 * fVar85 + local_240 * fVar79 + local_250 * fVar63 + local_270;
      fStack_26c = fStack_22c * fVar85 + fStack_23c * fVar79 + fStack_24c * fVar63 + fStack_26c;
      fVar57 = fStack_228 * fVar85 + fStack_238 * fVar79 + fStack_248 * fVar63 + fVar57;
      fVar59 = fStack_224 * fVar85 + fStack_234 * fVar79 + fStack_244 * fVar63 + fVar59;
      auVar105._4_4_ = fStack_26c;
      auVar105._0_4_ = fStack_26c;
      auVar105._8_4_ = fStack_26c;
      auVar105._12_4_ = fStack_26c;
      auVar95._0_4_ = (float)uVar88 + fVar76;
      fVar49 = (float)((ulong)uVar88 >> 0x20);
      auVar95._4_4_ = fVar49 + auVar68._0_4_;
      auVar95._8_4_ = fVar81 + fVar62;
      auVar95._12_4_ = 0;
      auVar101._0_4_ = (float)uVar88 - fVar76;
      auVar101._4_4_ = fVar49 - auVar68._0_4_;
      auVar101._8_4_ = fVar81 - fVar62;
      auVar101._12_4_ = 0;
      auVar111._4_4_ = local_270;
      auVar111._0_4_ = local_270;
      auVar111._8_4_ = local_270;
      auVar111._12_4_ = local_270;
      auVar108._0_8_ = CONCAT44(-(uint)(local_270 <= fStack_26c),-(uint)(local_270 <= fStack_26c));
      auVar108._8_4_ = -(uint)(local_270 <= fStack_26c);
      auVar108._12_4_ = -(uint)(local_270 <= fStack_26c);
      auVar110._8_8_ = auVar108._8_8_;
      auVar110._0_8_ = auVar108._0_8_;
      uVar88 = a64_TBL(ZEXT816(0),auVar95,auVar101,uVar16);
      auVar111 = auVar111 ^ (auVar111 ^ auVar105) & auVar110;
      uVar89 = a64_TBL(ZEXT816(0),auVar95,auVar101,uVar12);
      auVar106._8_8_ = uVar89;
      auVar106._0_8_ = uVar88;
      uVar89 = a64_TBL(ZEXT816(0),auVar95,auVar101,uVar13);
      auVar100._4_12_ = auVar106._4_12_;
      auVar100._0_4_ = local_270;
      auVar69._0_4_ = (undefined4)uVar88;
      auVar69._4_4_ = fStack_26c;
      auVar69._8_8_ = uVar89;
      auVar100 = auVar100 ^ (auVar100 ^ auVar69) & auVar108;
      auVar70._4_4_ = fVar57;
      auVar70._0_4_ = fVar57;
      auVar70._8_4_ = fVar57;
      auVar70._12_4_ = fVar57;
      auVar91._0_8_ = CONCAT44(-(uint)(auVar111._4_4_ <= fVar57),-(uint)(auVar111._0_4_ <= fVar57));
      auVar91._8_4_ = -(uint)(auVar111._8_4_ <= fVar57);
      auVar91._12_4_ = -(uint)(auVar111._12_4_ <= fVar57);
      auVar107._8_8_ = auVar91._8_8_;
      auVar107._0_8_ = auVar91._0_8_;
      auVar111 = auVar111 ^ (auVar111 ^ auVar70) & auVar107;
      auVar71._0_8_ = a64_TBL(ZEXT816(0),auVar95,auVar101,uVar15);
      uVar88 = a64_TBL(ZEXT816(0),auVar95,auVar101,uVar10);
      auVar71._12_4_ = (undefined4)((ulong)uVar88 >> 0x20);
      auVar71._8_4_ = fVar57;
      auVar100 = auVar100 ^ (auVar100 ^ auVar71) & auVar91;
      auVar72._0_8_ = a64_TBL(ZEXT816(0),auVar95,auVar101,uVar11);
      uVar88 = a64_TBL(ZEXT816(0),auVar95,auVar101,uVar8);
      auVar72._8_8_ = uVar88;
      auVar73._0_12_ = auVar72._0_12_;
      auVar73._12_4_ = fVar59;
      auVar94._0_4_ = -(uint)(auVar111._0_4_ <= fVar59);
      auVar94._4_4_ = -(uint)(auVar111._4_4_ <= fVar59);
      auVar94._8_4_ = -(uint)(auVar111._8_4_ <= fVar59);
      auVar94._12_4_ = -(uint)(auVar111._12_4_ <= fVar59);
      auVar100 = auVar100 ^ (auVar100 ^ auVar73) & auVar94;
      fVar62 = auVar100._0_4_;
      auVar74._0_4_ = fVar62 * fVar62;
      fVar57 = auVar100._4_4_;
      auVar74._4_4_ = fVar57 * fVar57;
      fVar63 = auVar100._8_4_;
      auVar74._8_4_ = fVar63 * fVar63;
      fVar59 = auVar100._12_4_;
      auVar74._12_4_ = fVar59 * fVar59;
      auVar68 = NEON_ext(auVar74,auVar74,8,1);
      fVar55 = auVar68._0_4_ + auVar74._0_4_;
      fVar76 = auVar68._4_4_ + auVar74._4_4_;
      fVar49 = fVar55 + fVar76;
      fVar55 = fVar55 + fVar76;
      auVar75._8_8_ = CONCAT44(fVar55,fVar49);
      auVar75._0_8_ = CONCAT44(fVar55,fVar49);
      auVar68 = NEON_frsqrte(auVar75,4);
      auVar96._0_4_ = auVar68._0_4_ * fVar49;
      auVar96._4_4_ = auVar68._4_4_ * fVar55;
      auVar96._8_4_ = auVar68._8_4_ * fVar49;
      auVar96._12_4_ = auVar68._12_4_ * fVar55;
      auVar94 = NEON_frsqrts(auVar68,auVar96,4);
      auVar92._0_4_ = auVar68._0_4_ * auVar94._0_4_;
      auVar92._4_4_ = auVar68._4_4_ * auVar94._4_4_;
      auVar92._8_4_ = auVar68._8_4_ * auVar94._8_4_;
      auVar92._12_4_ = auVar68._12_4_ * auVar94._12_4_;
      auVar97._0_4_ = fVar49 * auVar92._0_4_;
      auVar97._4_4_ = fVar55 * auVar92._4_4_;
      auVar97._8_4_ = fVar49 * auVar92._8_4_;
      auVar97._12_4_ = fVar55 * auVar92._12_4_;
      iVar64 = -(uint)(fVar49 == 0.0);
      iVar77 = -(uint)(fVar55 == 0.0);
      iVar82 = -(uint)(fVar49 == 0.0);
      iVar86 = -(uint)(fVar55 == 0.0);
      param_2[0] = ~(byte)iVar64;
      param_2[1] = ~(byte)((uint)iVar64 >> 8);
      param_2[2] = ~(byte)((uint)iVar64 >> 0x10);
      param_2[3] = ~(byte)((uint)iVar64 >> 0x18);
      param_2[4] = ~(byte)iVar77;
      param_2[5] = ~(byte)((uint)iVar77 >> 8);
      param_2[6] = ~(byte)((uint)iVar77 >> 0x10);
      param_2[7] = ~(byte)((uint)iVar77 >> 0x18);
      param_2[8] = ~(byte)iVar82;
      param_2[9] = ~(byte)((uint)iVar82 >> 8);
      param_2[10] = ~(byte)((uint)iVar82 >> 0x10);
      param_2[0xb] = ~(byte)((uint)iVar82 >> 0x18);
      param_2[0xc] = ~(byte)iVar86;
      param_2[0xd] = ~(byte)((uint)iVar86 >> 8);
      param_2[0xe] = ~(byte)((uint)iVar86 >> 0x10);
      param_2[0xf] = ~(byte)((uint)iVar86 >> 0x18);
      param_4 = NEON_frsqrts(auVar92,auVar97,4);
      param_3._0_4_ = auVar92._0_4_ * param_4._0_4_;
      param_3._4_4_ = auVar92._4_4_ * param_4._4_4_;
      param_3._8_4_ = auVar92._8_4_ * param_4._8_4_;
      param_3._12_4_ = auVar92._12_4_ * param_4._12_4_;
      fVar62 = param_3._0_4_ * fVar62;
      fVar57 = param_3._4_4_ * fVar57;
      fVar63 = param_3._8_4_ * fVar63;
      fVar59 = param_3._12_4_ * fVar59;
      auVar53._0_8_ =
           CONCAT17((byte)((uint)fVar57 >> 0x18) & param_2[7],
                    CONCAT16((byte)((uint)fVar57 >> 0x10) & param_2[6],
                             CONCAT15((byte)((uint)fVar57 >> 8) & param_2[5],
                                      CONCAT14(SUB41(fVar57,0) & param_2[4],
                                               CONCAT13((byte)((uint)fVar62 >> 0x18) & param_2[3],
                                                        CONCAT12((byte)((uint)fVar62 >> 0x10) &
                                                                 param_2[2],
                                                                 CONCAT11((byte)((uint)fVar62 >> 8)
                                                                          & param_2[1],
                                                                          SUB41(fVar62,0) &
                                                                          param_2[0])))))));
      auVar53[8] = SUB41(fVar63,0) & param_2[8];
      auVar53[9] = (byte)((uint)fVar63 >> 8) & param_2[9];
      auVar53[10] = (byte)((uint)fVar63 >> 0x10) & param_2[10];
      auVar53[0xb] = (byte)((uint)fVar63 >> 0x18) & param_2[0xb];
      auVar53[0xc] = SUB41(fVar59,0) & param_2[0xc];
      auVar53[0xd] = (byte)((uint)fVar59 >> 8) & param_2[0xd];
      auVar53[0xe] = (byte)((uint)fVar59 >> 0x10) & param_2[0xe];
      auVar53[0xf] = (byte)((uint)fVar59 >> 0x18) & param_2[0xf];
      uStack_b8 = auVar53._8_8_;
      local_c0 = auVar53._0_8_;
      FUN_0075e320(lVar33,&local_c0);
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0x13) ||
         (uVar30 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[9], uVar30 == 0)) {
        pauVar32 = (undefined1 (*) [12])0x0;
      }
      else {
        pauVar32 = (undefined1 (*) [12])((long)piVar3 + uVar30);
      }
      uStack_c8 = (ulong)SUB124(*pauVar32,8);
      local_d0 = SUB128(*pauVar32,0);
      FUN_0075e340(lVar33,&local_d0);
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0xb) ||
         (uVar30 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[5], uVar30 == 0)) {
        uVar35 = 0;
      }
      else {
        uVar35 = *(undefined4 *)((long)piVar3 + uVar30);
      }
      *(undefined4 *)(lVar41 + lVar36 * 0x110 + 0xc0) = uVar35;
      if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0xd) {
        bVar27 = false;
      }
      else {
        uVar30 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[6];
        bVar27 = false;
        if (uVar30 != 0) {
          bVar27 = *(char *)((long)piVar3 + uVar30) != '\0';
        }
      }
      *(bool *)(lVar41 + lVar36 * 0x110 + 0xc4) = bVar27;
      local_98 = local_98 + 1;
      lVar36 = lVar36 + 1;
    } while (local_98 != puVar2);
  }
  lVar36 = *(long *)(param_5 + 0x1d0);
  lVar41 = *(long *)(param_5 + 0x1d8);
  if (lVar36 != lVar41) {
    do {
      while (uVar30 = (ulong)*(int *)(lVar36 + 0x44), *(int *)(lVar36 + 0x44) < 0) {
        auVar54 = FUN_0075e360(lVar36 + 0x50);
        *(long *)(lVar36 + 0x88) = auVar54._8_8_;
        *(long *)(lVar36 + 0x80) = auVar54._0_8_;
        *(long *)(lVar36 + 0x98) = param_2._8_8_;
        *(long *)(lVar36 + 0x90) = param_2._0_8_;
        *(long *)(lVar36 + 0xa8) = param_3._8_8_;
        *(long *)(lVar36 + 0xa0) = param_3._0_8_;
        *(long *)(lVar36 + 0xb8) = param_4._8_8_;
        *(long *)(lVar36 + 0xb0) = param_4._0_8_;
        lVar36 = lVar36 + 0x110;
        if (lVar41 == lVar36) goto LAB_00716d14;
      }
      lVar33 = *(long *)(param_5 + 0x1d0);
      if ((ulong)((*(long *)(param_5 + 0x1d8) - lVar33 >> 4) * -0xf0f0f0f0f0f0f0f) <= uVar30) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      auVar54 = *(undefined1 (*) [16])(lVar33 + uVar30 * 0x110 + 0x50);
      uStack_b8 = auVar54._8_8_;
      local_c0 = auVar54._0_8_;
      if (*(char *)(lVar36 + 0xc4) == '\0') {
        auVar54 = FUN_0075e360(lVar36 + 0x50);
        auVar66 = param_2._0_12_;
        auVar51 = auVar54._0_12_;
      }
      else {
        auVar54 = FUN_0075e540(lVar36 + 0x50,&local_c0);
        auVar66 = param_2._0_12_;
        auVar51 = auVar54._0_12_;
      }
      lVar33 = lVar33 + uVar30 * 0x110;
      auVar54 = *(undefined1 (*) [16])(lVar33 + 0x80);
      auVar52 = *(undefined1 (*) [16])(lVar33 + 0x90);
      fVar50 = auVar51._0_4_;
      fVar61 = auVar54._0_4_;
      fVar87 = auVar54._4_4_;
      fVar93 = auVar54._8_4_;
      fVar98 = auVar54._12_4_;
      fVar56 = auVar51._4_4_;
      fVar49 = auVar52._0_4_;
      fVar55 = auVar52._4_4_;
      fVar62 = auVar52._8_4_;
      fVar57 = auVar52._12_4_;
      auVar54 = *(undefined1 (*) [16])(lVar33 + 0xa0);
      auVar52 = *(undefined1 (*) [16])(lVar33 + 0xb0);
      fVar58 = auVar51._8_4_;
      fVar63 = auVar54._0_4_;
      fVar59 = auVar54._4_4_;
      fVar76 = auVar54._8_4_;
      fVar79 = auVar54._12_4_;
      fVar65 = auVar66._0_4_;
      fVar78 = auVar66._4_4_;
      fVar83 = auVar66._8_4_;
      fVar47 = param_4._0_4_;
      fVar48 = param_4._4_4_;
      fVar44 = param_3._0_4_;
      fVar45 = param_3._4_4_;
      fVar46 = param_3._8_4_;
      fVar60 = param_4._8_4_;
      param_2._0_4_ = fVar61 * fVar47 + fVar49 * fVar48 + fVar63 * fVar60;
      param_2._4_4_ = fVar87 * fVar47 + fVar55 * fVar48 + fVar59 * fVar60;
      param_2._8_4_ = fVar93 * fVar47 + fVar62 * fVar48 + fVar76 * fVar60;
      param_2._12_4_ = fVar98 * fVar47 + fVar57 * fVar48 + fVar79 * fVar60;
      *(ulong *)(lVar36 + 0x88) =
           CONCAT44(fVar98 * fVar50 + fVar57 * fVar56 + fVar79 * fVar58,
                    fVar93 * fVar50 + fVar62 * fVar56 + fVar76 * fVar58);
      *(ulong *)(lVar36 + 0x80) =
           CONCAT44(fVar87 * fVar50 + fVar55 * fVar56 + fVar59 * fVar58,
                    fVar61 * fVar50 + fVar49 * fVar56 + fVar63 * fVar58);
      *(float *)(lVar36 + 0x98) = fVar93 * fVar65 + fVar62 * fVar78 + fVar76 * fVar83;
      *(float *)(lVar36 + 0x9c) = fVar98 * fVar65 + fVar57 * fVar78 + fVar79 * fVar83;
      *(float *)(lVar36 + 0x90) = fVar61 * fVar65 + fVar49 * fVar78 + fVar63 * fVar83;
      *(float *)(lVar36 + 0x94) = fVar87 * fVar65 + fVar55 * fVar78 + fVar59 * fVar83;
      auVar54._0_8_ = CONCAT44(auVar52._4_4_ + param_2._4_4_,auVar52._0_4_ + param_2._0_4_);
      auVar54._8_4_ = auVar52._8_4_ + param_2._8_4_;
      auVar54._12_4_ = auVar52._12_4_ + param_2._12_4_;
      *(ulong *)(lVar36 + 0xa8) =
           CONCAT44(fVar98 * fVar44 + fVar57 * fVar45 + fVar79 * fVar46,
                    fVar93 * fVar44 + fVar62 * fVar45 + fVar76 * fVar46);
      *(ulong *)(lVar36 + 0xa0) =
           CONCAT44(fVar87 * fVar44 + fVar55 * fVar45 + fVar59 * fVar46,
                    fVar61 * fVar44 + fVar49 * fVar45 + fVar63 * fVar46);
      *(long *)(lVar36 + 0xb8) = auVar54._8_8_;
      *(undefined8 *)(lVar36 + 0xb0) = auVar54._0_8_;
      lVar36 = lVar36 + 0x110;
    } while (lVar41 != lVar36);
LAB_00716d14:
    lVar36 = *(long *)(param_5 + 0x1d0);
    lVar41 = *(long *)(param_5 + 0x1d8);
    if (lVar36 != lVar41) {
      lVar43 = lVar41;
      lVar33 = lVar36;
      do {
        plVar40 = (long *)(lVar33 + 200);
        uVar37 = (lVar43 - lVar36 >> 4) * -0xf0f0f0f0f0f0f0f;
        local_c0 = local_c0 & 0xffffffff00000000;
        uVar30 = uVar37 >> 5;
        if ((uVar37 & 0x1f) != 0) {
          uVar30 = uVar30 + 1;
        }
        uVar34 = *(long *)(lVar33 + 0xd0) - *plVar40 >> 2;
        lVar36 = uVar30 - uVar34;
        if (lVar36 == 0) {
LAB_00716d7c:
          *(ulong *)(lVar33 + 0xf8) = uVar37;
        }
        else if (uVar30 < uVar34 || lVar36 == 0) {
          if (uVar34 <= uVar30) goto LAB_00716d7c;
          *(ulong *)(lVar33 + 0xd0) = *plVar40 + uVar30 * 4;
          *(ulong *)(lVar33 + 0xf8) = uVar37;
        }
        else {
          FUN_007204b0(plVar40,lVar36,&local_c0);
          *(ulong *)(lVar33 + 0xf8) = uVar37;
        }
        if ((uVar37 & 0x1f) != 0) {
          *(uint *)(*(long *)(lVar33 + 0xd0) + -4) =
               *(uint *)(*(long *)(lVar33 + 0xd0) + -4) & (-1 << (uVar37 & 0x1f) ^ 0xffffffffU);
        }
        uVar30 = (ulong)(long)(int)*(uint *)(lVar33 + 0x40) >> 3 & 0x1ffffffffffffffc;
        *(uint *)(*(long *)(lVar33 + 200) + uVar30) =
             *(uint *)(*(long *)(lVar33 + 200) + uVar30) |
             1 << (ulong)(*(uint *)(lVar33 + 0x40) & 0x1f);
        lVar36 = *(long *)(param_5 + 0x1d0);
        lVar43 = *(long *)(param_5 + 0x1d8);
joined_r0x00716dc4:
        if (lVar36 != lVar43) {
          uVar29 = *(uint *)(lVar36 + 0x40);
          if ((*(uint *)(lVar33 + 0x40) != uVar29) &&
             (uVar39 = *(uint *)(lVar36 + 0x44), -1 < (int)uVar39)) {
            do {
              if (uVar39 == *(uint *)(lVar33 + 0x40)) {
                uVar30 = (ulong)(long)(int)uVar29 >> 3 & 0x1ffffffffffffffc;
                *(uint *)(*plVar40 + uVar30) =
                     *(uint *)(*plVar40 + uVar30) | 1 << (ulong)(uVar29 & 0x1f);
                lVar36 = lVar36 + 0x110;
                goto joined_r0x00716dc4;
              }
              uVar39 = *(uint *)(*plVar1 + (long)(int)uVar39 * 0x110 + 0x44);
            } while (-1 < (int)uVar39);
          }
          lVar36 = lVar36 + 0x110;
          goto joined_r0x00716dc4;
        }
        lVar33 = lVar33 + 0x110;
        if (lVar33 == lVar41) {
          return;
        }
        lVar36 = *(long *)(param_5 + 0x1d0);
        lVar43 = *(long *)(param_5 + 0x1d8);
      } while( true );
    }
  }
  return;
}


