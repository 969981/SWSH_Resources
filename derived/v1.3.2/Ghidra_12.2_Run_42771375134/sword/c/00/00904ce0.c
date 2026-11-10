/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00904ce0; name: FUN_00904ce0
 */


int FUN_00904ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  
  bVar1 = FUN_008f9310(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6));
  if (bVar1 != 0) {
    uVar6 = 0;
    do {
      uVar4 = FUN_00914330(*(undefined8 *)(param_1 + 0x340),uVar6);
      uVar5 = FUN_008e1600();
      if ((uVar5 & 1) == 0) {
        sVar2 = FUN_008e2d30(uVar4,*(undefined8 *)(param_1 + 0xe0));
        if (sVar2 == 0xe4) {
          return 5;
        }
        iVar3 = FUN_008e12a0(uVar4,0x13);
        if (iVar3 == 0x32) {
          return 5;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < bVar1);
    uVar6 = 0;
    do {
      uVar4 = FUN_00914330(*(undefined8 *)(param_1 + 0x340),uVar6);
      iVar3 = FUN_00905070(param_1,uVar4,param_2,param_3);
      if (iVar3 != 5) {
        return iVar3;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < bVar1);
  }
  return 5;
}


