/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aae1e0; name: FUN_00aae1e0
 */


void FUN_00aae1e0(long param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long local_40;
  long local_38;
  
  lVar10 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  local_40 = *(long *)(param_1 + 0x4b8);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
  }
  FUN_00c7a630(&local_38,lVar10,&local_40);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  lVar10 = local_38;
  puVar4 = PTR_DAT_02719750;
  if ((local_38 != 0) && (*(int *)(local_38 + 0x54) != 0)) {
    piVar1 = (int *)(local_38 + 0x54);
    puVar7 = PTR_DAT_02719758;
    iVar8 = *(int *)(local_38 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar10 + 0x58);
        if (((*puVar4 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(puVar4), puVar7 = PTR_DAT_02719758, iVar5 != 0)) {
          uVar6 = FUN_00706e40();
          *(undefined8 *)PTR_DAT_02719758 = uVar6;
          __cxa_guard_release(puVar4);
          puVar7 = PTR_DAT_02719758;
        }
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_00aae38c;
          if (plVar9 == (long *)puVar7) break;
          plVar9 = (long *)*plVar9;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar5;
        if (iVar5 == 0) goto LAB_00aae38c;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar10 = *(long *)(lVar10 + 0x60);
        if (lVar10 != 0) {
          FUN_00c68f60(lVar10 + -0x50,param_2,param_3);
          (**(code **)(*(long *)(lVar10 + -8) + 0x18))((long *)(lVar10 + -8));
          goto joined_r0x00aae384;
        }
        break;
      }
      iVar8 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00aae38c:
  FUN_00c68f60(0,param_2,param_3);
joined_r0x00aae384:
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


