/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01367e00; name: FUN_01367e00
 */


void FUN_01367e00(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_01311a80(param_1,0);
  puVar1 = PTR_DAT_027288d8 + 0x90;
  puVar2 = PTR_DAT_027288d8 + 0xd0;
  *param_1 = (long)(PTR_DAT_027288d8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  return;
}


