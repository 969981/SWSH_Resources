/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007af280; name: FUN_007af280
 */


undefined8 FUN_007af280(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x28);
  if (*plVar1 == param_2) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == param_2) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 == param_2) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 == param_2) {
    return 0;
  }
  if ((*plVar1 == 0) || (plVar1 = (long *)(param_1 + 0x30), lVar2 == 0)) {
    *plVar1 = param_2;
    return 1;
  }
  if (lVar3 == 0) {
    *(long *)(param_1 + 0x38) = param_2;
    return 1;
  }
  if (lVar4 == 0) {
    *(long *)(param_1 + 0x40) = param_2;
    return 1;
  }
  return 0;
}


