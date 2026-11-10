/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008db970; name: FUN_008db970
 */


void FUN_008db970(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x18) = lVar2;
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = lVar1;
  }
  *(long *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


