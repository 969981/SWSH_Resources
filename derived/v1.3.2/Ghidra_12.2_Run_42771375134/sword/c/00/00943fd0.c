/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00943fd0; name: FUN_00943fd0
 */


void FUN_00943fd0(long param_1,undefined4 param_2)

{
  if ((*(ushort *)(param_1 + 2) & 0x3c00) == 0) {
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | 0x4000;
    return;
  }
  return;
}


