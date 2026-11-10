/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eacef0; name: FUN_00eacef0
 */


void FUN_00eacef0(float param_1,undefined1 param_2 [16],long param_3,byte param_4)

{
  *(ulong *)(param_3 + 0xd8) = (ulong)(uint)param_1;
  *(ulong *)(param_3 + 0xd0) = CONCAT44(param_1,param_1);
  *(undefined1 *)(param_3 + 0xc0) = 1;
  *(byte *)(param_3 + 0x569) = param_4 & 1;
  if ((param_4 & 1) != 0) {
    *(undefined1 *)(param_3 + 0xc0) = 1;
    *(long *)(param_3 + 0xb8) = param_2._8_8_;
    *(long *)(param_3 + 0xb0) = param_2._0_8_;
  }
  *(bool *)(param_3 + 0x218) = param_1 != 0.0;
  return;
}


