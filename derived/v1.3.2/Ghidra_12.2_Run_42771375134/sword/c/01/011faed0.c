/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011faed0; name: FUN_011faed0
 */


void FUN_011faed0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x128);
  lVar1 = *(long *)(param_1 + 0x120) + lVar3 * 0x10;
  lVar2 = *(long *)(lVar1 + -0x10);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    *(undefined8 *)(lVar1 + -0x10) = 0;
    lVar3 = *(long *)(param_1 + 0x128);
  }
  *(long *)(param_1 + 0x128) = lVar3 + -1;
  return;
}


