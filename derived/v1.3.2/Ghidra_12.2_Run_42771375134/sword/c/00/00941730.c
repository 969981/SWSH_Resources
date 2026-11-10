/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00941730; name: FUN_00941730
 */


uint FUN_00941730(long param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 8));
  uVar3 = FUN_008df3f0(uVar3,param_2);
  iVar1 = FUN_008e12a0(uVar3,0x13);
  if (iVar1 == 0x67) {
    return 0;
  }
  uVar4 = FUN_008e1810(uVar3,0x13);
  if ((uVar4 & 1) == 0) {
    uVar3 = FUN_00931930(*(undefined8 *)(param_1 + 8));
    uVar2 = FUN_00932ae0(uVar3,5);
    return (uVar2 ^ 1) & 1;
  }
  return 0;
}


