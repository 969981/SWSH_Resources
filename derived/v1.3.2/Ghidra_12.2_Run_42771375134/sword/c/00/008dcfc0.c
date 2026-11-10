/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dcfc0; name: FUN_008dcfc0
 */


void FUN_008dcfc0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x1608) == param_2) {
    uVar1 = FUN_008db990(param_2);
    *(undefined8 *)(param_1 + 0x1608) = uVar1;
  }
  FUN_008db970(param_2);
  FUN_008db7d0(param_2);
  FUN_008db960(param_2,*(undefined8 *)(param_1 + 0x1610));
  *(long *)(param_1 + 0x1610) = param_2;
  return;
}


