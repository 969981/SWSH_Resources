/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00142c60; name: FUN_00142c60
 */


void FUN_00142c60(long *param_1,long param_2,undefined4 param_3,undefined4 *param_4,long param_5,
                 uint *param_6,uint *param_7,undefined8 param_8,undefined4 *param_9,long param_10,
                 undefined4 *param_11,undefined8 param_12,undefined4 *param_13,undefined4 *param_14,
                 undefined4 *param_15,undefined8 param_16,undefined4 *param_17,undefined4 *param_18,
                 undefined4 param_19)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  short sVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  undefined2 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  ulong uVar20;
  long lVar21;
  undefined4 *puVar22;
  long *plVar23;
  uint uVar24;
  undefined2 *puVar25;
  undefined2 *puVar26;
  undefined8 local_68;
  
  *(undefined2 *)(param_1 + 2) = 0;
  puVar6 = PTR_DAT_02710da8;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[1] = (long)(puVar6 + 0x80);
  param_1[5] = 0;
  param_1[6] = 0;
  plVar7 = param_1 + 7;
  *plVar7 = 0;
  param_1[8] = 0;
  plVar8 = param_1 + 9;
  *plVar8 = 0;
  param_1[10] = 0;
  plVar10 = param_1 + 0xb;
  *plVar10 = 0;
  param_1[0xc] = 0;
  plVar23 = param_1 + 0xd;
  *plVar23 = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  param_1[0xe] = 0;
  plVar11 = param_1 + 0x10;
  *plVar11 = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = param_19;
                    /* try { // try from 00142d1c to 00142dcf has its CatchHandler @ 00143440 */
  FUN_00143af0(param_1 + 5,(ulong)(param_5 - (long)param_4) >> 2);
  if (*(uint *)(param_1 + 6) != 0) {
    puVar12 = (undefined4 *)param_1[5];
    puVar14 = puVar12 + *(uint *)(param_1 + 6);
    puVar3 = puVar14;
    if (puVar14 <= puVar12 + 1) {
      puVar3 = puVar12 + 1;
    }
    uVar20 = ~(ulong)puVar12;
    uVar24 = ((uint)((long)puVar3 + uVar20 >> 2) & 0x3fffffff) + 1;
    if ((uVar24 & 3) != 0) {
      lVar21 = -((ulong)uVar24 & 3);
      puVar13 = puVar12;
      puVar19 = param_4;
      do {
        param_4 = puVar19 + 1;
        lVar21 = lVar21 + 1;
        puVar12 = puVar13 + 1;
        *puVar13 = *puVar19;
        puVar13 = puVar12;
        puVar19 = param_4;
      } while (lVar21 != 0);
    }
    if (0xb < (long)puVar3 + uVar20) {
      do {
        *puVar12 = *param_4;
        puVar12[1] = param_4[1];
        puVar12[2] = param_4[2];
        puVar12[3] = param_4[3];
        puVar12 = puVar12 + 4;
        param_4 = param_4 + 4;
      } while (puVar12 < puVar14);
    }
  }
  uVar24 = *(uint *)((long)param_1 + 0x44) & 0x7fffffff;
  if (uVar24 < (int)((ulong)((long)param_7 - (long)param_6) >> 2) + 1U) {
    FUN_00143b30(plVar7);
    uVar24 = *(uint *)((long)param_1 + 0x44) & 0x7fffffff;
  }
  local_68 = (long *)((ulong)local_68._4_4_ << 0x20);
  if (*(uint *)(param_1 + 8) < uVar24) {
    *(undefined4 *)(param_1[7] + (ulong)*(uint *)(param_1 + 8) * 4) = 0;
    *(int *)(param_1 + 8) = (int)param_1[8] + 1;
  }
  else {
                    /* try { // try from 00142e00 to 00142e0b has its CatchHandler @ 00143430 */
    FUN_00143c60(plVar7,&local_68);
  }
  *(int *)((long)param_1 + 0x94) = (int)((ulong)(param_10 - (long)param_9) >> 2);
  if (param_6 != param_7) {
    puVar12 = param_11;
    puVar14 = param_9;
    do {
      uVar24 = *param_6;
      puVar3 = param_9 + uVar24;
      puVar13 = puVar14;
      if (puVar14 != puVar3) {
        do {
          while( true ) {
            uVar15 = *(uint *)(param_1 + 10);
            if ((*(uint *)((long)param_1 + 0x54) & 0x7fffffff) <= uVar15) break;
            *(undefined4 *)(param_1[9] + (ulong)uVar15 * 4) = *puVar13;
            *(uint *)(param_1 + 10) = uVar15 + 1;
            puVar13 = puVar13 + 1;
            if (puVar3 == puVar13) goto LAB_00142e9c;
          }
                    /* try { // try from 00142e84 to 00142e8f has its CatchHandler @ 001434ec */
          FUN_00143dd0(plVar8,puVar13);
          puVar13 = puVar13 + 1;
        } while (puVar3 != puVar13);
LAB_00142e9c:
        puVar13 = puVar3;
      }
      puVar19 = param_11 + (uVar24 << 1);
      if (puVar12 != puVar19) {
        do {
          while( true ) {
            local_68 = (long *)CONCAT62(local_68._2_6_,(short)*puVar12);
            uVar24 = *(uint *)(param_1 + 0xc);
            if ((*(uint *)((long)param_1 + 100) & 0x7fffffff) <= uVar24) break;
            *(short *)(param_1[0xb] + (ulong)uVar24 * 2) = (short)*puVar12;
            *(uint *)(param_1 + 0xc) = uVar24 + 1;
            puVar12 = puVar12 + 1;
            if (puVar19 == puVar12) goto LAB_00142f04;
          }
                    /* try { // try from 00142eec to 00142ef7 has its CatchHandler @ 001434b0 */
          FUN_00143f50(plVar10,&local_68);
          puVar12 = puVar12 + 1;
        } while (puVar19 != puVar12);
LAB_00142f04:
        puVar12 = puVar19;
      }
      uVar20 = (ulong)((long)puVar3 - (long)puVar14) >> 2;
      uVar24 = (uint)uVar20 & 3;
      if ((uVar20 & 3) != 0) {
        do {
          while( true ) {
            local_68 = (long *)CONCAT44(local_68._4_4_,0xff7fffff);
            uVar15 = *(uint *)(param_1 + 10);
            if (uVar15 < (*(uint *)((long)param_1 + 0x54) & 0x7fffffff)) {
              *(undefined4 *)(param_1[9] + (ulong)uVar15 * 4) = 0xff7fffff;
              *(uint *)(param_1 + 10) = uVar15 + 1;
            }
            else {
                    /* try { // try from 00142f48 to 00142f53 has its CatchHandler @ 001434a0 */
              FUN_00143dd0(plVar8,&local_68);
            }
            sVar5 = (short)uVar24 + (short)param_1[4] + -1;
            uVar15 = *(uint *)(param_1 + 0xc);
            uVar2 = *(uint *)((long)param_1 + 100) & 0x7fffffff;
            if (uVar2 <= uVar15) break;
            *(short *)(param_1[0xb] + (ulong)uVar15 * 2) = sVar5;
            uVar15 = uVar15 + 1;
            *(uint *)(param_1 + 0xc) = uVar15;
            local_68 = (long *)CONCAT62(local_68._2_6_,sVar5);
            if (uVar2 <= uVar15) goto LAB_00142fd0;
LAB_00142f90:
            *(short *)(param_1[0xb] + (ulong)uVar15 * 2) = sVar5;
            *(uint *)(param_1 + 0xc) = uVar15 + 1;
            uVar24 = uVar24 + 1 & 3;
            if (uVar24 == 0) goto LAB_00142fe8;
          }
                    /* try { // try from 00142fb0 to 00142fbb has its CatchHandler @ 00143490 */
          local_68._0_2_ = sVar5;
          FUN_00143f50(plVar10,&local_68);
          uVar15 = *(uint *)(param_1 + 0xc);
          local_68 = (long *)CONCAT62(local_68._2_6_,sVar5);
          if (uVar15 < (*(uint *)((long)param_1 + 100) & 0x7fffffff)) goto LAB_00142f90;
LAB_00142fd0:
                    /* try { // try from 00142fd0 to 00142fdb has its CatchHandler @ 00143480 */
          FUN_00143f50(plVar10,&local_68);
          uVar24 = uVar24 + 1 & 3;
        } while (uVar24 != 0);
      }
LAB_00142fe8:
      local_68 = (long *)CONCAT44(local_68._4_4_,(int)param_1[10]);
      if (*(uint *)(param_1 + 8) < (*(uint *)((long)param_1 + 0x44) & 0x7fffffff)) {
        *(int *)(param_1[7] + (ulong)*(uint *)(param_1 + 8) * 4) = (int)param_1[10];
        *(int *)(param_1 + 8) = (int)param_1[8] + 1;
      }
      else {
                    /* try { // try from 00143018 to 00143023 has its CatchHandler @ 00143450 */
        FUN_00143c60(plVar7,&local_68);
      }
      param_6 = param_6 + 1;
      puVar14 = puVar13;
    } while (param_6 != param_7);
  }
  puVar12 = (undefined4 *)param_1[9];
  uVar24 = *(uint *)(param_1 + 10);
  if (uVar24 == 0) {
    param_1[9] = 0;
    uVar15 = *(uint *)((long)param_1 + 0x54);
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)((long)param_1 + 0x54) = 0;
  }
  else {
                    /* try { // try from 00143044 to 0014306f has its CatchHandler @ 00143420 */
    plVar7 = (long *)FUN_00400d30();
    lVar21 = (**(code **)(*plVar7 + 0x10))
                       (plVar7,(ulong)uVar24 * 4 + 0x17,"NonTrackedAlloc",
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    if (lVar21 == 0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      puVar14 = (undefined4 *)(lVar21 + 0x17U & 0xfffffffffffffff0);
      *(long *)(puVar14 + -2) = (long)puVar14 - lVar21;
    }
    puVar3 = puVar14 + uVar24;
    puVar13 = puVar3;
    if (puVar3 <= puVar14 + 1) {
      puVar13 = puVar14 + 1;
    }
    uVar15 = ((uint)((long)puVar13 + ~(ulong)puVar14 >> 2) & 0x3fffffff) + 1;
    puVar19 = puVar14;
    if ((uVar15 & 3) != 0) {
      lVar21 = -((ulong)uVar15 & 3);
      puVar18 = puVar14;
      puVar22 = puVar12;
      do {
        puVar12 = puVar22 + 1;
        lVar21 = lVar21 + 1;
        puVar19 = puVar18 + 1;
        *puVar18 = *puVar22;
        puVar18 = puVar19;
        puVar22 = puVar12;
      } while (lVar21 != 0);
    }
    if (0xb < (long)puVar13 + ~(ulong)puVar14) {
      do {
        *puVar19 = *puVar12;
        puVar19[1] = puVar12[1];
        puVar19[2] = puVar12[2];
        puVar19[3] = puVar12[3];
        puVar19 = puVar19 + 4;
        puVar12 = puVar12 + 4;
      } while (puVar19 < puVar3);
    }
    puVar12 = (undefined4 *)*plVar8;
    param_1[9] = (long)puVar14;
    uVar15 = *(uint *)((long)param_1 + 0x54);
    *(uint *)(param_1 + 10) = uVar24;
    *(uint *)((long)param_1 + 0x54) = uVar24;
  }
  if (((puVar12 != (undefined4 *)0x0) && ((uVar15 & 0x7fffffff) != 0)) && (-1 < (int)uVar15)) {
    lVar21 = *(long *)(puVar12 + -2);
                    /* try { // try from 001430ac to 001430bf has its CatchHandler @ 0014340c */
    plVar8 = (long *)FUN_00400d30();
    (**(code **)(*plVar8 + 0x18))(plVar8,(long)puVar12 - lVar21);
  }
  puVar25 = (undefined2 *)param_1[0xb];
  uVar24 = *(uint *)(param_1 + 0xc);
  if (uVar24 == 0) {
    uVar15 = *(uint *)((long)param_1 + 100);
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)((long)param_1 + 100) = 0;
  }
  else {
                    /* try { // try from 00143164 to 0014318b has its CatchHandler @ 00143410 */
    plVar8 = (long *)FUN_00400d30();
    puVar9 = (undefined2 *)
             (**(code **)(*plVar8 + 0x10))
                       (plVar8,(ulong)uVar24 << 1,"NonTrackedAlloc",
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    puVar1 = puVar9 + uVar24;
    puVar4 = puVar1;
    if (puVar1 <= puVar9 + 1) {
      puVar4 = puVar9 + 1;
    }
    uVar15 = ((uint)((long)puVar4 + ~(ulong)puVar9 >> 1) & 0x7fffffff) + 1;
    puVar17 = puVar9;
    if ((uVar15 & 3) != 0) {
      lVar21 = -((ulong)uVar15 & 3);
      puVar16 = puVar9;
      puVar26 = puVar25;
      do {
        puVar25 = puVar26 + 1;
        lVar21 = lVar21 + 1;
        puVar17 = puVar16 + 1;
        *puVar16 = *puVar26;
        puVar16 = puVar17;
        puVar26 = puVar25;
      } while (lVar21 != 0);
    }
    if (5 < (long)puVar4 + ~(ulong)puVar9) {
      do {
        *puVar17 = *puVar25;
        puVar17[1] = puVar25[1];
        puVar17[2] = puVar25[2];
        puVar17[3] = puVar25[3];
        puVar17 = puVar17 + 4;
        puVar25 = puVar25 + 4;
      } while (puVar17 < puVar1);
    }
    puVar25 = (undefined2 *)*plVar10;
    uVar15 = *(uint *)((long)param_1 + 100);
    param_1[0xb] = (long)puVar9;
    *(uint *)(param_1 + 0xc) = uVar24;
    *(uint *)((long)param_1 + 100) = uVar24;
  }
  if (((puVar25 != (undefined2 *)0x0) && ((uVar15 & 0x7fffffff) != 0)) && (-1 < (int)uVar15)) {
                    /* try { // try from 00143228 to 0014323b has its CatchHandler @ 00143408 */
    plVar8 = (long *)FUN_00400d30();
    (**(code **)(*plVar8 + 0x18))(plVar8,puVar25);
  }
  if ((*(uint *)((long)param_1 + 0x74) & 0x7fffffff) <
      (int)((ulong)((long)param_14 - (long)param_13) >> 2) + 2U) {
                    /* try { // try from 00143260 to 00143267 has its CatchHandler @ 001433f8 */
    FUN_001440b0(plVar23);
  }
  if (param_13 < param_14) {
    do {
      while( true ) {
        local_68 = (long *)CONCAT62(local_68._2_6_,(short)*param_13);
        local_68 = (long *)CONCAT44(*param_15,(undefined4)local_68);
        if ((*(uint *)((long)param_1 + 0x74) & 0x7fffffff) <= *(uint *)(param_1 + 0xe)) break;
        *(long **)(param_1[0xd] + (ulong)*(uint *)(param_1 + 0xe) * 8) = local_68;
        *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
        param_13 = param_13 + 1;
        param_15 = param_15 + 1;
        if (param_14 <= param_13) goto LAB_001432dc;
      }
                    /* try { // try from 001432c0 to 001432cb has its CatchHandler @ 00143460 */
      FUN_001441e0(plVar23,&local_68);
      param_13 = param_13 + 1;
      param_15 = param_15 + 1;
    } while (param_13 < param_14);
  }
LAB_001432dc:
  if ((*(uint *)((long)param_1 + 0x8c) & 0x7fffffff) <
      (uint)((ulong)((long)param_18 - (long)param_17) >> 2)) {
                    /* try { // try from 001432f8 to 001432ff has its CatchHandler @ 001433f8 */
    FUN_00144350(plVar11);
  }
  for (; param_17 != param_18; param_17 = param_17 + 1) {
    while( true ) {
      local_68 = (long *)CONCAT62(local_68._2_6_,(short)*param_17);
      uVar24 = *(uint *)(param_1 + 0x11);
      if ((*(uint *)((long)param_1 + 0x8c) & 0x7fffffff) <= uVar24) break;
      *(short *)(param_1[0x10] + (ulong)uVar24 * 2) = (short)*param_17;
      *(uint *)(param_1 + 0x11) = uVar24 + 1;
      param_17 = param_17 + 1;
      if (param_18 == param_17) goto LAB_00143358;
    }
                    /* try { // try from 00143340 to 0014334b has its CatchHandler @ 00143470 */
    FUN_00143f50(plVar11,&local_68);
  }
LAB_00143358:
  lVar21 = param_1[3];
  uVar24 = *(uint *)(lVar21 + 0x20);
  if (uVar24 < (*(uint *)(lVar21 + 0x24) & 0x7fffffff)) {
    *(long **)(*(long *)(lVar21 + 0x18) + (ulong)uVar24 * 8) = param_1;
    *(uint *)(lVar21 + 0x20) = uVar24 + 1;
  }
  else {
                    /* try { // try from 001433a0 to 001433a7 has its CatchHandler @ 001433e8 */
    local_68 = param_1;
    FUN_00144480(lVar21 + 0x18,&local_68);
  }
  return;
}


