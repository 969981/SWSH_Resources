/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093bf80; name: FUN_0093bf80
 */


void FUN_0093bf80(long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar2 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
  uVar2 = FUN_008deea0(uVar2,param_2);
  uVar1 = FUN_008e2360(uVar2,param_3);
  iVar3 = -1;
  if (((uVar1 ^ 0xffffffff) & 0xff) != 0) {
    iVar3 = uVar1 + 1;
  }
  FUN_008e2390(uVar2,param_3,iVar3);
  return;
}


