/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef2050; name: FUN_00ef2050
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ef2050(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long local_28;
  
  lVar11 = *(long *)(param_2 + 0x68);
  if (lVar11 == 0) {
    FUN_00ed9a40(&local_28,0);
    lVar11 = *(long *)(param_1 + 0x90);
  }
  else {
    plVar12 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_00ed9a40(&local_28,lVar11);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar11 = *(long *)(param_1 + 0x90);
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar2 = local_28;
  puVar5 = PTR_DAT_02720438;
  if ((local_28 != 0) && (*(int *)(local_28 + 0x54) != 0)) {
    piVar1 = (int *)(local_28 + 0x54);
    puVar9 = PTR_DAT_02720440;
    iVar10 = *(int *)(local_28 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar2 + 0x58);
        if (((*puVar5 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(puVar5), puVar9 = PTR_DAT_02720440, iVar6 != 0)) {
          uVar7 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720440 = uVar7;
          __cxa_guard_release(puVar5);
          puVar9 = PTR_DAT_02720440;
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto joined_r0x00ef21d4;
          if (plVar12 == (long *)puVar9) break;
          plVar12 = (long *)*plVar12;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar6;
        if (iVar6 == 0) goto joined_r0x00ef21d4;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar8 = *(long *)(lVar2 + 0x60);
        lVar2 = 0;
        if (lVar8 != 0) {
          lVar2 = lVar8 + -0x50;
        }
        *(undefined4 *)(lVar2 + 0x88) = 0;
        goto joined_r0x00ef2268;
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
joined_r0x00ef21d4:
  _DAT_00000088 = 0;
  lVar2 = 0;
joined_r0x00ef2268:
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar2 + 0x90);
  *(long *)(lVar2 + 0x90) = lVar11;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  *(undefined1 *)(lVar2 + 0x98) = 0;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


