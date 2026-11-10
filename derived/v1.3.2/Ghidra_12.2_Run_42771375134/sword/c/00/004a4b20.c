/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a4b20; name: FUN_004a4b20
 */


void FUN_004a4b20(long param_1,undefined4 param_2,undefined4 param_3)

{
  char local_24 [4];
  
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  local_24[0] = '\0';
  if ((*(long *)PTR_DAT_02712b50 == 0) ||
     (FUN_0049db60(*(long *)PTR_DAT_02712b50,param_1,param_2,param_3,local_24), local_24[0] == '\0')
     ) {
    FUN_004a4ba0(param_1,param_2);
    return;
  }
  return;
}


