/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087d430; name: FUN_0087d430
 */


void FUN_0087d430(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_008691c0(*(undefined8 *)(param_1 + 0x98));
  uVar2 = iVar1 + param_2;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  FUN_0086fe10(*(undefined8 *)(param_1 + 0x98),uVar2);
  FUN_00879500(param_1,1);
  return;
}


