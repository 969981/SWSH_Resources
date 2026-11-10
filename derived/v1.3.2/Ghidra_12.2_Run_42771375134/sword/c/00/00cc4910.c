/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc4910; name: FUN_00cc4910
 */


void FUN_00cc4910(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_00c685a0();
  puVar1 = PTR_DAT_0271c690 + 0x98;
  puVar2 = PTR_DAT_0271c690 + 0x108;
  *param_1 = (long)(PTR_DAT_0271c690 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  return;
}


