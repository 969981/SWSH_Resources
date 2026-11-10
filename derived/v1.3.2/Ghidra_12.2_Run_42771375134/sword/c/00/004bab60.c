/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bab60; name: FUN_004bab60
 */


undefined8 FUN_004bab60(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_004b5590(*(undefined8 *)PTR_DAT_02712b68);
  if (lVar1 == 0) {
    return 2;
  }
  if (*(long *)(lVar1 + 0x28) == 0) {
    *(long *)(lVar1 + 0x20) = param_1;
    *(long *)(lVar1 + 0x28) = param_1;
    *(undefined8 *)(param_1 + 8) = 0;
    return 1;
  }
  *(long *)(param_1 + 8) = *(long *)(lVar1 + 0x28);
  *(long *)(lVar1 + 0x28) = param_1;
  return 1;
}


