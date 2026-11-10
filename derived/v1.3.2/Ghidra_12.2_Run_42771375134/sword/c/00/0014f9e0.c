/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014f9e0; name: FUN_0014f9e0
 */


void FUN_0014f9e0(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long *plVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  uint *puVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  uint *puVar34;
  uint uVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  undefined8 *puVar39;
  float *pfVar40;
  undefined8 *__src;
  int iVar41;
  ulong uVar42;
  code *pcVar43;
  int iVar44;
  undefined8 *puVar45;
  ulong uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [12];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar63 [12];
  float fVar71;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar72;
  float fVar73;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  byte bVar75;
  byte bVar74;
  float fVar76;
  undefined1 auVar77 [12];
  byte bVar81;
  byte bVar83;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  undefined1 auVar78 [16];
  byte bVar82;
  byte bVar84;
  byte bVar86;
  byte bVar85;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  undefined1 auVar97 [16];
  byte bVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  undefined1 auVar113 [16];
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar122;
  float fVar123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  uint local_1f4;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined8 *local_180;
  uint uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  uint local_16c;
  uint local_140 [4];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  float local_110;
  float local_10c;
  
  lVar15 = *(long *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (*(uint *)(param_1 + 0x90) == 0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    uVar21 = *(uint *)(param_1 + 0x68);
joined_r0x0014fbac:
    if (uVar21 != 0) goto LAB_0014fa94;
LAB_0014fbb0:
    uVar27 = 0;
    iVar44 = *(int *)(param_1 + 0x5c);
    *(undefined8 *)(param_1 + 0x88) = 0;
    fVar112 = DAT_01d4c35c;
    pfVar14 = (float *)PTR_DAT_02710d88;
  }
  else {
    uVar27 = *(long *)(lVar15 + 0x10) + 0x1fU & 0xfffffffffffffff0;
    lVar23 = (ulong)*(uint *)(param_1 + 0x90) * 2;
    *(undefined8 *)(uVar27 - 0x10) = *(undefined8 *)(lVar15 + 0x18);
    *(uint *)(uVar27 - 8) = (uint)lVar23 & 0x7fffffff;
    *(ulong *)(lVar15 + 0x10) = uVar27 + lVar23;
    *(undefined8 **)(lVar15 + 0x18) = (undefined8 *)(uVar27 - 0x10);
    lVar15 = *(long *)(param_1 + 0xa0);
    *(ulong *)(param_1 + 0x70) = uVar27;
    if (*(uint *)(param_1 + 0x90) == 0) {
      *(undefined8 *)(param_1 + 0x78) = 0;
      uVar21 = *(uint *)(param_1 + 0x68);
      goto joined_r0x0014fbac;
    }
    lVar23 = (ulong)*(uint *)(param_1 + 0x90) * 4;
    uVar27 = *(long *)(lVar15 + 0x10) + 0x1fU & 0xfffffffffffffff0;
    *(undefined8 *)(uVar27 - 0x10) = *(undefined8 *)(lVar15 + 0x18);
    *(uint *)(uVar27 - 8) = (uint)lVar23 & 0x7fffffff;
    *(ulong *)(lVar15 + 0x10) = uVar27 + lVar23;
    *(undefined8 **)(lVar15 + 0x18) = (undefined8 *)(uVar27 - 0x10);
    lVar15 = *(long *)(param_1 + 0xa0);
    *(ulong *)(param_1 + 0x78) = uVar27;
    uVar21 = *(uint *)(param_1 + 0x68);
    if (uVar21 == 0) goto LAB_0014fbb0;
LAB_0014fa94:
    uVar27 = *(long *)(lVar15 + 0x10) + 0x1fU & 0xfffffffffffffff0;
    *(undefined8 *)(uVar27 - 0x10) = *(undefined8 *)(lVar15 + 0x18);
    *(uint *)(uVar27 - 8) = (uint)((ulong)uVar21 * 8) & 0x7fffffff;
    *(ulong *)(lVar15 + 0x10) = uVar27 + (ulong)uVar21 * 8;
    *(undefined8 **)(lVar15 + 0x18) = (undefined8 *)(uVar27 - 0x10);
    iVar44 = *(int *)(param_1 + 0x5c);
    *(ulong *)(param_1 + 0x88) = uVar27;
    fVar112 = DAT_01d4c35c;
    pfVar14 = (float *)PTR_DAT_02710d88;
  }
  DAT_01d4c35c = fVar112;
  PTR_DAT_02710d88 = (undefined *)pfVar14;
  if (iVar44 != 0) {
    uVar21 = 0;
    auVar54 = NEON_fmov(0x3f800000,4);
    do {
      lVar23 = *(long *)(param_1 + 0x70);
      local_1a0 = *pfVar14;
      auVar65._0_8_ = CONCAT44(local_1a0,local_1a0);
      auVar65._8_4_ = local_1a0;
      auVar65._12_4_ = local_1a0;
      lVar32 = *(long *)(param_1 + 0x60);
      lVar16 = *(long *)(param_1 + 0x78);
      uVar22 = *(uint *)(param_1 + 0x68);
      uVar42 = (ulong)uVar22;
      pcVar2 = *(code **)(param_1 + 0x98);
      lVar15 = *(long *)(param_1 + 0xa0);
      local_1b0 = -local_1a0;
      fStack_1ac = -local_1a0;
      fStack_1a8 = -local_1a0;
      fStack_1a4 = -local_1a0;
      if (uVar22 == 0) {
        auVar67._8_8_ = auVar65._8_8_;
        auVar67._0_8_ = auVar65._0_8_;
        auVar53 = auVar67._0_12_;
        plVar24 = (long *)0x0;
        uVar38 = 0;
        puVar45 = (undefined8 *)0x0;
        local_190 = local_1b0;
        fStack_18c = fStack_1ac;
        fStack_188 = fStack_1a8;
      }
      else {
        pfVar40 = (float *)(lVar32 + 0x50);
        uVar38 = *(long *)(lVar15 + 0x10) + 0x1fU & 0xfffffffffffffff0;
        puVar39 = (undefined8 *)(uVar38 + uVar42 * 0x20);
        *(undefined8 *)(uVar38 - 0x10) = *(undefined8 *)(lVar15 + 0x18);
        uVar19 = (uint)(uVar42 * 0x20) & 0x7fffffff;
        puVar45 = puVar39 + 2;
        *(uint *)(uVar38 - 8) = uVar19;
        plVar10 = puVar45 + uVar42 * 4;
        *puVar39 = (undefined8 *)(uVar38 - 0x10);
        *(uint *)(puVar39 + 1) = uVar19;
        fStack_184 = *pfVar14;
        auVar78._4_4_ = fStack_184;
        auVar78._0_4_ = fStack_184;
        auVar78._8_4_ = fStack_184;
        auVar78._12_4_ = fStack_184;
        plVar24 = plVar10 + 2;
        *plVar10 = (long)puVar39;
        *(uint *)(plVar10 + 1) = (uint)(uVar42 * 4) & 0x7ffffffc;
        *(ulong *)(lVar15 + 0x10) = (long)plVar24 + uVar42 * 4;
        *(long **)(lVar15 + 0x18) = plVar10;
        local_190 = -fStack_184;
        fStack_18c = -fStack_184;
        fStack_188 = -fStack_184;
        fStack_184 = -fStack_184;
        uVar37 = 0;
        puVar39 = (undefined8 *)(uVar38 + 0x10);
        do {
          fVar47 = *(float *)(param_1 + 0x20);
          local_110 = fVar47 + pfVar40[-1] + pfVar40[-4];
          local_10c = fVar47 + *pfVar40 + pfVar40[-3];
          local_120 = CONCAT44(pfVar40[-4] - (fVar47 + pfVar40[-1]),
                               pfVar40[-5] - (fVar47 + pfVar40[-2]));
          uStack_118 = CONCAT44(fVar47 + pfVar40[-2] + pfVar40[-5],pfVar40[-3] - (fVar47 + *pfVar40)
                               );
          FUN_001b0d40(&local_180,pfVar40 + -0xc,&local_120);
          auVar64._8_4_ = uStack_178;
          auVar64._0_8_ = local_180;
          pfVar40 = pfVar40 + 0x18;
          auVar64._12_4_ = 0;
          auVar55._4_4_ = local_170;
          auVar55._0_4_ = uStack_174;
          auVar55._8_4_ = local_16c;
          *(int *)((long)plVar24 + uVar37 * 4) = (int)uVar37;
          uVar37 = uVar37 + 1;
          auVar55._12_4_ = 0;
          auVar78 = NEON_fmin(auVar78,auVar64,4);
          auVar53 = auVar78._0_12_;
          puVar39[-1] = (ulong)uStack_178;
          puVar39[-2] = local_180;
          puVar39[1] = (ulong)local_16c;
          *puVar39 = CONCAT44(local_170,uStack_174);
          auVar121._4_4_ = fStack_18c;
          auVar121._0_4_ = local_190;
          auVar121._8_4_ = fStack_188;
          auVar121._12_4_ = fStack_184;
          auVar65 = NEON_fmax(auVar121,auVar55,4);
          puVar39 = puVar39 + 4;
          fStack_188 = auVar65._8_4_;
          fStack_184 = auVar65._12_4_;
          local_190 = auVar65._0_4_;
          fStack_18c = auVar65._4_4_;
        } while (uVar42 != uVar37);
      }
      local_190 = local_190 - auVar53._0_4_;
      fStack_18c = fStack_18c - auVar53._4_4_;
      fStack_188 = fStack_188 - auVar53._8_4_;
      uVar19 = 0;
      if (local_190 <= fStack_188) {
        uVar19 = 2;
      }
      uVar20 = 2;
      if (fStack_188 < fStack_18c) {
        uVar20 = 1;
      }
      if (local_190 <= fStack_18c) {
        uVar19 = uVar20;
      }
      uVar37 = (ulong)uVar19;
      local_180 = &local_120;
      iVar44 = uVar22 - 1;
      uStack_178 = uStack_178 & 0xffffff00;
      if (0 < iVar44) {
        uVar46 = 0;
        bVar9 = false;
        iVar30 = 0;
        puVar39 = &local_120;
        uVar19 = 0x20;
        puVar12 = &local_120;
        __src = puVar12;
        if (0 < iVar44) goto LAB_0014fe58;
LAB_001501d4:
        iVar44 = (int)uVar46;
        if (iVar44 != 0) {
          uVar46 = (ulong)(iVar44 - 2);
          iVar44 = *(int *)((long)puVar12 + (ulong)(iVar44 - 1) * 4);
          iVar30 = *(int *)((long)puVar12 + uVar46 * 4);
          __src = puVar12;
          if (iVar30 < iVar44) {
LAB_0014fe58:
            puVar12 = __src;
            if (4 < (uint)(iVar44 - iVar30)) {
              uVar20 = iVar30 + iVar44;
              if ((int)uVar20 < 0) {
                uVar20 = uVar20 + 1;
              }
              lVar18 = (long)((ulong)uVar20 << 0x20) >> 0x21;
              uVar20 = *(uint *)((long)plVar24 + (long)((int)uVar20 >> 1) * 4);
              uVar17 = (ulong)uVar20;
              uVar26 = *(uint *)((long)plVar24 + (long)iVar30 * 4);
              fVar47 = *(float *)(uVar38 + (ulong)uVar26 * 0x20 + uVar37 * 4);
              if (*(float *)(uVar38 + uVar17 * 0x20 + uVar37 * 4) < fVar47) {
                lVar31 = (long)iVar30 * 4;
                *(uint *)((long)plVar24 + lVar31) = uVar20;
                *(uint *)((long)plVar24 + lVar18 * 4) = uVar26;
                uVar17 = (ulong)uVar26;
                uVar26 = *(uint *)((long)plVar24 + lVar31);
                fVar47 = *(float *)(uVar38 + (ulong)uVar26 * 0x20 + uVar37 * 4);
              }
              uVar20 = *(uint *)((long)plVar24 + (long)iVar44 * 4);
              fVar60 = *(float *)(uVar38 + (ulong)uVar20 * 0x20 + uVar37 * 4);
              lVar31 = (long)iVar44;
              if (fVar60 < fVar47) {
                *(uint *)((long)plVar24 + (long)iVar30 * 4) = uVar20;
                *(uint *)((long)plVar24 + lVar31 * 4) = uVar26;
                uVar17 = (ulong)*(uint *)((long)plVar24 + lVar18 * 4);
                uVar20 = uVar26;
                fVar60 = fVar47;
              }
              if (fVar60 < *(float *)(uVar38 + uVar17 * 0x20 + uVar37 * 4)) {
                *(uint *)((long)plVar24 + lVar18 * 4) = uVar20;
                *(int *)((long)plVar24 + lVar31 * 4) = (int)uVar17;
                uVar17 = (ulong)*(uint *)((long)plVar24 + lVar18 * 4);
              }
              uVar28 = lVar31 - 1;
              *(undefined4 *)((long)plVar24 + lVar18 * 4) =
                   *(undefined4 *)((long)plVar24 + uVar28 * 4);
              uVar25 = uVar28 & 0xffffffff;
              *(int *)((long)plVar24 + uVar28 * 4) = (int)uVar17;
              iVar33 = iVar30;
              while( true ) {
                fVar47 = *(float *)(uVar38 + uVar17 * 0x20 + uVar37 * 4);
                puVar29 = (uint *)((long)plVar24 + (long)iVar33 * 4);
                do {
                  iVar41 = iVar33;
                  puVar29 = puVar29 + 1;
                  uVar20 = *puVar29;
                  iVar33 = iVar41 + 1;
                } while (*(float *)(uVar38 + (ulong)uVar20 * 0x20 + uVar37 * 4) < fVar47);
                puVar34 = (uint *)((long)plVar24 + (long)(int)uVar25 * 4);
                do {
                  puVar34 = puVar34 + -1;
                  uVar26 = (int)uVar25 - 1;
                  uVar25 = (ulong)uVar26;
                } while (fVar47 < *(float *)(uVar38 + (ulong)*puVar34 * 0x20 + uVar37 * 4));
                if ((int)uVar26 <= iVar33) break;
                *puVar29 = *puVar34;
                *puVar34 = uVar20;
                uVar17 = (ulong)*(uint *)((long)plVar24 + uVar28 * 4);
              }
              *puVar29 = (uint)uVar17;
              *(uint *)((long)plVar24 + uVar28 * 4) = uVar20;
              uVar20 = (uint)uVar46;
              if (iVar44 - iVar33 <= iVar33 - iVar30) {
                if (uVar19 - 1 <= uVar20) {
                  uVar19 = uVar19 << 1;
                  if (uVar19 == 0) {
                    puVar12 = (undefined8 *)0x0;
                  }
                  else {
                    plVar10 = (long *)FUN_00400d30();
                    pcVar43 = *(code **)(*plVar10 + 0x10);
                    plVar11 = (long *)FUN_00400d60();
                    uVar17 = (**(code **)(*plVar11 + 0x28))();
                    pcVar1 = 
                    "static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]"
                    ;
                    if ((uVar17 & 1) == 0) {
                      pcVar1 = "<allocation names disabled>";
                    }
                    puVar12 = (undefined8 *)
                              (*pcVar43)(plVar10,(ulong)uVar19 << 2,pcVar1,
                                         "./../../../../PxShared/src/foundation/include/PsSortInternals.h"
                                         ,0x9b);
                  }
                    /* try { // try from 001500e8 to 001500f3 has its CatchHandler @ 001514a0 */
                  memcpy(puVar12,__src,(ulong)(uVar20 << 2));
                  if ((bVar9) && (__src != (undefined8 *)0x0)) {
                    /* try { // try from 00150104 to 00150117 has its CatchHandler @ 00151498 */
                    plVar10 = (long *)FUN_00400d30();
                    (**(code **)(*plVar10 + 0x18))(plVar10,__src);
                  }
                  bVar9 = true;
                  puVar39 = puVar12;
                }
                *(int *)((long)puVar12 + uVar46 * 4) = iVar41 + 2;
                uVar46 = (ulong)(uVar20 + 2);
                *(int *)((long)puVar12 + (ulong)(uVar20 + 1) * 4) = iVar44;
                __src = puVar12;
                iVar44 = iVar41;
                if (iVar41 <= iVar30) goto LAB_001501d4;
                goto LAB_0014fe58;
              }
              if (uVar19 - 1 <= uVar20) {
                uVar19 = uVar19 << 1;
                if (uVar19 == 0) {
                  puVar12 = (undefined8 *)0x0;
                }
                else {
                    /* try { // try from 0014ffbc to 001500ab has its CatchHandler @ 001514a0 */
                  plVar10 = (long *)FUN_00400d30();
                  pcVar43 = *(code **)(*plVar10 + 0x10);
                  plVar11 = (long *)FUN_00400d60();
                  uVar17 = (**(code **)(*plVar11 + 0x28))();
                  pcVar1 = 
                  "static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]"
                  ;
                  if ((uVar17 & 1) == 0) {
                    pcVar1 = "<allocation names disabled>";
                  }
                  puVar12 = (undefined8 *)
                            (*pcVar43)(plVar10,(ulong)uVar19 << 2,pcVar1,
                                       "./../../../../PxShared/src/foundation/include/PsSortInternals.h"
                                       ,0x9b);
                }
                memcpy(puVar12,__src,(ulong)(uVar20 << 2));
                if ((bVar9) && (__src != (undefined8 *)0x0)) {
                    /* try { // try from 001500bc to 001500cf has its CatchHandler @ 00151498 */
                  plVar10 = (long *)FUN_00400d30();
                  (**(code **)(*plVar10 + 0x18))(plVar10,__src);
                }
                bVar9 = true;
                puVar39 = puVar12;
              }
              *(int *)((long)puVar12 + uVar46 * 4) = iVar30;
              iVar30 = iVar41 + 2;
              *(int *)((long)puVar12 + (ulong)(uVar20 + 1) * 4) = iVar41;
              uVar46 = (ulong)(uVar20 + 2);
              __src = puVar12;
              if (iVar44 <= iVar30) goto LAB_001501d4;
              goto LAB_0014fe58;
            }
            lVar18 = (long)plVar24 + (long)iVar30 * 4 + 4;
            uVar17 = (long)iVar30;
            do {
              iVar30 = iVar30 + 1;
              lVar31 = 0;
              uVar25 = uVar17 + 1;
              uVar28 = uVar17 & 0xffffffff;
              do {
                lVar36 = lVar31 * 4;
                iVar33 = (int)lVar31;
                lVar31 = lVar31 + 1;
                uVar20 = iVar30 + iVar33;
                if (*(float *)(uVar38 + (ulong)*(uint *)((long)plVar24 + (long)(int)(uint)uVar28 * 4
                                                        ) * 0x20 + uVar37 * 4) <=
                    *(float *)(uVar38 + (ulong)*(uint *)(lVar18 + lVar36) * 0x20 + uVar37 * 4)) {
                  uVar20 = (uint)uVar28;
                }
                uVar28 = (ulong)uVar20;
              } while ((long)(uVar17 + lVar31) < (long)iVar44);
              if (uVar20 != (uint)uVar17) {
                uVar28 = -(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 | uVar28 << 2;
                uVar3 = *(undefined4 *)((long)plVar24 + uVar28);
                *(undefined4 *)((long)plVar24 + uVar28) =
                     *(undefined4 *)((long)plVar24 + uVar17 * 4);
                *(undefined4 *)((long)plVar24 + uVar17 * 4) = uVar3;
              }
              lVar18 = lVar18 + 4;
              uVar17 = uVar25;
            } while (uVar25 != (long)iVar44);
          }
          goto LAB_001501d4;
        }
        if ((puVar39 != (undefined8 *)0x0) && (bVar9)) {
                    /* try { // try from 00150200 to 00150213 has its CatchHandler @ 00151494 */
          plVar10 = (long *)FUN_00400d30();
          (**(code **)(*plVar10 + 0x18))(plVar10,puVar39);
        }
        if ((char)uStack_178 != '\0') {
                    /* try { // try from 00150228 to 00150233 has its CatchHandler @ 00151490 */
          FUN_00401ce0(&local_180,local_180);
        }
      }
      fStack_19c = local_1a0;
      fStack_198 = local_1a0;
      fStack_194 = local_1a0;
      if (uVar22 == 0) {
        uVar19 = 0;
      }
      else {
        uVar46 = 0;
        uVar19 = 0;
LAB_00150250:
        do {
          uVar17 = (ulong)*(uint *)((long)plVar24 + uVar46 * 4);
          plVar10 = (long *)(lVar32 + uVar17 * 0x60);
          fVar91 = *(float *)(plVar10 + 4);
          fVar92 = *(float *)((long)plVar10 + 0x24);
          fVar93 = *(float *)(plVar10 + 5);
          pfVar14 = (float *)(uVar38 + uVar17 * 0x20 + uVar37 * 4);
          fVar47 = *(float *)((long)plVar10 + 0x3c);
          fVar60 = *(float *)(plVar10 + 8);
          fVar111 = *(float *)((long)plVar10 + 0x44);
          fVar134 = *(float *)(plVar10 + 9);
          fVar127 = pfVar14[4];
          fVar94 = *(float *)((long)plVar10 + 0x2c);
          fVar128 = *(float *)(plVar10 + 6);
          fVar122 = *(float *)((long)plVar10 + 0x34);
          fVar115 = *(float *)(plVar10 + 7);
          if (uVar46 == 0) {
            uVar25 = 0;
          }
          else {
            uVar25 = uVar46;
            do {
              if (*(float *)(uVar38 + (ulong)*(uint *)((long)plVar24 + uVar25 * 4) * 0x20 +
                             uVar37 * 4 + 0x10) <= *pfVar14) break;
              uVar25 = uVar25 - 1;
            } while ((int)uVar25 != 0);
          }
          if ((uint)uVar25 < uVar22) {
            fVar61 = *(float *)(plVar10 + 9) + *(float *)(param_1 + 0x20);
            fVar71 = *(float *)((long)plVar10 + 0x4c) + *(float *)(param_1 + 0x24);
            fVar72 = *(float *)(plVar10 + 10) + *(float *)(param_1 + 0x28);
            fVar73 = *(float *)((long)plVar10 + 0x54) + *(float *)(param_1 + 0x2c);
            fVar95 = fVar128 * -2.0;
            fVar108 = fVar122 * -2.0;
            fVar114 = fVar115 * -2.0;
            fVar139 = fVar94 * fVar94 + -0.5;
            fVar116 = fVar91 * fVar95 + fVar92 * fVar108 + fVar93 * fVar114;
            auVar5._12_4_ = fVar134 - fVar73;
            auVar5._8_4_ = fVar111 - fVar72;
            auVar5._4_4_ = fVar60 - fVar71;
            auVar5._0_4_ = fVar47 - fVar61;
            fVar48 = -fVar91;
            fVar49 = -fVar92;
            fVar50 = -fVar93;
            uVar20 = 0;
            uVar25 = uVar25 & 0xffffffff;
            local_1f4 = 0;
LAB_001503dc:
            do {
              if (uVar46 != uVar25) {
                uVar28 = (ulong)*(uint *)((long)plVar24 + uVar25 * 4);
                if (fVar127 < *(float *)(uVar38 + uVar28 * 0x20 + uVar37 * 4)) break;
                uVar13 = (*pcVar2)(*(undefined8 *)(lVar32 + uVar17 * 0x60 + 0x58),
                                   *(undefined8 *)(lVar32 + uVar28 * 0x60 + 0x58));
                if ((uVar13 & 1) == 0) {
                  uVar25 = uVar25 + 1;
                  if (uVar42 <= uVar25) break;
                  goto LAB_001503dc;
                }
                fVar51 = *(float *)(param_1 + 0x20);
                lVar18 = lVar32 + uVar28 * 0x60;
                fVar109 = fVar51 + *(float *)(lVar18 + 0x4c);
                fVar130 = *(float *)(lVar18 + 0x20);
                fVar132 = *(float *)(lVar18 + 0x24);
                fVar76 = fVar51 + *(float *)(lVar18 + 0x48);
                fVar51 = fVar51 + *(float *)(lVar18 + 0x50);
                fVar123 = *(float *)(lVar18 + 0x30) + *(float *)(lVar18 + 0x30);
                fVar52 = *(float *)(lVar18 + 0x34) + *(float *)(lVar18 + 0x34);
                fVar135 = *(float *)(lVar18 + 0x28);
                fVar137 = *(float *)(lVar18 + 0x2c);
                fVar129 = *(float *)(lVar18 + 0x38) + *(float *)(lVar18 + 0x38);
                fVar62 = *(float *)(lVar18 + 0x3c) - fVar76;
                fVar76 = fVar76 + *(float *)(lVar18 + 0x3c);
                fVar96 = *(float *)(lVar18 + 0x40) - fVar109;
                fVar109 = fVar109 + *(float *)(lVar18 + 0x40);
                fVar110 = *(float *)(lVar18 + 0x44) - fVar51;
                fVar51 = fVar51 + *(float *)(lVar18 + 0x44);
                fVar140 = (fVar130 * fVar50 + fVar137 * fVar49 + fVar94 * fVar132) -
                          fVar135 * fVar48;
                fVar131 = (fVar132 * fVar48 + fVar137 * fVar50 + fVar94 * fVar135) -
                          fVar130 * fVar49;
                fVar138 = fVar123 * fVar48 + fVar52 * fVar49 + fVar129 * fVar50;
                fVar145 = (fVar96 + fVar109) * 0.5;
                fVar136 = (fVar62 + fVar76) * 0.5;
                fVar133 = (fVar94 * fVar130 + fVar137 * fVar48 + fVar135 * fVar49) -
                          fVar132 * fVar50;
                fVar143 = (fVar110 + fVar51) * 0.5;
                fVar145 = fVar145 + fVar145;
                fVar136 = fVar136 + fVar136;
                fVar143 = fVar143 + fVar143;
                fVar137 = ((fVar94 * fVar137 - fVar130 * fVar48) - fVar132 * fVar49) -
                          fVar135 * fVar50;
                fVar144 = fVar137 * fVar137 + -0.5;
                fVar135 = fVar143 * fVar131 + fVar136 * fVar133 + fVar145 * fVar140;
                fVar130 = fVar91 * fVar116 +
                          (fVar139 * fVar95 - fVar94 * (fVar92 * fVar114 - fVar93 * fVar108)) +
                          fVar138 * fVar48 +
                          fVar139 * fVar123 + fVar94 * (fVar129 * fVar49 - fVar52 * fVar50) +
                          fVar133 * fVar135 +
                          fVar136 * fVar144 + fVar137 * (fVar143 * fVar140 - fVar145 * fVar131);
                fVar141 = fVar133 + fVar133;
                fVar142 = fVar140 + fVar140;
                fVar132 = fVar92 * fVar116 +
                          (fVar139 * fVar108 - fVar94 * (fVar93 * fVar95 - fVar91 * fVar114)) +
                          fVar138 * fVar49 +
                          fVar139 * fVar52 + fVar94 * (fVar123 * fVar50 - fVar129 * fVar48) +
                          fVar145 * fVar144 + fVar137 * (fVar136 * fVar131 - fVar143 * fVar133) +
                          fVar140 * fVar135;
                fVar135 = (fVar139 * fVar114 - fVar94 * (fVar91 * fVar108 - fVar92 * fVar95)) +
                          fVar93 * fVar116 +
                          fVar139 * fVar129 + fVar94 * (fVar52 * fVar48 - fVar123 * fVar49) +
                          fVar138 * fVar50 +
                          fVar143 * fVar144 + fVar137 * (fVar145 * fVar133 - fVar136 * fVar140) +
                          fVar131 * fVar135;
                fVar129 = fVar131 * (fVar131 + fVar131);
                fVar136 = fVar137 * (fVar131 + fVar131);
                fVar133 = 1.0 - fVar133 * fVar141;
                fVar96 = (fVar109 - fVar96) * 0.5;
                fVar123 = (fVar76 - fVar62) * 0.5;
                fVar109 = (fVar51 - fVar110) * 0.5;
                uVar20 = 1 << (ulong)(*(uint *)((long)plVar24 + uVar25 * 4) & 0x1f) | uVar20;
                fVar51 = fabsf(fVar123 * ((1.0 - fVar140 * fVar142) - fVar129));
                fVar52 = fabsf(fVar96 * (fVar141 * fVar140 - fVar136));
                fVar62 = fabsf(fVar109 * (fVar141 * fVar131 + fVar137 * fVar142));
                fVar62 = fVar51 + fVar52 + fVar62;
                fVar51 = fabsf(fVar123 * (fVar141 * fVar140 + fVar136));
                fVar52 = fabsf(fVar96 * (fVar133 - fVar129));
                fVar76 = fabsf(fVar109 * (fVar131 * fVar142 - fVar141 * fVar137));
                fVar76 = fVar51 + fVar52 + fVar76;
                fVar51 = fabsf(fVar123 * (fVar141 * fVar131 - fVar137 * fVar142));
                fVar52 = fabsf(fVar96 * (fVar141 * fVar137 + fVar131 * fVar142));
                fVar96 = fabsf(fVar109 * (fVar133 - fVar140 * fVar142));
                fVar96 = fVar51 + fVar52 + fVar96;
                auVar97._4_4_ = fVar132 - fVar76;
                auVar97._0_4_ = fVar130 - fVar62;
                auVar97._8_4_ = fVar135 - fVar96;
                auVar97._12_4_ = 0;
                auVar66._4_4_ = fVar76 + fVar132;
                auVar66._0_4_ = fVar62 + fVar130;
                auVar66._8_4_ = fVar135 + fVar96;
                auVar66._12_4_ = 0;
                auVar4._4_4_ = fVar60 + fVar71;
                auVar4._0_4_ = fVar47 + fVar61;
                auVar4._8_4_ = fVar111 + fVar72;
                auVar4._12_4_ = fVar134 + fVar73;
                auVar65 = NEON_fmax(auVar5,auVar97,4);
                auVar67 = NEON_fmin(auVar4,auVar66,4);
                uVar3 = *(undefined4 *)PTR_DAT_02710d88;
                bVar75 = (byte)uVar3;
                bVar74 = (byte)DAT_02736a40 & bVar75;
                bVar82 = (byte)((uint)uVar3 >> 8);
                bVar81 = (byte)((ulong)DAT_02736a40 >> 8) & bVar82;
                bVar84 = (byte)((uint)uVar3 >> 0x10);
                bVar83 = (byte)((ulong)DAT_02736a40 >> 0x10) & bVar84;
                bVar86 = (byte)((uint)uVar3 >> 0x18);
                bVar85 = (byte)((ulong)DAT_02736a40 >> 0x18) & bVar86;
                fVar51 = (float)CONCAT13(bVar85,CONCAT12(bVar83,CONCAT11(bVar81,bVar74)));
                bVar87 = (byte)((ulong)DAT_02736a40 >> 0x20) & bVar75;
                bVar88 = (byte)((ulong)DAT_02736a40 >> 0x28) & bVar82;
                bVar89 = (byte)((ulong)DAT_02736a40 >> 0x30) & bVar84;
                bVar90 = (byte)((ulong)DAT_02736a40 >> 0x38) & bVar86;
                auVar77._0_8_ =
                     CONCAT17(bVar90,CONCAT16(bVar89,CONCAT15(bVar88,CONCAT14(bVar87,fVar51))));
                auVar77[8] = (byte)DAT_02736a48 & bVar75;
                auVar77[9] = (byte)((ulong)DAT_02736a48 >> 8) & bVar82;
                auVar77[10] = (byte)((ulong)DAT_02736a48 >> 0x10) & bVar84;
                auVar77[0xb] = (byte)((ulong)DAT_02736a48 >> 0x18) & bVar86;
                auVar79[0xc] = (byte)((ulong)DAT_02736a48 >> 0x20) & bVar75;
                auVar79._0_12_ = auVar77;
                auVar79[0xd] = (byte)((ulong)DAT_02736a48 >> 0x28) & bVar82;
                auVar79[0xe] = (byte)((ulong)DAT_02736a48 >> 0x30) & bVar84;
                auVar79[0xf] = (byte)((ulong)DAT_02736a48 >> 0x38) & bVar86;
                fVar51 = -fVar51;
                fVar52 = -(float)((ulong)auVar77._0_8_ >> 0x20);
                fVar130 = -auVar77._8_4_;
                fVar62 = -auVar79._12_4_;
                bVar75 = (byte)((ulong)DAT_02736a30 >> 8);
                bVar82 = (byte)((ulong)DAT_02736a30 >> 0x10);
                bVar84 = (byte)((ulong)DAT_02736a30 >> 0x18);
                bVar86 = (byte)((ulong)DAT_02736a30 >> 0x20);
                bVar98 = (byte)((ulong)DAT_02736a30 >> 0x28);
                bVar99 = (byte)((ulong)DAT_02736a30 >> 0x30);
                bVar100 = (byte)((ulong)DAT_02736a30 >> 0x38);
                bVar101 = (byte)((ulong)DAT_02736a38 >> 8);
                bVar102 = (byte)((ulong)DAT_02736a38 >> 0x10);
                bVar103 = (byte)((ulong)DAT_02736a38 >> 0x18);
                bVar104 = (byte)((ulong)DAT_02736a38 >> 0x20);
                bVar105 = (byte)((ulong)DAT_02736a38 >> 0x28);
                bVar106 = (byte)((ulong)DAT_02736a38 >> 0x30);
                bVar107 = (byte)((ulong)DAT_02736a38 >> 0x38);
                fVar51 = (float)CONCAT13(bVar84 & auVar65[3] | (byte)((uint)fVar51 >> 0x18),
                                         CONCAT12(bVar82 & auVar65[2] | (byte)((uint)fVar51 >> 0x10)
                                                  ,CONCAT11(bVar75 & auVar65[1] |
                                                            (byte)((uint)fVar51 >> 8),
                                                            (byte)DAT_02736a30 & auVar65[0] |
                                                            SUB41(fVar51,0))));
                auVar53._0_8_ =
                     CONCAT17(bVar100 & auVar65[7] | (byte)((uint)fVar52 >> 0x18),
                              CONCAT16(bVar99 & auVar65[6] | (byte)((uint)fVar52 >> 0x10),
                                       CONCAT15(bVar98 & auVar65[5] | (byte)((uint)fVar52 >> 8),
                                                CONCAT14(bVar86 & auVar65[4] | SUB41(fVar52,0),
                                                         fVar51))));
                auVar53[8] = (byte)DAT_02736a38 & auVar65[8] | SUB41(fVar130,0);
                auVar53[9] = bVar101 & auVar65[9] | (byte)((uint)fVar130 >> 8);
                auVar53[10] = bVar102 & auVar65[10] | (byte)((uint)fVar130 >> 0x10);
                auVar53[0xb] = bVar103 & auVar65[0xb] | (byte)((uint)fVar130 >> 0x18);
                auVar56[0xc] = bVar104 & auVar65[0xc] | SUB41(fVar62,0);
                auVar56._0_12_ = auVar53;
                auVar56[0xd] = bVar105 & auVar65[0xd] | (byte)((uint)fVar62 >> 8);
                auVar56[0xe] = bVar106 & auVar65[0xe] | (byte)((uint)fVar62 >> 0x10);
                auVar56[0xf] = bVar107 & auVar65[0xf] | (byte)((uint)fVar62 >> 0x18);
                fVar52 = (float)CONCAT13(bVar85 | bVar84 & auVar67[3],
                                         CONCAT12(bVar83 | bVar82 & auVar67[2],
                                                  CONCAT11(bVar81 | bVar75 & auVar67[1],
                                                           bVar74 | (byte)DAT_02736a30 & auVar67[0])
                                                 ));
                auVar63._0_8_ =
                     CONCAT17(bVar90 | bVar100 & auVar67[7],
                              CONCAT16(bVar89 | bVar99 & auVar67[6],
                                       CONCAT15(bVar88 | bVar98 & auVar67[5],
                                                CONCAT14(bVar87 | bVar86 & auVar67[4],fVar52))));
                auVar63[8] = auVar77[8] | (byte)DAT_02736a38 & auVar67[8];
                auVar63[9] = auVar77[9] | bVar101 & auVar67[9];
                auVar63[10] = auVar77[10] | bVar102 & auVar67[10];
                auVar63[0xb] = auVar77[0xb] | bVar103 & auVar67[0xb];
                auVar68[0xc] = auVar79[0xc] | bVar104 & auVar67[0xc];
                auVar68._0_12_ = auVar63;
                auVar68[0xd] = auVar79[0xd] | bVar105 & auVar67[0xd];
                auVar68[0xe] = auVar79[0xe] | bVar106 & auVar67[0xe];
                auVar68[0xf] = auVar79[0xf] | bVar107 & auVar67[0xf];
                auVar80._0_4_ = -(uint)(fVar52 < fVar51);
                auVar80._4_4_ =
                     -(uint)((float)((ulong)auVar63._0_8_ >> 0x20) <
                            (float)((ulong)auVar53._0_8_ >> 0x20));
                auVar80._8_4_ = -(uint)(auVar63._8_4_ < auVar53._8_4_);
                auVar80._12_4_ = -(uint)(auVar68._12_4_ < auVar56._12_4_);
                NEON_ext(auVar80,auVar80,8,1);
                if (CONCAT13((char)auVar80._12_4_,
                             CONCAT12((char)auVar80._8_4_,
                                      CONCAT11((char)auVar80._4_4_,(char)auVar80._0_4_))) == 0) {
                  puVar39 = puVar45 + (ulong)local_1f4 * 4;
                  puVar39[1] = auVar56._8_8_;
                  *puVar39 = auVar53._0_8_;
                  puVar39[3] = auVar68._8_8_;
                  puVar39[2] = auVar63._0_8_;
                  local_1f4 = local_1f4 + 1;
                }
              }
              uVar25 = uVar25 + 1;
            } while (uVar25 < uVar42);
          }
          else {
            local_1f4 = 0;
            uVar20 = 0;
          }
          uVar26 = *(uint *)((long)plVar24 + uVar46 * 4);
          lVar31 = lVar32 + uVar17 * 0x60;
          *(uint *)(uVar27 + (ulong)uVar26 * 4) = uVar20;
          lVar18 = *plVar10;
          puVar29 = (uint *)(lVar31 + 0x10);
          uVar20 = *puVar29;
          if (uVar20 == 0) {
            uVar46 = uVar46 + 1;
            if (uVar46 == uVar42) break;
            goto LAB_00150250;
          }
          if (local_1f4 != 0) {
            fVar48 = (fVar93 + fVar93) * fVar94;
            fVar47 = fVar91 + fVar91;
            fVar60 = fVar92 + fVar92;
            fVar49 = fVar47 * fVar92 - fVar48;
            fVar50 = fVar47 * fVar93 + fVar60 * fVar94;
            fVar127 = fVar93 * (fVar93 + fVar93);
            fVar134 = 1.0 - fVar91 * fVar47;
            fVar61 = (1.0 - fVar92 * fVar60) - fVar127;
            fVar127 = fVar134 - fVar127;
            fVar91 = fVar60 * fVar93 - fVar47 * fVar94;
            fVar111 = fVar60 * fVar93 + fVar47 * fVar94;
            fVar48 = fVar47 * fVar92 + fVar48;
            fVar134 = fVar134 - fVar92 * fVar60;
            fVar47 = fVar47 * fVar93 - fVar60 * fVar94;
            uVar3 = *(undefined4 *)(lVar32 + (ulong)uVar26 * 0x60 + 0x54);
            auVar113._4_4_ = uVar3;
            auVar113._0_4_ = uVar3;
            auVar113._8_4_ = uVar3;
            auVar113._12_4_ = uVar3;
            lVar31 = *(long *)(lVar31 + 8);
            auVar67 = NEON_frecpe(auVar113,4);
            auVar65 = NEON_frecps(auVar113,auVar67,4);
            uVar25 = 0;
LAB_00150980:
            do {
              lVar36 = *(long *)(lVar32 + uVar17 * 0x60 + 0x18);
              if (lVar36 == 0) {
                uVar35 = (uint)uVar25;
                uVar28 = uVar25;
              }
              else {
                uVar35 = *(uint *)(lVar36 + uVar25 * 4);
                uVar28 = (ulong)uVar35;
              }
              auVar78 = *(undefined1 (*) [16])(lVar18 + uVar28 * 0x10);
              pfVar14 = (float *)(puVar45 + 2);
              lVar36 = (ulong)local_1f4 << 5;
              do {
                fVar60 = auVar78._0_4_;
                auVar117._0_4_ = -(uint)(fVar60 < pfVar14[-4]);
                fVar92 = auVar78._4_4_;
                auVar117._4_4_ = -(uint)(fVar92 < pfVar14[-3]);
                fVar93 = auVar78._8_4_;
                auVar117._8_4_ = -(uint)(fVar93 < pfVar14[-2]);
                fVar94 = auVar78._12_4_;
                auVar117._12_4_ = -(uint)(fVar94 < pfVar14[-1]);
                NEON_ext(auVar117,auVar117,8,1);
                if ((CONCAT13((char)auVar117._12_4_,
                              CONCAT12((char)auVar117._8_4_,
                                       CONCAT11((char)auVar117._4_4_,(char)auVar117._0_4_))) == 0)
                   && (auVar118._0_4_ = -(uint)(*pfVar14 < fVar60),
                      auVar118._4_4_ = -(uint)(pfVar14[1] < fVar92),
                      auVar118._8_4_ = -(uint)(pfVar14[2] < fVar93),
                      auVar118._12_4_ = -(uint)(pfVar14[3] < fVar94),
                      NEON_ext(auVar118,auVar118,8,1),
                      CONCAT13((char)auVar118._12_4_,
                               CONCAT12((char)auVar118._8_4_,
                                        CONCAT11((char)auVar118._4_4_,(char)auVar118._0_4_))) == 0))
                {
                  lVar36 = uVar28 * 0x10;
                  auVar119._0_4_ = fVar50 * fVar93 + fVar49 * fVar92 + fVar128 + fVar61 * fVar60;
                  auVar119._4_4_ = fVar91 * fVar93 + fVar127 * fVar92 + fVar122 + fVar48 * fVar60;
                  auVar119._8_4_ = fVar134 * fVar93 + fVar111 * fVar92 + fVar115 + fVar47 * fVar60;
                  auVar119._12_4_ = fVar93 * 0.0 + fVar92 * 0.0 + fVar60 * 0.0 + 1.0;
                  auVar124._8_8_ = DAT_02736a38;
                  auVar124._0_8_ = DAT_02736a30;
                  auVar78 = auVar78 ^ (auVar78 ^ auVar119) & auVar124;
                  ((undefined8 *)(lVar18 + lVar36))[1] = auVar78._8_8_;
                  *(undefined8 *)(lVar18 + lVar36) = auVar78._0_8_;
                  pfVar14 = (float *)(lVar31 + lVar36);
                  auVar126._0_4_ = auVar67._0_4_ * auVar65._0_4_ * (fVar60 - *pfVar14);
                  auVar126._4_4_ = auVar67._4_4_ * auVar65._4_4_ * (fVar92 - pfVar14[1]);
                  auVar126._8_4_ = auVar67._8_4_ * auVar65._8_4_ * (fVar93 - pfVar14[2]);
                  auVar126._12_4_ = auVar67._12_4_ * auVar65._12_4_ * (fVar94 - pfVar14[3]);
                  auVar120._0_4_ =
                       fVar50 * auVar126._8_4_ + fVar61 * auVar126._0_4_ + fVar49 * auVar126._4_4_;
                  auVar120._4_4_ =
                       fVar91 * auVar126._8_4_ + fVar48 * auVar126._0_4_ + fVar127 * auVar126._4_4_;
                  auVar120._8_4_ =
                       fVar134 * auVar126._8_4_ + fVar47 * auVar126._0_4_ + fVar111 * auVar126._4_4_
                  ;
                  auVar120._12_4_ =
                       auVar126._8_4_ * 0.0 + auVar126._0_4_ * 0.0 + auVar126._4_4_ * 0.0;
                  auVar125._8_8_ = DAT_02736a38;
                  auVar125._0_8_ = DAT_02736a30;
                  auVar126 = auVar126 ^ (auVar126 ^ auVar120) & auVar125;
                  auVar7._4_4_ = fStack_19c;
                  auVar7._0_4_ = local_1a0;
                  auVar7._8_4_ = fStack_198;
                  auVar7._12_4_ = fStack_194;
                  puVar39 = (undefined8 *)(lVar31 + lVar36);
                  puVar39[1] = auVar126._8_8_;
                  *puVar39 = auVar126._0_8_;
                  auVar78 = *(undefined1 (*) [16])(lVar18 + lVar36);
                  *(short *)(lVar23 + (ulong)uVar19 * 2) = (short)uVar26;
                  auVar121 = NEON_fmin(auVar7,auVar78,4);
                  *(uint *)(lVar16 + (ulong)uVar19 * 4) = uVar35;
                  uVar20 = *puVar29;
                  fStack_198 = auVar121._8_4_;
                  fStack_194 = auVar121._12_4_;
                  local_1a0 = auVar121._0_4_;
                  fStack_19c = auVar121._4_4_;
                  auVar6._4_4_ = fStack_1ac;
                  auVar6._0_4_ = local_1b0;
                  auVar6._8_4_ = fStack_1a8;
                  auVar6._12_4_ = fStack_1a4;
                  auVar78 = NEON_fmax(auVar6,auVar78,4);
                  fStack_1a8 = auVar78._8_4_;
                  fStack_1a4 = auVar78._12_4_;
                  local_1b0 = auVar78._0_4_;
                  fStack_1ac = auVar78._4_4_;
                  uVar19 = uVar19 + 1;
                  uVar25 = uVar25 + 1;
                  if (uVar25 < uVar20) goto LAB_00150980;
                  goto LAB_00150a98;
                }
                pfVar14 = pfVar14 + 8;
                lVar36 = lVar36 + -0x20;
              } while (lVar36 != 0);
              uVar25 = uVar25 + 1;
            } while (uVar25 < uVar20);
          }
LAB_00150a98:
          uVar46 = uVar46 + 1;
        } while (uVar46 != uVar42);
      }
      if (plVar24 != (long *)0x0) {
        *(uint *)(plVar24 + -1) = *(uint *)(plVar24 + -1) | 0x80000000;
        plVar24 = *(long **)(lVar15 + 0x18);
        while ((plVar24 != (long *)0x0 && (*(int *)(plVar24 + 1) < 0))) {
          *(long **)(lVar15 + 0x10) = plVar24;
          plVar24 = (long *)*plVar24;
          *(long **)(lVar15 + 0x18) = plVar24;
        }
      }
      pfVar14 = (float *)PTR_DAT_02710d88;
      if (puVar45 != (undefined8 *)0x0) {
        *(uint *)(puVar45 + -1) = *(uint *)(puVar45 + -1) | 0x80000000;
        plVar24 = *(long **)(lVar15 + 0x18);
        while ((plVar24 != (long *)0x0 && (*(int *)(plVar24 + 1) < 0))) {
          *(long **)(lVar15 + 0x10) = plVar24;
          plVar24 = (long *)*plVar24;
          *(long **)(lVar15 + 0x18) = plVar24;
        }
      }
      if (uVar38 != 0) {
        *(uint *)(uVar38 - 8) = *(uint *)(uVar38 - 8) | 0x80000000;
        plVar24 = *(long **)(lVar15 + 0x18);
        while ((plVar24 != (long *)0x0 && (*(int *)(plVar24 + 1) < 0))) {
          *(long **)(lVar15 + 0x10) = plVar24;
          plVar24 = (long *)*plVar24;
          *(long **)(lVar15 + 0x18) = plVar24;
        }
      }
      *(uint *)(param_1 + 0x80) = uVar19;
      if (uVar19 != 0) {
        auVar57._0_4_ = local_1b0 - local_1a0;
        auVar57._4_4_ = fStack_1ac - fStack_19c;
        auVar57._8_4_ = fStack_1a8 - fStack_198;
        auVar57._12_4_ = fStack_1a4 - fStack_194;
        auVar69._4_4_ = DAT_02736a50;
        auVar69._0_4_ = DAT_02736a50;
        auVar69._8_4_ = DAT_02736a50;
        auVar69._12_4_ = DAT_02736a50;
        auVar65 = NEON_fmax(auVar57,auVar69,4);
        fVar111 = auVar65._8_4_;
        fVar47 = auVar65._0_4_;
        fVar60 = auVar65._4_4_;
        uVar21 = 0;
        if (fVar47 <= fVar111) {
          uVar21 = 2;
        }
        uVar22 = 2;
        if (fVar111 < fVar60) {
          uVar22 = 1;
        }
        if (fVar47 <= fVar60) {
          uVar21 = uVar22;
        }
        uVar27 = (ulong)uVar21;
        uStack_118 = auVar65._8_8_;
        local_120 = auVar65._0_8_;
        auVar58._0_4_ = fVar47 * 0.0039525693;
        auVar58._4_4_ = fVar60 * 0.0039525693;
        auVar58._8_4_ = fVar111 * 0.0039525693;
        auVar58._12_4_ = auVar65._12_4_ * 0.0039525693;
        auVar65 = NEON_fmax(*(undefined1 (*) [16])(param_1 + 0x20),auVar58,4);
        uStack_178 = auVar65._8_4_;
        uStack_174 = auVar65._12_4_;
        local_180 = auVar65._0_8_;
        *(float *)((ulong)&local_180 | uVar27 << 2) =
             *(float *)((ulong)&local_120 | uVar27 << 2) / fVar112;
        uStack_128 = 0x437e0000437e0000;
        local_130 = 0x437e0000437e0000;
        auVar67 = NEON_frecpe(auVar65,4);
        auVar78 = NEON_frecps(auVar65,auVar67,4);
        auVar59._0_4_ = auVar67._0_4_ * auVar78._0_4_;
        auVar59._4_4_ = auVar67._4_4_ * auVar78._4_4_;
        auVar59._8_4_ = auVar67._8_4_ * auVar78._8_4_;
        auVar59._12_4_ = auVar67._12_4_ * auVar78._12_4_;
        auVar65 = NEON_frecps(auVar65,auVar59,4);
        *(undefined4 *)((ulong)&local_130 | uVar27 << 2) = 0x477ffe00;
        uVar22 = uVar19 * 4;
        if (uVar22 < 0xfffff000) {
          uVar22 = uVar22 + 0x1000;
        }
        uVar22 = uVar22 + uVar19 * 8;
        if (uVar22 == 0) {
          uVar42 = 0;
        }
        else {
          lVar15 = *(long *)(param_1 + 0xa0);
          uVar42 = *(long *)(lVar15 + 0x10) + 0x1fU & 0xfffffffffffffff0;
          *(undefined8 *)(uVar42 - 0x10) = *(undefined8 *)(lVar15 + 0x18);
          *(uint *)(uVar42 - 8) = uVar22 & 0x7ffffffc;
          *(ulong *)(lVar15 + 0x10) = uVar42 + uVar22;
          *(undefined8 **)(lVar15 + 0x18) = (undefined8 *)(uVar42 - 0x10);
          uVar19 = *(uint *)(param_1 + 0x80);
        }
        fVar112 = auVar59._0_4_ * auVar65._0_4_;
        fVar47 = auVar59._4_4_ * auVar65._4_4_;
        fVar60 = auVar59._8_4_ * auVar65._8_4_;
        fVar111 = auVar59._12_4_ * auVar65._12_4_;
        if (uVar19 == 0) {
          uVar38 = 0;
        }
        else {
          uVar38 = uVar42 + (ulong)uVar19 * 8;
          uVar46 = uVar42 + (ulong)(uVar19 << 1) * 4 + 0x1000;
          uVar37 = 0;
          if (uVar46 <= uVar38) {
            uVar46 = uVar38;
          }
          do {
            lVar15 = uVar37 * 2;
            lVar23 = uVar37 * 4;
            uVar37 = uVar37 + 1;
            pfVar14 = (float *)(*(long *)(*(long *)(param_1 + 0x60) +
                                         (ulong)*(ushort *)(*(long *)(param_1 + 0x70) + lVar15) *
                                         0x60) +
                               (ulong)*(uint *)(*(long *)(param_1 + 0x78) + lVar23) * 0x10);
            auVar8._8_8_ = 0x437e0000437e0000;
            auVar8._0_8_ = 0x437e0000437e0000;
            auVar70._0_4_ = (auVar54._0_4_ - local_1a0 * fVar112) + fVar112 * *pfVar14;
            auVar70._4_4_ = (auVar54._4_4_ - fStack_19c * fVar47) + fVar47 * pfVar14[1];
            auVar70._8_4_ = (auVar54._8_4_ - fStack_198 * fVar60) + fVar60 * pfVar14[2];
            auVar70._12_4_ = (auVar54._12_4_ - fStack_194 * fVar111) + fVar111 * pfVar14[3];
            auVar65 = NEON_fmin(auVar70,auVar8,4);
            auVar65 = NEON_fmax(auVar54,auVar65,4);
            local_140[2] = (int)auVar65._8_4_ + ((int)auVar65._8_4_ >> 0x1f);
            local_140[3] = (int)auVar65._12_4_ + ((int)auVar65._12_4_ >> 0x1f);
            local_140[0] = (int)auVar65._0_4_ + ((int)auVar65._0_4_ >> 0x1f);
            local_140[1] = (int)auVar65._4_4_ + ((int)auVar65._4_4_ >> 0x1f);
            *(uint *)(uVar46 + lVar23) =
                 local_140[uVar27] | local_140[(uVar21 + 1) % 3] << 0x10 |
                 local_140[(uVar21 + 2) % 3] << 0x18;
            uVar38 = (ulong)*(uint *)(param_1 + 0x80);
          } while (uVar37 < uVar38);
        }
                    /* WARNING: Subroutine does not return */
        memset((void *)(uVar42 + (uVar38 & 0x7fffffff) * 8),0,0x1000);
      }
      uVar21 = uVar21 + 1;
      if (*(uint *)(param_1 + 0x5c) <= uVar21) goto LAB_00151470;
      uVar27 = *(ulong *)(param_1 + 0x88);
    } while( true );
  }
joined_r0x00151474:
  if (uVar27 != 0) {
    lVar15 = *(long *)(param_1 + 0xa0);
    *(uint *)(uVar27 - 8) = *(uint *)(uVar27 - 8) | 0x80000000;
    plVar24 = *(long **)(lVar15 + 0x18);
    while ((plVar24 != (long *)0x0 && (*(int *)(plVar24 + 1) < 0))) {
      *(long **)(lVar15 + 0x10) = plVar24;
      plVar24 = (long *)*plVar24;
      *(long **)(lVar15 + 0x18) = plVar24;
    }
  }
  lVar15 = *(long *)(param_1 + 0x78);
  if (lVar15 != 0) {
    lVar23 = *(long *)(param_1 + 0xa0);
    *(uint *)(lVar15 + -8) = *(uint *)(lVar15 + -8) | 0x80000000;
    plVar24 = *(long **)(lVar23 + 0x18);
    while ((plVar24 != (long *)0x0 && (*(int *)(plVar24 + 1) < 0))) {
      *(long **)(lVar23 + 0x10) = plVar24;
      plVar24 = (long *)*plVar24;
      *(long **)(lVar23 + 0x18) = plVar24;
    }
  }
  lVar15 = *(long *)(param_1 + 0x70);
  if (lVar15 != 0) {
    lVar23 = *(long *)(param_1 + 0xa0);
    *(uint *)(lVar15 + -8) = *(uint *)(lVar15 + -8) | 0x80000000;
    plVar24 = *(long **)(lVar23 + 0x18);
    while ((plVar24 != (long *)0x0 && (*(int *)(plVar24 + 1) < 0))) {
      *(long **)(lVar23 + 0x10) = plVar24;
      plVar24 = (long *)*plVar24;
      *(long **)(lVar23 + 0x18) = plVar24;
    }
  }
  return;
LAB_00151470:
  uVar27 = *(ulong *)(param_1 + 0x88);
  goto joined_r0x00151474;
}


