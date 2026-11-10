/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6f6e0; name: FUN_00c6f6e0
 */


void FUN_00c6f6e0(long *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined **local_60;
  undefined8 uStack_58;
  undefined ***local_40;
  long local_28;
  
  (**(code **)(*param_1 + 0x98))(&local_28);
  lVar14 = local_28;
  puVar4 = PTR_DAT_02715078;
  if ((local_28 != 0) && (*(int *)(local_28 + 0x54) != 0)) {
    if ((local_28 != 0) && (*(int *)(local_28 + 0x54) != 0)) {
      piVar1 = (int *)(local_28 + 0x54);
      puVar11 = PTR_DAT_02715080;
      iVar6 = *(int *)(local_28 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(lVar14 + 0x58);
          if (((*puVar4 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(puVar4), puVar11 = PTR_DAT_02715080, iVar5 != 0)) {
            uVar9 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar9;
            __cxa_guard_release(puVar4);
            puVar11 = PTR_DAT_02715080;
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_00c6f830;
            if (plVar12 == (long *)puVar11) break;
            plVar12 = (long *)*plVar12;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar6) break;
          ClearExclusiveLocal();
          iVar6 = iVar5;
          if (iVar5 == 0) goto LAB_00c6f830;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x60);
          if (lVar14 != 0) {
            FUN_00c6f970(lVar14 + -0x50,param_2);
            (**(code **)(*(long *)(lVar14 + -8) + 0x18))((long *)(lVar14 + -8));
            goto LAB_00c6f83c;
          }
          break;
        }
        iVar6 = iVar5;
      } while (iVar5 != 0);
    }
LAB_00c6f830:
    FUN_00c6f970(0,param_2);
  }
LAB_00c6f83c:
  local_60 = &PTR_LAB_02640008;
  uStack_58 = param_2;
  local_40 = &local_60;
  FUN_00c6faf0(param_1,&local_60);
  if (&local_60 == local_40) {
    pcVar10 = (code *)(*local_40)[4];
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00c6f884;
    pcVar10 = (code *)(*local_40)[5];
  }
  (*pcVar10)();
LAB_00c6f884:
  if ((param_1[0x3a] != 0) && (*(int *)(param_1[0x3a] + 0x54) != 0)) {
    if ((param_1[0x3a] == 0) ||
       (puVar13 = *(undefined8 **)(param_1[0x3a] + 0x60), puVar13 == (undefined8 *)0x0)) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)(**(code **)*puVar13)(puVar13);
      if (((*PTR_DAT_02715078 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_02715078), iVar6 != 0)) {
        uVar9 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar9;
        __cxa_guard_release(PTR_DAT_02715078);
      }
      puVar8 = (undefined8 *)0x0;
      if (puVar7 != (undefined8 *)0x0) {
        do {
          if (puVar7 == (undefined8 *)PTR_DAT_02715080) {
            puVar8 = puVar13 + -10;
            goto LAB_00c6f8ec;
          }
          puVar7 = (undefined8 *)*puVar7;
        } while (puVar7 != (undefined8 *)0x0);
        puVar8 = (undefined8 *)0x0;
      }
    }
LAB_00c6f8ec:
    FUN_00c6f970(puVar8,param_2);
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


