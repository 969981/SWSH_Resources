/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a69450; name: FUN_00a69450
 */


/* WARNING: Removing unreachable block (ram,0x00a69d08) */
/* WARNING: Removing unreachable block (ram,0x00a69cf0) */
/* WARNING: Removing unreachable block (ram,0x00a69cd8) */
/* WARNING: Removing unreachable block (ram,0x00a69ccc) */
/* WARNING: Removing unreachable block (ram,0x00a69ce4) */
/* WARNING: Removing unreachable block (ram,0x00a69cfc) */
/* WARNING: Removing unreachable block (ram,0x00a69d14) */

void FUN_00a69450(long *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  undefined1 *puVar13;
  undefined2 *puVar14;
  ulong uVar15;
  code *pcVar16;
  long *plVar17;
  uint *puVar18;
  long *plVar19;
  undefined8 local_140;
  char *local_138;
  undefined8 local_130;
  long local_128;
  long local_120 [2];
  undefined1 *local_110;
  long local_108;
  long local_100;
  undefined4 local_f8;
  code *local_f0;
  code *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  long *local_d0;
  long *plStack_c8;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined2 local_54;
  char local_52 [2];
  
  local_52[0] = '\0';
  local_54 = 0;
  local_58 = 0;
  iVar7 = (**(code **)(*param_1 + 0x870))();
  if (iVar7 == 1) {
    lVar8 = FUN_009c5ff0(param_1);
    uVar3 = local_58;
    if (lVar8 == 0) {
      local_58 = CONCAT31(local_58._1_3_,1);
      uVar4 = local_58;
      local_58._3_1_ = SUB41(uVar3,3);
      local_58._0_2_ = (undefined2)uVar4;
      local_58._0_3_ = CONCAT12(1,(undefined2)local_58);
    }
    else {
      uVar15 = FUN_008f35c0(lVar8,0x8000);
      uVar3 = local_58;
      uVar11 = 1;
      local_58 = CONCAT31(local_58._1_3_,1);
      uVar4 = local_58;
      local_58._3_1_ = SUB41(uVar3,3);
      local_58._0_2_ = (undefined2)uVar4;
      local_58._0_3_ = CONCAT12(1,(undefined2)local_58);
      if ((uVar15 & 1) != 0) {
        uVar15 = 0;
        bVar2 = true;
        goto LAB_00a695f4;
      }
    }
    uVar9 = (**(code **)(*param_1 + 0x890))(param_1);
    uVar15 = uVar9 & 0xffffffff;
    bVar2 = true;
    uVar11 = uVar9 & 0xffffffff;
    if ((lVar8 != 0) && ((uVar9 & 1) != 0)) {
      uVar11 = FUN_008f37f0(lVar8,2);
      uVar11 = uVar11 & 0xffffffff;
      uVar15 = FUN_008f37f0(lVar8,3);
      uVar15 = uVar15 & 0xffffffff;
      bVar2 = true;
    }
  }
  else if (iVar7 == 2) {
    lVar8 = FUN_009c5ff0(param_1);
    if (lVar8 == 0) {
      uVar15 = 4;
LAB_00a6951c:
      uVar11 = uVar15 & 3;
      if ((uVar15 & 0xffffffff) - 1 < 3) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        puVar14 = &local_54;
        do {
          lVar8 = lVar8 + 4;
          *(undefined1 *)(puVar14 + -2) = 1;
          *(undefined1 *)(puVar14 + -1) = 1;
          *(undefined1 *)puVar14 = 1;
          *(undefined1 *)(puVar14 + 1) = 1;
          puVar14 = puVar14 + 4;
        } while ((uVar15 & 0xffffffff) - uVar11 != lVar8);
      }
      if (uVar11 != 0) {
        lVar10 = -uVar11;
        puVar13 = (undefined1 *)((long)&local_58 + lVar8 * 2);
        do {
          lVar10 = lVar10 + 1;
          *puVar13 = 1;
          puVar13 = puVar13 + 2;
        } while (lVar10 != 0);
      }
    }
    else {
      FUN_009c5ff0(param_1);
      bVar6 = FUN_008f8120();
      if (1 < bVar6) {
        uVar15 = (ulong)bVar6 + 0xffffffff;
        goto LAB_00a6951c;
      }
    }
    uVar15 = 0;
    uVar11 = 0;
    bVar2 = false;
  }
  else {
    bVar2 = true;
    uVar15 = 0;
    uVar11 = 0;
    local_58 = CONCAT31(local_58._1_3_,1);
  }
