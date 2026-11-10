/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00776e40; name: FUN_00776e40
 */


bool FUN_00776e40(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x80) + 0x80))
                    (*(long **)(param_1 + 0x80),*(undefined8 *)(param_2 + 8),param_3,param_4,4,0);
  return iVar1 == 1;
}


