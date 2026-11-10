/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008806c0; name: FUN_008806c0
 */


undefined2 FUN_008806c0(long param_1,uint param_2)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if ((param_2 < 0x1f) && (*(char *)(param_1 + 8) != '\0')) {
    if (*(ushort *)(param_1 + 0xc) <= param_2) {
      return 0;
    }
    uVar1 = *(undefined2 *)(param_1 + (ulong)param_2 * 2 + 0xe);
  }
  return uVar1;
}


