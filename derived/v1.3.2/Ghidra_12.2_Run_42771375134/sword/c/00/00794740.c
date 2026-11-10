/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00794740; name: FUN_00794740
 */


void FUN_00794740(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x270) + 0xe0);
  if ((lVar2 == 0) || (*(int *)(*(long *)(param_1 + 0x270) + 0xe8) != *(int *)(lVar2 + 0x2c))) {
    return;
  }
  uVar1 = FUN_0078d120();
  FUN_019d67f0(uVar1,1);
  return;
}


