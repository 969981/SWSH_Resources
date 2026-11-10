/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fcbc0; name: FUN_011fcbc0
 */


void FUN_011fcbc0(long param_1)

{
  long *plVar1;
  long local_18;
  
  FUN_012248c0(param_1 + 0x370);
  if (*(char *)(param_1 + 0x300) == '\0') {
    if (*(long *)(param_1 + 0x130) == 0) {
      local_18 = 0;
    }
    else {
      FUN_0120cc20(&local_18);
    }
  }
  else {
    local_18 = param_1 + 0x308;
  }
  FUN_01207380(param_1 + 0x300,&local_18);
  if (*(char *)(param_1 + 0x338) == '\0') {
    if (*(long *)(param_1 + 0x130) == 0) {
      local_18 = 0;
    }
    else {
      FUN_0120ca50(&local_18);
    }
  }
  else {
    local_18 = param_1 + 0x340;
  }
  FUN_01207380(param_1 + 0x338,&local_18);
  *(undefined4 *)(param_1 + 0x84) = 0;
  if ((((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 0x54) != 0)) &&
      (plVar1 = *(long **)(param_1 + 0x78), plVar1 != (long *)0x0)) ||
     (((*(long *)(param_1 + 0x60) != 0 && (*(int *)(*(long *)(param_1 + 0x60) + 0x54) != 0)) &&
      (plVar1 = *(long **)(param_1 + 0x68), plVar1 != (long *)0x0)))) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}


