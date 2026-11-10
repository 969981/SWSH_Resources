/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013880a0; name: FUN_013880a0
 */


void FUN_013880a0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  code *pcVar14;
  undefined *puVar15;
  int iVar16;
  byte *pbVar17;
  long *plVar18;
  long local_38;
  long local_30;
  undefined1 auStack_28 [8];
  
  uVar9 = FUN_012dc470();
  if ((uVar9 & 1) == 0) {
    FUN_012dc480(param_1,1);
  }
  lVar10 = FUN_013879c0(*(undefined8 *)(param_1 + 200),auStack_28);
  if (lVar10 != 0) {
    lVar13 = *(long *)(param_1 + 0x68);
    if ((lVar13 != 0) && (*(int *)(lVar13 + 0x54) != 0)) {
      piVar1 = (int *)(lVar13 + 0x54);
      puVar15 = PTR_DAT_02715080;
      pbVar17 = PTR_DAT_02715078;
      iVar16 = *(int *)(lVar13 + 0x54);
      do {
        while( true ) {
          plVar18 = *(long **)(lVar13 + 0x58);
          if ((*pbVar17 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(PTR_DAT_02715078);
            pbVar17 = PTR_DAT_02715078;
            puVar15 = PTR_DAT_02715080;
            if (iVar7 != 0) {
              uVar11 = FUN_00a87090();
              *(undefined8 *)PTR_DAT_02715080 = uVar11;
              __cxa_guard_release(PTR_DAT_02715078);
              pbVar17 = PTR_DAT_02715078;
              puVar15 = PTR_DAT_02715080;
            }
          }
          while( true ) {
            if (plVar18 == (long *)0x0) goto LAB_013881cc;
            if (plVar18 == (long *)puVar15) break;
            plVar18 = (long *)*plVar18;
          }
          iVar7 = *piVar1;
          if (iVar7 != iVar16) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            local_30 = 0;
            if (*(long *)(lVar13 + 0x60) != 0) {
              local_30 = *(long *)(lVar13 + 0x60) + -0x50;
            }
            goto LAB_013881d0;
          }
          iVar16 = iVar7;
          if (iVar7 == 0) goto LAB_013881cc;
        }
        ClearExclusiveLocal();
        iVar16 = iVar7;
      } while (iVar7 != 0);
    }
LAB_013881cc:
    local_30 = 0;
LAB_013881d0:
    FUN_01389c70(lVar10,&local_30);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    lVar13 = *(long *)(param_1 + 0x68);
    if ((lVar13 != 0) && (*(int *)(lVar13 + 0x54) != 0)) {
      piVar1 = (int *)(lVar13 + 0x54);
      puVar15 = PTR_DAT_02715080;
      pbVar17 = PTR_DAT_02715078;
      iVar16 = *(int *)(lVar13 + 0x54);
      do {
        while( true ) {
          plVar18 = *(long **)(lVar13 + 0x58);
          if ((*pbVar17 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(PTR_DAT_02715078);
            pbVar17 = PTR_DAT_02715078;
            puVar15 = PTR_DAT_02715080;
            if (iVar7 != 0) {
              uVar11 = FUN_00a87090();
              *(undefined8 *)PTR_DAT_02715080 = uVar11;
              __cxa_guard_release(PTR_DAT_02715078);
              pbVar17 = PTR_DAT_02715078;
              puVar15 = PTR_DAT_02715080;
            }
          }
          while( true ) {
            if (plVar18 == (long *)0x0) goto LAB_013882e4;
            if (plVar18 == (long *)puVar15) break;
            plVar18 = (long *)*plVar18;
          }
          iVar7 = *piVar1;
          if (iVar7 != iVar16) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            local_38 = 0;
            if (*(long *)(lVar13 + 0x60) != 0) {
              local_38 = *(long *)(lVar13 + 0x60) + -0x50;
            }
            goto LAB_013882e8;
          }
          iVar16 = iVar7;
          if (iVar7 == 0) goto LAB_013882e4;
        }
        ClearExclusiveLocal();
        iVar16 = iVar7;
      } while (iVar7 != 0);
    }
LAB_013882e4:
    local_38 = 0;
LAB_013882e8:
    uVar8 = FUN_01389e30(lVar10,&local_38);
    *(undefined4 *)(param_1 + 0x228) = uVar8;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x224) = 1;
  pcVar14 = *(code **)(param_1 + 0xd8);
  if (pcVar14 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (*pcVar14)(param_1 + 0xf0);
  }
  puVar5 = PTR_LAB_02728c18;
  puVar4 = PTR_LAB_02728c10;
  puVar15 = PTR_LAB_02728c08;
  *(long *)(param_1 + 0xf0) = param_1;
  puVar6 = PTR_LAB_02728c20;
  *(undefined **)(param_1 + 0xf8) = puVar15;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined **)(param_1 + 0xd0) = puVar4;
  *(undefined **)(param_1 + 0xd8) = puVar5;
  puVar15 = PTR_LAB_02728c28;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined **)(param_1 + 0xe0) = puVar6;
  *(undefined **)(param_1 + 0xe8) = puVar15;
  puVar12 = (undefined8 *)FUN_012dcaa0(param_1);
  puVar15 = PTR_DAT_02715420;
  *(undefined8 *)(param_1 + 0xa8) = puVar12[1];
  *(undefined8 *)(param_1 + 0xa0) = *puVar12;
  uVar11 = *(undefined8 *)(puVar15 + 8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)puVar15;
  *(undefined8 *)(param_1 + 0xb8) = uVar11;
  return;
}


