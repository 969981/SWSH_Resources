/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f2fc0; name: FUN_004f2fc0
 */


undefined8 FUN_004f2fc0(long param_1)

{
  long lVar1;
  
  if (((6 < *(uint *)(*(long *)(param_1 + 8) + 0x40)) &&
      (lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x30), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x20), *(long *)(param_1 + 0x20) != lVar1)) {
    *(long *)(param_1 + 0x20) = lVar1;
    *(undefined1 *)(param_1 + 0x69) = 1;
  }
  return 1;
}


