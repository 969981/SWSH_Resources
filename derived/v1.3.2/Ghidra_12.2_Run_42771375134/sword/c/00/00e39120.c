/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e39120; name: FUN_00e39120
 */


void FUN_00e39120(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00da4bb0(*(undefined8 *)(param_1 + 0x400),1);
  if ((uVar1 & 1) == 0) {
    FUN_00da5180(*(undefined8 *)(param_1 + 0x400),1,param_2,param_3);
    return;
  }
  return;
}


