/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b68c0; name: FUN_003b68c0
 */


undefined8 FUN_003b68c0(long param_1,long param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
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
  float fVar37;
  float fVar38;
  float fVar39;
  int local_134;
  float local_130;
  float fStack_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float fStack_110;
  float local_10c;
  float fStack_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d4;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined8 in_stack_ffffffffffffff60;
  undefined8 in_stack_ffffffffffffff68;
  undefined8 in_stack_ffffffffffffff70;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff80;
  undefined8 in_stack_ffffffffffffff88;
  undefined8 in_stack_ffffffffffffff90;
  float in_stack_ffffffffffffff98;
  
  fVar17 = (float)in_stack_ffffffffffffff80;
  fVar18 = (float)((ulong)in_stack_ffffffffffffff80 >> 0x20);
  fVar19 = (float)in_stack_ffffffffffffff88;
  fVar20 = (float)((ulong)in_stack_ffffffffffffff88 >> 0x20);
  switch(*(undefined4 *)(*(long *)(param_2 + 0x40) + 0x48)) {
  case 0:
    lVar14 = *(long *)(param_1 + 0x50);
    uVar13 = *(int *)(param_1 + 0x90) + *(int *)(lVar14 + 0x5c);
    if (uVar13 < 0x20) {
      FUN_003fc170(param_2,(long)register0x00000008 + -0x70);
      FUN_003afa90((long)register0x00000008 + -0x90,lVar14);
      (**(code **)(**(long **)(lVar14 + 0x20) + 0x148))
                (*(long **)(lVar14 + 0x20),(long)register0x00000008 + -0x90,
                 (long)register0x00000008 + -0x80,uVar13,uVar13);
      uVar5 = *(uint *)(param_1 + 0x90);
      *(uint *)(param_1 + 0x90) = uVar5 + 1;
      uVar13 = *(uint *)(param_1 + 0xb8);
      plVar7 = (long *)(param_1 + 0xb0);
      if (uVar13 < (*(uint *)(param_1 + 0xbc) & 0x7fffffff)) {
        *(undefined8 *)(*(long *)(param_1 + 0xb0) + (ulong)uVar13 * 8) = 0;
        uVar15 = uVar13 + 1;
        *(uint *)(param_1 + 0xb8) = uVar15;
      }
      else {
        FUN_003b9c40(plVar7,(long)register0x00000008 + -0x48);
        uVar15 = *(uint *)(param_1 + 0xb8);
        uVar13 = uVar15 - 1;
      }
      if (uVar5 < uVar13) {
        uVar12 = (ulong)uVar13;
        uVar11 = uVar15;
        if (((uVar15 + 1) - uVar5 & 1) != 0) {
          *(undefined8 *)(*plVar7 + uVar12 * 8) = *(undefined8 *)(*plVar7 + (ulong)(uVar15 - 2) * 8)
          ;
          uVar12 = uVar12 - 1;
          uVar11 = uVar13;
        }
        if (uVar15 - 2 != uVar5) {
          uVar13 = (int)uVar12 - 1;
          do {
            lVar14 = uVar12 * 8;
            *(undefined8 *)(*plVar7 + lVar14) = *(undefined8 *)(*plVar7 + (ulong)(uVar11 - 2) * 8);
            iVar10 = (int)uVar12;
            uVar12 = uVar12 - 2;
            *(undefined8 *)(*plVar7 + lVar14 + -8) =
                 *(undefined8 *)(*plVar7 + (ulong)(iVar10 - 2) * 8);
            uVar11 = uVar13;
            uVar13 = uVar13 - 2;
          } while (uVar5 < (uint)uVar12);
        }
      }
      uVar6 = 1;
      *(long *)(*plVar7 + (ulong)uVar5 * 8) = param_2;
    }
    else {
      uVar6 = FUN_00400880();
      FUN_00400890(uVar6,2,
                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/cloth/ScClothSim.cpp"
                   ,0xc2,"Dropping collision sphere due to 32 sphere limit");
      uVar6 = 0;
    }
    return uVar6;
  case 1:
    lVar14 = *(long *)(param_1 + 0x50);
    uVar13 = *(int *)(param_1 + 0x98) + *(int *)(lVar14 + 100);
    if (uVar13 < 0x20) {
      iVar2 = *(int *)(param_1 + 0x90);
      iVar3 = *(int *)(param_1 + 0x94);
      FUN_003fc170(param_2,(long)register0x00000008 + -0x70);
      FUN_003afa90((long)register0x00000008 + -0x90,lVar14);
      (**(code **)(**(long **)(lVar14 + 0x20) + 0x168))
                (*(long **)(lVar14 + 0x20),(long)register0x00000008 + -0x90,
                 (long)register0x00000008 + -0x80,uVar13,uVar13);
      iVar10 = *(int *)(param_1 + 0x98) + *(int *)(lVar14 + 0x68);
      (**(code **)(**(long **)(lVar14 + 0x20) + 0x178))
                (*(long **)(lVar14 + 0x20),(long)register0x00000008 + -0x94,
                 (long)register0x00000008 + -0x90,iVar10,iVar10);
      iVar10 = *(int *)(param_1 + 0x98);
      *(int *)(param_1 + 0x98) = iVar10 + 1;
      uVar13 = iVar2 + iVar3 + iVar10;
      plVar7 = (long *)(param_1 + 0xb0);
      uVar5 = *(uint *)(param_1 + 0xb8);
      if (uVar5 < (*(uint *)(param_1 + 0xbc) & 0x7fffffff)) {
        *(undefined8 *)(*(long *)(param_1 + 0xb0) + (ulong)uVar5 * 8) = 0;
        uVar15 = uVar5 + 1;
        *(uint *)(param_1 + 0xb8) = uVar15;
      }
      else {
        FUN_003b9c40(plVar7,(long)register0x00000008 + -0x48);
        uVar15 = *(uint *)(param_1 + 0xb8);
        uVar5 = uVar15 - 1;
      }
      if (uVar13 < uVar5) {
        uVar12 = (ulong)uVar5;
        uVar11 = uVar15;
        if (((uVar15 + 1) - uVar13 & 1) != 0) {
          *(undefined8 *)(*plVar7 + uVar12 * 8) = *(undefined8 *)(*plVar7 + (ulong)(uVar15 - 2) * 8)
          ;
          uVar12 = uVar12 - 1;
          uVar11 = uVar5;
        }
        if (uVar15 - 2 != uVar13) {
          uVar5 = (int)uVar12 - 1;
          do {
            lVar14 = uVar12 * 8;
            *(undefined8 *)(*plVar7 + lVar14) = *(undefined8 *)(*plVar7 + (ulong)(uVar11 - 2) * 8);
            iVar10 = (int)uVar12;
            uVar12 = uVar12 - 2;
            *(undefined8 *)(*plVar7 + lVar14 + -8) =
                 *(undefined8 *)(*plVar7 + (ulong)(iVar10 - 2) * 8);
            uVar11 = uVar5;
            uVar5 = uVar5 - 2;
          } while (uVar13 < (uint)uVar12);
        }
      }
      uVar6 = 1;
      *(long *)(*plVar7 + (ulong)uVar13 * 8) = param_2;
    }
    else {
      uVar6 = FUN_00400880();
      FUN_00400890(uVar6,2,
                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/cloth/ScClothSim.cpp"
                   ,0x13a,"Dropping collision plane due to 32 plane limit");
      uVar6 = 0;
    }
    return uVar6;
  case 2:
    lVar14 = *(long *)(param_1 + 0x50);
    uVar13 = *(int *)(param_1 + 0x94) + *(int *)(lVar14 + 0x60);
    if (uVar13 < 0x20) {
      iVar10 = *(int *)(param_1 + 0x90);
      uVar5 = iVar10 + *(int *)(param_1 + 0x94) * 2 + *(int *)(lVar14 + 0x5c);
      if (uVar5 < 0x20) {
        FUN_003fc170(param_2,(long)register0x00000008 + -0x80);
        FUN_003afa90((long)register0x00000008 + -0xa0,lVar14);
        (**(code **)(**(long **)(lVar14 + 0x20) + 0x148))
                  (*(long **)(lVar14 + 0x20),(long)register0x00000008 + -0xa0,
                   (long)register0x00000008 + -0x80,uVar5,uVar5);
        local_a8 = CONCAT44(uVar5 + 1,uVar5);
        (**(code **)(**(long **)(lVar14 + 0x20) + 0x158))
                  (*(long **)(lVar14 + 0x20),&local_a8,(long)register0x00000008 + -0xa0,uVar13,
                   uVar13);
        iVar2 = *(int *)(param_1 + 0x94);
        *(int *)(param_1 + 0x94) = iVar2 + 1;
        uVar13 = iVar2 + iVar10;
        plVar7 = (long *)(param_1 + 0xb0);
        uVar5 = *(uint *)(param_1 + 0xb8);
        if (uVar5 < (*(uint *)(param_1 + 0xbc) & 0x7fffffff)) {
          *(undefined8 *)(*(long *)(param_1 + 0xb0) + (ulong)uVar5 * 8) = 0;
          uVar15 = uVar5 + 1;
          *(uint *)(param_1 + 0xb8) = uVar15;
        }
        else {
          FUN_003b9c40(plVar7,(long)register0x00000008 + -0x58);
          uVar15 = *(uint *)(param_1 + 0xb8);
          uVar5 = uVar15 - 1;
        }
        if (uVar13 < uVar5) {
          uVar12 = (ulong)uVar5;
          uVar11 = uVar15;
          if (((uVar15 + 1) - uVar13 & 1) != 0) {
            *(undefined8 *)(*plVar7 + uVar12 * 8) =
                 *(undefined8 *)(*plVar7 + (ulong)(uVar15 - 2) * 8);
            uVar12 = uVar12 - 1;
            uVar11 = uVar5;
          }
          if (uVar15 - 2 != uVar13) {
            uVar5 = (int)uVar12 - 1;
            do {
              lVar14 = uVar12 * 8;
              *(undefined8 *)(*plVar7 + lVar14) = *(undefined8 *)(*plVar7 + (ulong)(uVar11 - 2) * 8)
              ;
              iVar10 = (int)uVar12;
              uVar12 = uVar12 - 2;
              *(undefined8 *)(*plVar7 + lVar14 + -8) =
                   *(undefined8 *)(*plVar7 + (ulong)(iVar10 - 2) * 8);
              uVar11 = uVar5;
              uVar5 = uVar5 - 2;
            } while (uVar13 < (uint)uVar12);
          }
        }
        *(long *)(*plVar7 + (ulong)uVar13 * 8) = param_2;
        return 1;
      }
      uVar6 = FUN_00400880();
      pcVar9 = "Dropping collision capsule due to 32 sphere limit";
      uVar8 = 0xff;
    }
    else {
      uVar6 = FUN_00400880();
      pcVar9 = "Dropping collision capsule due to 32 capsule limit";
      uVar8 = 0xf8;
    }
    FUN_00400890(uVar6,2,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/cloth/ScClothSim.cpp"
                 ,uVar8,pcVar9);
    return 0;
  case 3:
    lVar14 = *(long *)(param_1 + 0x50);
    iVar10 = *(int *)(param_1 + 0x98);
    uVar13 = *(int *)(lVar14 + 100) + iVar10 + *(int *)(param_1 + 0x9c) * 6;
    if (uVar13 + 6 < 0x21) {
      iVar3 = *(int *)(param_1 + 0x90);
      iVar4 = *(int *)(param_1 + 0x94);
      lVar16 = *(long *)(param_2 + 0x40);
      FUN_003fc170(param_2,&local_d0);
      FUN_003afa90(&local_130,lVar14);
      fVar19 = (local_c0 - local_120) + (local_c0 - local_120);
      fVar22 = (local_bc - local_11c) + (local_bc - local_11c);
      fVar35 = (local_b8 - local_118) + (local_b8 - local_118);
      fVar24 = local_124 * local_124 + -0.5;
      fVar25 = ((local_124 * (float)local_d0 - local_c4 * local_130) - local_c8 * fStack_12c) +
               local_d0._4_4_ * local_128;
      fVar20 = ((local_124 * local_d0._4_4_ - local_c4 * fStack_12c) - (float)local_d0 * local_128)
               + local_c8 * local_130;
      fVar18 = ((local_124 * local_c8 - local_c4 * local_128) - local_d0._4_4_ * local_130) +
               (float)local_d0 * fStack_12c;
      fVar23 = local_124 * local_c4 + (float)local_d0 * local_130 + local_d0._4_4_ * fStack_12c +
               local_c8 * local_128;
      fVar37 = (fVar19 * -local_130 - fVar22 * fStack_12c) - fVar35 * local_128;
      fVar30 = fVar25 + fVar25;
      fVar21 = fVar18 * 0.0;
      fVar26 = fVar20 * 0.0;
      fVar32 = fVar18 + fVar18;
      fVar28 = fVar25 * 0.0;
      fVar33 = fVar20 + fVar20;
      fVar38 = fVar23 * fVar23 + -0.5;
      fVar36 = fVar25 * -2.0;
      fVar27 = fVar20 * -2.0;
      fVar17 = (fVar24 * fVar19 + local_124 * (fVar22 * local_128 - fVar35 * fStack_12c)) -
               fVar37 * local_130;
      fVar31 = (fVar24 * fVar22 + local_124 * (fVar35 * local_130 - fVar19 * local_128)) -
               fVar37 * fStack_12c;
      fVar29 = (fVar24 * fVar35 + local_124 * (fVar19 * fStack_12c - fVar22 * local_130)) -
               fVar37 * local_128;
      fVar22 = fVar38 + fVar38;
      fVar34 = fVar38 * 0.0;
      fVar38 = fVar38 * -2.0;
      fVar19 = fVar21 + fVar28 + fVar33;
      fVar39 = fVar21 + fVar30 + fVar26;
      fVar35 = fVar23 * (fVar26 - fVar21);
      fVar37 = fVar18 * -2.0;
      fVar24 = fVar21 + fVar36 + fVar26;
      local_130 = fVar25 * fVar39 + fVar22 + fVar35;
      local_128 = fVar34 + fVar23 * (fVar28 - fVar33) + fVar18 * fVar39;
      fStack_12c = fVar34 + fVar23 * (fVar32 - fVar28) + fVar20 * fVar39;
      local_120 = fVar25 * fVar24 + fVar38 + fVar35;
      fVar35 = fVar23 * (fVar21 - fVar28);
      local_11c = fVar34 + fVar23 * (fVar37 - fVar28) + fVar20 * fVar24;
      local_118 = fVar34 + fVar23 * (fVar28 - fVar27) + fVar18 * fVar24;
      fStack_110 = fVar25 * fVar19 + fVar34 + fVar23 * (fVar26 - fVar32);
      local_10c = fVar22 + fVar35 + fVar20 * fVar19;
      local_124 = -*(float *)(lVar16 + 0x4c) -
                  (fVar29 * local_128 + fVar17 * local_130 + fVar31 * fStack_12c);
      local_114 = -*(float *)(lVar16 + 0x4c) -
                  (fVar29 * local_118 + fVar17 * local_120 + fVar31 * local_11c);
      fStack_108 = fVar34 + fVar23 * (fVar30 - fVar26) + fVar18 * fVar19;
      local_104 = -*(float *)(lVar16 + 0x50) -
                  (fVar29 * fStack_108 + fVar17 * fStack_110 + fVar31 * local_10c);
      fVar19 = fVar21 + fVar28 + fVar27;
      local_100 = fVar25 * fVar19 + fVar34 + fVar23 * (fVar26 - fVar37);
      fStack_fc = fVar38 + fVar35 + fVar20 * fVar19;
      local_f8 = fVar34 + fVar23 * (fVar36 - fVar26) + fVar18 * fVar19;
      fVar32 = fVar32 + fVar28 + fVar26;
      fVar24 = fVar25 * fVar32 + fVar34 + fVar23 * (fVar33 - fVar21);
      fStack_f4 = -*(float *)(lVar16 + 0x50) -
                  (fVar29 * local_f8 + fVar17 * local_100 + fVar31 * fStack_fc);
      fVar19 = fVar23 * (fVar28 - fVar26);
      fVar37 = fVar37 + fVar28 + fVar26;
      fVar35 = fVar34 + fVar23 * (fVar21 - fVar30) + fVar20 * fVar32;
      fVar22 = fVar22 + fVar19 + fVar18 * fVar32;
      _local_e8 = CONCAT44(-*(float *)(lVar16 + 0x54) -
                           (fVar29 * fVar22 + fVar17 * fVar24 + fVar31 * fVar35),fVar22);
      local_e0 = fVar25 * fVar37 + fVar34 + fVar23 * (fVar27 - fVar21);
      fStack_dc = fVar34 + fVar23 * (fVar21 - fVar36) + fVar20 * fVar37;
      local_d8 = fVar38 + fVar19 + fVar18 * fVar37;
      local_d4 = -*(float *)(lVar16 + 0x54) -
                 (fVar29 * local_d8 + fVar17 * local_e0 + fVar31 * fStack_dc);
      local_f0 = CONCAT44(fVar35,fVar24);
      (**(code **)(**(long **)(lVar14 + 0x20) + 0x168))
                (*(long **)(lVar14 + 0x20),&local_130,&local_d0,uVar13,uVar13);
      iVar2 = *(int *)(param_1 + 0x98) + *(int *)(lVar14 + 0x68) + *(int *)(param_1 + 0x9c);
      local_134 = 0x3f << (ulong)(uVar13 & 0x1f);
      (**(code **)(**(long **)(lVar14 + 0x20) + 0x178))
                (*(long **)(lVar14 + 0x20),&local_134,&local_130,iVar2,iVar2);
      iVar2 = *(int *)(param_1 + 0x9c);
      *(int *)(param_1 + 0x9c) = iVar2 + 1;
      local_a8 = 0;
      uVar13 = iVar4 + iVar10 + iVar3 + iVar2;
      uVar5 = *(uint *)(param_1 + 0xb8);
      plVar7 = (long *)(param_1 + 0xb0);
      if (uVar5 < (*(uint *)(param_1 + 0xbc) & 0x7fffffff)) {
        *(undefined8 *)(*(long *)(param_1 + 0xb0) + (ulong)uVar5 * 8) = 0;
        uVar15 = uVar5 + 1;
        *(uint *)(param_1 + 0xb8) = uVar15;
      }
      else {
        FUN_003b9c40(plVar7,&local_a8);
        uVar15 = *(uint *)(param_1 + 0xb8);
        uVar5 = uVar15 - 1;
      }
      if (uVar13 < uVar5) {
        uVar12 = (ulong)uVar5;
        uVar11 = uVar15;
        if (((uVar15 + 1) - uVar13 & 1) != 0) {
          *(undefined8 *)(*plVar7 + uVar12 * 8) = *(undefined8 *)(*plVar7 + (ulong)(uVar15 - 2) * 8)
          ;
          uVar12 = uVar12 - 1;
          uVar11 = uVar5;
        }
        if (uVar15 - 2 != uVar13) {
          uVar5 = (int)uVar12 - 1;
          do {
            lVar14 = uVar12 * 8;
            *(undefined8 *)(*plVar7 + lVar14) = *(undefined8 *)(*plVar7 + (ulong)(uVar11 - 2) * 8);
            iVar10 = (int)uVar12;
            uVar12 = uVar12 - 2;
            *(undefined8 *)(*plVar7 + lVar14 + -8) =
                 *(undefined8 *)(*plVar7 + (ulong)(iVar10 - 2) * 8);
            uVar11 = uVar5;
            uVar5 = uVar5 - 2;
          } while (uVar13 < (uint)uVar12);
        }
      }
      uVar6 = 1;
      *(long *)(*plVar7 + (ulong)uVar13 * 8) = param_2;
    }
    else {
      uVar6 = FUN_00400880();
      FUN_00400890(uVar6,2,
                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/cloth/ScClothSim.cpp"
                   ,0x172,"Dropping collision box due to 32 plane limit");
      uVar6 = 0;
    }
    return uVar6;
  case 4:
    break;
  case 5:
    FUN_003b7e50();
    return 1;
  case 6:
    FUN_003b8190();
    return 1;
  default:
    return 0;
  }
  lVar16 = *(long *)(param_2 + 0x40);
  iVar10 = *(int *)(param_1 + 0x90);
  iVar3 = *(int *)(param_1 + 0x94);
  lVar14 = *(long *)(param_1 + 0x50);
  iVar2 = *(int *)(param_1 + 0x98);
  iVar4 = *(int *)(param_1 + 0x9c);
  uVar5 = (**(code **)(**(long **)(lVar16 + 0x68) + 0x48))();
  uVar13 = *(int *)(param_1 + 0x98) + *(int *)(lVar14 + 100) + *(int *)(param_1 + 0x9c) * 6 +
           *(int *)(param_1 + 0xac);
  if (uVar13 + uVar5 < 0x21) {
    local_104 = (float)iVar10;
    FUN_003fc170(param_2,(long)register0x00000008 + -0x80);
    FUN_003afa90(&local_f0,lVar14);
    fStack_dc = (float)((ulong)in_stack_ffffffffffffff90 >> 0x20) - fStack_dc;
    local_e0 = (float)in_stack_ffffffffffffff90 - local_e0;
    fStack_dc = fStack_dc + fStack_dc;
    fVar35 = local_e4 * local_e4 + -0.5;
    local_e0 = local_e0 + local_e0;
    fVar23 = (in_stack_ffffffffffffff98 - local_d8) + (in_stack_ffffffffffffff98 - local_d8);
    fVar22 = (local_e0 * -(float)local_f0 - fStack_dc * local_f0._4_4_) - fVar23 * local_e8;
    local_c8 = ((local_e4 * fVar19 - fVar20 * local_e8) - fVar18 * (float)local_f0) +
               fVar17 * local_f0._4_4_;
    local_c4 = local_e4 * fVar20 + fVar17 * (float)local_f0 + fVar18 * local_f0._4_4_ +
               fVar19 * local_e8;
    local_c0 = (fVar35 * local_e0 + local_e4 * (fStack_dc * local_e8 - fVar23 * local_f0._4_4_)) -
               fVar22 * (float)local_f0;
    local_bc = (fVar35 * fStack_dc + local_e4 * (fVar23 * (float)local_f0 - local_e0 * local_e8)) -
               fVar22 * local_f0._4_4_;
    local_b8 = (fVar35 * fVar23 +
               local_e4 * (local_e0 * local_f0._4_4_ - fStack_dc * (float)local_f0)) -
               fVar22 * local_e8;
    local_d0 = CONCAT44(((local_e4 * fVar18 - fVar20 * local_f0._4_4_) - fVar17 * local_e8) +
                        fVar19 * (float)local_f0,
                        ((local_e4 * fVar17 - fVar20 * (float)local_f0) - fVar19 * local_f0._4_4_) +
                        fVar18 * local_e8);
    FUN_001ae520(&local_b0,&local_d0,lVar16 + 0x4c);
    local_f0 = 0;
    local_e8 = 0.0;
    local_e4 = 0.0;
    if (uVar5 != 0) {
                    /* try { // try from 003b7b30 to 003b7b3b has its CatchHandler @ 003b7dec */
      FUN_003b93c0(&local_f0,uVar5);
      uVar15 = 0;
      do {
        while( true ) {
                    /* try { // try from 003b7b4c to 003b7b57 has its CatchHandler @ 003b7e34 */
          (**(code **)(**(long **)(lVar16 + 0x68) + 0x50))
                    (*(long **)(lVar16 + 0x68),uVar15,&local_d0);
          local_100 = (float)local_d0 * local_b0 + local_d0._4_4_ * local_a8._4_4_ +
                      local_c8 * (float)in_stack_ffffffffffffff68;
          fStack_fc = (float)local_d0 * fStack_ac +
                      local_d0._4_4_ * (float)in_stack_ffffffffffffff60 +
                      local_c8 * (float)((ulong)in_stack_ffffffffffffff68 >> 0x20);
          local_f8 = (float)local_d0 * (float)local_a8 +
                     local_d0._4_4_ * (float)((ulong)in_stack_ffffffffffffff60 >> 0x20) +
                     local_c8 * (float)in_stack_ffffffffffffff70;
          fStack_f4 = local_c4 -
                      (local_100 * (float)((ulong)in_stack_ffffffffffffff70 >> 0x20) +
                       fStack_fc * (float)in_stack_ffffffffffffff78 +
                      local_f8 * (float)((ulong)in_stack_ffffffffffffff78 >> 0x20));
          if (((uint)local_e4 & 0x7fffffff) <= (uint)local_e8) break;
          pfVar1 = (float *)(local_f0 + (ulong)(uint)local_e8 * 0x10);
          local_e8 = (float)((int)local_e8 + 1);
          *pfVar1 = local_100;
          pfVar1[1] = fStack_fc;
          pfVar1[2] = local_f8;
          pfVar1[3] = fStack_f4;
          uVar15 = uVar15 + 1;
          if (uVar5 <= uVar15) goto LAB_003b7c30;
        }
                    /* try { // try from 003b7c18 to 003b7c23 has its CatchHandler @ 003b7dfc */
        FUN_003b94d0(&local_f0,&local_100);
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar5);
    }
LAB_003b7c30:
                    /* try { // try from 003b7c44 to 003b7c4f has its CatchHandler @ 003b7dec */
    (**(code **)(**(long **)(lVar14 + 0x20) + 0x168))
              (*(long **)(lVar14 + 0x20),local_f0,local_f0 + (ulong)uVar5 * 0x10,uVar13,uVar13);
    iVar10 = *(int *)(param_1 + 0x98) + *(int *)(lVar14 + 0x68) + *(int *)(param_1 + 0x9c) +
             *(int *)(param_1 + 0xa0);
    local_100 = (float)((1 << (ulong)(uVar5 & 0x1f)) + -1 << (ulong)(uVar13 & 0x1f));
                    /* try { // try from 003b7c90 to 003b7cef has its CatchHandler @ 003b7ddc */
    (**(code **)(**(long **)(lVar14 + 0x20) + 0x178))
              (*(long **)(lVar14 + 0x20),&local_100,&fStack_fc,iVar10,iVar10);
    fVar17 = local_104;
    iVar10 = *(int *)(param_1 + 0xa0);
    plVar7 = (long *)(param_1 + 0xb0);
    *(uint *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + uVar5;
    *(int *)(param_1 + 0xa0) = iVar10 + 1;
    local_d0 = 0;
    uVar13 = *(uint *)(param_1 + 0xb8);
    if (uVar13 < (*(uint *)(param_1 + 0xbc) & 0x7fffffff)) {
      uVar5 = uVar13 + 1;
      *(undefined8 *)(*(long *)(param_1 + 0xb0) + (ulong)uVar13 * 8) = 0;
      *(uint *)(param_1 + 0xb8) = uVar5;
    }
    else {
      FUN_003b9c40(plVar7,&local_d0);
      uVar5 = *(uint *)(param_1 + 0xb8);
    }
    lVar14 = local_f0;
    uVar13 = iVar3 + (int)fVar17 + iVar2 + iVar4 + iVar10;
    uVar15 = uVar5 - 1;
    if (uVar13 < uVar15) {
      uVar12 = (ulong)uVar15;
      uVar11 = uVar5;
      if (((uVar5 + 1) - uVar13 & 1) != 0) {
        *(undefined8 *)(*plVar7 + uVar12 * 8) = *(undefined8 *)(*plVar7 + (ulong)(uVar5 - 2) * 8);
        uVar12 = uVar12 - 1;
        uVar11 = uVar15;
      }
      if (uVar5 - 2 != uVar13) {
        uVar5 = (int)uVar12 - 1;
        do {
          lVar16 = uVar12 * 8;
          *(undefined8 *)(*plVar7 + lVar16) = *(undefined8 *)(*plVar7 + (ulong)(uVar11 - 2) * 8);
          iVar10 = (int)uVar12;
          uVar12 = uVar12 - 2;
          *(undefined8 *)(*plVar7 + lVar16 + -8) =
               *(undefined8 *)(*plVar7 + (ulong)(iVar10 - 2) * 8);
          uVar11 = uVar5;
          uVar5 = uVar5 - 2;
        } while (uVar13 < (uint)uVar12);
      }
    }
    *(long *)(*plVar7 + (ulong)uVar13 * 8) = param_2;
    if (((-1 < (int)local_e4) && (((uint)local_e4 & 0x7fffffff) != 0)) && (local_f0 != 0)) {
                    /* try { // try from 003b7da0 to 003b7db3 has its CatchHandler @ 003b7dd8 */
      plVar7 = (long *)FUN_00400d30();
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar14);
    }
    uVar6 = 1;
  }
  else {
    uVar6 = FUN_00400880();
    FUN_00400890(uVar6,2,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/cloth/ScClothSim.cpp"
                 ,0x1b4,"Dropping collision convex due to 32 plane limit");
    uVar6 = 0;
  }
  return uVar6;
}


