/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c3e50; name: FUN_005c3e50
 */


undefined8 FUN_005c3e50(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  FUN_005c8860(auStack_30,param_1 + 8,1);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)((param_2 - *(int *)(param_2 + -0xc)) + 0x28);
  }
  FUN_005c88a0(auStack_30);
  return uVar1;
}


