/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079ec70; name: FUN_0079ec70
 */


void FUN_0079ec70(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_006e16c0();
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  puVar1 = PTR_DAT_027165e0 + 0x68;
  puVar2 = PTR_DAT_027165e0 + 0xa8;
  *param_1 = (long)(PTR_DAT_027165e0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  return;
}


