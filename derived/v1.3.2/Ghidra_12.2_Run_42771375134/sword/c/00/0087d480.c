/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087d480; name: FUN_0087d480
 */


void FUN_0087d480(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_008691c0(*(undefined8 *)(param_1 + 0x98));
  uVar2 = param_2;
  if (param_2 <= uVar1) {
    uVar2 = uVar1;
  }
  uVar2 = uVar2 - param_2;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  FUN_0086fe10(*(undefined8 *)(param_1 + 0x98),uVar2);
  FUN_00879500(param_1,1);
  return;
}


