/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b2460; name: FUN_003b2460
 */


void FUN_003b2460(long param_1,long *param_2)

{
  if (*(long *)(param_1 + 8) != 0) {
    if ((*(uint *)(param_1 + 0x14) & 0x7fffffff) != 0 || *(int *)(param_1 + 0x10) != 0) {
      (**(code **)(*param_2 + 0x10))(param_2,*(long *)(param_1 + 8),*(uint *)(param_1 + 0x14) << 2);
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    if ((*(uint *)(param_1 + 0x24) & 0x7fffffff) != 0 || *(int *)(param_1 + 0x20) != 0) {
      (**(code **)(*param_2 + 0x10))
                (param_2,*(long *)(param_1 + 0x18),*(uint *)(param_1 + 0x24) << 2);
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    if ((*(uint *)(param_1 + 0x34) & 0x7fffffff) != 0 || *(int *)(param_1 + 0x30) != 0) {
      (**(code **)(*param_2 + 0x10))
                (param_2,*(long *)(param_1 + 0x28),*(uint *)(param_1 + 0x34) << 2);
    }
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    if ((*(uint *)(param_1 + 0x44) & 0x7fffffff) != 0 || *(int *)(param_1 + 0x40) != 0) {
      (**(code **)(*param_2 + 0x10))
                (param_2,*(long *)(param_1 + 0x38),*(uint *)(param_1 + 0x44) << 2);
    }
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    if ((*(uint *)(param_1 + 0x54) & 0x7fffffff) != 0 || *(int *)(param_1 + 0x50) != 0) {
      (**(code **)(*param_2 + 0x10))
                (param_2,*(long *)(param_1 + 0x48),*(uint *)(param_1 + 0x54) << 2);
    }
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    if ((*(uint *)(param_1 + 100) & 0x7fffffff) != 0 || *(int *)(param_1 + 0x60) != 0) {
      (**(code **)(*param_2 + 0x10))
                (param_2,*(long *)(param_1 + 0x58),*(uint *)(param_1 + 100) << 2);
    }
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    if ((*(uint *)(param_1 + 0x74) & 0x7fffffff) != 0 || *(int *)(param_1 + 0x70) != 0) {
                    /* WARNING: Could not recover jumptable at 0x003b25ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x10))
                (param_2,*(long *)(param_1 + 0x68),*(uint *)(param_1 + 0x74) << 2);
      return;
    }
  }
  return;
}


