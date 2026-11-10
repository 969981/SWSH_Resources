/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c8df0; name: FUN_005c8df0
 */


void FUN_005c8df0(long *param_1)

{
  undefined1 auStack_420 [1024];
  
  FUN_005c5550(auStack_420,0x400,param_1 + 0x33);
  FUN_005c5550(auStack_420,0x400,param_1 + 0x35);
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}


