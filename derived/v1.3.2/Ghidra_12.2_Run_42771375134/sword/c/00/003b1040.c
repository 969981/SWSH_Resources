/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b1040; name: FUN_003b1040
 */


void FUN_003b1040(long param_1,long param_2)

{
  (**(code **)(**(long **)(param_1 + 0x20) + 0x188))
            (*(long **)(param_1 + 0x20),param_2,param_2 + 0x24,*(undefined4 *)(param_1 + 0x6c),
             *(undefined4 *)(param_1 + 0x6c));
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  return;
}


