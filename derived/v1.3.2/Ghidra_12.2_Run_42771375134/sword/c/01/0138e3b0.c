/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138e3b0; name: FUN_0138e3b0
 */


void FUN_0138e3b0(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined1 auStack_48 [4];
  int local_44;
  
  puVar6 = PTR_DAT_02715080;
  puVar5 = PTR_DAT_02715078;
  plVar12 = (long *)param_1[0x79];
  plVar13 = (long *)param_1[0x7a];
  do {
    if (plVar12 == plVar13) {
      return;
    }
    lVar11 = *plVar12;
    if ((lVar11 == 0) || (iVar7 = *(int *)(lVar11 + 0x54), iVar7 == 0)) {
      lVar10 = 0;
    }
    else {
      piVar1 = (int *)(lVar11 + 0x54);
      do {
        while( true ) {
          puVar9 = *(undefined8 **)(lVar11 + 0x58);
          iVar4 = iVar7;
          if ((*puVar5 & 1) == 0) {
            local_44 = iVar7;
            iVar7 = __cxa_guard_acquire(puVar5);
            iVar4 = local_44;
            if (iVar7 != 0) {
              uVar8 = FUN_00a87090();
              *(undefined8 *)puVar6 = uVar8;
              __cxa_guard_release(puVar5);
              iVar4 = local_44;
            }
          }
          lVar10 = 0;
          if (puVar9 == (undefined8 *)0x0) goto LAB_0138e4bc;
          while (puVar9 != (undefined8 *)puVar6) {
            puVar9 = (undefined8 *)*puVar9;
            if (puVar9 == (undefined8 *)0x0) {
              lVar10 = 0;
              goto LAB_0138e4bc;
            }
          }
          iVar7 = *piVar1;
          if (iVar7 != iVar4) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar10 = 0;
            if (*(long *)(lVar11 + 0x60) != 0) {
              lVar10 = *(long *)(lVar11 + 0x60) + -0x50;
            }
            goto LAB_0138e4bc;
          }
          lVar10 = 0;
          if (iVar7 == 0) goto LAB_0138e4bc;
        }
        ClearExclusiveLocal();
        lVar10 = 0;
      } while (iVar7 != 0);
    }
LAB_0138e4bc:
    lVar11 = FUN_01394640(lVar10,auStack_48);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    if (lVar11 != 0) {
      (**(code **)(*param_1 + 0xc0))(param_1);
      FUN_0138b200(lVar11);
    }
    plVar12 = plVar12 + 1;
  } while( true );
}


