/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00700df0; name: FUN_00700df0
 */


void FUN_00700df0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_006e16c0();
  puVar2 = PTR_DAT_027158f0;
  puVar1 = PTR_DAT_027158f0 + 0x10;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *param_1 = (long)puVar1;
  param_1[9] = (long)(puVar2 + 0x70);
  param_1[10] = (long)(puVar2 + 0xb0);
  return;
}


