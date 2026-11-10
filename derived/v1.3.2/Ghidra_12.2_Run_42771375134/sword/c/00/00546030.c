/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00546030; name: FUN_00546030
 */


void FUN_00546030(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x248))
                    (*(long **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0xc),
                     *(undefined4 *)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  return;
}


