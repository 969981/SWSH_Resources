/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dab9a0; name: FUN_00dab9a0
 */


void FUN_00dab9a0(float param_1,long param_2,uint param_3,long param_4,float *param_5,long param_6,
                 ulong param_7,long param_8)

{
  float *pfVar1;
  undefined4 *puVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined *puVar8;
  undefined4 *__src;
  void *pvVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long *plVar13;
  size_t sVar14;
  undefined4 *__dest;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  uint *puVar18;
  ushort *puVar19;
  ulong uVar20;
  int *piVar21;
  ulong uVar22;
  ushort uVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  int *piVar27;
  ulong uVar28;
  int iVar29;
  undefined1 uVar30;
  int iVar31;
  int *piVar32;
  long lVar33;
  int *piVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float local_1b8;
  float local_1b4;
  undefined8 local_148;
  float local_140;
  undefined4 *local_138;
  undefined4 *local_130;
  undefined4 *local_128;
  long *local_120;
  char local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  void *local_f8;
  int *local_f0;
  ulong *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  void *local_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  int *local_b0 [2];
  
  FUN_0075efb0(auStack_c0,*(undefined8 *)(param_2 + 0xa338),0,1);
  fVar7 = DAT_01d4c02c;
  fVar6 = DAT_01d4bdd0;
  fVar5 = DAT_01d4bc8c;
  fVar4 = DAT_01d4bb80;
  local_110 = 0x400;
  local_e8 = (ulong *)0x0;
  local_e0 = 0;
  local_120 = (long *)0x0;
  local_118 = '\0';
  local_d8 = 1;
  local_c8 = (void *)0x0;
  local_108 = 8;
  local_100 = 0;
  local_d0 = 0x100;
  local_f8 = (void *)0x0;
  local_f0 = (int *)0x0;
  if (*(long *)(param_4 + 8) == 0) {
    piVar34 = (int *)0x0;
  }
  else {
    puVar18 = *(uint **)(*(long *)(param_4 + 8) + 400);
    piVar34 = (int *)((long)puVar18 + (ulong)*puVar18);
  }
  puVar18 = (uint *)((long)piVar34 + (ulong)*(ushort *)((long)piVar34 + (4 - (long)*piVar34)));
  uVar3 = *(uint *)((long)puVar18 + (ulong)*puVar18);
  local_138 = (undefined4 *)0x0;
  local_130 = (undefined4 *)0x0;
  local_128 = (undefined4 *)0x0;
  if (uVar3 != 0) {
    piVar27 = piVar34 + 2;
    pfVar1 = (float *)(param_6 + (param_7 & 0xffffffff) * 0x10);
    uVar28 = 0;
LAB_00dac90c:
    do {
      fVar37 = 0.0;
      uVar20 = (ulong)*(ushort *)((long)piVar34 + (4 - (long)*piVar34));
      lVar16 = uVar20 + *(uint *)((long)piVar34 + uVar20);
      lVar16 = lVar16 + (ulong)*(uint *)((long)piVar27 + lVar16 + -4);
      piVar21 = (int *)((long)piVar27 + lVar16 + -4);
      lVar25 = lVar16 - *piVar21;
      uVar23 = *(ushort *)((long)piVar27 + lVar25 + -4);
      if (uVar23 < 5) {
        lVar33 = 0;
LAB_00daca18:
        lVar26 = 0;
LAB_00daca1c:
        uVar30 = 0;
        iVar29 = 0;
switchD_00dac9e4_default:
        uVar12 = 0;
        goto LAB_00daca28;
      }
      if ((ulong)*(ushort *)((long)piVar27 + lVar25) == 0) {
        lVar33 = 0;
      }
      else {
        lVar33 = lVar16 + (ulong)*(ushort *)((long)piVar27 + lVar25);
        lVar33 = (long)piVar27 + lVar33 + (ulong)*(uint *)((long)piVar27 + lVar33 + -4) + -4;
      }
      if (uVar23 < 7) goto LAB_00daca18;
      uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 2);
      if (uVar20 == 0) {
        lVar26 = 0;
      }
      else {
        lVar26 = lVar16 + uVar20;
        lVar26 = (long)piVar27 + lVar26 + (ulong)*(uint *)((long)piVar27 + lVar26 + -4) + -4;
      }
      if (uVar23 < 9) goto LAB_00daca1c;
      uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 4);
      if (uVar20 == 0) {
        iVar29 = 0;
        if (10 < uVar23) goto LAB_00dac9b4;
LAB_00dabb14:
        uVar30 = 0;
        goto switchD_00dac9e4_default;
      }
      iVar29 = *(int *)((long)piVar27 + lVar16 + uVar20 + -4);
      if (uVar23 < 0xb) goto LAB_00dabb14;
LAB_00dac9b4:
      uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 6);
      if (uVar20 == 0) goto LAB_00dabb14;
      uVar30 = *(undefined1 *)((long)piVar27 + lVar16 + uVar20 + -4);
      switch(uVar30) {
      case 1:
        if ((uVar23 < 0xd) || (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 8), uVar20 == 0)
           ) {
          piVar32 = (int *)0x0;
        }
        else {
          lVar16 = lVar16 + uVar20;
          piVar32 = (int *)((long)piVar27 +
                           lVar16 + (ulong)*(uint *)((long)piVar27 + lVar16 + -4) + -4);
        }
        if ((*(ushort *)((long)piVar32 - (long)*piVar32) < 5) ||
           (uVar20 = (ulong)((ushort *)((long)piVar32 - (long)*piVar32))[2], uVar20 == 0)) {
          puVar24 = (undefined8 *)0x0;
        }
        else {
          puVar24 = (undefined8 *)((long)piVar32 + uVar20);
        }
        local_148 = (int *)*puVar24;
        local_140 = *(float *)(puVar24 + 1);
        plVar13 = *(long **)(param_8 + 0x20);
        local_b0[0] = piVar21;
        if (plVar13 == (long *)0x0) goto LAB_00daccf4;
        uVar12 = (**(code **)(*plVar13 + 0x30))(plVar13,local_b0);
        fVar37 = local_140;
        puVar8 = PTR_PTR_02718e90;
        local_1b4 = (float)local_148;
        local_1b8 = local_148._4_4_;
        switch(uVar12) {
        case 1:
          fVar41 = param_5[1];
          fVar44 = *param_5 * param_1;
          fVar36 = local_140 * fVar5 + (float)local_148 * fVar7 + local_148._4_4_ * fVar4;
          fVar42 = (float)(**(code **)PTR_PTR_02718e90)(fVar44);
          local_1b4 = local_1b4 + (fVar36 - local_1b4) * fVar42;
          fVar42 = (float)(**(code **)PTR_PTR_02718e90)(fVar44);
          local_1b8 = local_1b8 + (fVar36 - local_1b8) * fVar42;
          fVar42 = (float)(**(code **)PTR_PTR_02718e90)(fVar44);
          fVar37 = fVar37 + (fVar36 - fVar37) * fVar42;
          fVar42 = (float)(**(code **)PTR_PTR_02718e90)(param_1);
          fVar44 = (float)(**(code **)PTR_PTR_02718e90)(param_1);
          fVar36 = (float)(**(code **)PTR_PTR_02718e90)(param_1);
          fVar43 = param_5[4];
          fVar39 = (float)(**(code **)PTR_PTR_02718e90)(param_1);
          fVar45 = param_5[5];
          fVar40 = (float)(**(code **)PTR_PTR_02718e90)(param_1);
          fVar46 = param_5[6];
          fVar35 = (float)(**(code **)PTR_PTR_02718e90)(param_1);
          local_1b4 = (local_1b4 + (fVar41 * local_1b4 - local_1b4) * fVar42) *
                      ((fVar43 + -1.0) * fVar39 + 1.0);
          local_1b8 = (local_1b8 + (fVar41 * local_1b8 - local_1b8) * fVar44) *
                      ((fVar45 + -1.0) * fVar40 + 1.0);
          local_140 = (fVar37 + (fVar41 * fVar37 - fVar37) * fVar36) *
                      ((fVar46 + -1.0) * fVar35 + 1.0);
          break;
        case 2:
          uVar38 = *(undefined8 *)(param_5 + 6);
          uVar15 = *(undefined8 *)(param_5 + 4);
          fVar44 = param_5[1];
          fVar36 = 1.0 / fVar44;
          fVar42 = fVar36;
          if (fVar6 < fVar36) {
            fVar42 = fVar6;
          }
          if (fVar44 <= fVar36) {
            fVar44 = fVar42;
          }
          fVar36 = *param_5 * param_1;
          fVar39 = local_140 * fVar5 + (float)local_148 * fVar7 + local_148._4_4_ * fVar4;
          fVar42 = (float)(**(code **)PTR_PTR_02718e90)(fVar36);
          local_1b4 = local_1b4 + fVar42 * (fVar39 - local_1b4);
          fVar42 = (float)(**(code **)puVar8)(fVar36);
          local_1b8 = local_1b8 + (fVar39 - local_1b8) * fVar42;
          fVar42 = (float)(**(code **)puVar8)(fVar36);
          fVar37 = fVar37 + (fVar39 - fVar37) * fVar42;
          fVar42 = (float)(**(code **)puVar8)(param_1);
          local_1b4 = local_1b4 + (fVar44 * local_1b4 - local_1b4) * fVar42;
          fVar42 = (float)(**(code **)puVar8)(param_1);
          local_1b8 = local_1b8 + (fVar44 * local_1b8 - local_1b8) * fVar42;
          fVar42 = (float)(**(code **)puVar8)(param_1);
          fVar37 = fVar37 + (fVar44 * fVar37 - fVar37) * fVar42;
          fVar44 = (float)(**(code **)puVar8)(param_1);
          fVar44 = ((float)uVar15 + -1.0) * fVar44;
          fVar36 = (float)(**(code **)puVar8)(param_1);
          fVar36 = ((float)((ulong)uVar15 >> 0x20) + -1.0) * fVar36;
          fVar42 = (float)(**(code **)puVar8)(param_1);
          fVar42 = ((float)uVar38 + -1.0) * fVar42;
          goto LAB_00dac268;
        case 3:
          uVar38 = *(undefined8 *)(param_5 + 6);
          uVar15 = *(undefined8 *)(param_5 + 4);
          fVar44 = *param_5 * param_1;
          fVar36 = local_140 * fVar5 + (float)local_148 * fVar7 + local_148._4_4_ * fVar4;
          fVar42 = (float)(**(code **)PTR_PTR_02718e90)(fVar44);
          local_1b4 = local_1b4 + fVar42 * (fVar36 - local_1b4);
          fVar42 = (float)(**(code **)puVar8)(fVar44);
          local_1b8 = local_1b8 + (fVar36 - local_1b8) * fVar42;
          fVar42 = (float)(**(code **)puVar8)(fVar44);
          fVar37 = fVar37 + (fVar36 - fVar37) * fVar42;
          fVar42 = (float)(**(code **)puVar8)(param_1);
          local_1b4 = local_1b4 + (local_1b4 - local_1b4) * fVar42;
          fVar42 = (float)(**(code **)puVar8)(param_1);
          local_1b8 = local_1b8 + (local_1b8 - local_1b8) * fVar42;
          fVar42 = (float)(**(code **)puVar8)(param_1);
          fVar37 = fVar37 + (fVar37 - fVar37) * fVar42;
          fVar44 = (float)(**(code **)puVar8)(param_1);
          fVar44 = ((float)uVar15 + -1.0) * fVar44;
          fVar36 = (float)(**(code **)puVar8)(param_1);
          fVar36 = ((float)((ulong)uVar15 >> 0x20) + -1.0) * fVar36;
          fVar42 = (float)(**(code **)puVar8)(param_1);
          fVar42 = ((float)uVar38 + -1.0) * fVar42;
LAB_00dac268:
          local_1b4 = local_1b4 * (fVar44 + 1.0);
          local_1b8 = local_1b8 * (fVar36 + 1.0);
          local_140 = fVar37 * (fVar42 + 1.0);
          break;
        case 4:
          fVar41 = param_5[1];
          fVar44 = *param_5 * param_1;
          fVar36 = local_140 * fVar5 + (float)local_148 * fVar7 + local_148._4_4_ * fVar4;
          fVar42 = (float)(**(code **)PTR_PTR_02718e90)(fVar44);
          local_1b4 = local_1b4 + fVar42 * (fVar36 - local_1b4);
          fVar42 = (float)(**(code **)puVar8)(fVar44);
          local_1b8 = local_1b8 + (fVar36 - local_1b8) * fVar42;
          fVar42 = (float)(**(code **)puVar8)(fVar44);
          fVar37 = fVar37 + (fVar36 - fVar37) * fVar42;
          fVar42 = (float)(**(code **)puVar8)(param_1);
          fVar44 = (float)(**(code **)puVar8)(param_1);
          fVar36 = (float)(**(code **)puVar8)(param_1);
          fVar39 = (float)(**(code **)puVar8)(param_1);
          fVar40 = (float)(**(code **)puVar8)(param_1);
          fVar35 = (float)(**(code **)puVar8)(param_1);
          local_1b4 = (local_1b4 + (fVar41 * local_1b4 - local_1b4) * fVar42) * (fVar39 * 0.0 + 1.0)
          ;
          local_1b8 = (local_1b8 + (fVar41 * local_1b8 - local_1b8) * fVar44) * (fVar40 * 0.0 + 1.0)
          ;
          local_140 = (fVar37 + (fVar41 * fVar37 - fVar37) * fVar36) * (fVar35 * 0.0 + 1.0);
          break;
        default:
          goto switchD_00dabe14_caseD_5;
        case 0xd:
          fVar44 = *pfVar1;
          fVar42 = (float)(**(code **)PTR_PTR_02718e90)(param_1);
          fVar36 = pfVar1[1];
          local_1b4 = local_1b4 + (fVar44 - local_1b4) * fVar42;
          fVar42 = (float)(**(code **)PTR_PTR_02718e90)(param_1);
          fVar44 = pfVar1[2];
          local_1b8 = local_1b8 + (fVar36 - local_1b8) * fVar42;
          fVar42 = (float)(**(code **)PTR_PTR_02718e90)(param_1);
          local_140 = fVar37 + (fVar44 - fVar37) * fVar42;
        }
        local_148 = (int *)CONCAT44(local_1b8,local_1b4);
