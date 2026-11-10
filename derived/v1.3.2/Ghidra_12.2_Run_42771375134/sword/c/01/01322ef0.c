/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01322ef0; name: FUN_01322ef0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01322ef0(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  
  puVar7 = PTR_DAT_02715080;
  puVar6 = PTR_DAT_02715078;
  plVar2 = *(long **)(param_1 + 0x58);
  plVar3 = *(long **)(param_1 + 0x60);
joined_r0x01322f10:
  do {
    if (plVar2 == plVar3) {
      return;
    }
    lVar10 = *(long *)(*plVar2 + 0x68);
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
      piVar1 = (int *)(lVar10 + 0x54);
      iVar11 = *(int *)(lVar10 + 0x54);
      do {
        plVar12 = *(long **)(lVar10 + 0x58);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          uVar9 = FUN_00a87090();
          *(undefined8 *)puVar7 = uVar9;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_01323018;
          if (plVar12 == (long *)puVar7) break;
          plVar12 = (long *)*plVar12;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar10 = *(long *)(lVar10 + 0x60);
            if (lVar10 != 0) {
              plVar2[3] = *(long *)(lVar10 + 0x68);
              plVar2[2] = *(long *)(lVar10 + 0x60);
              (**(code **)(*(long *)(lVar10 + -8) + 0x18))();
              plVar2 = plVar2 + 4;
              goto joined_r0x01322f10;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01323018:
    plVar2[3] = _DAT_000000b8;
    plVar2[2] = _DAT_000000b0;
    plVar2 = plVar2 + 4;
  } while( true );
}


