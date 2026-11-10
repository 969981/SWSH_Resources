/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01052a10; name: FUN_01052a10
 */


void FUN_01052a10(long param_1,undefined8 param_2)

{
  undefined1 auStack_220 [496];
  
  FUN_006f29a0(auStack_220,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x148) + 0x148) + 0x130));
  FUN_007275b0(param_2,auStack_220);
  FUN_00727660(param_2,*(undefined4 *)(*(long *)(param_1 + 0x148) + 0xe0));
  FUN_00784490(auStack_220);
  return;
}


