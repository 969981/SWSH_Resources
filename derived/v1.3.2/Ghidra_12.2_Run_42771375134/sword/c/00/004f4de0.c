/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f4de0; name: FUN_004f4de0
 */


undefined8 FUN_004f4de0(long param_1)

{
  long lVar1;
  
  if ((5 < *(uint *)(*(long *)(param_1 + 8) + 0x40)) &&
     (lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x28), lVar1 != 0)) {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
    *(undefined1 *)(param_1 + 0x69) = 1;
  }
  return 1;
}


