/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b9750; name: FUN_011b9750
 */


void FUN_011b9750(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x280) != '\0') {
    *(undefined1 *)(param_1 + 0x280) = 0;
  }
  if (*(char *)(param_1 + 0x200) != '\0') {
    *(undefined1 *)(param_1 + 0x200) = 0;
  }
  if (*(char *)(param_1 + 0x90) != '\0') {
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  if (*(char *)(param_1 + 0x68) != '\0') {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  plVar2 = *(long **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    if (lVar1 != 0) {
      plVar2[1] = lVar1;
      (**(code **)(*(long *)plVar2[3] + 0x18))((long *)plVar2[3],lVar1,plVar2[2] - lVar1,8);
    }
    (**(code **)(**(long **)(param_1 + 0x50) + 0x18))
              (*(long **)(param_1 + 0x50),plVar2,*(undefined8 *)(param_1 + 0x58),
               *(undefined8 *)(param_1 + 0x60));
  }
  plVar2 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    if (lVar1 != 0) {
      plVar2[1] = lVar1;
      (**(code **)(*(long *)plVar2[3] + 0x18))((long *)plVar2[3],lVar1,plVar2[2] - lVar1,8);
    }
    (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
              (*(long **)(param_1 + 0x30),plVar2,*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x40));
  }
  plVar2 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar2 == (long *)0x0) {
    return;
  }
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    plVar2[1] = lVar1;
    (**(code **)(*(long *)plVar2[3] + 0x18))((long *)plVar2[3],lVar1,plVar2[2] - lVar1,8);
  }
                    /* WARNING: Could not recover jumptable at 0x011b986c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),plVar2,*(undefined8 *)(param_1 + 0x18),
             *(undefined8 *)(param_1 + 0x20));
  return;
}


