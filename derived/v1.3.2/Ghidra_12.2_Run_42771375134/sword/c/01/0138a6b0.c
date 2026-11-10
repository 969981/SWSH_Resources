/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138a6b0; name: FUN_0138a6b0
 */


void FUN_0138a6b0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long local_48;
  long local_38;
  
  puVar4 = PTR_DAT_02715078;
  lVar14 = *(long *)(param_1 + 0x68);
  if ((lVar14 == 0) || (*(int *)(lVar14 + 0x54) == 0)) {
LAB_0138a7c4:
    lVar13 = 0;
  }
  else {
    piVar1 = (int *)(lVar14 + 0x54);
    puVar10 = PTR_DAT_02715080;
    iVar7 = *(int *)(lVar14 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar14 + 0x58);
        if ((*puVar4 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(puVar4);
          puVar10 = PTR_DAT_02715080;
          if (iVar5 != 0) {
            uVar9 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar9;
            __cxa_guard_release(puVar4);
            puVar10 = PTR_DAT_02715080;
          }
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_0138a7c4;
          if (plVar11 == (long *)puVar10) break;
          plVar11 = (long *)*plVar11;
        }
        iVar5 = *piVar1;
        if (iVar5 != iVar7) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar13 = 0;
          if (*(long *)(lVar14 + 0x60) != 0) {
            lVar13 = *(long *)(lVar14 + 0x60) + -0x50;
          }
          goto LAB_0138a7c8;
        }
        lVar13 = 0;
        iVar7 = iVar5;
        if (iVar5 == 0) goto LAB_0138a7c8;
      }
      ClearExclusiveLocal();
      lVar13 = 0;
      iVar7 = iVar5;
    } while (iVar5 != 0);
  }
LAB_0138a7c8:
  lVar14 = FUN_00adc640(lVar13,*(undefined8 *)(lVar13 + 8));
  local_48 = lVar14;
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  local_38 = 8;
  FUN_00727220(lVar14,*param_3,&local_38);
  local_38 = 0;
  FUN_007273c0(lVar14,1,&local_38);
  lVar14 = FUN_0138a9b0(param_1,&local_48);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  FUN_0069ae40(lVar14,*(undefined8 *)(param_1 + 8),param_4,1);
  uVar8 = FUN_00da32a0(lVar14);
  if ((uVar8 & 1) != 0) {
    local_38 = lVar14;
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar12 != (undefined8 *)0x0))
    {
      plVar11 = (long *)(**(code **)*puVar12)(puVar12);
      if (((*PTR_DAT_02715078 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_02715078), iVar7 != 0)) {
        uVar9 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar9;
        __cxa_guard_release(PTR_DAT_02715078);
      }
      for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        if (plVar11 == (long *)PTR_DAT_02715080) {
          puVar12 = puVar12 + -10;
          goto LAB_0138a8cc;
        }
      }
    }
    puVar12 = (undefined8 *)0x0;
LAB_0138a8cc:
    uVar9 = FUN_0134e790(puVar12,*(undefined8 *)(param_1 + 8),&local_38);
    FUN_012ba510(&local_38);
    uVar6 = FUN_012f7310(local_38);
    FUN_00da30e0(uVar9,uVar6);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


