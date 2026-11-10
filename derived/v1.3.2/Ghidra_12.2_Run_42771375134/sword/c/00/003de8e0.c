/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003de8e0; name: FUN_003de8e0
 */


void FUN_003de8e0(long param_1)

{
  undefined1 auStack_48 [40];
  
  (**(code **)(**(long **)(*(long *)(param_1 + 0x720) + 0x6e8) + 0xa8))(auStack_48);
  FUN_003cfd30(*(undefined8 *)(param_1 + 0x1048),auStack_48,*(uint *)(param_1 + 0x110c) >> 4 & 1);
  *(undefined4 *)(*(long *)(param_1 + 0x1048) + 0x28) =
       *(undefined4 *)(*(long *)(param_1 + 0x1048) + 0x20);
  *(uint *)(param_1 + 0x7c0) = *(int *)(param_1 + 0x7c0) + 1U & 0x7fffffff;
  *(int *)(param_1 + 0x7c4) = *(int *)(param_1 + 0x7c4) + 1;
  FUN_0011ba20();
  return;
}


