/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009604f0; name: FUN_009604f0
 */


void FUN_009604f0(long param_1,byte param_2,undefined4 param_3,byte param_4)

{
  undefined4 *puVar1;
  
  if (param_2 < 0x1e) {
    puVar1 = (undefined4 *)(param_1 + (ulong)param_2 * 8);
    *puVar1 = param_3;
    *(byte *)(puVar1 + 1) = param_4 & 1;
  }
  return;
}


