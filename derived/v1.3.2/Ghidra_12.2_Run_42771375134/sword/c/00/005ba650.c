/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ba650; name: FUN_005ba650
 */


/* WARNING: Removing unreachable block (ram,0x005bae38) */
/* WARNING: Removing unreachable block (ram,0x005bad2c) */
/* WARNING: Removing unreachable block (ram,0x005bae20) */
/* WARNING: Removing unreachable block (ram,0x005bae50) */

undefined8
FUN_005ba650(undefined8 param_1,uint *param_2,uint *param_3,uint *param_4,undefined8 *param_5,
            size_t *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  size_t __n;
  size_t __n_00;
  size_t __n_01;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  size_t __n_02;
  long lVar12;
  long lVar13;
  void *__src;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long *plVar18;
  size_t *psVar19;
  size_t *__dest;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined8 local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined8 local_128;
  size_t local_120;
  size_t local_118;
  size_t local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  void *local_e0;
  void *local_d8;
  void *local_d0;
  long local_c8;
  undefined8 local_c0;
  size_t local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  void *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long local_70 [2];
  
  local_78 = 0;
  local_70[0] = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_005bafd0(param_1,local_70,&local_80,&local_78,&local_88,param_7,param_8);
  lVar16 = local_70[0];
  local_98 = (void *)0x0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_005bafd0(param_1,&local_90,&local_b0,&local_98,&local_b8,local_70[0],local_80);
  lVar15 = local_78;
  FUN_005bafd0(param_1,&local_a0,&local_c0,&local_a8,&local_c8,local_78,local_88);
  lVar14 = local_90;
  lVar12 = local_a8;
  lVar1 = local_c8;
  if (local_c8 != 0) {
    plVar18 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,local_c8 + 9,
                                   "C:/workspace/YEBIS_draft/src/UT/ppfxLicense.cpp",0x9d,0);
    plVar24 = plVar18;
    if (plVar18 != (long *)0x0) {
      plVar24 = plVar18 + 1;
      *plVar18 = lVar1 + 1;
    }
                    /* WARNING: Subroutine does not return */
    memset((void *)((long)plVar24 + lVar1),0,(ulong)(lVar1 != -1));
  }
  local_d8 = (void *)0x0;
  local_d0 = (void *)0x0;
  local_e8 = 0;
  local_e0 = (void *)0x0;
  local_f8 = 0;
  local_f0 = 0;
  local_108 = 0;
  local_100 = 0;
  local_118 = 0;
  local_110 = 0;
  local_128 = 0;
  local_120 = 0;
  local_138 = 0;
  local_130 = 0;
  local_148 = 0;
  local_140 = 0;
  FUN_005bafd0(param_1,&local_e8,&local_128,&local_e0,&local_120,local_90,local_b0);
  lVar8 = local_e8;
  FUN_005bafd0(param_1,&local_d0,&local_110,&local_d8,&local_118,local_e8,local_128);
  lVar13 = local_a0;
  FUN_005bafd0(param_1,&local_108,&local_148,&local_100,&local_140,local_a0,local_c0);
  lVar4 = local_108;
  FUN_005bafd0(param_1,&local_f0,&local_130,&local_f8,&local_138,local_108,local_148);
  __src = local_98;
  __n_02 = local_b8;
  lVar7 = local_f0;
  lVar6 = local_f8;
  lVar5 = local_100;
  __n_01 = local_110;
  __n_00 = local_118;
  __n = local_120;
  lVar3 = local_130;
  lVar2 = local_138;
  lVar1 = local_140;
  if (local_130 != 0) {
    plVar18 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,local_130 + 9,
                                   "C:/workspace/YEBIS_draft/src/UT/ppfxLicense.cpp",0x9d,0);
    plVar24 = plVar18;
    if (plVar18 != (long *)0x0) {
      plVar24 = plVar18 + 1;
      *plVar18 = lVar3 + 1;
    }
                    /* WARNING: Subroutine does not return */
    memset((void *)((long)plVar24 + lVar3),0,(ulong)(lVar3 != -1));
  }
  if (local_138 != 0) {
    plVar18 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,local_138 + 9,
                                   "C:/workspace/YEBIS_draft/src/UT/ppfxLicense.cpp",0x9d,0);
    plVar24 = plVar18;
    if (plVar18 != (long *)0x0) {
      plVar24 = plVar18 + 1;
      *plVar18 = lVar2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    memset((void *)((long)plVar24 + lVar2),0,(ulong)(lVar2 != -1));
  }
  if (local_140 != 0) {
    plVar18 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,local_140 + 9,
                                   "C:/workspace/YEBIS_draft/src/UT/ppfxLicense.cpp",0x9d,0);
    plVar24 = plVar18;
    if (plVar18 != (long *)0x0) {
      plVar24 = plVar18 + 1;
      *plVar18 = lVar1 + 1;
    }
                    /* WARNING: Subroutine does not return */
    memset((void *)((long)plVar24 + lVar1),0,(ulong)(lVar1 != -1));
  }
  if (((((local_b8 == 0) || (local_110 == 0)) || (local_118 == 0)) ||
      ((local_120 == 0 ||
       (iVar17 = memcmp(local_98,(void *)0x0,local_b8), pvVar11 = local_d0, iVar17 != 0)))) ||
     ((iVar17 = memcmp(local_d0,(void *)0x0,__n_01), pvVar10 = local_d8, iVar17 != 0 ||
      ((iVar17 = memcmp(local_d8,(void *)0x0,__n_00), pvVar9 = local_e0, iVar17 != 0 ||
       (iVar17 = memcmp(local_e0,(void *)0x0,__n), iVar17 != 0)))))) {
    *param_2 = 0;
    *param_3 = 0;
    uVar25 = 0;
    *param_4 = 0;
  }
  else {
    psVar19 = (size_t *)
              FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,__n_02 + 8,
                           "C:/workspace/YEBIS_draft/src/UT/ppfxLicense.cpp",0x6b,0);
    __dest = psVar19;
    if (psVar19 != (size_t *)0x0) {
      __dest = psVar19 + 1;
      *psVar19 = __n_02;
    }
    *param_5 = __dest;
    memcpy(__dest,__src,__n_02);
    uVar20 = 0;
    uVar22 = 0;
    *param_6 = __n_02;
    *param_2 = 0;
    do {
      uVar23 = uVar22 >> 3;
      uVar21 = (uint)uVar22;
      uVar22 = (ulong)(uVar21 + 1);
      uVar20 = ((uint)*(byte *)((long)pvVar11 + uVar23) & 1 << (ulong)(~uVar21 & 7)) <<
               (ulong)(uVar21 & 0x18) | uVar20;
      *param_2 = uVar20;
    } while (uVar21 + 1 != 0x20);
    uVar20 = 0;
    uVar22 = 0;
    *param_3 = 0;
    do {
      uVar23 = uVar22 >> 3;
      uVar21 = (uint)uVar22;
      uVar22 = (ulong)(uVar21 + 1);
      uVar20 = ((uint)*(byte *)((long)pvVar10 + uVar23) & 1 << (ulong)(~uVar21 & 7)) <<
               (ulong)(uVar21 & 0x18) | uVar20;
      *param_3 = uVar20;
    } while (uVar21 + 1 != 0x20);
    uVar20 = 0;
    uVar22 = 0;
    uVar25 = 1;
    *param_4 = 0;
    do {
      uVar23 = uVar22 >> 3;
      uVar21 = (uint)uVar22;
      uVar22 = (ulong)(uVar21 + 1);
      uVar20 = ((uint)*(byte *)((long)pvVar9 + uVar23) & 1 << (ulong)(~uVar21 & 7)) <<
               (ulong)(uVar21 & 0x18) | uVar20;
      *param_4 = uVar20;
    } while (uVar21 + 1 != 0x20);
  }
  if (lVar16 != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,lVar16 + -8);
  }
  if (lVar15 != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,lVar15 + -8);
  }
  if (lVar14 != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,lVar14 + -8);
  }
  if (local_98 != (void *)0x0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,(long)local_98 + -8);
  }
  if (lVar13 != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,lVar13 + -8);
  }
  if (lVar12 != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,lVar12 + -8);
  }
  if (local_d0 != (void *)0x0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,(long)local_d0 + -8);
  }
  if (local_d8 != (void *)0x0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,(long)local_d8 + -8);
  }
  if (local_e0 != (void *)0x0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,(long)local_e0 + -8);
  }
  if (lVar8 != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,lVar8 + -8);
  }
  if (lVar7 != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,lVar7 + -8);
  }
  if (lVar6 != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,lVar6 + -8);
  }
  if (lVar5 != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,lVar5 + -8);
  }
  if (lVar4 != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,lVar4 + -8);
  }
  return uVar25;
}


