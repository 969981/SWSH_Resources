/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041bbc0; name: FUN_0041bbc0
 */


void FUN_0041bbc0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  int local_34;
  
  iVar1 = FUN_0040ae20();
  if (iVar1 == 1) {
    iVar1 = FUN_0040eaa0(*(undefined8 *)(param_1 + 0x90));
    FUN_0041bc40(param_1,param_2,param_3,-iVar1,&local_34,param_4 & 1);
    *(long *)(param_1 + 0x68) = (long)local_34;
  }
  return;
}


