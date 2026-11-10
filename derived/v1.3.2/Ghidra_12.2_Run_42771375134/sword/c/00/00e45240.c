/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e45240; name: FUN_00e45240
 */


void FUN_00e45240(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long local_48;
  
  lVar11 = *param_2;
  if ((lVar11 == 0) || (*(int *)(lVar11 + 0x54) == 0)) {
    lVar8 = 0;
  }
  else {
    piVar1 = (int *)(lVar11 + 0x54);
    iVar5 = *(int *)(lVar11 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar11 + 0x58);
        plVar6 = (long *)FUN_0156b190();
        lVar8 = 0;
        if (plVar10 == (long *)0x0) goto LAB_00e452d4;
        while (plVar10 != plVar6) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) {
            lVar8 = 0;
            goto LAB_00e452d4;
          }
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar5) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar8 = 0;
          if (*(long *)(lVar11 + 0x60) != 0) {
            lVar8 = *(long *)(lVar11 + 0x60) + -0x50;
          }
          goto LAB_00e452d4;
        }
        lVar8 = 0;
        iVar5 = iVar2;
        if (iVar2 == 0) goto LAB_00e452d4;
      }
      ClearExclusiveLocal();
      lVar8 = 0;
      iVar5 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00e452d4:
  plVar6 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x50))((undefined8 *)(lVar8 + 0x50));
  if (((*PTR_DAT_0271ecf8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0271ecf8), iVar5 != 0))
  {
    uVar9 = FUN_0156b190();
    *(undefined8 *)PTR_DAT_0271ed00 = uVar9;
    __cxa_guard_release(PTR_DAT_0271ecf8);
  }
  for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    lVar11 = lVar8;
    if (plVar6 == (long *)PTR_DAT_0271ed00) goto joined_r0x00e453f0;
  }
  lVar11 = 0;
joined_r0x00e453f0:
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar11 != 0) {
    (**(code **)(*param_1 + 0x10))(&local_48,param_1);
    lVar8 = local_48;
    local_48 = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    lVar7 = *(long *)(lVar11 + 0x4e0);
    *(long *)(lVar11 + 0x4e0) = lVar8;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    lVar11 = *param_2;
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    lVar8 = param_1[0xb1];
    param_1[0xb1] = lVar11;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
  }
  return;
}


