/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dc5a0; name: FUN_003dc5a0
 */


void FUN_003dc5a0(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x928) == 0) {
    if (*(long *)(*(long *)PTR_DAT_02711060 + 0x10) != 0) {
      *(long *)(param_1 + 0x948) = *(long *)(*(long *)PTR_DAT_02711060 + 0x10);
    }
    if (*(long **)(param_1 + 0x1ed0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1ed0) + 0x18))();
    }
    plVar1 = *(long **)(param_1 + 0x948);
    if (plVar1 == (long *)0x0) {
      plVar1 = *(long **)(param_1 + 0x928);
    }
    else {
      plVar1 = (long *)(**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 *)(param_1 + 0x1ed0));
      *(long **)(param_1 + 0x928) = plVar1;
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x58))(plVar1,PTR_FUN_02712908);
    }
    plVar1 = *(long **)(param_1 + 0x950);
    if (plVar1 == (long *)0x0) {
      plVar1 = *(long **)(param_1 + 0x930);
    }
    else {
      plVar1 = (long *)(**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 *)(param_1 + 0x1ed0));
      *(long **)(param_1 + 0x930) = plVar1;
    }
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003dc674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x58))(plVar1,PTR_FUN_02712908);
      return;
    }
  }
  return;
}


