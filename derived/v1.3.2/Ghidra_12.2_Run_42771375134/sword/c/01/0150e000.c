/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150e000; name: FUN_0150e000
 */


void FUN_0150e000(long param_1,uint param_2)

{
  if (param_2 < 0xb) {
    *(uint *)(param_1 + 0x60) =
         *(uint *)(param_1 + 0x60) & 0xffe00000 |
         *(uint *)(param_1 + 0x60) & 0x1ffff | (param_2 & 0xf) << 0x11;
  }
  return;
}


