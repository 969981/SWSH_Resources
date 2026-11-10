/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dce20; name: FUN_008dce20
 */


void FUN_008dce20(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x1608);
  while (lVar1 != 0) {
    lVar2 = FUN_008db990(lVar1);
    FUN_008db970(lVar1);
    FUN_008db7d0(lVar1);
    FUN_008db960(lVar1,*(undefined8 *)(param_1 + 0x1610));
    *(long *)(param_1 + 0x1610) = lVar1;
    lVar1 = lVar2;
  }
  *(undefined8 *)(param_1 + 0x1608) = 0;
  return;
}


