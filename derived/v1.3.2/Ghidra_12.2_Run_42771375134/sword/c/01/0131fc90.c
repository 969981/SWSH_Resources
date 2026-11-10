/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131fc90; name: FUN_0131fc90
 */


void FUN_0131fc90(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 8) + 0x54) == 0) {
    return;
  }
  if (*(long *)(param_1 + 8) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
    if (puVar4 == (undefined8 *)0x0) goto LAB_0131fd08;
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    if (((*PTR_DAT_027150a8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar1 != 0)) {
      uVar3 = FUN_00706e40();
      *(undefined8 *)PTR_DAT_027150b0 = uVar3;
      __cxa_guard_release(PTR_DAT_027150a8);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_027150b0) {
        puVar4 = puVar4 + -10;
        goto LAB_0131fd08;
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_0131fd08:
  FUN_0069c750(puVar4);
  FUN_0069c620(*(undefined4 *)(PTR_DAT_02727f60 + 4),puVar4);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


