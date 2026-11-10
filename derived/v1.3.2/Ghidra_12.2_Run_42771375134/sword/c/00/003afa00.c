/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003afa00; name: FUN_003afa00
 */


undefined8 FUN_003afa00(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x2e8))();
  plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  (**(code **)(*plVar2 + 0x68))
            (plVar2,*(undefined8 *)(param_1 + 0x20),param_2,param_2 + (uVar1 & 0xffffffff) * 0x10);
  return 1;
}


