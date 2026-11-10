/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c764f0; name: FUN_00c764f0
 */


void FUN_00c764f0(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long local_18;
  
  puVar5 = PTR_DAT_02719758;
  lVar9 = *param_2;
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
    piVar1 = (int *)(lVar9 + 0x54);
    pbVar8 = PTR_DAT_02719750;
    iVar10 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar9 + 0x58);
        if (((*pbVar8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(pbVar8), pbVar8 = PTR_DAT_02719750, iVar6 != 0)) {
          uVar7 = FUN_00706e40();
          *(undefined8 *)puVar5 = uVar7;
          __cxa_guard_release(PTR_DAT_02719750);
          pbVar8 = PTR_DAT_02719750;
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto joined_r0x00c76610;
          if (plVar11 == (long *)puVar5) break;
          plVar11 = (long *)*plVar11;
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar10) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar4 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar4 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          goto joined_r0x00c7667c;
        }
        iVar10 = iVar6;
        if (iVar6 == 0) goto joined_r0x00c76610;
      }
      ClearExclusiveLocal();
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
joined_r0x00c76610:
  lVar4 = 0;
joined_r0x00c7667c:
  local_18 = param_1;
  if (param_1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  }
  FUN_00c6a6e0(lVar4,&local_18);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    local_18 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


