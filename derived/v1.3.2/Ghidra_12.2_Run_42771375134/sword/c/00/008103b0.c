/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008103b0; name: FUN_008103b0
 */


uint FUN_008103b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auStack_40 [32];
  
  FUN_0080e5a0(auStack_40,param_2,param_3,0xffffffff);
  uVar1 = FUN_008102d0(param_1,auStack_40);
  thunk_FUN_0080ee30(auStack_40);
  return uVar1 & 1;
}


