/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00451560; name: FUN_00451560
 */


void FUN_00451560(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0x100) == 0) {
    return;
  }
  if ((param_2 & 1) == 0) {
    FUN_0048b050(*(undefined8 *)PTR_DAT_02712dc8);
    return;
  }
  FUN_0048b000();
  return;
}