LAB_00a695f4:
  local_68 = 0;
  local_70 = 0;
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar8 == 0) {
    FUN_0101cb00(0,&local_70);
  }
  else {
    plVar17 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar17 + 0x10))(plVar17);
    FUN_0101cb00(lVar8,&local_70);
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  plVar17 = (long *)param_1[0x17];
  puVar18 = *(uint **)(*(long *)(*(long *)PTR_DAT_027108b8 + 0x388) + 400);
  uVar1 = *puVar18;
  if (*(long *)(param_1[0xa9] + 0x510) == 0) {
    bVar5 = false;
LAB_00a6968c:
    if ((char)local_58 != '\0') {
      FUN_00acf280(param_1[0xa9],0,0,0);
      FUN_00ad8290(param_1[0xa9]);
    }
  }
  else {
    bVar5 = *(int *)(*(long *)(param_1[0xa9] + 0x510) + 0x54) != 0;
    if (!bVar5) goto LAB_00a6968c;
  }
  if (bVar5) {
    FUN_00ad8290(param_1[0xa9]);
  }
  if (*(long *)(param_1[0xaa] + 0x510) == 0) {
    bVar5 = false;
LAB_00a696dc:
    if (local_58._1_1_ != '\0') {
      FUN_00acf280(param_1[0xaa],1,0,0);
      FUN_00ad8290(param_1[0xaa]);
    }
  }
  else {
    bVar5 = *(int *)(*(long *)(param_1[0xaa] + 0x510) + 0x54) != 0;
    if (!bVar5) goto LAB_00a696dc;
  }
  if (bVar5) {
    FUN_00ad8290(param_1[0xaa]);
  }
  if (*(long *)(param_1[0xab] + 0x510) == 0) {
    bVar5 = false;
LAB_00a6972c:
    if (local_58._2_1_ != '\0') {
      FUN_00acf280(param_1[0xab],2,0,0);
      FUN_00ad8290(param_1[0xab]);
    }
  }
  else {
    bVar5 = *(int *)(*(long *)(param_1[0xab] + 0x510) + 0x54) != 0;
    if (!bVar5) goto LAB_00a6972c;
  }
  if (bVar5) {
    FUN_00ad8290(param_1[0xab]);
  }
  if (*(long *)(param_1[0xac] + 0x510) == 0) {
    bVar5 = false;
LAB_00a6977c:
    if (local_58._3_1_ != '\0') {
      FUN_00acf280(param_1[0xac],3,0,0);
      FUN_00ad8290(param_1[0xac]);
    }
  }
  else {
    bVar5 = *(int *)(*(long *)(param_1[0xac] + 0x510) + 0x54) != 0;
    if (!bVar5) goto LAB_00a6977c;
  }
  if (bVar5) {
    FUN_00ad8290(param_1[0xac]);
  }
  if (*(long *)(param_1[0xad] + 0x510) == 0) {
    bVar5 = false;
LAB_00a697cc:
    if ((char)local_54 != '\0') {
      FUN_00acf280(param_1[0xad],4,0,0);
      FUN_00ad8290(param_1[0xad]);
    }
  }
  else {
    bVar5 = *(int *)(*(long *)(param_1[0xad] + 0x510) + 0x54) != 0;
    if (!bVar5) goto LAB_00a697cc;
  }
  if (bVar5) {
    FUN_00ad8290(param_1[0xad]);
  }
  if (*(long *)(param_1[0xae] + 0x510) == 0) {
    bVar5 = false;
LAB_00a6981c:
    if (local_54._1_1_ != '\0') {
      FUN_00acf280(param_1[0xae],5,0,0);
      FUN_00ad8290(param_1[0xae]);
    }
  }
  else {
    bVar5 = *(int *)(*(long *)(param_1[0xae] + 0x510) + 0x54) != 0;
    if (!bVar5) goto LAB_00a6981c;
  }
  if (bVar5) {
    FUN_00ad8290(param_1[0xae]);
  }
  if (*(long *)(param_1[0xaf] + 0x510) == 0) {
    bVar5 = false;
LAB_00a6986c:
    if (local_52[0] != '\0') {
      FUN_00acf280(param_1[0xaf],6,0,0);
      FUN_00ad8290(param_1[0xaf]);
    }
  }
  else {
    bVar5 = *(int *)(*(long *)(param_1[0xaf] + 0x510) + 0x54) != 0;
    if (!bVar5) goto LAB_00a6986c;
  }
  if (bVar5) {
    FUN_00ad8290(param_1[0xaf]);
  }
  if (bVar2) {
    lVar8 = param_1[0xb0];
    if (*(long *)(lVar8 + 0x510) != 0) {
      if (*(int *)(*(long *)(lVar8 + 0x510) + 0x54) != 0) goto LAB_00a698c4;
      lVar8 = param_1[0xb0];
    }
    FUN_00ace320(lVar8,0);
  }
LAB_00a698c4:
  if ((uVar11 & 1) != 0) {
    lVar8 = param_1[0xb2];
    if (*(long *)(lVar8 + 0x510) != 0) {
      if (*(int *)(*(long *)(lVar8 + 0x510) + 0x54) != 0) goto LAB_00a698ec;
      lVar8 = param_1[0xb2];
    }
    FUN_00ace320(lVar8,2);
  }
LAB_00a698ec:
  if ((uVar15 & 1) != 0) {
    lVar8 = param_1[0xb3];
    if (*(long *)(lVar8 + 0x510) != 0) {
      if (*(int *)(*(long *)(lVar8 + 0x510) + 0x54) != 0) goto LAB_00a69914;
      lVar8 = param_1[0xb3];
    }
    FUN_00ace320(lVar8,3);
  }
