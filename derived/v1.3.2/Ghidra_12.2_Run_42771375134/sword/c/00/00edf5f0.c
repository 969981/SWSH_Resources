/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00edf5f0; name: FUN_00edf5f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00edf5f0(long param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long local_48;
  undefined8 local_40;
  uint local_38;
  
  local_38 = local_38 & 0xffffff00;
  local_40 = 0;
  *(undefined8 *)(param_1 + 0x240) = 0xffffffff00000008;
  *(undefined8 *)(param_1 + 0x248) = 0x6ffffffff;
  *(undefined2 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0xffffffff;
  *(undefined8 *)(param_1 + 600) = 0;
  if (*(long *)(param_1 + 0x260) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x260) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  *(undefined8 *)(param_1 + 0x260) = 0;
  if (*(long *)(param_1 + 0x268) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x268) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x268) = 0;
  }
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(uint *)(param_1 + 0x278) = local_38;
  *(undefined8 *)(param_1 + 0x270) = local_40;
  *(undefined8 *)(param_1 + 0x27c) = 0x100000003;
  puVar1 = (undefined4 *)(param_1 + 0x240);
  if (*(long *)(param_1 + 0x288) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x288) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x288) = 0;
  }
  *(uint *)(param_1 + 0x244) = (uint)*(ushort *)(param_1 + 0xe0);
  *(undefined1 *)(param_1 + 0x254) = 1;
  *(undefined8 *)(param_1 + 0x288) = 0;
  puVar5 = PTR_DAT_02710848;
  if (*(int *)(param_1 + 0xdc) == 0) {
    lVar13 = *(long *)(param_1 + 0x290);
    *(undefined4 *)(param_1 + 0x240) = 2;
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    lVar8 = *(long *)(param_1 + 0x268);
    *(long *)(param_1 + 0x268) = lVar13;
    if (lVar8 == 0) goto LAB_00edf7bc;
    plVar12 = (long *)(lVar8 + 0x48);
    pcVar10 = *(code **)(*plVar12 + 0x18);
  }
  else {
    if (*(short *)(param_1 + 0xe2) != 0) {
      lVar13 = *(long *)(param_1 + 0x290);
      *(undefined4 *)(param_1 + 0x240) = 6;
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      lVar8 = *(long *)(param_1 + 0x268);
      *(long *)(param_1 + 0x268) = lVar13;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
      }
      *(uint *)(param_1 + 0x248) = *(ushort *)(param_1 + 0xe2) - 1;
      goto LAB_00edf7bc;
    }
    *puVar1 = 0;
    lVar13 = *(long *)(*(long *)puVar5 + 0x90);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    lVar8 = *(long *)(lVar13 + 0x58);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x260) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x260) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x260) = 0;
    }
    *(long *)(param_1 + 0x260) = lVar8;
    plVar12 = (long *)(lVar13 + 0x48);
    pcVar10 = *(code **)(*plVar12 + 0x18);
  }
  (*pcVar10)(plVar12);
LAB_00edf7bc:
  lVar13 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  local_40 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x288);
  FUN_00b96170(&local_48,lVar13,local_40,&local_40);
  if (*(long *)(param_1 + 0x238) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x238) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  *(long *)(param_1 + 0x238) = local_48;
  puVar6 = PTR_DAT_02718cd8;
  puVar5 = PTR_DAT_02718cd0;
  if ((local_48 != 0) && (*(int *)(local_48 + 0x54) != 0)) {
    piVar2 = (int *)(local_48 + 0x54);
    iVar11 = *(int *)(local_48 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(local_48 + 0x58);
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          if (((*PTR_DAT_02717528 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_02717528), iVar7 != 0)) {
            uVar9 = FUN_00b8c810();
            *(undefined8 *)PTR_DAT_02717530 = uVar9;
            __cxa_guard_release(PTR_DAT_02717528);
          }
          *(undefined **)puVar6 = PTR_DAT_02717530;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto joined_r0x00edf94c;
          if (plVar12 == (long *)puVar6) break;
          plVar12 = (long *)*plVar12;
        }
        iVar7 = *piVar2;
        if (iVar7 != iVar11) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar8 = *(long *)(local_48 + 0x60);
          if (lVar8 != 0) {
            *(undefined4 **)(lVar8 + 0x6f0) = puVar1;
            (**(code **)(*(long *)(lVar8 + -8) + 0x18))();
            puVar1 = _DAT_00000740;
          }
          goto joined_r0x00edf94c;
        }
        iVar11 = iVar7;
        if (iVar7 == 0) goto joined_r0x00edf94c;
      }
      ClearExclusiveLocal();
      iVar11 = iVar7;
    } while (iVar7 != 0);
  }
joined_r0x00edf94c:
  _DAT_00000740 = puVar1;
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  return;
}


