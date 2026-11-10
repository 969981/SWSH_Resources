/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003af990; name: FUN_003af990
 */


bool FUN_003af990(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x2d8))();
  plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  (**(code **)(*plVar2 + 0x60))
            (plVar2,*(undefined8 *)(param_1 + 0x20),param_2,param_2 + (ulong)uVar1 * 4);
  return uVar1 != 0;
}


