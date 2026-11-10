/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a94770; name: FUN_00a94770
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a94770(long param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_3e0;
  char *local_3d8;
  undefined8 local_3d0;
  long local_3c8;
  undefined2 local_34c;
  undefined8 local_348;
  undefined1 local_2ea;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_118;
  char *local_110;
  undefined8 local_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  long local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [24];
  
  FUN_00a93780(param_1,1);
  uVar15 = *(undefined8 *)(param_1 + 0x150);
  FUN_00a92b10(param_1,0);
  FUN_006989e0(*(long *)(param_1 + 0x20) + 0x80,uVar15);
  FUN_0070c490(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x130));
  uVar14 = _UNK_01d4a138;
  uVar15 = _DAT_01d4a130;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0x81) = 1;
  *(undefined8 *)(param_1 + 0xb8) = uVar14;
  *(undefined8 *)(param_1 + 0xb0) = uVar15;
  FUN_00a71ee0(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined2 *)(param_1 + 0x10c);
  local_3e0 = 0xb3236763c32e0e7d;
  local_3d8 = "g_table";
  local_3d0 = 7;
  FUN_012b4250(&local_e0,param_1 + 0x120,&local_3e0);
  FUN_012b4190(auStack_88,&local_e0,uVar1);
  local_3e0 = 0xe3829f1a5b0e3fc2;
  local_3d8 = "startTarget";
  local_3d0 = 0xb;
  FUN_012b4250(&local_e0,auStack_88,&local_3e0);
  uVar6 = FUN_012b4420(&local_e0,0);
  local_3e0 = 0x99128714cee0053f;
  local_3d8 = "startNode";
  local_3d0 = 9;
  FUN_012b4250(&local_e0,auStack_88,&local_3e0);
  uVar7 = FUN_012b4420(&local_e0,0);
  switch(uVar6) {
  case 1:
    uVar15 = 0x7f;
    break;
  case 2:
    uVar15 = 0x7f;
    goto LAB_00a94924;
  case 3:
    uVar15 = 0x2a;
    break;
  case 4:
    uVar15 = 0x2a;
    goto LAB_00a94924;
  case 5:
    uVar15 = 0x55;
    break;
  case 6:
    uVar15 = 0x55;
LAB_00a94924:
    FUN_00a96840(param_1,uVar15,uVar7);
switchD_00a948ec_caseD_7:
    uVar21 = *(uint *)(param_1 + 0x110);
    lVar10 = *(long *)(param_1 + 8);
    goto joined_r0x00a94938;
  default:
    goto switchD_00a948ec_caseD_7;
  case 8:
    uVar15 = 0x7f;
    goto LAB_00a94984;
  case 9:
    uVar15 = 0x2a;
    goto LAB_00a94984;
  case 10:
    uVar15 = 0x55;
LAB_00a94984:
    uVar14 = 1;
    goto LAB_00a9498c;
  }
  uVar14 = 0;
LAB_00a9498c:
  FUN_00a96710(param_1,uVar15,uVar7,uVar14);
  uVar21 = *(uint *)(param_1 + 0x110);
  lVar10 = *(long *)(param_1 + 8);
