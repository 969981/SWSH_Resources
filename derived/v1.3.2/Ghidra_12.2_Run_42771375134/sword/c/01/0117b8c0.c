/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0117b8c0; name: FUN_0117b8c0
 */


uint FUN_0117b8c0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined1 local_18 [8];
  
  local_18[0] = 0;
  uVar1 = FUN_0117b670(param_1,param_2 & 1,local_18);
  return uVar1 & 1;
}


