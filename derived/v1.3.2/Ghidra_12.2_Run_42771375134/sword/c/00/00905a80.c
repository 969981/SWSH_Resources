/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00905a80; name: FUN_00905a80
 */


ulong FUN_00905a80(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = FUN_008f9310(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6));
  uVar5 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58));
  uVar2 = FUN_008ecc50(uVar5,uVar1);
  uVar3 = FUN_009141c0(*(undefined8 *)(param_1 + 0x340));
  uVar2 = uVar2 & 0xff;
  uVar3 = uVar3 & 0xff;
  if (uVar2 < uVar3) {
    uVar7 = 0;
    if (param_2 == 0) {
      do {
        FUN_00914330(*(undefined8 *)(param_1 + 0x340),uVar2);
        uVar4 = FUN_008e18d0();
        uVar2 = uVar2 + 1;
        uVar7 = (ulong)((int)uVar7 + (uVar4 & 1));
      } while (uVar3 != uVar2);
    }
    else {
      do {
        FUN_00914330(*(undefined8 *)(param_1 + 0x340),uVar2);
        uVar6 = FUN_008e18d0();
        if ((uVar6 & 1) != 0) {
          uVar6 = uVar7 & 0xff;
          uVar7 = (ulong)((int)uVar7 + 1);
          *(char *)(param_2 + uVar6) = (char)uVar2;
        }
        uVar2 = uVar2 + 1;
      } while (uVar3 != uVar2);
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}


