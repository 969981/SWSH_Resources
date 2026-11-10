/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00775cb0; name: FUN_00775cb0
 */


bool FUN_00775cb0(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x30))
                    (*(long **)(param_1 + 0xc0),*(undefined8 *)(param_2 + 8));
  return iVar1 == 1;
}


