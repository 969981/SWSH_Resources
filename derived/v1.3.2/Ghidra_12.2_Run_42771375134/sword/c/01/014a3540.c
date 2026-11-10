/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a3540; name: FUN_014a3540
 */


undefined8 FUN_014a3540(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auStack_28 [8];
  
  puVar4 = PTR_DAT_02715078;
  lVar6 = *(long *)(param_1 + 0x68);
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0x54) == 0)) {
LAB_014a3640:
    lVar14 = 0;
  }
  else {
    piVar1 = (int *)(lVar6 + 0x54);
    puVar8 = PTR_DAT_02715080;
    iVar9 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar6 + 0x58);
        if ((*puVar4 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(puVar4);
          puVar8 = PTR_DAT_02715080;
          if (iVar5 != 0) {
            uVar13 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar13;
            __cxa_guard_release(puVar4);
            puVar8 = PTR_DAT_02715080;
          }
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_014a3640;
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
          lVar14 = 0;
          if (*(long *)(lVar6 + 0x60) != 0) {
            lVar14 = *(long *)(lVar6 + 0x60) + -0x50;
          }
          goto LAB_014a3644;
        }
        lVar14 = 0;
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_014a3644;
      }
      ClearExclusiveLocal();
      lVar14 = 0;
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_014a3644:
  lVar6 = FUN_007959b0(lVar14,auStack_28);
  lVar6 = *(long *)(*(long *)(lVar6 + 0x108) + 0x298) - *(long *)(*(long *)(lVar6 + 0x108) + 0x290);
  if (lVar6 != 0) {
    lVar11 = 8;
    uVar7 = 0;
    do {
      if ((ulong)((*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200) >> 4) * -0xf0f0f0f0f0f0f0f)
          <= uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar12 = *(long *)(*(long *)(param_1 + 200) + lVar11);
      if ((lVar12 != 0) && (*(char *)(lVar12 + 0x170) == '\0')) {
LAB_014a3724:
        uVar13 = 0;
        goto joined_r0x014a3728;
      }
      if ((ulong)((*(long *)(param_1 + 0x100) - *(long *)(param_1 + 0xf8) >> 4) * -0xf0f0f0f0f0f0f0f
                 ) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar12 = *(long *)(*(long *)(param_1 + 0xf8) + lVar11);
      if ((lVar12 != 0) && (*(char *)(lVar12 + 0x170) == '\0')) goto LAB_014a3724;
      uVar7 = uVar7 + 1;
      lVar11 = lVar11 + 0x110;
    } while (uVar7 < (ulong)((lVar6 >> 6) * -0x79435e50d79435e5));
  }
  uVar13 = 1;
joined_r0x014a3728:
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
  return uVar13;
}


