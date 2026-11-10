/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00794450; name: FUN_00794450
 */


void FUN_00794450(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  undefined1 auStack_38 [8];
  
  *(undefined8 *)(param_1 + 0x230) = *param_2;
  *(undefined8 *)(param_1 + 0x238) = param_2[1];
  *(undefined8 *)(param_1 + 0x240) = param_2[2];
  lVar11 = param_2[3];
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(param_1 + 0x248);
  *(long *)(param_1 + 0x248) = lVar11;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  puVar4 = PTR_DAT_02715078;
  if (**(char **)(param_1 + 0x238) == '\0') {
    *(undefined8 *)(param_1 + 0x250) = 0;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x68);
    if ((lVar11 == 0) || (*(int *)(lVar11 + 0x54) == 0)) {
LAB_007945ac:
      lVar7 = 0;
    }
    else {
      piVar1 = (int *)(lVar11 + 0x54);
      puVar9 = PTR_DAT_02715080;
      iVar6 = *(int *)(lVar11 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar11 + 0x58);
          if ((*puVar4 & 1) == 0) {
            iVar5 = __cxa_guard_acquire(puVar4);
            puVar9 = PTR_DAT_02715080;
            if (iVar5 != 0) {
              uVar8 = FUN_00a87090();
              *(undefined8 *)PTR_DAT_02715080 = uVar8;
              __cxa_guard_release(puVar4);
              puVar9 = PTR_DAT_02715080;
            }
          }
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_007945ac;
            if (plVar10 == (long *)puVar9) break;
            plVar10 = (long *)*plVar10;
          }
          iVar5 = *piVar1;
          if (iVar5 != iVar6) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar7 = 0;
            if (*(long *)(lVar11 + 0x60) != 0) {
              lVar7 = *(long *)(lVar11 + 0x60) + -0x50;
            }
            goto LAB_007945b0;
          }
          lVar7 = 0;
          iVar6 = iVar5;
          if (iVar5 == 0) goto LAB_007945b0;
        }
        ClearExclusiveLocal();
        lVar7 = 0;
        iVar6 = iVar5;
      } while (iVar5 != 0);
    }
LAB_007945b0:
    lVar11 = FUN_007959b0(lVar7,auStack_38);
    lVar11 = *(long *)(lVar11 + 0x350);
    iVar6 = FUN_00722fb0(lVar11,param_1 + 0x230);
    if (iVar6 < 0) {
      *(undefined8 *)(param_1 + 0x250) = 0;
    }
    else {
      *(long *)(param_1 + 0x250) = *(long *)(lVar11 + 0x1b8) + (long)iVar6 * 0x130;
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
  }
  return;
}


