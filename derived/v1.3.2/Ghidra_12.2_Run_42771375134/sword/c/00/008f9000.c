/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f9000; name: FUN_008f9000
 */


undefined8 FUN_008f9000(long param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_008e1290(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x88) + 0xa48);
  if (lVar3 == 0) {
    return 0;
  }
  uVar2 = FUN_01534f60(lVar3,uVar1);
  return uVar2;
}


