/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00603ac0; name: FUN_00603ac0
 */


uint FUN_00603ac0(long param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = 0;
    if ((*(long *)(param_1 + 0xa8) != 0) &&
       (uVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x10) + 0x18))(),
       *(uint *)(param_1 + 0x20) <= uVar1)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}


