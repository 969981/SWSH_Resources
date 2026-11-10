/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079fe60; name: FUN_0079fe60
 */


void FUN_0079fe60(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 0x20);
  lVar1 = *(long *)(lVar2 + 0x48);
  if (lVar1 != 0) {
    lVar1 = lVar1 << 5;
    puVar3 = *(undefined8 **)(lVar2 + 0x40);
    do {
      (**(code **)(*(long *)*puVar3 + 0x18))();
      lVar1 = lVar1 + -0x20;
      puVar3 = puVar3 + 4;
    } while (lVar1 != 0);
  }
  return;
}


