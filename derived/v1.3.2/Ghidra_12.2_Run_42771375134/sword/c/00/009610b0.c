/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009610b0; name: FUN_009610b0
 */


undefined8 FUN_009610b0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  
  uVar1 = FUN_0093b420(param_2);
  if (uVar1 != 0) {
    uVar8 = 0;
    do {
      uVar4 = FUN_0093b2c0(param_2,uVar8);
      uVar5 = FUN_008e1600();
      if ((uVar5 & 1) == 0) {
        FUN_00942390(param_1);
        uVar6 = FUN_009319a0();
        uVar2 = FUN_008e0a00(uVar4);
        uVar5 = FUN_00913dd0(uVar6,uVar2);
        if ((uVar5 & 1) != 0) {
          iVar7 = 0;
          uVar8 = 0;
          while( true ) {
            uVar4 = FUN_0093b2c0(param_2,iVar7);
            uVar5 = FUN_008e1600();
            if ((uVar5 & 1) == 0) {
              FUN_00942390(param_1);
              uVar6 = FUN_009319a0();
              uVar2 = FUN_008e0a00(uVar4);
              uVar3 = FUN_00913dd0(uVar6,uVar2);
              uVar8 = uVar8 + (uVar3 & 1);
            }
            if (param_3 < uVar8) break;
            uVar3 = 0;
            if (uVar1 != 0) {
              uVar3 = (iVar7 + 1U) / uVar1;
            }
            iVar7 = (iVar7 + 1U) - uVar3 * uVar1;
          }
          uVar4 = FUN_0093b2c0(param_2,iVar7);
          return uVar4;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar1);
  }
  return 0;
}


