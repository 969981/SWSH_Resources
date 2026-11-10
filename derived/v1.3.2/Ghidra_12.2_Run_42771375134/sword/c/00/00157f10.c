/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00157f10; name: FUN_00157f10
 */


void FUN_00157f10(long param_1,long param_2,long param_3,float *param_4,float *param_5)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined8 *puVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  float *pfVar18;
  uint *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  float fVar22;
  float fVar23;
  undefined2 local_98;
  undefined2 uStack_96;
  undefined2 uStack_94;
  undefined2 uStack_92;
  float local_90;
  float fStack_8c;
  short local_88;
  short local_86;
  short local_84;
  undefined2 local_82;
  undefined4 *local_80;
  uint local_74;
  uint *local_70;
  uint local_68;
  uint local_64;
  
  uVar11 = *(uint *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x260) = 0;
  FUN_00159450(&local_80);
                    /* try { // try from 00157f5c to 00157f67 has its CatchHandler @ 00158344 */
  FUN_001595b0(&local_80,uVar11 & 0xffff,4);
  puVar19 = local_70;
  puVar20 = local_80;
  local_88 = (short)uVar11;
  local_86 = local_88 + 1;
  local_84 = local_88 + 2;
  plVar10 = (long *)(param_1 + 0x240);
  local_82 = 0;
                    /* try { // try from 00157f90 to 00157f9f has its CatchHandler @ 00158334 */
  FUN_001583e0(plVar10,0,&local_98);
  if ((*(uint *)(param_1 + 0x24c) & 0x7fffffff) <
      local_68 * 3 + (int)((ulong)(param_3 - param_2) >> 4)) {
                    /* try { // try from 00157fc0 to 00157fc7 has its CatchHandler @ 00158324 */
    FUN_00158dd0(plVar10);
  }
  if (local_68 == 0) {
    puVar15 = (undefined8 *)*plVar10;
    uVar11 = *(uint *)(param_1 + 0x248);
  }
  else {
    puVar3 = puVar19 + local_68;
    puVar2 = (uint *)(param_1 + 0x248);
    do {
      puVar21 = puVar20;
      if (*puVar19 != 0) {
        puVar21 = puVar20 + (ulong)*puVar19 * 4;
        do {
          local_98 = (undefined2)*puVar20;
          uStack_96 = (undefined2)puVar20[1];
          uStack_94 = (undefined2)puVar20[2];
          uStack_92 = (undefined2)puVar20[3];
          if (*(uint *)(param_1 + 0x248) < (*(uint *)(param_1 + 0x24c) & 0x7fffffff)) {
            *(ulong *)(*plVar10 + (ulong)*(uint *)(param_1 + 0x248) * 8) =
                 CONCAT26(uStack_92,CONCAT24(uStack_94,CONCAT22(uStack_96,local_98)));
            *puVar2 = *puVar2 + 1;
          }
          else {
                    /* try { // try from 00158030 to 0015803b has its CatchHandler @ 00158374 */
            FUN_00158f00(plVar10,&local_98);
          }
          puVar20 = puVar20 + 4;
          *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + 1;
        } while (puVar20 != puVar21);
      }
                    /* try { // try from 00158064 to 0015806f has its CatchHandler @ 00158354 */
      FUN_001583e0(plVar10,*puVar2 + 3 & 0xfffffffc,&local_88);
      puVar19 = puVar19 + 1;
      puVar20 = puVar21;
    } while (puVar19 != puVar3);
    puVar15 = (undefined8 *)*plVar10;
    uVar11 = *puVar2;
  }
  if (uVar11 == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
                    /* try { // try from 00158088 to 001580af has its CatchHandler @ 00158314 */
    plVar8 = (long *)FUN_00400d30();
    puVar9 = (undefined8 *)
             (**(code **)(*plVar8 + 0x10))
                       (plVar8,(ulong)uVar11 << 3,"NonTrackedAlloc",
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    puVar4 = puVar9 + uVar11;
    puVar6 = puVar4;
    if (puVar4 <= puVar9 + 1) {
      puVar6 = puVar9 + 1;
    }
    uVar1 = ((uint)((long)puVar6 + ~(ulong)puVar9 >> 3) & 0x1fffffff) + 1;
    puVar13 = puVar9;
    if ((uVar1 & 3) != 0) {
      lVar14 = -((ulong)uVar1 & 3);
      puVar12 = puVar9;
      puVar16 = puVar15;
      do {
        puVar15 = puVar16 + 1;
        lVar14 = lVar14 + 1;
        puVar13 = puVar12 + 1;
        *puVar12 = *puVar16;
        puVar12 = puVar13;
        puVar16 = puVar15;
      } while (lVar14 != 0);
    }
    if (0x17 < (long)puVar6 + ~(ulong)puVar9) {
      do {
        *puVar13 = *puVar15;
        puVar13[1] = puVar15[1];
        puVar13[2] = puVar15[2];
        puVar13[3] = puVar15[3];
        puVar13 = puVar13 + 4;
        puVar15 = puVar15 + 4;
      } while (puVar13 < puVar4);
    }
    puVar15 = (undefined8 *)*plVar10;
  }
  uVar1 = *(uint *)(param_1 + 0x24c);
  *(undefined8 **)(param_1 + 0x240) = puVar9;
  *(uint *)(param_1 + 0x248) = uVar11;
  *(uint *)(param_1 + 0x24c) = uVar11;
  if (((puVar15 != (undefined8 *)0x0) && ((uVar1 & 0x7fffffff) != 0)) && (-1 < (int)uVar1)) {
                    /* try { // try from 00158164 to 00158177 has its CatchHandler @ 00158310 */
    plVar10 = (long *)FUN_00400d30();
    (**(code **)(*plVar10 + 0x18))(plVar10,puVar15);
  }
  lVar14 = *(long *)(param_1 + 0x250);
  uVar11 = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  if (((lVar14 != 0) && ((*(uint *)(param_1 + 0x25c) & 0x7fffffff) != 0)) &&
     (-1 < (int)*(uint *)(param_1 + 0x25c))) {
    lVar17 = *(long *)(lVar14 + -8);
                    /* try { // try from 001581a0 to 001581b3 has its CatchHandler @ 0015830c */
    plVar10 = (long *)FUN_00400d30();
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar14 - lVar17);
    uVar11 = *(uint *)(param_1 + 0x25c) & 0x7fffffff;
  }
  if (uVar11 < (uint)((int)((ulong)((long)param_5 - (long)param_4) >> 2) * -0x55555555)) {
                    /* try { // try from 001581dc to 001581e3 has its CatchHandler @ 00158324 */
    FUN_00145a30(param_1 + 0x250);
  }
  if (param_4 < param_5) {
    pfVar18 = param_4 + 3;
    do {
      while( true ) {
        fVar22 = *param_4;
        fVar23 = pfVar18[-2];
        local_90 = pfVar18[-1];
        fStack_8c = 1.0 / (fVar22 * fVar22 + fVar23 * fVar23 + local_90 * local_90);
        local_98 = SUB42(fVar22,0);
        uStack_96 = (undefined2)((uint)fVar22 >> 0x10);
        uStack_94 = SUB42(fVar23,0);
        uStack_92 = (undefined2)((uint)fVar23 >> 0x10);
        uVar11 = *(uint *)(param_1 + 600);
        param_4 = pfVar18;
        if ((*(uint *)(param_1 + 0x25c) & 0x7fffffff) <= uVar11) break;
        pfVar5 = (float *)(*(long *)(param_1 + 0x250) + (ulong)uVar11 * 0x10);
        *pfVar5 = fVar22;
        pfVar5[1] = fVar23;
        pfVar5[2] = local_90;
        pfVar5[3] = fStack_8c;
        *(uint *)(param_1 + 600) = uVar11 + 1;
        bVar7 = param_5 <= pfVar18;
        pfVar18 = pfVar18 + 3;
        if (bVar7) goto LAB_00158278;
      }
                    /* try { // try from 0015825c to 00158267 has its CatchHandler @ 00158364 */
      FUN_00159070(param_1 + 0x250,&local_98);
      bVar7 = pfVar18 < param_5;
      pfVar18 = pfVar18 + 3;
    } while (bVar7);
  }
LAB_00158278:
  if (((-1 < (int)local_64) && ((local_64 & 0x7fffffff) != 0)) && (local_70 != (uint *)0x0)) {
                    /* try { // try from 00158290 to 001582a3 has its CatchHandler @ 00158308 */
    plVar10 = (long *)FUN_00400d30();
    (**(code **)(*plVar10 + 0x18))(plVar10,local_70);
  }
  if (((-1 < (int)local_74) && ((local_74 & 0x7fffffff) != 0)) && (local_80 != (undefined4 *)0x0)) {
                    /* try { // try from 001582bc to 001582cf has its CatchHandler @ 00158304 */
    plVar10 = (long *)FUN_00400d30();
    (**(code **)(*plVar10 + 0x18))(plVar10,local_80);
  }
  return;
}


