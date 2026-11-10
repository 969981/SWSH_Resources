/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00494320; name: FUN_00494320
 */


void FUN_00494320(long *param_1,ushort param_2)

{
  undefined *puVar1;
  
  *(ushort *)(param_1 + 2) = param_2;
  puVar1 = PTR_DAT_027132e0;
  *(ushort *)((long)param_1 + 0x12) = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  *(uint *)(param_1 + 1) = (uint)param_2 * 50000;
  *(uint *)((long)param_1 + 0xc) = (uint)param_2 * 50000;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


