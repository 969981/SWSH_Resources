/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a53b40; name: FUN_00a53b40
 */


void FUN_00a53b40(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0xff) {
    iVar1 = param_2;
  }
  *(undefined1 *)(param_1 + 0x788) = 0;
  *(int *)(param_1 + 0x618) = iVar1;
  FUN_00a53b60();
  return;
}


