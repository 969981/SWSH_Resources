/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00463080; name: FUN_00463080
 */


void FUN_00463080(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0048ae60(*(undefined8 *)PTR_DAT_02712dc8,param_2,*(undefined8 *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x28),
               *(byte *)(param_1 + 0x4c) >> 6 & 1,param_3);
  return;
}


