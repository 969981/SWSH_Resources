/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f3de0; name: FUN_002f3de0
 */


long FUN_002f3de0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = FUN_003ffa00(*(undefined8 *)(param_1 + 0x20));
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      lVar3 = *(long *)(lVar1 + -8);
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar1 - lVar3);
    }
    else {
      *(undefined8 *)(lVar1 + 8) = 0;
      FUN_003ff9a0(*(undefined8 *)(param_1 + 0x18),lVar1);
    }
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar1 = 0;
    uVar5 = 0;
    do {
      lVar4 = FUN_002f42b0(*(long *)(param_1 + 8) + lVar1);
      if (lVar4 != 0) {
        return lVar4;
      }
      uVar5 = uVar5 + 1;
      lVar1 = lVar1 + 0x38;
    } while (uVar5 < *(uint *)(param_1 + 0x38));
  }
  return 0;
}