joined_r0x00a94938:
  if (uVar21 == 0xff) {
    bVar4 = FUN_00a6f710(lVar10,0,1);
    bVar5 = FUN_00a6f710(*(undefined8 *)(param_1 + 8),1,1);
    if (bVar5 <= bVar4) {
      bVar5 = bVar4;
    }
  }
  else {
    plVar11 = *(long **)(lVar10 + (ulong)uVar21 * 8 + 0x548);
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x10))();
    }
    bVar5 = (**(code **)(*plVar11 + 0x218))(plVar11);
    if (plVar11 != (long *)0x0) {
      (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
    }
  }
  local_3e0 = 0xe161c631dc96d271;
  local_3d8 = "sizeArray";
  local_3d0 = 9;
  FUN_012b4250(&local_118,auStack_88,&local_3e0);
  FUN_012b4190(&local_e0,&local_118,bVar5);
  uVar21 = FUN_012b4630(0x3f800000,&local_e0);
  *(ulong *)(param_1 + 0xb8) = (ulong)uVar21;
  *(ulong *)(param_1 + 0xb0) = CONCAT44(uVar21,uVar21);
  local_3e0 = 0x14783701af79923d;
  local_3d8 = "isCameraFlip";
  local_3d0 = 0xc;
  FUN_012b4250(&local_e0,auStack_88,&local_3e0);
  iVar8 = FUN_012b4420(&local_e0,0);
  if (iVar8 != 0) {
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  local_3e0 = 0x6ab80e53fe9ac7d8;
  local_3d8 = "checkGround";
  local_3d0 = 0xb;
  FUN_012b4250(&local_e0,auStack_88,&local_3e0);
  iVar8 = FUN_012b4420(&local_e0,0);
  *(bool *)(param_1 + 0xc1) = iVar8 != 0;
  local_3e0 = 0x88f19b4391dcefeb;
  local_3d8 = "isPosOver";
  local_3d0 = 9;
  FUN_012b4250(&local_e0,auStack_88,&local_3e0);
  iVar8 = FUN_012b4420(&local_e0,0);
  *(bool *)(param_1 + 0xc2) = iVar8 != 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x3f8);
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x400);
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  bVar3 = *(int *)(param_1 + 0x28) != 0;
  local_3d0 = 0x10;
  local_3e0 = 0xf127232403af2956;
  local_3d8 = "useRenderVisible";
  FUN_012b4250(&local_e0,auStack_88,&local_3e0);
  iVar8 = FUN_012b4420(&local_e0,0);
  if (iVar8 != 0) {
    *(undefined1 *)(param_1 + 0x71a) = 1;
    plVar11 = (long *)FUN_01052410(lVar10);
    local_3e0 = 0x40a03b6540a9cd2;
    local_3d8 = "renderVisibleArray";
    local_3d0 = 0x12;
    FUN_012b4250(&local_118,auStack_88,&local_3e0);
    FUN_012b4190(&local_e0,&local_118,0);
    iVar8 = FUN_012b4420(&local_e0,0);
    (**(code **)(*plVar11 + 0x70))(plVar11,iVar8 != 0,0);
    local_3e0 = 0x40a03b6540a9cd2;
    local_3d8 = "renderVisibleArray";
    local_3d0 = 0x12;
    FUN_012b4250(&local_118,auStack_88,&local_3e0);
    FUN_012b4190(&local_e0,&local_118,1);
    iVar8 = FUN_012b4420(&local_e0,0);
    FUN_01052d20(lVar10,iVar8 != 0);
    local_3e0 = 0x40a03b6540a9cd2;
    local_3d8 = "renderVisibleArray";
    local_3d0 = 0x12;
    FUN_012b4250(&local_118,auStack_88,&local_3e0);
    FUN_012b4190(&local_e0,&local_118,2);
    iVar8 = FUN_012b4420(&local_e0,0);
    FUN_01053890(lVar10,iVar8 != 0);
    uVar15 = *(undefined8 *)(param_1 + 8);
    local_3e0 = 0x40a03b6540a9cd2;
    local_3d8 = "renderVisibleArray";
    local_3d0 = 0x12;
    FUN_012b4250(&local_118,auStack_88,&local_3e0);
    FUN_012b4190(&local_e0,&local_118,3);
    iVar8 = FUN_012b4420(&local_e0,0);
    FUN_00a855e0(uVar15,iVar8 != 0,bVar3);
    uVar15 = *(undefined8 *)(param_1 + 8);
    local_3e0 = 0x40a03b6540a9cd2;
    local_3d8 = "renderVisibleArray";
    local_3d0 = 0x12;
    FUN_012b4250(&local_118,auStack_88,&local_3e0);
    FUN_012b4190(&local_e0,&local_118,4);
    iVar8 = FUN_012b4420(&local_e0,0);
    FUN_00a82a90(uVar15,iVar8 != 0,bVar3);
    uVar15 = *(undefined8 *)(param_1 + 8);
    local_3e0 = 0x40a03b6540a9cd2;
    local_3d8 = "renderVisibleArray";
    local_3d0 = 0x12;
    FUN_012b4250(&local_118,auStack_88,&local_3e0);
    FUN_012b4190(&local_e0,&local_118,5);
    iVar8 = FUN_012b4420(&local_e0,0);
    FUN_00a82ce0(uVar15,iVar8 != 0,bVar3);
    local_3e0 = 0x4c166b53c0989b88;
    local_3d8 = "targetHide";
    local_3d0 = 10;
    FUN_012b4250(&local_e0,auStack_88,&local_3e0);
    iVar8 = FUN_012b4420(&local_e0,0);
    if (iVar8 == 3) {
      uVar21 = (**(code **)(**(long **)(param_1 + 8) + 0x748))
                         (*(long **)(param_1 + 8),*(undefined4 *)(param_1 + 0x110));
      uVar20 = 0;
      do {
        uVar9 = (**(code **)(**(long **)(param_1 + 8) + 0x748))
                          (*(long **)(param_1 + 8),uVar20 & 0xffffffff);
        if ((((uVar21 ^ uVar9) & 1) != 0) &&
           (plVar11 = *(long **)(*(long *)(param_1 + 8) + uVar20 * 8 + 0x548),
           plVar11 != (long *)0x0)) {
          plVar17 = plVar11 + 9;
          (**(code **)(*plVar17 + 0x10))(plVar17);
          uVar12 = (**(code **)(*plVar11 + 400))(plVar11);
          if ((uVar12 & 1) != 0) {
            (**(code **)(*plVar11 + 0x1a0))(plVar11,0,bVar3);
          }
          (**(code **)(*plVar17 + 0x18))(plVar17);
        }
        uVar9 = (**(code **)(**(long **)(param_1 + 8) + 0x748))
                          (*(long **)(param_1 + 8),uVar20 & 0xffffffff);
        if ((((uVar21 ^ uVar9) & 1) != 0) &&
           (plVar11 = *(long **)(*(long *)(param_1 + 8) + uVar20 * 8 + 0x580),
           plVar11 != (long *)0x0)) {
          plVar17 = plVar11 + 9;
          (**(code **)(*plVar17 + 0x10))(plVar17);
          uVar12 = (**(code **)(*plVar11 + 400))(plVar11);
          if ((uVar12 & 1) != 0) {
            (**(code **)(*plVar11 + 0x1a0))(plVar11,0,bVar3);
          }
          (**(code **)(*plVar17 + 0x18))(plVar17);
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != 7);
    }
    else if (iVar8 == 2) {
      uVar21 = *(uint *)(param_1 + 0x110);
      if (uVar21 == 0xff) {
        uVar21 = *(uint *)(param_1 + 0x114);
      }
      lVar16 = 0;
      do {
        if ((ulong)uVar21 * 8 != lVar16) {
          lVar18 = *(long *)(param_1 + 8);
          plVar11 = *(long **)(lVar18 + lVar16 + 0x548);
          if (plVar11 != (long *)0x0) {
            plVar17 = plVar11 + 9;
            (**(code **)(*plVar17 + 0x10))(plVar17);
            uVar20 = (**(code **)(*plVar11 + 400))(plVar11);
            if ((uVar20 & 1) != 0) {
              (**(code **)(*plVar11 + 0x1a0))(plVar11,0,bVar3);
            }
            (**(code **)(*plVar17 + 0x18))(plVar17);
            lVar18 = *(long *)(param_1 + 8);
          }
          plVar11 = *(long **)(lVar18 + lVar16 + 0x580);
          if (plVar11 != (long *)0x0) {
            plVar17 = plVar11 + 9;
            (**(code **)(*plVar17 + 0x10))(plVar17);
            uVar20 = (**(code **)(*plVar11 + 400))(plVar11);
            if ((uVar20 & 1) != 0) {
              (**(code **)(*plVar11 + 0x1a0))(plVar11,0,bVar3);
            }
            (**(code **)(*plVar17 + 0x18))(plVar17);
          }
        }
        lVar16 = lVar16 + 8;
      } while (lVar16 != 0x38);
    }
    else if (iVar8 == 1) {
      uVar20 = 0;
      do {
        if ((uVar20 != *(uint *)(param_1 + 0x110)) &&
           (plVar11 = *(long **)(*(long *)(param_1 + 8) + uVar20 * 8 + 0x548),
           plVar11 != (long *)0x0)) {
          plVar17 = plVar11 + 9;
          (**(code **)(*plVar17 + 0x10))(plVar17);
          uVar12 = (**(code **)(*plVar11 + 400))(plVar11);
          if ((uVar12 & 1) != 0) {
            (**(code **)(*plVar11 + 0x1a0))(plVar11,0,bVar3);
          }
          (**(code **)(*plVar17 + 0x18))(plVar17);
        }
        if ((uVar20 != *(uint *)(param_1 + 0x114)) &&
           (plVar11 = *(long **)(*(long *)(param_1 + 8) + uVar20 * 8 + 0x580),
           plVar11 != (long *)0x0)) {
          plVar17 = plVar11 + 9;
          (**(code **)(*plVar17 + 0x10))(plVar17);
          uVar12 = (**(code **)(*plVar11 + 400))(plVar11);
          if ((uVar12 & 1) != 0) {
            (**(code **)(*plVar11 + 0x1a0))(plVar11,0,bVar3);
          }
          (**(code **)(*plVar17 + 0x18))(plVar17);
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != 7);
    }
  }
  if (*(int *)(param_1 + 0x28) != 0) goto LAB_00a95b90;
  local_3e0 = 0x3af5075c8f80fb41;
  local_3d8 = "isDrone";
  local_3d0 = 7;
  FUN_012b4250(&local_e0,auStack_88,&local_3e0);
  iVar8 = FUN_012b4420(&local_e0,0);
  if ((iVar8 == 0) || (*(char *)(*(long *)(param_1 + 8) + 0x1f30) == '\0')) {
    if (*(char *)(param_1 + 0x118) != '\0') {
      *(undefined1 *)(param_1 + 0x118) = 0;
      FUN_00a6d2f0(*(undefined8 *)(param_1 + 8));
    }
    lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x920);
  }
  else {
    *(undefined1 *)(param_1 + 0x118) = 1;
    FUN_00a82ea0();
    lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x920);
  }
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
    local_3e0 = 0x99e30721fd9bed86;
    local_3d8 = "dronePosArray";
    local_3d0 = 0xd;
    FUN_012b4250(auStack_a8,auStack_88,&local_3e0);
    FUN_012b4190(auStack_98,auStack_a8,0);
    fVar22 = (float)FUN_012b4630(0,auStack_98);
    local_e0 = -0x661cf8de0264127a;
    local_d8 = "dronePosArray";
    local_d0 = 0xd;
    FUN_012b4250(auStack_c8,auStack_88,&local_e0);
    FUN_012b4190(auStack_b8,auStack_c8,1);
    fVar23 = (float)FUN_012b4630(0,auStack_b8);
    local_118 = 0x99e30721fd9bed86;
    local_110 = "dronePosArray";
    local_108 = 0xd;
    FUN_012b4250(auStack_100,auStack_88,&local_118);
    FUN_012b4190(auStack_f0,auStack_100,2);
    fVar24 = (float)FUN_012b4630(0,auStack_f0);
    if (*(uint *)(param_1 + 0x110) == 0xff) {
      uVar15 = 0;
      uVar14 = 0;
      if (*(uint *)(param_1 + 0x114) != 0xff) {
        lVar18 = *(long *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x114) * 8 + 0x580);
        if (lVar18 == 0) goto LAB_00a952b8;
        goto LAB_00a952d4;
      }
    }
    else {
      lVar18 = *(long *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x110) * 8 + 0x548);
      if (lVar18 == 0) {
LAB_00a952b8:
        uVar15 = _DAT_000003d0;
        uVar14 = _DAT_000003d8;
      }
      else {
LAB_00a952d4:
        plVar11 = (long *)(lVar18 + 0x48);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        uVar14 = *(undefined8 *)(lVar18 + 0x3d8);
        uVar15 = *(undefined8 *)(lVar18 + 0x3d0);
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    uVar21 = FUN_00a81e00(CONCAT44((float)((ulong)uVar15 >> 0x20) - fVar23,(float)uVar15 - fVar22),
                          (float)uVar14 - fVar24);
    *(undefined8 *)(lVar16 + 0x3d8) = 0;
    *(undefined8 *)(lVar16 + 0x3d0) = 0;
    *(ulong *)(lVar16 + 1000) = (ulong)(uint)fVar24;
    *(ulong *)(lVar16 + 0x3e0) = CONCAT44(fVar23,fVar22);
    *(undefined8 *)(lVar16 + 0x458) = 0;
    *(undefined8 *)(lVar16 + 0x450) = 0;
    *(undefined8 *)(lVar16 + 0x468) = 0;
    *(ulong *)(lVar16 + 0x460) = (ulong)uVar21 << 0x20;
    FUN_00aaadc0(lVar16,1);
  }
  local_3e0 = 0x2f274f12a4ba6e32;
  local_3d8 = "isLensDistortion";
  local_3d0 = 0x10;
  FUN_012b4250(&local_e0,auStack_88,&local_3e0);
  iVar8 = FUN_012b4420(&local_e0,0);
  if ((iVar8 == 0) || (*(char *)(*(long *)(param_1 + 8) + 0x1f30) == '\0')) {
    if (*(char *)(param_1 + 0x119) != '\0') {
      *(undefined1 *)(param_1 + 0x119) = 0;
      lVar18 = *(long *)(*(long *)(param_1 + 8) + 0x3f8);
      if (lVar18 == 0) {
        pvVar13 = (void *)FUN_01052d00(0);
        memcpy(&local_3e0,pvVar13,0x2c0);
      }
      else {
        plVar11 = (long *)(lVar18 + 0x48);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        pvVar13 = (void *)FUN_01052d00(lVar18);
        memcpy(&local_3e0,pvVar13,0x2c0);
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
      local_2ea = 0;
      local_2d8 = 0x3f8000003f800000;
      uStack_2d0 = 0;
      lVar18 = *(long *)(*(long *)(param_1 + 8) + 0x3f8);
      goto joined_r0x00a95514;
    }
  }
  else {
    lVar18 = *(long *)(*(long *)(param_1 + 8) + 0x3f8);
    if (lVar18 == 0) {
      pvVar13 = (void *)FUN_01052d00(0);
      memcpy(&local_3e0,pvVar13,0x2c0);
    }
    else {
      plVar11 = (long *)(lVar18 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      pvVar13 = (void *)FUN_01052d00(lVar18);
      memcpy(&local_3e0,pvVar13,0x2c0);
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    *(undefined1 *)(param_1 + 0x119) = 1;
    local_e0 = -0x3c3841723e17ed8e;
    local_d8 = "lensDistortionType";
    local_d0 = 0x12;
    FUN_012b4250(&local_118,auStack_88,&local_e0);
    uVar6 = FUN_012b4420(&local_118,0);
    FUN_00a711e0(*(undefined8 *)(param_1 + 8),uVar6,&local_3e0);
    local_2ea = 1;
    lVar18 = *(long *)(*(long *)(param_1 + 8) + 0x3f8);
joined_r0x00a95514:
    if (lVar18 == 0) {
      FUN_01052cc0(0,&local_3e0);
    }
    else {
      plVar11 = (long *)(lVar18 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_01052cc0(lVar18,&local_3e0);
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  local_3e0 = 0x4d0b50ad4d914755;
  local_3d8 = "isDepthOfField";
  local_3d0 = 0xe;
  FUN_012b4250(&local_e0,auStack_88,&local_3e0);
  iVar8 = FUN_012b4420(&local_e0,0);
  if (iVar8 == 0) {
    if (*(char *)(param_1 + 0x719) == '\0') goto LAB_00a95750;
    *(undefined1 *)(param_1 + 0x719) = 0;
    lVar18 = *(long *)(*(long *)(param_1 + 8) + 0x3f8);
    if (lVar18 == 0) {
      pvVar13 = (void *)FUN_01052d00(0);
      memcpy(&local_3e0,pvVar13,0x2c0);
    }
    else {
      plVar11 = (long *)(lVar18 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      pvVar13 = (void *)FUN_01052d00(lVar18);
      memcpy(&local_3e0,pvVar13,0x2c0);
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    local_34c = 0;
    local_348 = 0x42c8000040000000;
    lVar18 = *(long *)(*(long *)(param_1 + 8) + 0x3f8);
    if (lVar18 != 0) goto LAB_00a95720;
LAB_00a95af8:
    FUN_01052cc0(0,&local_3e0);
    if (*(char *)(param_1 + 0x170) != '\0') goto LAB_00a95758;
LAB_00a95b0c:
    puVar2 = PTR_DAT_02710848;
    if (*(char *)(param_1 + 0x171) != '\0') {
      *(undefined1 *)(param_1 + 0x171) = 0;
      lVar18 = *(long *)(*(long *)puVar2 + 0x88);
      if (lVar18 == 0) {
        FUN_01067170(0);
      }
      else {
        plVar11 = (long *)(lVar18 + 0x48);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_01067170(lVar18);
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
      FUN_00a93c00(param_1);
    }
LAB_00a95b6c:
    uVar15 = *(undefined8 *)(param_1 + 8);
    if (*(char *)(param_1 + 0x718) != '\0') goto LAB_00a95b78;
LAB_00a95bc8:
    FUN_00a85b80(uVar15);
  }
  else {
    *(undefined1 *)(param_1 + 0x719) = 1;
    lVar18 = *(long *)(*(long *)(param_1 + 8) + 0x3f8);
    if (lVar18 == 0) {
      pvVar13 = (void *)FUN_01052d00(0);
      memcpy(&local_3e0,pvVar13,0x2c0);
    }
    else {
      plVar11 = (long *)(lVar18 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      pvVar13 = (void *)FUN_01052d00(lVar18);
      memcpy(&local_3e0,pvVar13,0x2c0);
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    local_34c = CONCAT11(local_34c._1_1_,1);
    local_e0 = 0x2d756d6a365084a;
    local_d8 = "isAutoFocus";
    local_d0 = 0xb;
    FUN_012b4250(&local_118,auStack_88,&local_e0);
    iVar8 = FUN_012b4420(&local_118,0);
    local_e0 = 0x59e513f637a45ce4;
    local_d8 = "fNumber";
    local_34c = CONCAT11(0 < iVar8,(undefined1)local_34c);
    local_d0 = 7;
    FUN_012b4250(&local_118,auStack_88,&local_e0);
    uVar6 = FUN_012b4630(0,&local_118);
    local_e0 = -0x7a9a1d636f3c1f34;
    local_d8 = "focusDistance";
    local_d0 = 0xd;
    local_348 = CONCAT44(local_348._4_4_,uVar6);
    FUN_012b4250(&local_118,auStack_88,&local_e0);
    uVar6 = FUN_012b4630(0,&local_118);
    local_348 = CONCAT44(uVar6,(undefined4)local_348);
    lVar18 = *(long *)(*(long *)(param_1 + 8) + 0x3f8);
    if (lVar18 == 0) goto LAB_00a95af8;
LAB_00a95720:
    plVar11 = (long *)(lVar18 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_01052cc0(lVar18,&local_3e0);
    (**(code **)(*plVar11 + 0x18))(plVar11);
LAB_00a95750:
    if (*(char *)(param_1 + 0x170) == '\0') goto LAB_00a95b0c;
LAB_00a95758:
    plVar11 = *(long **)(*(long *)(param_1 + 8) + 0xd8);
    uVar15 = FUN_006fd100(*(undefined8 *)(param_1 + 0x298),0);
    FUN_0010d170(&local_e0,uVar15);
    uVar15 = (**(code **)(*plVar11 + 0x10))(plVar11,0x1f0,0x10);
    puVar2 = PTR_DAT_02710860;
    lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar18 + 0x80)) {
LAB_00a95bd4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar11;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    FUN_006cf0c0(&local_3e0,&local_e0);
    FUN_006fbcf0(uVar15,param_1 + 0x290,&local_3e0);
    if (local_3c8 != 0) {
      (**(code **)(*(long *)(local_3c8 + 0x48) + 0x18))();
      local_3c8 = 0;
    }
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    lVar18 = *(long *)(param_1 + 0x4b0);
    *(undefined8 *)(param_1 + 0x4b0) = uVar15;
    if (lVar18 != 0) {
      FUN_00784490(lVar18);
      (**(code **)(**(long **)(param_1 + 0x4b8) + 0x18))
                (*(long **)(param_1 + 0x4b8),lVar18,*(undefined8 *)(param_1 + 0x4c0),
                 *(undefined8 *)(param_1 + 0x4c8));
    }
    *(long **)(param_1 + 0x4b8) = plVar11;
    *(undefined8 *)(param_1 + 0x4c0) = 0x1f0;
    *(undefined8 *)(param_1 + 0x4c8) = 0x10;
    if (local_e0 != 0) {
      (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
      local_e0 = 0;
    }
    uVar15 = FUN_006fd100(*(undefined8 *)(param_1 + 0x3a8),0);
    FUN_0010d170(&local_e0,uVar15);
    uVar15 = (**(code **)(*plVar11 + 0x10))(plVar11,0x1f0,0x10);
    lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_00a95bd4;
    *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar11;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    FUN_006cf0c0(&local_3e0,&local_e0);
    FUN_006fbcf0(uVar15,param_1 + 0x3a0,&local_3e0);
    if (local_3c8 != 0) {
      (**(code **)(*(long *)(local_3c8 + 0x48) + 0x18))();
      local_3c8 = 0;
    }
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    lVar18 = *(long *)(param_1 + 0x4d0);
    *(undefined8 *)(param_1 + 0x4d0) = uVar15;
    if (lVar18 != 0) {
      FUN_00784490(lVar18);
      (**(code **)(**(long **)(param_1 + 0x4d8) + 0x18))
                (*(long **)(param_1 + 0x4d8),lVar18,*(undefined8 *)(param_1 + 0x4e0),
                 *(undefined8 *)(param_1 + 0x4e8));
    }
    *(long **)(param_1 + 0x4d8) = plVar11;
    *(undefined8 *)(param_1 + 0x4e0) = 0x1f0;
    *(undefined8 *)(param_1 + 0x4e8) = 0x10;
    if (local_e0 != 0) {
      (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
      local_e0 = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x710) + 0x198))(*(long **)(param_1 + 0x710),1);
    lVar18 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
    if (lVar18 == 0) {
      FUN_01067030(0,*(undefined8 *)(param_1 + 0x4b0),1,*(undefined8 *)(param_1 + 0x4d0),1);
      lVar18 = *(long *)(param_1 + 8);
      lVar19 = *(long *)(lVar18 + 0x400);
    }
    else {
      plVar11 = (long *)(lVar18 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_01067030(lVar18,*(undefined8 *)(param_1 + 0x4b0),1,*(undefined8 *)(param_1 + 0x4d0),1);
      (**(code **)(*plVar11 + 0x18))(plVar11);
      lVar18 = *(long *)(param_1 + 8);
      lVar19 = *(long *)(lVar18 + 0x400);
    }
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
      lVar18 = *(long *)(param_1 + 8);
    }
    lVar18 = *(long *)(lVar18 + 0x3f8);
    if (lVar18 == 0) {
      uVar15 = FUN_01052d00(0);
      FUN_01052cc0(lVar19,uVar15);
    }
    else {
      plVar11 = (long *)(lVar18 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      uVar15 = FUN_01052d00(lVar18);
      FUN_01052cc0(lVar19,uVar15);
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    if (lVar19 == 0) goto LAB_00a95b6c;
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
    uVar15 = *(undefined8 *)(param_1 + 8);
    if (*(char *)(param_1 + 0x718) == '\0') goto LAB_00a95bc8;
LAB_00a95b78:
    FUN_00a85aa0();
  }
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
LAB_00a95b90:
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  return;
}


