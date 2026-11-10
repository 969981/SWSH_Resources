/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0156b3c0; name: FUN_0156b3c0
 */


long FUN_0156b3c0(long param_1,undefined8 *param_2)

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
  ulong uVar12;
  long lVar13;
  
  puVar8 = PTR_DAT_0271f820;
  puVar7 = PTR_DAT_0271f818;
  puVar6 = PTR_DAT_0271f698;
  puVar5 = PTR_DAT_0271f690;
  puVar4 = PTR_DAT_027196b8;
  puVar3 = PTR_DAT_027196b0;
  plVar1 = *(long **)(param_1 + 0xb0);
  plVar2 = *(long **)(param_1 + 0xb8);
  do {
    if (plVar1 == plVar2) {
      return 0;
    }
    lVar13 = *plVar1;
    plVar11 = (long *)(*(code *)**(undefined8 **)(lVar13 + 0x50))((undefined8 *)(lVar13 + 0x50));
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
        if (((*puVar3 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar3), iVar9 != 0)) {
          uVar10 = FUN_0156b190();
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
        if ((*(long *)(lVar13 + 0x1a0) == *(long *)*param_2) &&
           (uVar12 = (**(code **)(*(long *)*plVar1 + 0x88))(), (uVar12 & 1) == 0)) {
          return lVar13;
        }
        break;
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


