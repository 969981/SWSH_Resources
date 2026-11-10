/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d5560; name: FUN_008d5560
 */


undefined8 FUN_008d5560(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 == 0) {
    return 5;
  }
  uVar2 = FUN_00931920(*(undefined8 *)(param_1 + 0x60));
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = FUN_008e0a00(lVar3);
  uVar2 = FUN_008f9470(uVar4,uVar2,uVar1);
  return uVar2;
}


