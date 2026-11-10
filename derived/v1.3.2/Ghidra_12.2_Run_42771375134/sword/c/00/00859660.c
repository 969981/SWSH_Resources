/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00859660; name: FUN_00859660
 */


undefined8 FUN_00859660(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)*(int *)(param_1 + 0x40);
  do {
    if (lVar3 < 1) {
      uVar2 = FUN_0082b610(param_1 + 8);
      return uVar2;
    }
    uVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x48) + lVar3 * 8) + 0x40))();
    lVar3 = lVar3 + -1;
  } while ((uVar1 & 1) != 0);
  return 0;
}


