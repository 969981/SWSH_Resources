/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2f3d0; name: FUN_00f2f3d0
 */


void FUN_00f2f3d0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar6 = PTR_DAT_027194d8;
  if (*(char *)(param_1 + 0x755) == '\0') {
    return;
  }
  plVar7 = (long *)FUN_00df1bc0(*(undefined8 *)PTR_DAT_027194d8,auStack_58);
  if (*(int *)(param_1 + 0x764) != 0) {
    return;
  }
  lVar8 = FUN_00df1bc0(*(undefined8 *)puVar6,auStack_50);
  plVar10 = *(long **)(lVar8 + 0x1f0);
  plVar5 = *(long **)(lVar8 + 0x1e8);
  do {
    if (plVar5 == plVar10) goto LAB_00f2f458;
    lVar8 = *plVar5;
    uVar9 = FUN_00df2390(lVar8 + 0x50);
    plVar5 = plVar5 + 1;
  } while ((uVar9 & 1) == 0);
  uVar9 = FUN_00debf90(lVar8);
  if ((uVar9 & 1) != 0) {
    return;
  }
LAB_00f2f458:
  fVar13 = (float)(**(code **)(*plVar7 + 0x178))(0,plVar7,PTR_DAT_0271e870);
  if (fVar13 < *(float *)(param_1 + 0x4b4)) {
    return;
  }
  lVar8 = FUN_00df1bc0(*(undefined8 *)puVar6,auStack_48);
  if (*(long **)(lVar8 + 0x1f0) == *(long **)(lVar8 + 0x1e8)) {
    uVar9 = FUN_00df2390(0x50);
  }
  else {
    uVar9 = FUN_00df2390(**(long **)(lVar8 + 0x1e8) + 0x50);
  }
  if ((uVar9 & 1) == 0) {
    return;
  }
  FUN_00f35450(param_1,1);
  *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_1 + 0x4b0);
  FUN_00e9e5e0(plVar7);
  lVar8 = plVar7[0xb1];
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))((long *)(lVar8 + 0x48));
    if (*(int *)(lVar8 + 0x54) != 0) {
      piVar1 = (int *)(lVar8 + 0x54);
      iVar12 = *(int *)(lVar8 + 0x54);
      while( true ) {
        plVar10 = *(long **)(lVar8 + 0x58);
        plVar7 = (long *)FUN_0156b190();
        lVar11 = 0;
        if (plVar10 == (long *)0x0) break;
        while (plVar10 != plVar7) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) {
            lVar11 = 0;
            goto LAB_00f2f554;
          }
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar12) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = 0;
            if (*(long *)(lVar8 + 0x60) != 0) {
              lVar11 = *(long *)(lVar8 + 0x60) + -0x50;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        lVar11 = 0;
        iVar12 = iVar2;
        if (iVar2 == 0) break;
      }
      goto LAB_00f2f554;
    }
  }
  lVar11 = 0;
LAB_00f2f554:
  local_60 = 0x234c36021969e22c;
  FUN_00dc0720(lVar11,&local_60);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


