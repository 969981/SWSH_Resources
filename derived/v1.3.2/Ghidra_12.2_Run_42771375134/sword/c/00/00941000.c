/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00941000; name: FUN_00941000
 */


bool FUN_00941000(long param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_008db860(*(undefined8 *)(param_1 + 0x40),0);
  if (iVar2 == 0) {
    uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 8));
    FUN_008df3f0(uVar3,param_2);
    sVar1 = FUN_008e2d10();
    return sVar1 == 0;
  }
  return false;
}


