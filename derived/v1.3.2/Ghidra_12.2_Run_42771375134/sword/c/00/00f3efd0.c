/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f3efd0; name: FUN_00f3efd0
 */


void FUN_00f3efd0(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  float fVar14;
  int iVar15;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long local_48;
  
  puVar6 = PTR_DAT_027194d8;
  if (*(char *)(param_1 + 0x755) == '\0') {
    return;
  }
  if (*(char *)(param_2 + 0x568) == '\0') {
    return;
  }
  plVar9 = (long *)FUN_00df1bc0(*(undefined8 *)PTR_DAT_027194d8,&local_60);
  fVar14 = (float)(**(code **)(*plVar9 + 0x178))(0,plVar9,PTR_DAT_0271e870);
  if (fVar14 == *(float *)PTR_DAT_0271ecd0) {
    return;
  }
  lVar10 = FUN_00df1bc0(*(undefined8 *)puVar6,&local_60);
  if (*(long **)(lVar10 + 0x1f0) == *(long **)(lVar10 + 0x1e8)) {
    uVar11 = FUN_00df2390(0x50);
  }
  else {
    uVar11 = FUN_00df2390(**(long **)(lVar10 + 0x1e8) + 0x50);
  }
  if ((uVar11 & 1) == 0) {
    lVar10 = FUN_00df1bc0(*(undefined8 *)puVar6,&local_60);
    if (*(long **)(lVar10 + 0x1f0) == *(long **)(lVar10 + 0x1e8)) {
      uVar11 = FUN_00f37330(0x50);
    }
    else {
      uVar11 = FUN_00f37330(**(long **)(lVar10 + 0x1e8) + 0x50);
    }
    if ((uVar11 & 1) == 0) {
      return;
    }
  }
  local_60 = 0xf64c03c0cd3e3002;
  pcStack_58 = "Play_Prop_Gimmick_Get_Baloon";
  local_50 = 0x1c;
  local_48 = 0;
  FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  lVar10 = *(long *)PTR_DAT_02710840;
  uVar7 = FUN_010247a0(lVar10 + 0x390,PTR_DAT_02720980);
  FUN_01023770(lVar10 + 0x390,uVar7,0);
  *(int *)(param_1 + 0x760) = *(int *)(param_1 + 0x760) + 1;
  FUN_00f3f330(param_2);
  lVar10 = FUN_00df1bc0(*(undefined8 *)puVar6,&local_60);
  if (*(long **)(lVar10 + 0x1f0) == *(long **)(lVar10 + 0x1e8)) {
    uVar11 = FUN_00df2390(0x50);
  }
  else {
    uVar11 = FUN_00df2390(**(long **)(lVar10 + 0x1e8) + 0x50);
  }
  if ((uVar11 & 1) == 0) goto LAB_00f3f2e4;
  plVar12 = (long *)plVar9[0x3e];
  plVar5 = (long *)plVar9[0x3d];
  do {
    if (plVar5 == plVar12) {
      lVar10 = 0;
      break;
    }
    lVar10 = *plVar5;
    uVar11 = FUN_00df2390(lVar10 + 0x50);
    plVar5 = plVar5 + 1;
  } while ((uVar11 & 1) == 0);
  uVar11 = FUN_00debee0(lVar10);
  iVar15 = *(int *)(param_1 + 0x470);
  if ((uVar11 & 1) == 0) {
    FUN_00debeb0((float)iVar15,*(undefined4 *)(param_1 + 0x490),lVar10);
    lVar10 = plVar9[0xb1];
    if (lVar10 != 0) goto LAB_00f3f21c;
LAB_00f3f28c:
    lVar13 = 0;
  }
  else {
    uVar8 = FUN_00de7f00(lVar10);
    FUN_00debf20((float)iVar15,lVar10,~uVar8 & 1);
    lVar10 = plVar9[0xb1];
    if (lVar10 == 0) goto LAB_00f3f28c;
LAB_00f3f21c:
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))((long *)(lVar10 + 0x48));
    if (*(int *)(lVar10 + 0x54) == 0) goto LAB_00f3f28c;
    piVar1 = (int *)(lVar10 + 0x54);
    iVar15 = *(int *)(lVar10 + 0x54);
    while( true ) {
      plVar12 = *(long **)(lVar10 + 0x58);
      plVar9 = (long *)FUN_0156b190();
      lVar13 = 0;
      if (plVar12 == (long *)0x0) break;
      while (plVar12 != plVar9) {
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) {
          lVar13 = 0;
          goto LAB_00f3f290;
        }
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar15) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar13 = 0;
          if (*(long *)(lVar10 + 0x60) != 0) {
            lVar13 = *(long *)(lVar10 + 0x60) + -0x50;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      lVar13 = 0;
      iVar15 = iVar2;
      if (iVar2 == 0) break;
    }
  }
LAB_00f3f290:
  local_60 = 0x234c36021969e22c;
  FUN_00dc04c0(lVar13,&local_60,1,0,0);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
LAB_00f3f2e4:
  *(float *)(param_1 + 0x768) = *(float *)(param_1 + 0x4d0) + *(float *)(param_1 + 0x768);
  return;
}


