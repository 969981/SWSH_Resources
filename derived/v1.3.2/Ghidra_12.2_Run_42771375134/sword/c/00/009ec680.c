/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ec680; name: FUN_009ec680
 */


uint FUN_009ec680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  
  bVar1 = FUN_008e2150(param_3);
  uVar9 = 0;
  if (bVar1 != 0) {
    uVar10 = 0;
    do {
      sVar2 = FUN_008e2480(param_3,uVar10);
      if (sVar2 != 0) {
        uVar4 = FUN_008e2240(param_3,uVar10);
        uVar8 = FUN_00880c60();
        if ((uVar8 & 1) != 0) {
          uVar3 = FUN_00880ab0(uVar4);
          uVar5 = FUN_008e0a00(param_3);
          uVar6 = FUN_008e0a00(param_4);
          uVar4 = FUN_008d6160(param_2,uVar5,uVar6,uVar4,0,0);
          uVar7 = FUN_008ebee0(uVar3,uVar4);
          if (uVar7 <= uVar9) {
            uVar7 = uVar9;
          }
          uVar9 = uVar7;
        }
      }
      uVar10 = uVar10 + 1;
    } while (bVar1 != uVar10);
  }
  return uVar9;
}


