/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069c820; name: FUN_0069c820
 */


uint FUN_0069c820(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 local_18 [4];
  undefined4 local_14;
  
  local_14 = 0;
  local_18[0] = 1;
  uVar1 = FUN_0069c850(param_1,param_2,local_18);
  return uVar1 & 1;
}


