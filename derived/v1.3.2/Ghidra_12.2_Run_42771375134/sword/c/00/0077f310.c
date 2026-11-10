/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077f310; name: FUN_0077f310
 */


void FUN_0077f310(long *param_1)

{
  uint uVar1;
  
  *(undefined4 *)((long)param_1 + 0xbc) = 1;
  uVar1 = (**(code **)(*param_1 + 0x50))();
  while ((uVar1 | 4) != 4) {
    uVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  }
  *(undefined4 *)((long)param_1 + 0xbc) = 0;
  return;
}


