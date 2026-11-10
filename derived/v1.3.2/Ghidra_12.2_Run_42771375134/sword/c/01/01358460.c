/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01358460; name: FUN_01358460
 */


uint FUN_01358460(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  long local_38;
  undefined1 auStack_28 [4];
  int local_24;
  
  puVar9 = (undefined8 *)FUN_013471e0();
  uVar7 = FUN_012b6590(*puVar9);
  if (0x1d < uVar7) {
    FUN_01346ef0(param_1);
    FUN_01322320(&local_38);
    lVar5 = local_38;
    puVar6 = PTR_DAT_02727f88;
    uVar7 = 0;
    if (local_38 == 0) goto LAB_01358618;
    iVar8 = *(int *)(local_38 + 0x54);
    if (iVar8 != 0) {
      piVar1 = (int *)(local_38 + 0x54);
      puVar11 = PTR_DAT_02727f90;
      do {
        while( true ) {
          plVar13 = *(long **)(lVar5 + 0x58);
          iVar4 = iVar8;
          if (((*puVar6 & 1) == 0) &&
             (local_24 = iVar8, iVar8 = __cxa_guard_acquire(puVar6), puVar11 = PTR_DAT_02727f90,
             iVar4 = local_24, iVar8 != 0)) {
            if (((*PTR_DAT_0271df20 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar8 != 0)) {
              uVar10 = FUN_00d3ff90();
              *(undefined8 *)PTR_DAT_0271df28 = uVar10;
              __cxa_guard_release(PTR_DAT_0271df20);
            }
            puVar11 = PTR_DAT_02727f90;
            *(undefined **)PTR_DAT_02727f90 = PTR_DAT_0271df28;
            __cxa_guard_release(puVar6);
            iVar4 = local_24;
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_013585cc;
            if (plVar13 == (long *)puVar11) break;
            plVar13 = (long *)*plVar13;
          }
          iVar8 = *piVar1;
          if (iVar8 != iVar4) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar12 = *(long *)(lVar5 + 0x60);
            lVar5 = 0;
            if (lVar12 != 0) {
              lVar5 = lVar12 + -0x50;
            }
            goto joined_r0x01358644;
          }
          if (iVar8 == 0) goto LAB_013585cc;
        }
        ClearExclusiveLocal();
      } while (iVar8 != 0);
    }
LAB_013585cc:
    lVar5 = 0;
joined_r0x01358644:
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (lVar5 != 0) {
      puVar9 = (undefined8 *)FUN_013242b0(lVar5);
      FUN_012d5170(*puVar9,auStack_28);
      uVar7 = FUN_0130a240();
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      goto LAB_01358618;
    }
  }
  uVar7 = 0;
LAB_01358618:
  return uVar7 & 1;
}


