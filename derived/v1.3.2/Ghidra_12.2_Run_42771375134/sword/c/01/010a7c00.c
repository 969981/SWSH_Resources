/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a7c00; name: FUN_010a7c00
 */


void FUN_010a7c00(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long local_40;
  undefined8 local_38;
  
  uVar10 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x288);
  lVar9 = *(long *)(param_2 + 0x60);
  local_38 = uVar10;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  FUN_00b96060(&local_40,lVar9,uVar10,&local_38);
  if (*(long *)(param_1 + 0x380) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x380) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x380) = 0;
  }
  lVar11 = local_40;
  local_40 = 0;
  *(long *)(param_1 + 0x380) = lVar11;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    lVar11 = *(long *)(param_1 + 0x380);
  }
  puVar4 = PTR_DAT_0271b2c8;
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0x54) != 0)) {
    piVar1 = (int *)(lVar11 + 0x54);
    puVar6 = PTR_DAT_0271b2d0;
    iVar8 = *(int *)(lVar11 + 0x54);
    do {
      while( true ) {
        plVar7 = *(long **)(lVar11 + 0x58);
        if (((*puVar4 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(puVar4), puVar6 = PTR_DAT_0271b2d0, iVar5 != 0)) {
          if (((*PTR_DAT_02717528 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), iVar5 != 0)) {
            uVar10 = FUN_00b8c810();
            *(undefined8 *)PTR_DAT_02717530 = uVar10;
            __cxa_guard_release(PTR_DAT_02717528);
          }
          puVar6 = PTR_DAT_0271b2d0;
          *(undefined **)PTR_DAT_0271b2d0 = PTR_DAT_02717530;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar7 == (long *)0x0) goto LAB_010a7de8;
          if (plVar7 == (long *)puVar6) break;
          plVar7 = (long *)*plVar7;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar5;
        if (iVar5 == 0) goto LAB_010a7de8;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar9 = *(long *)(lVar11 + 0x60);
        if (lVar9 != 0) {
          FUN_00b97360(lVar9 + -0x50,param_1 + 0x388);
          (**(code **)(*(long *)(lVar9 + -8) + 0x18))((long *)(lVar9 + -8));
          goto LAB_010a7df4;
        }
        break;
      }
      iVar8 = iVar5;
    } while (iVar5 != 0);
  }
LAB_010a7de8:
  FUN_00b97360(0,param_1 + 0x388);
LAB_010a7df4:
  *(undefined4 *)(param_1 + 0x68) = 4;
  return;
}


