/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01356410; name: FUN_01356410
 */


void FUN_01356410(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_01311a80();
  puVar1 = PTR_DAT_027286a0 + 0x78;
  puVar2 = PTR_DAT_027286a0 + 0xb8;
  *param_1 = (long)(PTR_DAT_027286a0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  return;
}