switchD_00dabe14_caseD_5:
        puVar19 = (ushort *)((long)piVar32 - (long)*piVar32);
        uVar10 = 0;
        uVar12 = 0;
        if (6 < *puVar19) {
          uVar10 = 0;
          if ((ulong)puVar19[3] != 0) {
            uVar10 = *(undefined4 *)((long)piVar32 + (ulong)puVar19[3]);
          }
          if ((*puVar19 < 9) || ((ulong)puVar19[4] == 0)) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(undefined4 *)((long)piVar32 + (ulong)puVar19[4]);
          }
        }
        local_e0._0_7_ = CONCAT16(1,(undefined6)local_e0);
        iVar31 = ((int)local_100 - (int)local_f0) + (int)local_f8;
        FUN_00dae220(uVar12,0,&local_120,8);
        FUN_00dae220(uVar10,0,&local_120,6);
        FUN_00dae540(&local_120,4,&local_148);
        break;
      case 2:
        lVar16 = lVar16 + (ulong)*(ushort *)((long)piVar27 + lVar25 + 8);
        lVar16 = lVar16 + (ulong)*(uint *)((long)piVar27 + lVar16 + -4);
        lVar25 = lVar16 - *(int *)((long)piVar27 + lVar16 + -4);
        fVar42 = fVar37;
        if ((4 < *(ushort *)((long)piVar27 + lVar25 + -4)) &&
           (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25), uVar20 != 0)) {
          fVar42 = *(float *)((long)piVar27 + lVar16 + uVar20 + -4);
        }
        plVar13 = *(long **)(param_8 + 0x20);
        local_148 = piVar21;
        if (plVar13 == (long *)0x0) goto LAB_00daccf4;
        uVar12 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_148);
        fVar44 = fVar37;
        switch(uVar12) {
        case 5:
          lVar25 = lVar16 - *(int *)((long)piVar27 + lVar16 + -4);
          uVar23 = *(ushort *)((long)piVar27 + lVar25 + -4);
          if ((6 < uVar23) && (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 2), uVar20 != 0)
             ) {
            fVar44 = *(float *)((long)piVar27 + lVar16 + uVar20 + -4);
          }
          if (iVar29 == 0) {
            fVar44 = fVar37;
            if ((8 < uVar23) &&
               (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 4), uVar20 != 0)) {
              fVar44 = *(float *)((long)piVar27 + lVar16 + uVar20 + -4);
            }
            fVar44 = -fVar44;
          }
          fVar39 = param_5[1];
          fVar40 = fVar42 - fVar44;
          break;
        case 6:
          lVar25 = lVar16 - *(int *)((long)piVar27 + lVar16 + -4);
          uVar23 = *(ushort *)((long)piVar27 + lVar25 + -4);
          if ((6 < uVar23) && (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 2), uVar20 != 0)
             ) {
            fVar44 = *(float *)((long)piVar27 + lVar16 + uVar20 + -4);
          }
          if (iVar29 == 0) {
            fVar44 = fVar37;
            if ((8 < uVar23) &&
               (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 4), uVar20 != 0)) {
              fVar44 = *(float *)((long)piVar27 + lVar16 + uVar20 + -4);
            }
            fVar44 = -fVar44;
          }
          fVar40 = fVar42 - fVar44;
          fVar39 = param_5[1] + -0.5 + param_5[1] + -0.5;
          break;
        case 7:
          lVar25 = lVar16 - *(int *)((long)piVar27 + lVar16 + -4);
          uVar23 = *(ushort *)((long)piVar27 + lVar25 + -4);
          if ((6 < uVar23) && (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 2), uVar20 != 0)
             ) {
            fVar44 = *(float *)((long)piVar27 + lVar16 + uVar20 + -4);
          }
          if (iVar29 == 0) {
            fVar44 = fVar37;
            if ((8 < uVar23) &&
               (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 4), uVar20 != 0)) {
              fVar44 = *(float *)((long)piVar27 + lVar16 + uVar20 + -4);
            }
            fVar44 = -fVar44;
          }
          fVar36 = 0.5;
          fVar40 = fVar42 - fVar44;
          fVar39 = param_5[1] * 0.5;
          goto LAB_00dac7dc;
        case 8:
          lVar25 = lVar16 - *(int *)((long)piVar27 + lVar16 + -4);
          uVar23 = *(ushort *)((long)piVar27 + lVar25 + -4);
          if ((6 < uVar23) && (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 2), uVar20 != 0)
             ) {
            fVar44 = *(float *)((long)piVar27 + lVar16 + uVar20 + -4);
          }
          if (iVar29 == 0) {
            fVar44 = fVar37;
            if ((8 < uVar23) &&
               (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 4), uVar20 != 0)) {
              fVar44 = *(float *)((long)piVar27 + lVar16 + uVar20 + -4);
            }
            fVar44 = -fVar44;
          }
          fVar40 = fVar42 - fVar44;
          fVar39 = (param_5[1] + DAT_01d4c6f4) * 3.0;
          break;
        case 9:
          lVar25 = lVar16 - *(int *)((long)piVar27 + lVar16 + -4);
          uVar23 = *(ushort *)((long)piVar27 + lVar25 + -4);
          if ((6 < uVar23) && (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 2), uVar20 != 0)
             ) {
            fVar44 = *(float *)((long)piVar27 + lVar16 + uVar20 + -4);
          }
          if (iVar29 == 0) {
            fVar44 = fVar37;
            if ((8 < uVar23) &&
               (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 4), uVar20 != 0)) {
              fVar44 = *(float *)((long)piVar27 + lVar16 + uVar20 + -4);
            }
            fVar44 = -fVar44;
          }
          fVar39 = param_5[1] * DAT_01d4bd24;
          fVar40 = fVar42 - fVar44;
          fVar36 = DAT_01d4c430;
          goto LAB_00dac7dc;
        case 10:
          lVar25 = lVar16 - *(int *)((long)piVar27 + lVar16 + -4);
          uVar23 = *(ushort *)((long)piVar27 + lVar25 + -4);
          if ((6 < uVar23) && (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 2), uVar20 != 0)
             ) {
            fVar44 = *(float *)((long)piVar27 + lVar16 + uVar20 + -4);
          }
          if (iVar29 == 0) {
            fVar44 = fVar37;
            if ((8 < uVar23) &&
               (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 4), uVar20 != 0)) {
              fVar44 = *(float *)((long)piVar27 + lVar16 + uVar20 + -4);
            }
            fVar44 = -fVar44;
          }
          fVar40 = fVar42 - fVar44;
          fVar39 = (param_5[1] + -0.75) * 4.0;
          break;
        case 0xb:
          lVar25 = lVar16 - *(int *)((long)piVar27 + lVar16 + -4);
          uVar23 = *(ushort *)((long)piVar27 + lVar25 + -4);
          if ((6 < uVar23) && (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 2), uVar20 != 0)
             ) {
            fVar44 = *(float *)((long)piVar27 + lVar16 + uVar20 + -4);
          }
          if (iVar29 == 0) {
            fVar44 = fVar37;
            if ((8 < uVar23) &&
               (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 4), uVar20 != 0)) {
              fVar44 = *(float *)((long)piVar27 + lVar16 + uVar20 + -4);
            }
            fVar44 = -fVar44;
          }
          fVar40 = fVar42 - fVar44;
          fVar39 = param_5[1] * 0.25;
          fVar36 = 0.75;
