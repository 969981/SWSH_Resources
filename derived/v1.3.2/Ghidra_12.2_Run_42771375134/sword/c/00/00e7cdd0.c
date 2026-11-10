/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7cdd0; name: FUN_00e7cdd0
 */


undefined1  [16] FUN_00e7cdd0(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  local_28 = param_2;
  FUN_00e7b880(&local_30);
  lVar7 = local_30;
  puVar4 = PTR_DAT_027150a8;
  if (local_30 == 0) {
    auVar12 = ZEXT816(0x3f800000);
  }
  else {
    if (*(int *)(local_30 + 0x54) == 0) {
      auVar12 = ZEXT816(0x3f800000);
    }
    else {
      if ((local_30 == 0) || (*(int *)(local_30 + 0x54) == 0)) {
LAB_00e7cef0:
        lVar11 = 0;
      }
      else {
        piVar1 = (int *)(local_30 + 0x54);
        puVar8 = PTR_DAT_027150b0;
        iVar9 = *(int *)(local_30 + 0x54);
        do {
          while( true ) {
            plVar10 = *(long **)(lVar7 + 0x58);
            if ((*puVar4 & 1) == 0) {
              iVar5 = __cxa_guard_acquire(puVar4);
              puVar8 = PTR_DAT_027150b0;
              if (iVar5 != 0) {
                uVar6 = FUN_00706e40();
                *(undefined8 *)PTR_DAT_027150b0 = uVar6;
                __cxa_guard_release(puVar4);
                puVar8 = PTR_DAT_027150b0;
              }
            }
            while( true ) {
              if (plVar10 == (long *)0x0) goto LAB_00e7cef0;
              if (plVar10 == (long *)puVar8) break;
              plVar10 = (long *)*plVar10;
            }
            iVar5 = *piVar1;
            if (iVar5 != iVar9) break;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar7 = *(long *)(lVar7 + 0x60);
              lVar11 = 0;
              if (lVar7 != 0) {
                lVar11 = lVar7 + -0x50;
              }
              goto LAB_00e7cef4;
            }
            lVar11 = 0;
            iVar9 = iVar5;
            if (iVar5 == 0) goto LAB_00e7cef4;
          }
          ClearExclusiveLocal();
          lVar11 = 0;
          iVar9 = iVar5;
        } while (iVar5 != 0);
      }
LAB_00e7cef4:
      local_38 = FUN_0069c990(lVar11,&local_28);
      auVar12 = FUN_006b9480(&local_38);
      uVar13 = auVar12._8_8_;
      uVar6 = auVar12._0_8_;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
        auVar12._8_8_ = uVar13;
        auVar12._0_8_ = uVar6;
      }
    }
    uVar6 = auVar12._8_8_;
    uVar13 = auVar12._0_8_;
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      auVar12._8_8_ = uVar6;
      auVar12._0_8_ = uVar13;
    }
  }
  return auVar12;
}


