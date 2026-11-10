/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f21680; name: FUN_00f21680
 */


long FUN_00f21680(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  
  puVar8 = PTR_DAT_027208f0;
  puVar7 = PTR_DAT_027208e8;
  puVar6 = PTR_DAT_0271f870;
  puVar5 = PTR_DAT_0271f868;
  puVar4 = PTR_DAT_0271edb0;
  puVar3 = PTR_DAT_0271eda8;
  plVar1 = *(long **)(param_1 + 8);
  plVar2 = *(long **)(param_1 + 0x10);
  do {
    if (plVar1 == plVar2) {
      return 0;
    }
    lVar12 = *plVar1;
    puVar13 = (undefined8 *)(lVar12 + 0x50);
    plVar11 = (long *)(**(code **)*puVar13)(puVar13);
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
        if (((*puVar3 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar3), iVar9 != 0)) {
          uVar10 = FUN_00db8eb0();
          *(undefined8 *)puVar4 = uVar10;
          __cxa_guard_release(puVar3);
        }
        *(undefined **)puVar6 = puVar4;
        __cxa_guard_release(puVar5);
      }
      *(undefined **)puVar8 = puVar6;
      __cxa_guard_release(puVar7);
    }
    for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (plVar11 == (long *)puVar8) {
        return lVar12;
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


