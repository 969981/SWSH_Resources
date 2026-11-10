/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e1a940; name: FUN_00e1a940
 */


uint FUN_00e1a940(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0xe8) + 0x40))();
  if ((uVar2 & 1) == 0) {
    uVar1 = (**(code **)(**(long **)PTR_DAT_027194e0 + 0x40))();
    return (uVar1 ^ 1) & 1;
  }
  return 0;
}


