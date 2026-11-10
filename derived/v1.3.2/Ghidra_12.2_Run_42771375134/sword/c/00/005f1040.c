/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f1040; name: FUN_005f1040
 */


void FUN_005f1040(long param_1,long *param_2,long *param_3)

{
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  if (*(long **)(param_1 + 0x468) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x468) + 0x18))();
  }
  *(long **)(param_1 + 0x468) = param_2;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x10))(param_3);
  }
  if (*(long **)(param_1 + 0x470) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x470) + 0x18))();
  }
  *(long **)(param_1 + 0x470) = param_3;
  return;
}


