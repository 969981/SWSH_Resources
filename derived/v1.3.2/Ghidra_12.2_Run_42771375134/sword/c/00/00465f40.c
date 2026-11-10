/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00465f40; name: FUN_00465f40
 */


void FUN_00465f40(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_0047e130();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  puVar1 = PTR_DAT_027130f8 + 0x280;
  puVar2 = PTR_DAT_027130f8 + 0x318;
  *param_1 = (long)(PTR_DAT_027130f8 + 0x10);
  param_1[3] = (long)puVar1;
  param_1[6] = (long)puVar2;
  return;
}


