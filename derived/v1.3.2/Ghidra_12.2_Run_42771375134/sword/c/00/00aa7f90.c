/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa7f90; name: FUN_00aa7f90
 */


undefined8 FUN_00aa7f90(long param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_009c6000(*(undefined8 *)(param_1 + 8));
  uVar3 = FUN_008f97f0(uVar4,param_2);
  cVar1 = FUN_008f96b0(uVar4,uVar3);
  cVar2 = FUN_008f98a0(uVar4);
  if (cVar1 == cVar2) {
    (**(code **)(**(long **)(param_1 + 8) + 0x7f8))(*(long **)(param_1 + 8),param_2);
    uVar4 = FUN_008e0a10();
    return uVar4;
  }
  return 0;
}