LAB_00a69914:
  if ((char)param_1[0x3e6] == '\0') {
    return;
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar17;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar10 = (**(code **)(*plVar17 + 0x10))(plVar17,0x4d0,0x10);
  if (lVar10 == 0) {
    (**(code **)(*plVar17 + 0xb8))(plVar17);
  }
  FUN_00aa9940(lVar10,param_1,plVar17,&local_70,(long)puVar18 + (ulong)uVar1);
  *(long **)(lVar10 + 8) = plVar17;
  *(long *)(lVar10 + 0x10) = lVar10;
  *(undefined8 *)(lVar10 + 0x18) = 0x4d0;
  *(undefined8 *)(lVar10 + 0x20) = 0x10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if (param_1[0x124] != 0) {
    (**(code **)(*(long *)(param_1[0x124] + 0x48) + 0x18))();
    param_1[0x124] = 0;
  }
  param_1[0x124] = lVar10;
  if (lVar10 == 0) goto LAB_00a69c48;
  FUN_00aa9c50(lVar10,param_1[0x17]);
  local_f0 = FUN_00a8b8d0;
  local_e8 = FUN_00a8ba60;
  local_e0 = FUN_00a8c370;
  local_d8 = &LAB_00a8c380;
  pcVar12 = (code *)param_1[0x129];
  local_d0 = param_1;
  plStack_c8 = plVar17;
  if (pcVar12 == (code *)0x0) {
LAB_00a69d24:
    (*local_e0)(&local_d0,param_1 + 300);
    param_1[299] = (long)local_d8;
    param_1[0x129] = (long)local_e8;
    param_1[0x12a] = (long)local_e0;
    param_1[0x128] = (long)local_f0;
    lVar8 = param_1[0x127];
  }
  else {
    param_1[0x12a] = 0;
    param_1[299] = 0;
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    (*pcVar12)(param_1 + 300);
    if (local_e0 != (code *)0x0) goto LAB_00a69d24;
    lVar8 = param_1[0x127];
  }
  if (lVar8 != 0) {
    plVar19 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar19 + 0x10))(plVar19);
    FUN_006e1e70(lVar8,param_1 + 0x126,1);
    (**(code **)(*plVar19 + 0x18))(plVar19);
  }
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar12)(&local_d0);
  }
  local_140 = 0x706d75d3b9a5f8e9;
  local_138 = "ee090_finder00_cam";
  local_130 = 0x12;
  local_128 = 0;
  FUN_00a85c40(&local_f0,"bin/archive/battle/effect/");
  FUN_00a85d70(local_120,&local_f0,&local_140,".gfpak");
  if ((local_d8 != (undefined1 *)0x0) && (local_f0 != (code *)0x0)) {
    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
  }
  local_f0 = (code *)0x0;
  local_e8 = (code *)0xcbf29ce484222645;
  local_e0 = (code *)&DAT_01d38550;
  local_d8 = (undefined1 *)0x0;
  if (local_d0 != (long *)0x0) {
    (**(code **)(local_d0[9] + 0x18))();
    local_d0 = (long *)0x0;
  }
  FUN_006dccd0(&local_f0,*(undefined8 *)PTR_DAT_02710788,1,local_120,0,param_1[0x1b],0);
  if (param_1[0x127] != 0) {
    (**(code **)(*(long *)(param_1[0x127] + 0x48) + 0x18))();
    param_1[0x127] = 0;
  }
  pcVar12 = local_f0;
  param_1[0x127] = (long)local_f0;
  if (local_f0 != (code *)0x0) {
    pcVar16 = local_f0 + 0x48;
    (**(code **)(*(long *)pcVar16 + 0x10))(pcVar16);
    if ((param_1[0x128] != 0) || (param_1[0x138] != 0)) {
      FUN_006e1e70(pcVar12,param_1 + 0x126,1);
    }
    (**(code **)(*(long *)pcVar16 + 0x18))(pcVar16);
  }
  if ((local_108 != 0) && (local_120[0] != 0)) {
    (**(code **)(*(long *)(local_120[0] + 0x48) + 0x18))();
  }
  local_120[0] = 0;
  local_120[1] = 0xcbf29ce484222645;
  local_110 = &DAT_01d38550;
  local_108 = 0;
  if (local_100 != 0) {
    (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
  }
  local_100 = 0;
  local_f8 = 0;
  if (local_128 != 0) {
    (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
    local_128 = 0;
  }
LAB_00a69c48:
  if (((char)param_1[0x3e6] != '\0') &&
     ((iVar7 = (**(code **)(*param_1 + 0x870))(param_1), iVar7 == 0 ||
      ((iVar7 = (**(code **)(*param_1 + 0x870))(param_1), iVar7 == 1 &&
       (uVar15 = (**(code **)(*param_1 + 0x890))(param_1), (uVar15 & 1) == 0)))))) {
    *(undefined1 *)(param_1 + 0x173) = 1;
    FUN_00a69e20(param_1,plVar17);
  }
  return;
}


