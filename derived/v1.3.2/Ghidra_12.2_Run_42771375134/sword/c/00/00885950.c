/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00885950; name: FUN_00885950
 */


void FUN_00885950(long *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 != 0) {
    uVar3 = 0;
    do {
      uVar2 = (**(code **)(*param_1 + 0x50))(param_1,uVar3);
      FUN_0087ef70(uVar2,param_2);
      uVar3 = uVar3 + 1;
    } while (bVar1 != uVar3);
  }
  return;
}


