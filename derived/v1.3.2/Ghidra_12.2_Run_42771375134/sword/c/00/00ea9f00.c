/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea9f00; name: FUN_00ea9f00
 */


void FUN_00ea9f00(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  
  FUN_00e44950();
  puVar4 = PTR_DAT_0271eda0;
  puVar3 = PTR_DAT_0271ed98;
  plVar1 = *(long **)(param_1 + 0x1e8);
  plVar2 = *(long **)(param_1 + 0x1f0);
  do {
    if (plVar1 == plVar2) {
      return;
    }
    lVar8 = *plVar1;
    puVar9 = (undefined8 *)(lVar8 + 0x50);
    plVar7 = (long *)(**(code **)*puVar9)(puVar9);
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar6 = FUN_01592f20();
      *(undefined8 *)puVar4 = uVar6;
      __cxa_guard_release(puVar3);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)puVar4) {
        FUN_00df0ca0(lVar8);
        return;
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


