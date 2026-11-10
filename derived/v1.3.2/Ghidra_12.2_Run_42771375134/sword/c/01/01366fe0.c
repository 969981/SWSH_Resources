/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01366fe0; name: FUN_01366fe0
 */


void FUN_01366fe0(long param_1,byte param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 local_48;
  
  plVar2 = *(long **)(param_1 + 0xb8);
  plVar3 = *(long **)(param_1 + 0xc0);
  *(byte *)(param_1 + 0xb0) = param_2 & 1;
  puVar9 = PTR_DAT_02715080;
  puVar8 = PTR_DAT_02715078;
  pbVar6 = PTR_DAT_02715078;
  puVar7 = (undefined8 *)PTR_DAT_02715080;
  for (; PTR_DAT_02715078 = pbVar6, PTR_DAT_02715080 = (undefined *)puVar7, plVar2 != plVar3;
      plVar2 = plVar2 + 2) {
    lVar16 = *plVar2;
    if (lVar16 != 0) {
      plVar15 = (long *)(lVar16 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      lVar11 = plVar2[1];
      if (*(int *)(lVar16 + 0x54) != 0) {
        piVar1 = (int *)(lVar16 + 0x54);
        iVar13 = *(int *)(lVar16 + 0x54);
        do {
          while( true ) {
            plVar14 = *(long **)(lVar16 + 0x58);
            if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
              uVar12 = FUN_00a87090();
              *(undefined8 *)puVar9 = uVar12;
              __cxa_guard_release(puVar8);
            }
            while( true ) {
              if (plVar14 == (long *)0x0) goto LAB_0136711c;
              if (plVar14 == (long *)puVar9) break;
              plVar14 = (long *)*plVar14;
            }
            iVar10 = *piVar1;
            if (iVar10 != iVar13) break;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar16 = *(long *)(lVar16 + 0x60);
              if (lVar16 != 0) {
                local_48 = 0;
                FUN_007273c0(lVar11,*(undefined1 *)(param_1 + 0xb0),&local_48);
                plVar14 = (long *)(lVar16 + -8);
                (**(code **)(*plVar14 + 0x18))(plVar14);
              }
              goto LAB_0136711c;
            }
            iVar13 = iVar10;
            if (iVar10 == 0) goto LAB_0136711c;
          }
          ClearExclusiveLocal();
          iVar13 = iVar10;
        } while (iVar10 != 0);
      }
LAB_0136711c:
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    pbVar6 = PTR_DAT_02715078;
    puVar7 = (undefined8 *)PTR_DAT_02715080;
  }
  plVar2 = *(long **)(param_1 + 0xe8);
  plVar3 = *(long **)(param_1 + 0xf0);
  do {
    if (plVar2 == plVar3) {
      return;
    }
    lVar16 = *plVar2;
    if (lVar16 != 0) {
      plVar15 = (long *)(lVar16 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      lVar11 = plVar2[1];
      if (*(int *)(lVar16 + 0x54) != 0) {
        piVar1 = (int *)(lVar16 + 0x54);
        iVar13 = *(int *)(lVar16 + 0x54);
        do {
          while( true ) {
            plVar14 = *(long **)(lVar16 + 0x58);
            if (((*pbVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar6), iVar10 != 0)) {
              uVar12 = FUN_00a87090();
              *puVar7 = uVar12;
              __cxa_guard_release(pbVar6);
            }
            while( true ) {
              if (plVar14 == (long *)0x0) goto LAB_01367244;
              if (plVar14 == puVar7) break;
              plVar14 = (long *)*plVar14;
            }
            iVar10 = *piVar1;
            if (iVar10 != iVar13) break;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar16 = *(long *)(lVar16 + 0x60);
              if (lVar16 != 0) {
                FUN_007947b0(lVar11,*(undefined1 *)(param_1 + 0xb0));
                plVar14 = (long *)(lVar16 + -8);
                (**(code **)(*plVar14 + 0x18))(plVar14);
              }
              goto LAB_01367244;
            }
            iVar13 = iVar10;
            if (iVar10 == 0) goto LAB_01367244;
          }
          ClearExclusiveLocal();
          iVar13 = iVar10;
        } while (iVar10 != 0);
      }
LAB_01367244:
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    plVar2 = plVar2 + 2;
  } while( true );
}


