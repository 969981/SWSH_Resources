/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a0310; name: FUN_003a0310
 */


undefined8 FUN_003a0310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined4 local_24;
  
  uVar1 = FUN_0039ff10(param_1,param_3,&local_24);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  FUN_0039fcc0(param_1,param_3,param_2,local_24);
  return 1;
}


