/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0152aa90; name: FUN_0152aa90
 */


uint FUN_0152aa90(long param_1,uint param_2)

{
  uint uVar1;
  
  if (0x96 < param_2) {
    return 0;
  }
  param_1 = param_1 + (long)(int)param_2 * 0xb0;
  uVar1 = (uint)*(byte *)(param_1 + 0x60) + (uint)*(byte *)(param_1 + 0x61) +
          (uint)*(byte *)(param_1 + 0x62);
  if (1 < (uVar1 & 0xff) && param_2 == 0x96) {
    uVar1 = 1;
  }
  return uVar1;
}


