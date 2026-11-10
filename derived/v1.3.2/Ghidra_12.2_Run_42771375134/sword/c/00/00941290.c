/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00941290; name: FUN_00941290
 */


void FUN_00941290(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00931920(*(undefined8 *)(param_1 + 8));
  lVar2 = FUN_008df3f0(uVar1,param_2);
  if (lVar2 == 0) {
    return;
  }
  FUN_008e19f0();
  return;
}


