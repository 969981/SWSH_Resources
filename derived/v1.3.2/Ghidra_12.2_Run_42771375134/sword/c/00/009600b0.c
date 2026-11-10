/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009600b0; name: FUN_009600b0
 */


void FUN_009600b0(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar4 = FUN_00942620();
  if (iVar4 == 2) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar7 = param_3[2];
    uVar5 = FUN_008e0b50(uVar1);
    if ((uVar5 & 1) == 0) {
      FUN_0093b2e0(uVar2);
      lVar6 = FUN_0093b2f0(uVar2);
      if (lVar6 != 0) {
        do {
          uVar5 = FUN_008e0b50(lVar6);
          if (((uVar5 & 1) != 0) && (uVar5 = FUN_008e1600(lVar6), (uVar5 & 1) == 0)) {
            bVar3 = FUN_00960170(param_1,uVar1,lVar6,uVar7);
            *param_2 = bVar3 & 1;
            return;
          }
          lVar6 = FUN_0093b2f0(uVar2);
        } while (lVar6 != 0);
      }
    }
  }
  return;
}


