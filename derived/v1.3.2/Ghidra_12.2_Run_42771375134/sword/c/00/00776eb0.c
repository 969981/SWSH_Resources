/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00776eb0; name: FUN_00776eb0
 */


bool FUN_00776eb0(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x80) + 0xb0))
                    (*(long **)(param_1 + 0x80),*(undefined8 *)(param_2 + 8),
                     *(undefined8 *)(param_3 + 8));
  return iVar1 == 1;
}


