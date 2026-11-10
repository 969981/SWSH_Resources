/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005623e0; name: FUN_005623e0
 */


undefined4 FUN_005623e0(long *param_1,void *param_2,byte param_3,byte param_4,undefined8 *param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  undefined4 uVar35;
  ulong *puVar36;
  ulong *puVar37;
  ulong uVar38;
  int iVar39;
  ulong uVar40;
  uint uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong *puVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  float fVar50;
  float fVar51;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  iVar12 = *(int *)((long)param_1 + 0x4c);
  iVar13 = (int)param_1[10];
  iVar28 = FUN_00546b90(*(undefined4 *)((long)param_1 + 0x44));
  uVar29 = (**(code **)(*param_1 + 0x60))(param_1);
  uVar47 = (ulong)uVar29;
  puVar36 = (ulong *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,uVar47 * 8 + 8,
                                  "C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp",0x367,0);
  puVar46 = puVar36;
  if (puVar36 != (ulong *)0x0) {
    puVar46 = puVar36 + 1;
    *puVar36 = uVar47;
  }
  local_b8 = 0x4000000000000000;
  local_b0 = 0x402000003f000000;
  local_a8 = 0x3f80000040400000;
  local_a0 = 0x3fc0000040600000;
  local_98 = 0x403000003f400000;
  local_90 = 0x401000003e800000;
  local_88 = 0x3fe0000040700000;
  local_80 = 0x3fa0000040500000;
  if (uVar29 == 0) {
    uVar35 = 0;
  }
  else {
    uVar49 = 0;
    do {
      iVar9 = 0;
      if (uVar49 != 0) {
        iVar9 = (int)uVar49 + -1;
      }
      uVar30 = FUN_00546b40(iVar12,uVar49 & 0xffffffff);
      uVar31 = FUN_00546b40(iVar13,uVar49 & 0xffffffff);
      uVar32 = FUN_00546b40(iVar12,iVar9);
      uVar33 = FUN_00546b40(iVar13,iVar9);
      uVar48 = (ulong)(uVar30 * iVar28 * uVar31);
      puVar37 = (ulong *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,uVar48 + 8,
                                      "C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp",0x389,0)
      ;
      puVar36 = puVar37;
      if (puVar37 != (ulong *)0x0) {
        puVar36 = puVar37 + 1;
        *puVar37 = uVar48;
      }
      puVar46[uVar49] = (ulong)puVar36;
      if (uVar49 == 0) {
        memcpy(puVar36,param_2,(ulong)(uint)(iVar13 * iVar12 * iVar28));
      }
      else {
        uVar10 = uVar30;
        if (uVar30 <= uVar31) {
          uVar10 = uVar31;
        }
        if (uVar31 != 0) {
          bVar8 = 3 < uVar10 & param_4;
          uVar48 = 0;
          do {
            if (uVar30 != 0) {
              uVar41 = (uint)uVar48;
              uVar43 = (ulong)(uVar30 * iVar28 * uVar41);
              uVar11 = uVar41 << 1 | 1;
              uVar26 = uVar41 << 1;
              if (uVar33 <= uVar31) {
                uVar11 = uVar41;
                uVar26 = uVar41;
              }
              uVar44 = (ulong)(uVar26 * uVar32 * iVar28);
              uVar45 = (ulong)(uVar11 * uVar32 * iVar28);
              if ((3 < uVar10 & param_3) == 0) {
                iVar34 = 0;
                uVar38 = 0;
                uVar40 = 0;
                do {
                  iVar39 = (int)uVar40;
                  if (uVar30 < uVar32) {
                    iVar39 = iVar34;
                    iVar27 = iVar34 + 1;
                  }
                  else {
                    iVar27 = iVar39;
                  }
                  lVar2 = puVar46[iVar9] + uVar44;
                  pbVar4 = (byte *)(lVar2 + (ulong)(uint)(iVar39 * iVar28));
                  pbVar5 = (byte *)(lVar2 + (ulong)(uint)(iVar27 * iVar28));
                  bVar14 = *pbVar5;
                  bVar15 = *pbVar4;
                  lVar2 = puVar46[iVar9] + uVar45;
                  pbVar6 = (byte *)(lVar2 + (ulong)(uint)(iVar39 * iVar28));
                  pbVar7 = (byte *)(lVar2 + (ulong)(uint)(iVar27 * iVar28));
                  puVar1 = (undefined1 *)(puVar46[uVar49] + uVar43 + uVar38);
                  bVar16 = *pbVar6;
                  bVar17 = *pbVar7;
                  bVar18 = pbVar5[2];
                  bVar19 = pbVar5[3];
                  fVar51 = 2.0;
                  bVar20 = pbVar4[2];
                  bVar21 = pbVar6[2];
                  bVar22 = pbVar6[3];
                  bVar23 = pbVar7[2];
                  bVar24 = pbVar7[3];
                  bVar25 = pbVar4[3];
                  if (bVar8 != 0) {
                    fVar51 = *(float *)((long)&local_b8 + (uVar48 & 3) * 4 + (uVar40 & 3) * 0x10);
                  }
                  puVar1[1] = (char)(int)(((float)((uint)pbVar5[1] + (uint)pbVar4[1] +
                                                   (uint)pbVar6[1] + (uint)pbVar7[1]) + 2.0) * 0.25)
                  ;
                  *puVar1 = (char)(int)(((float)((uint)bVar14 + (uint)bVar15 + (uint)bVar16 +
                                                (uint)bVar17) + 2.0) * 0.25);
                  uVar40 = uVar40 + 1;
                  uVar38 = (ulong)(uint)((int)uVar38 + iVar28);
                  iVar34 = iVar34 + 2;
                  puVar1[2] = (char)(int)(((float)((uint)bVar18 + (uint)bVar20 + (uint)bVar21 +
                                                  (uint)bVar23) + 2.0) * 0.25);
                  puVar1[3] = (char)(int)((fVar51 + (float)((uint)bVar19 + (uint)bVar25 +
                                                            (uint)bVar22 + (uint)bVar24)) * 0.25);
                } while (uVar30 != uVar40);
              }
              else {
                iVar34 = 0;
                uVar38 = 0;
                uVar40 = 0;
                do {
                  iVar39 = (int)uVar40;
                  if (uVar30 < uVar32) {
                    iVar39 = iVar34;
                    iVar27 = iVar34 + 1;
                  }
                  else {
                    iVar27 = iVar39;
                  }
                  iVar34 = iVar34 + 2;
                  lVar2 = puVar46[iVar9] + uVar44;
                  lVar3 = puVar46[iVar9] + uVar45;
                  pbVar4 = (byte *)(lVar2 + (ulong)(uint)(iVar39 * iVar28));
                  pbVar5 = (byte *)(lVar2 + (ulong)(uint)(iVar27 * iVar28));
                  pbVar6 = (byte *)(lVar3 + (ulong)(uint)(iVar39 * iVar28));
                  pbVar7 = (byte *)(lVar3 + (ulong)(uint)(iVar27 * iVar28));
                  bVar14 = pbVar4[1];
                  bVar15 = pbVar5[2];
                  bVar16 = pbVar6[1];
                  bVar17 = pbVar5[1];
                  bVar18 = pbVar5[3];
                  bVar19 = pbVar4[2];
                  bVar20 = pbVar4[3];
                  bVar21 = pbVar7[1];
                  bVar22 = pbVar6[2];
                  bVar23 = pbVar6[3];
                  bVar24 = pbVar7[2];
                  uVar42 = uVar40 & 3;
                  uVar40 = uVar40 + 1;
                  fVar50 = *(float *)((long)&local_b8 + (uVar48 & 3) * 4 + uVar42 * 0x10);
                  bVar25 = pbVar7[3];
                  fVar51 = fVar50;
                  if (bVar8 == 0) {
                    fVar51 = 2.0;
                  }
                  puVar1 = (undefined1 *)(puVar46[uVar49] + uVar43 + uVar38);
                  uVar38 = (ulong)(uint)((int)uVar38 + iVar28);
                  *puVar1 = (char)(int)((fVar50 + (float)((uint)*pbVar5 + (uint)*pbVar4 +
                                                          (uint)*pbVar6 + (uint)*pbVar7)) * 0.25);
                  puVar1[1] = (char)(int)((fVar50 + (float)((uint)bVar17 + (uint)bVar14 +
                                                            (uint)bVar16 + (uint)bVar21)) * 0.25);
                  puVar1[2] = (char)(int)((fVar50 + (float)((uint)bVar15 + (uint)bVar19 +
                                                            (uint)bVar22 + (uint)bVar24)) * 0.25);
                  puVar1[3] = (char)(int)((fVar51 + (float)((uint)bVar18 + (uint)bVar20 +
                                                            (uint)bVar23 + (uint)bVar25)) * 0.25);
                } while (uVar30 != uVar40);
              }
            }
            uVar48 = uVar48 + 1;
          } while (uVar48 != uVar31);
        }
      }
      uVar49 = uVar49 + 1;
    } while (uVar49 != uVar47);
    if (uVar29 == 0) {
      uVar35 = 0;
    }
    else {
      uVar49 = 0;
      do {
        uVar35 = (**(code **)(*param_1 + 0x48))(param_1,puVar46[uVar49],uVar49 & 0xffffffff,0,1);
        uVar49 = uVar49 + 1;
      } while (uVar47 != uVar49);
    }
  }
  if (param_5 == (undefined8 *)0x0) {
    if (uVar29 == 0) {
      if (puVar46 == (ulong *)0x0) {
        return uVar35;
      }
    }
    else {
      puVar36 = puVar46;
      do {
        if (*puVar36 != 0) {
          FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,*puVar36 - 8);
          *puVar36 = 0;
        }
        puVar36 = puVar36 + 1;
        uVar47 = uVar47 - 1;
      } while (uVar47 != 0);
    }
    puVar36 = puVar46 + puVar46[-1];
    do {
      puVar36 = puVar36 + -1;
    } while (puVar46 <= puVar36);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
  }
  else {
    *param_5 = puVar46;
  }
  return uVar35;
}


