/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096a160; name: FUN_0096a160
 */


void FUN_0096a160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  FUN_0093b2e0(param_4);
  lVar2 = FUN_0093b2f0(param_4);
  if (lVar2 != 0) {
    do {
      uVar3 = FUN_0096a220(param_1,param_2,lVar2,param_3);
      if ((uVar3 & 1) != 0) {
        uVar4 = FUN_009423b0(param_1);
        uVar1 = FUN_008e0a00(lVar2);
        FUN_009360c0(uVar4,0x120,uVar1);
        FUN_0093b260(param_4,lVar2);
      }
      lVar2 = FUN_0093b2f0(param_4);
    } while (lVar2 != 0);
  }
  return;
}


