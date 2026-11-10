/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009de290; name: FUN_009de290
 */


void FUN_009de290(undefined8 param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar2 = FUN_008f37f0(param_2,param_3);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00931920(param_1);
    uVar3 = FUN_008df3b0(uVar3,param_3 & 0xff);
    bVar1 = FUN_009141c0();
    if (bVar1 != 0) {
      uVar5 = 0;
      do {
        uVar4 = FUN_00914310(uVar3,uVar5);
        uVar2 = FUN_008e0a10();
        if ((uVar2 & 1) != 0) {
          FUN_008e5b10(uVar4);
        }
        uVar5 = uVar5 + 1;
      } while (bVar1 != uVar5);
    }
  }
  return;
}


