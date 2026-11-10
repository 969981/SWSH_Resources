/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f2b30; name: FUN_006f2b30
 */


void FUN_006f2b30(void)

{
  ulong local_50 [8];
  
  local_50[6] = 0;
  local_50[7] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[0] = 0;
  local_50[1] = 0;
  FUN_0199bf40(local_50);
  local_50[0] = local_50[0] & 0xffffffff;
  FUN_019a5c70(PTR_DAT_027155e8,local_50);
  return;
}


