/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076cce0; name: FUN_0076cce0
 */


undefined8 FUN_0076cce0(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_18;
  
  if (*(long *)(param_1 + 0xe4) == 0) {
    return 0;
  }
  iVar1 = FUN_0076e0b0(param_1 + 0x60,&local_18,param_2);
  while (iVar1 == 0xc) {
    iVar1 = FUN_0076e0b0(param_1 + 0x60,&local_18,0xfffffffe);
  }
  return local_18;
}


