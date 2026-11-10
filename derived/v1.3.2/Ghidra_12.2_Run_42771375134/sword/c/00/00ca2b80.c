/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca2b80; name: FUN_00ca2b80
 */


undefined1  [16] FUN_00ca2b80(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  long local_38;
  long local_28;
  
  uVar9 = *param_1;
  local_38 = *param_2;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00c7a400(&local_28,uVar9,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar10 = local_28;
  puVar4 = PTR_DAT_027150a8;
  if (local_28 == 0) {
    auVar12 = ZEXT816(0);
  }
  else {
    if (*(int *)(local_28 + 0x54) == 0) {
      auVar12 = ZEXT816(0);
    }
    else {
      if ((local_28 != 0) && (*(int *)(local_28 + 0x54) != 0)) {
        piVar1 = (int *)(local_28 + 0x54);
        puVar6 = PTR_DAT_027150b0;
        iVar7 = *(int *)(local_28 + 0x54);
        do {
          while( true ) {
            plVar8 = *(long **)(lVar10 + 0x58);
            if (((*puVar4 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(puVar4), puVar6 = PTR_DAT_027150b0, iVar5 != 0)) {
              uVar9 = FUN_00706e40();
              *(undefined8 *)PTR_DAT_027150b0 = uVar9;
              __cxa_guard_release(puVar4);
              puVar6 = PTR_DAT_027150b0;
            }
            while( true ) {
              if (plVar8 == (long *)0x0) goto LAB_00ca2d24;
              if (plVar8 == (long *)puVar6) break;
              plVar8 = (long *)*plVar8;
            }
            iVar5 = *piVar1;
            if (iVar5 == iVar7) break;
            ClearExclusiveLocal();
            iVar7 = iVar5;
            if (iVar5 == 0) goto LAB_00ca2d24;
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar10 = *(long *)(lVar10 + 0x60);
            if (lVar10 != 0) {
              auVar11 = FUN_0069c700(lVar10 + -0x50,param_3);
              uVar9 = auVar11._8_8_;
              (**(code **)(*(long *)(lVar10 + -8) + 0x18))((long *)(lVar10 + -8));
              auVar12._8_8_ = uVar9;
              auVar12._0_8_ = auVar11._0_8_;
              goto joined_r0x00ca2d1c;
            }
            break;
          }
          iVar7 = iVar5;
        } while (iVar5 != 0);
      }
LAB_00ca2d24:
      auVar12 = FUN_0069c700(0,param_3);
    }
joined_r0x00ca2d1c:
    if (local_28 != 0) {
      uVar13 = auVar12._8_8_;
      uVar9 = auVar12._0_8_;
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      auVar12._8_8_ = uVar13;
      auVar12._0_8_ = uVar9;
    }
  }
  return auVar12;
}


