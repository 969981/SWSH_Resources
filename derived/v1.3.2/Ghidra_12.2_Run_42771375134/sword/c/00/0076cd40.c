/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076cd40; name: FUN_0076cd40
 */


undefined4 FUN_0076cd40(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 local_14;
  
  iVar1 = FUN_0076d800(param_1 + 0x60,param_2,&local_14);
  if (iVar1 == 0) {
    return local_14;
  }
  return 0xffffffff;
}


