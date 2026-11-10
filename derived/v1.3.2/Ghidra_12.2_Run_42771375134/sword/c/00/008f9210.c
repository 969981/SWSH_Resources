/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f9210; name: FUN_008f9210
 */


void FUN_008f9210(long param_1,long param_2)

{
  undefined2 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x88) + 0xa48);
  if (lVar2 == 0) {
    return;
  }
  uVar1 = FUN_008e1290(param_2);
  FUN_01535eb0(lVar2,uVar1,*(undefined1 *)(param_2 + 0x33d));
  return;
}


