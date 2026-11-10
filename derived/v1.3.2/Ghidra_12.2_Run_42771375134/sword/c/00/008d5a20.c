/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d5a20; name: FUN_008d5a20
 */


ushort FUN_008d5a20(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  uint uVar7;
  
  uVar3 = FUN_008e0a00(param_2);
  uVar4 = FUN_008e0a00(param_3);
  bVar1 = FUN_008e2150(param_2);
  uVar2 = 0;
  if (bVar1 != 0) {
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar5 = FUN_008e2240(param_2,uVar7);
      uVar2 = FUN_008d60d0(*(undefined8 *)(param_1 + 0x68),uVar3,uVar4,uVar5,1,param_4 & 1);
      uVar7 = uVar7 + 1;
      if (uVar2 <= uVar6) {
        uVar2 = uVar6;
      }
      uVar6 = uVar2;
    } while (bVar1 != uVar7);
  }
  return uVar2;
}


