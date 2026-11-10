/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e54a0; name: FUN_012e54a0
 */


void FUN_012e54a0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  
  if ((*(long *)(param_2 + 0x4f0) == 0) || (uVar1 = FUN_0130e360(), (uVar1 & 1) == 0)) {
    *param_1 = 0;
    return;
  }
  FUN_0130e3b0(param_1,*(undefined8 *)(param_2 + 0x4f0));
  return;
}


