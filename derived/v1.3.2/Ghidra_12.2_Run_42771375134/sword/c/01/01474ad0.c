/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01474ad0; name: FUN_01474ad0
 */


void FUN_01474ad0(long param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_90 [2];
  long local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_68;
  
  piVar10 = *(int **)(param_1 + 0x5d0);
  if (*piVar10 == 2) {
    uVar5 = piVar10[4];
    if ((uint)piVar10[0x42] <= uVar5) {
      uVar5 = (piVar10[0x42] + uVar5) - 3;
    }
  }
  else {
    uVar5 = piVar10[4];
  }
  uVar8 = (**(code **)(**(long **)(piVar10 + 2) + 0x50))(*(long **)(piVar10 + 2),uVar5);
  lVar15 = *(long *)(param_1 + 0x2b0);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(lVar15 + 0x2e0);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  FUN_00ff86a0(&local_88,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar15 = *(long *)(local_88 + 0x60);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  FUN_00ff86a0(&local_88,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),2);
  lVar16 = *(long *)(local_88 + 0x60);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  lVar11 = *(long *)(param_1 + 0x5d0) + (ulong)*(uint *)(*(long *)(param_1 + 0x5d0) + 0x10) * 0x14;
  local_a0 = *(undefined8 *)(lVar11 + 0x68);
  uStack_98 = *(undefined8 *)(lVar11 + 0x70);
  local_90[0] = *(uint *)(lVar11 + 0x78);
  bVar1 = FUN_0087d610(uVar8,2);
  uVar18 = 0;
  puVar19 = &DAT_0216eaf0;
  puVar20 = PTR_DAT_02729f40;
  do {
    bVar2 = FUN_0087b890(uVar8);
    if ((bVar1 & 1) == 0 && uVar18 < bVar2) {
      piVar10 = *(int **)(param_1 + 0x5d0);
      if (*piVar10 == 2) {
        uVar5 = piVar10[4];
        if ((uint)piVar10[0x42] <= uVar5) {
          uVar5 = (piVar10[0x42] + uVar5) - 3;
        }
      }
      else {
        uVar5 = piVar10[4];
      }
      local_88 = (**(code **)(**(long **)(piVar10 + 2) + 0x50))(*(long **)(piVar10 + 2),uVar5);
      uVar13 = *(undefined8 *)(param_1 + 0x6f8 + uVar18 * 8);
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
      }
      FUN_016ab860(uVar13,&local_88,uVar18 & 0xffffffff,0);
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
      lVar11 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar19);
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 1;
      lVar11 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar20 + 8);
      uVar4 = 0;
      *(byte *)(lVar11 + 0x58) =
           *(byte *)(lVar11 + 0x58) & 0xfe | *(byte *)((long)local_90 + uVar18);
      lVar11 = *(long *)(param_1 + 0x5d0) +
               (ulong)*(uint *)(*(long *)(param_1 + 0x5d0) + 0x10) * 0x14;
      local_78 = *(undefined4 *)(lVar11 + 0x78);
      local_88 = *(long *)(lVar11 + 0x68);
      uStack_80 = *(undefined8 *)(lVar11 + 0x70);
      if (local_90[uVar18 + 2] < 4) {
        uVar4 = *(undefined4 *)(&DAT_01d49e00 + (long)(int)local_90[uVar18 + 2] * 4);
      }
      FUN_00ffd510(uVar4,param_1 + 0x100,puVar20);
    }
    else {
      lVar11 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar19);
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
      lVar11 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar20 + 8);
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
    }
    uVar18 = uVar18 + 1;
    puVar19 = puVar19 + 0xb0;
    puVar20 = puVar20 + 0x10;
  } while (uVar18 != 4);
  uVar13 = *(undefined8 *)(param_1 + 0x600);
  local_88 = 0;
  bVar1 = bVar1 ^ 1;
  cVar3 = FUN_0087b890(uVar8);
  FUN_016b81d0(uVar13,&local_88,cVar3 != '\0' & bVar1);
  uVar13 = *(undefined8 *)(param_1 + 0x600);
  local_88 = 0x100000000;
  bVar2 = FUN_0087b890(uVar8);
  FUN_016b81d0(uVar13,&local_88,1 < bVar2 & bVar1);
  uVar13 = *(undefined8 *)(param_1 + 0x600);
  local_88 = 0x200000000;
  bVar2 = FUN_0087b890(uVar8);
  FUN_016b81d0(uVar13,&local_88,2 < bVar2 & bVar1);
  uVar13 = *(undefined8 *)(param_1 + 0x600);
  local_88 = 0x300000000;
  bVar2 = FUN_0087b890(uVar8);
  FUN_016b81d0(uVar13,&local_88,3 < bVar2 & bVar1);
  local_68 = lVar15;
  if (lVar15 == 0) {
    FUN_01473330(param_1,0x48db2390989868df,0x674f9fcff330e0d0,&local_68);
  }
  else {
    plVar14 = (long *)(lVar15 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    FUN_01473330(param_1,0x48db2390989868df,0x674f9fcff330e0d0,&local_68);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    local_68 = 0;
  }
  uVar4 = FUN_0087cdb0(uVar8);
  FUN_014c93c0(lVar12,0,uVar4);
  local_a8 = lVar15;
  if (lVar15 == 0) {
    FUN_01473330(param_1,0x5b301736dba5271c,0xff0661f297097d84,&local_a8);
  }
  else {
    plVar14 = (long *)(lVar15 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    FUN_01473330(param_1,0x5b301736dba5271c,0xff0661f297097d84,&local_a8);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    local_a8 = 0;
  }
  uVar4 = FUN_0087cdb0(uVar8);
  local_b0 = lVar16;
  if (lVar16 == 0) {
    FUN_01475430(param_1,uVar4,0xb5f8eb38ab077de1,&local_b0);
    uVar18 = FUN_0087d610(uVar8,2);
    if ((uVar18 & 1) == 0) goto LAB_014750f0;
LAB_01475018:
    local_88 = -0x49a5f8938ff9a132;
    lVar11 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_88);
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
    local_88 = -0x49a5f7938ff99f7f;
    lVar11 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_88);
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
    local_88 = 0x6c435869d96d1226;
    lVar11 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_88);
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
    local_88 = -0xf7bfc9c522857be;
    lVar11 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_88);
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
  }
  else {
    plVar14 = (long *)(lVar16 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    FUN_01475430(param_1,uVar4,0xb5f8eb38ab077de1,&local_b0);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    local_b0 = 0;
    uVar18 = FUN_0087d610(uVar8,2);
    if ((uVar18 & 1) != 0) goto LAB_01475018;
LAB_014750f0:
    lVar11 = *(long *)(param_1 + 0x538);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    uVar5 = FUN_0087eca0(uVar8);
    local_88 = -0x49a5f8938ff9a132;
    uVar13 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_88);
    FUN_016a7910(lVar11,uVar5,1,uVar13,0,0);
    local_88 = -0x49a5f8938ff9a132;
    lVar9 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_88);
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
    uVar6 = FUN_0087ed40(uVar8);
    if ((uVar6 & 0xff) == (uVar5 & 0xff)) {
      local_88 = -0x49a5f7938ff99f7f;
      lVar9 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_88);
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
    }
    else {
      local_88 = -0x49a5f7938ff99f7f;
      uVar13 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_88);
      local_88 = -0x49a5f7938ff99f7f;
      lVar9 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_88);
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
      FUN_016a7910(lVar11,uVar6,1,uVar13,0,0);
    }
    local_88 = 0x6c435869d96d1226;
    lVar9 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_88);
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
    local_88 = -0xf7bfc9c522857be;
    lVar9 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_88);
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
  }
  piVar10 = *(int **)(param_1 + 0x5d0);
  if (*piVar10 == 2) {
    if ((uint)piVar10[0x42] <= (uint)piVar10[4]) goto LAB_014752ac;
LAB_014752c0:
    uVar17 = 0x1a38ee75296b35f9;
    uVar18 = FUN_0087d610(uVar8,2);
    if (((uVar18 & 1) != 0) || (iVar7 = FUN_0087afd0(uVar8), iVar7 == 0)) goto LAB_0147531c;
    lVar11 = *(long *)(param_1 + 0x5d0);
    iVar7 = *(int *)(lVar11 + 0x10);
    uVar17 = 0x1a38ec75296b3293;
    if ((*(int *)(lVar11 + 0x18) == iVar7) || (*(int *)(lVar11 + 0x1c) == iVar7)) goto LAB_0147531c;
    if (((*(int *)(lVar11 + 0x104) == iVar7) || (*(int *)(lVar11 + 0xe0) == iVar7)) ||
       (*(int *)(lVar11 + 0xe4) == iVar7)) {
      uVar17 = 0xf075296b395f;
    }
    else {
      uVar17 = 0xeb75296b30e0;
    }
  }
  else {
    if ((piVar10[4] == 0) || (*piVar10 != 3)) goto LAB_014752c0;
LAB_014752ac:
    uVar17 = 0xed75296b3446;
  }
  uVar17 = uVar17 | 0x1a38000000000000;
LAB_0147531c:
  local_b8 = lVar15;
  if (lVar15 == 0) {
    FUN_01473330(param_1,uVar17,0xf711f234e7fad910,&local_b8);
  }
  else {
    plVar14 = (long *)(lVar15 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    FUN_01473330(param_1,uVar17,0xf711f234e7fad910,&local_b8);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    local_b8 = 0;
  }
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  return;
}


