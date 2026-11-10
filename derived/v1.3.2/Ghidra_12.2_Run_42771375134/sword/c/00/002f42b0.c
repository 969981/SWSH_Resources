/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f42b0; name: FUN_002f42b0
 */


undefined8 FUN_002f42b0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_003ffa00(*(undefined8 *)(param_1 + 0x28));
  if (lVar1 == 0) {
    return 0;
  }
  uVar4 = *(undefined8 *)(lVar1 + 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    lVar3 = *(long *)(lVar1 + -8);
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1 - lVar3);
    return uVar4;
  }
  *(undefined8 *)(lVar1 + 8) = 0;
  FUN_003ff9a0(*(undefined8 *)(param_1 + 0x18),lVar1);
  return uVar4;
}