LAB_00dac7dc:
          fVar39 = fVar39 + fVar36;
          break;
        case 0xc:
          fVar44 = fVar42 + *(float *)(param_2 + 0xa490);
          goto LAB_00dac82c;
        default:
          goto switchD_00dabc40_caseD_d;
        case 0xe:
          fVar44 = *(float *)(param_6 + (param_7 & 0xffffffff) * 4 + 0x50);
LAB_00dac82c:
          fVar36 = (float)(**(code **)PTR_PTR_02718e90)(param_1);
          fVar36 = (fVar44 - fVar42) * fVar36;
          goto LAB_00dac848;
        }
        fVar36 = fVar39;
        if (1.0 < fVar39) {
          fVar36 = 1.0;
        }
        fVar35 = 0.0;
        if (0.0 <= fVar39) {
          fVar35 = fVar36;
        }
        fVar36 = (float)(**(code **)PTR_PTR_02718e90)(param_1);
        fVar36 = fVar36 * ((fVar44 + fVar40 * fVar35) - fVar42);
LAB_00dac848:
        fVar42 = fVar42 + fVar36;
switchD_00dabc40_caseD_d:
        lVar25 = lVar16 - *(int *)((long)piVar27 + lVar16 + -4);
        uVar23 = *(ushort *)((long)piVar27 + lVar25 + -4);
        fVar44 = fVar37;
        if (6 < uVar23) {
          uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 2);
          if (uVar20 != 0) {
            fVar44 = *(float *)((long)piVar27 + lVar16 + uVar20 + -4);
          }
          if ((8 < uVar23) && (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25 + 4), uVar20 != 0)
             ) {
            fVar37 = *(float *)((long)piVar27 + lVar16 + uVar20 + -4);
          }
        }
        local_e0._0_7_ = CONCAT16(1,(undefined6)local_e0);
        iVar31 = ((int)local_100 - (int)local_f0) + (int)local_f8;
        FUN_00dae220(fVar37,0,&local_120,8);
        FUN_00dae220(fVar44,0,&local_120,6);
        FUN_00dae220(fVar42,0,&local_120,4);
        break;
      case 3:
        lVar16 = lVar16 + (ulong)*(ushort *)((long)piVar27 + lVar25 + 8);
        lVar16 = lVar16 + (ulong)*(uint *)((long)piVar27 + lVar16 + -4);
        lVar25 = lVar16 - *(int *)((long)piVar27 + lVar16 + -4);
        if ((*(ushort *)((long)piVar27 + lVar25 + -4) < 5) ||
           (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25), uVar20 == 0)) {
          iVar17 = 0;
        }
        else {
          iVar17 = *(int *)((long)piVar27 + lVar16 + uVar20 + -4);
        }
        local_e0._0_7_ = CONCAT16(1,(undefined6)local_e0);
        iVar31 = ((int)local_100 - (int)local_f0) + (int)local_f8;
        if ((iVar17 != 0) || ((char)local_d0 != '\0')) {
          uVar20 = FUN_00dae900(&local_120);
          if ((ulong)((long)local_f0 - (long)local_e8) < 8) {
            FUN_00dae400(&local_120,8);
          }
          *local_e8 = uVar20 & 0xffffffff | 0x400000000;
          local_e8 = local_e8 + 1;
          uVar23 = local_e0._4_2_;
          if (local_e0._4_2_ < 5) {
            uVar23 = 4;
          }
          local_e0._0_6_ = CONCAT24(uVar23,(int)local_e0 + 1);
        }
        break;
      case 4:
        lVar16 = lVar16 + (ulong)*(ushort *)((long)piVar27 + lVar25 + 8);
        lVar16 = lVar16 + (ulong)*(uint *)((long)piVar27 + lVar16 + -4);
        lVar25 = lVar16 - *(int *)((long)piVar27 + lVar16 + -4);
        if ((*(ushort *)((long)piVar27 + lVar25 + -4) < 5) ||
           (uVar20 = (ulong)*(ushort *)((long)piVar27 + lVar25), uVar20 == 0)) {
          lVar16 = 0;
        }
        else {
          lVar16 = lVar16 + uVar20;
          lVar16 = (long)piVar27 + lVar16 + (ulong)*(uint *)((long)piVar27 + lVar16 + -4) + -4;
        }
        sVar14 = strlen((char *)(lVar16 + 4));
        uVar12 = FUN_00daeda0(&local_120,(char *)(lVar16 + 4),sVar14);
        local_e0._0_7_ = CONCAT16(1,(undefined6)local_e0);
        iVar31 = ((int)local_100 - (int)local_f0) + (int)local_f8;
        FUN_00daea70(&local_120,4,uVar12);
        break;
      default:
        goto switchD_00dac9e4_default;
      }
      uVar12 = FUN_00dae710(&local_120,iVar31);
