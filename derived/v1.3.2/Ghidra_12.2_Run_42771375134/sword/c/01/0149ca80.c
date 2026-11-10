/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0149ca80; name: FUN_0149ca80
 */


void FUN_0149ca80(long param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130 [2];
  undefined1 auStack_120 [32];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_70 [2];
  
  lVar10 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5d8));
  uVar14 = *(undefined8 *)(param_1 + (long)param_2 * 8 + 0x5f0);
  local_70[0] = lVar10;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  FUN_016ab860(uVar14,local_70,param_3,0);
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    local_70[0] = 0;
  }
  piVar13 = *(int **)(param_1 + 0x5d8);
  if (*piVar13 != 1) {
    return;
  }
  if (piVar13[4] != piVar13[1]) {
    return;
  }
  lVar16 = *(long *)(param_1 + 0x2b0);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  lVar15 = *(long *)(lVar16 + 0x2e0);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  FUN_00ff86a0(local_130,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar16 = *(long *)(local_130[0] + 0x60);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  if (local_130[0] != 0) {
    (**(code **)(*(long *)(local_130[0] + 0x48) + 0x18))();
    local_130[0] = 0;
  }
  uVar5 = FUN_0087b880(lVar10,param_3);
  iVar6 = FUN_00945420();
  memcpy(local_130,&DAT_0216f558 + (long)param_2 * 0x18,0xc0);
  uVar7 = FUN_008783b0(lVar10);
  uVar8 = FUN_008783c0(lVar10);
  piVar13 = *(int **)(param_1 + 0x5d8);
  if (*piVar13 == 1) {
    bVar1 = piVar13[4] == piVar13[1];
  }
  else {
    bVar1 = false;
  }
  cVar2 = FUN_00879760(lVar10);
  iVar9 = FUN_00965a90(uVar7,uVar8,bVar1,cVar2 == '\x02',uVar5);
  local_138 = lVar16;
  if (iVar9 < 0) {
    FUN_014c9660(lVar15,0,iVar6);
    uVar14 = local_e0;
    if (lVar16 == 0) goto LAB_0149cd64;
LAB_0149cc74:
    lVar10 = local_130[0];
    plVar17 = (long *)(lVar16 + 0x48);
    (**(code **)(*plVar17 + 0x10))(plVar17);
    FUN_0149c400(param_1,uVar14,lVar10,&local_138);
    (**(code **)(*plVar17 + 0x18))(plVar17);
    local_138 = 0;
    if (-1 < iVar9) goto LAB_0149ccb4;
LAB_0149cd7c:
    FUN_00ff86a0(&local_140,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),5);
    lVar10 = *(long *)(local_140 + 0x60);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    if (local_140 != 0) {
      (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
      local_140 = 0;
    }
    if (lVar10 == 0) {
      plVar17 = &local_150;
      local_150 = 0;
      iVar12 = iVar6;
      goto LAB_0149cee0;
    }
    plVar17 = (long *)(lVar10 + 0x48);
    local_150 = lVar10;
    (**(code **)(*plVar17 + 0x10))(plVar17);
    FUN_0149dad0(param_1,iVar6,local_e8,&local_150);
    (**(code **)(*plVar17 + 0x18))(plVar17);
    local_150 = 0;
LAB_0149ce08:
    (**(code **)(*plVar17 + 0x18))(plVar17);
    piVar13 = *(int **)(param_1 + 0x5d8);
    if (*piVar13 == 1) goto LAB_0149ce28;
LAB_0149cef8:
    bVar1 = false;
    if (iVar9 - 0x1cU < 3) goto LAB_0149cf08;
LAB_0149ce44:
    if (bVar1) {
      uVar3 = FUN_00881040();
      uVar3 = uVar3 & 0xff;
      uVar14 = local_c0;
      local_c0 = local_a8;
    }
    else {
      uVar3 = FUN_00880ab0(uVar5);
      uVar14 = local_c0;
      local_c0 = local_a8;
    }
    if (1 < uVar3) goto LAB_0149cf0c;
    if (lVar16 == 0) {
      plVar17 = &local_158;
      local_158 = 0;
      goto LAB_0149cf84;
    }
    plVar17 = (long *)(lVar16 + 0x48);
    local_158 = lVar16;
    (**(code **)(*plVar17 + 0x10))(plVar17);
    FUN_0149c400(param_1,local_c0,local_100,&local_158);
    (**(code **)(*plVar17 + 0x18))(plVar17);
    local_158 = 0;
  }
  else {
    FUN_014c97b0(lVar15,0,iVar9);
    uVar14 = local_e0;
    if (lVar16 != 0) goto LAB_0149cc74;
LAB_0149cd64:
    FUN_0149c400(param_1,local_e0,local_130[0],&local_138);
    if (iVar9 < 0) goto LAB_0149cd7c;
LAB_0149ccb4:
    FUN_00ff86a0(&local_140,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),6);
    lVar10 = *(long *)(local_140 + 0x60);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    if (local_140 != 0) {
      (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
      local_140 = 0;
    }
    if (lVar10 != 0) {
      plVar17 = (long *)(lVar10 + 0x48);
      local_148 = lVar10;
      (**(code **)(*plVar17 + 0x10))(plVar17);
      FUN_0149dad0(param_1,iVar9,local_e8,&local_148);
      (**(code **)(*plVar17 + 0x18))(plVar17);
      local_148 = 0;
      goto LAB_0149ce08;
    }
    plVar17 = &local_148;
    local_148 = 0;
    iVar12 = iVar9;
LAB_0149cee0:
    FUN_0149dad0(param_1,iVar12,local_e8,plVar17);
    piVar13 = *(int **)(param_1 + 0x5d8);
    if (*piVar13 != 1) goto LAB_0149cef8;
LAB_0149ce28:
    bVar1 = piVar13[4] == piVar13[1];
    if (2 < iVar9 - 0x1cU) goto LAB_0149ce44;
LAB_0149cf08:
    uVar3 = 0xa0;
    uVar14 = local_c0;
LAB_0149cf0c:
    local_c0 = uVar14;
    FUN_014ca220(lVar15,0,uVar3,3,1,1);
    if (lVar16 == 0) {
      plVar17 = &local_160;
      local_160 = 0;
LAB_0149cf84:
      FUN_0149c400(param_1,local_c0,local_100,plVar17);
    }
    else {
      plVar17 = (long *)(lVar16 + 0x48);
      local_160 = lVar16;
      (**(code **)(*plVar17 + 0x10))(plVar17);
      FUN_0149c400(param_1,local_c0,local_100,&local_160);
      (**(code **)(*plVar17 + 0x18))(plVar17);
      local_160 = 0;
    }
  }
  uVar5 = FUN_00880ae0(iVar6);
  lVar10 = *(long *)(param_1 + 0x538);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  uVar14 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),auStack_120);
  FUN_016a7910(lVar10,uVar5,1,uVar14,0,0);
  local_168 = lVar16;
  if (lVar16 == 0) {
    FUN_0149c400(param_1,local_b8,local_f8,&local_168);
    uVar11 = FUN_00880bd0(iVar6);
    if ((uVar11 & 1) == 0) goto LAB_0149d0b0;
LAB_0149d03c:
    if (lVar16 != 0) {
      plVar17 = (long *)(lVar16 + 0x48);
      local_170 = lVar16;
      (**(code **)(*plVar17 + 0x10))(plVar17);
      FUN_0149c400(param_1,local_a0,local_f0,&local_170);
      (**(code **)(*plVar17 + 0x18))(plVar17);
      local_170 = 0;
      goto joined_r0x0149d120;
    }
    plVar17 = &local_170;
    local_170 = 0;
  }
  else {
    plVar17 = (long *)(lVar16 + 0x48);
    (**(code **)(*plVar17 + 0x10))(plVar17);
    FUN_0149c400(param_1,local_b8,local_f8,&local_168);
    (**(code **)(*plVar17 + 0x18))(plVar17);
    local_168 = 0;
    uVar11 = FUN_00880bd0(iVar6);
    if ((uVar11 & 1) != 0) goto LAB_0149d03c;
LAB_0149d0b0:
    uVar4 = FUN_00880ba0(iVar6);
    FUN_014ca220(lVar15,0,uVar4,3,1,1);
    if (lVar16 != 0) {
      plVar17 = (long *)(lVar16 + 0x48);
      local_178 = lVar16;
      (**(code **)(*plVar17 + 0x10))(plVar17);
      FUN_0149c400(param_1,local_b0,local_f0,&local_178);
      (**(code **)(*plVar17 + 0x18))(plVar17);
      local_178 = 0;
      goto joined_r0x0149d120;
    }
    plVar17 = &local_178;
    local_178 = 0;
    local_a0 = local_b0;
  }
  FUN_0149c400(param_1,local_a0,local_f0,plVar17);
joined_r0x0149d120:
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  return;
}


