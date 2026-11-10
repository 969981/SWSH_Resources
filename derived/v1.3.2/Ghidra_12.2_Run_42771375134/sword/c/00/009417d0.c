/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009417d0; name: FUN_009417d0
 */


undefined8 FUN_009417d0(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_00931920(*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_008df3f0(uVar2,param_2);
  iVar1 = FUN_008e12a0(uVar2,0x13);
  if ((iVar1 != 0x67) && (uVar3 = FUN_008e1810(uVar2,0x13), (uVar3 & 1) == 0)) {
    uVar2 = FUN_00931930(*(undefined8 *)(param_1 + 8));
    uVar3 = FUN_00932ae0(uVar2,5);
    if ((uVar3 & 1) == 0) {
      uVar2 = FUN_00931920(*(undefined8 *)(param_1 + 8));
      FUN_008df3f0(uVar2,param_2);
      uVar2 = FUN_008e2d10();
      return uVar2;
    }
  }
  return 0;
}