LAB_00daca28:
      sVar14 = strlen((char *)(lVar33 + 4));
      uVar10 = FUN_00daeda0(&local_120,(char *)(lVar33 + 4),sVar14);
      sVar14 = strlen((char *)(lVar26 + 4));
      uVar11 = FUN_00daeda0(&local_120,(char *)(lVar26 + 4),sVar14);
      uVar12 = FUN_00daef50(&local_120,uVar10,uVar11,iVar29,uVar30,uVar12);
      __src = local_138;
      if (local_130 != local_128) {
        *local_130 = uVar12;
        local_130 = local_130 + 1;
        uVar28 = uVar28 + 1;
        piVar27 = piVar27 + 1;
        if (uVar3 <= uVar28) break;
        goto LAB_00dac90c;
      }
      sVar14 = (long)local_130 - (long)local_138;
      uVar20 = ((long)sVar14 >> 2) + 1;
      if (uVar20 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)local_128 - (long)local_138 >> 2) < 0x1fffffffffffffff) {
        uVar22 = (long)local_128 - (long)local_138 >> 1;
        if (uVar20 <= uVar22) {
          uVar20 = uVar22;
        }
        if (uVar20 != 0) {
          if (uVar20 >> 0x3e != 0) {
LAB_00daccf4:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto LAB_00dacb14;
        }
        __dest = (undefined4 *)0x0;
      }
      else {
        uVar20 = 0x3fffffffffffffff;
LAB_00dacb14:
        __dest = operator_new(uVar20 << 2);
      }
      puVar2 = __dest + ((long)sVar14 >> 2);
      *puVar2 = uVar12;
      if (0 < (long)sVar14) {
        memcpy(__dest,__src,sVar14);
      }
      local_138 = __dest;
      local_130 = puVar2 + 1;
      local_128 = __dest + uVar20;
      if (__src != (undefined4 *)0x0) {
        operator_delete(__src);
      }
      uVar28 = uVar28 + 1;
      piVar27 = piVar27 + 1;
    } while (uVar28 < uVar3);
  }
  uVar15 = FUN_00dacd10(&local_120,&local_138);
  FUN_00daf6e0(&local_120,uVar15,0,0);
  if (0xbff < (uint)(((int)local_100 - (int)local_f0) + (int)local_f8)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  plVar13 = (long *)(param_2 + (ulong)param_3 * 8 + 0xad78);
  lVar16 = *plVar13;
  *plVar13 = 0;
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))();
  }
  local_148 = (int *)0xc00;
  local_b0[0] = local_f0;
  lVar16 = FUN_00db1540(auStack_b8,*(undefined8 *)(param_2 + 0xa330),
                        (undefined8 *)(param_2 + 0xa330),local_b0,&local_148);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  if (*plVar13 != 0) {
    (**(code **)(*(long *)(*plVar13 + 0x48) + 0x18))();
    *plVar13 = 0;
  }
  *plVar13 = lVar16;
  if (local_138 != (undefined4 *)0x0) {
    local_130 = local_138;
    operator_delete(local_138);
  }
  pvVar9 = local_c8;
  if (local_c8 != (void *)0x0) {
    FUN_00daf9b0(local_c8,*(undefined8 *)((long)local_c8 + 8));
    operator_delete(pvVar9);
  }
  if (local_f8 != (void *)0x0) {
    if (local_120 == (long *)0x0) {
      operator_delete__(local_f8);
    }
    else {
      (**(code **)(*local_120 + 0x18))(local_120,local_f8,local_100);
    }
  }
  local_f8 = (void *)0x0;
  if ((local_118 != '\0') && (local_f8 = (void *)0x0, local_120 != (long *)0x0)) {
    (**(code **)(*local_120 + 8))();
  }
  FUN_0075f0a0(auStack_c0);
  return;
}


