/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdb9f0; name: FUN_00bdb9f0
 */


undefined8 FUN_00bdb9f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x1e8) != 0) && (*(long *)(param_1 + 0xa30) == 0x644)) {
    lVar1 = 0x1930;
    if (*(int *)(param_1 + 0x1f8) != 0) {
      lVar1 = 0x1938;
    }
    uVar2 = *(undefined8 *)(param_1 + lVar1);
  }
  return uVar2;
}


