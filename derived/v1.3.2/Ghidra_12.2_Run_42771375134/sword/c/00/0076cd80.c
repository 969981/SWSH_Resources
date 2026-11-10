/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076cd80; name: FUN_0076cd80
 */


undefined8 FUN_0076cd80(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_18;
  
  iVar1 = FUN_0076d8c0(param_1 + 0x60,param_2,&local_18);
  if (iVar1 == 0) {
    FUN_007706a0(param_1 + 0x60,local_18,&local_28);
    return local_28;
  }
  return 0;
}


