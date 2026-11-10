/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094b580; name: FUN_0094b580
 */


void FUN_0094b580(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  iVar3 = FUN_00942620();
  if ((((iVar3 == 2) && (uVar5 = FUN_00942670(param_1,0x800), (uVar5 & 1) == 0)) &&
      (uVar5 = FUN_00942670(param_1,0x1000), (uVar5 & 1) == 0)) &&
     (((uVar5 = FUN_00942670(param_1,0x40000), (uVar5 & 1) == 0 &&
       (uVar5 = FUN_00942680(param_1,0x10), (uVar5 & 1) == 0)) &&
      ((uVar5 = FUN_00942680(param_1,0x20), (uVar5 & 1) == 0 &&
       (uVar5 = FUN_008e0b50(param_2), (uVar5 & 1) == 0)))))) {
    FUN_008e0a00(param_2);
    uVar4 = FUN_008f94e0();
    FUN_009425f0(param_1,uVar4);
    cVar2 = FUN_009141d0();
    if (cVar2 == '\0') {
      FUN_009423b0(param_1);
      FUN_00939d30();
      FUN_00942390(param_1);
      FUN_00931a60();
      iVar3 = FUN_00934780();
      uVar1 = iVar3 - 1U & 0xff;
      if (uVar1 < 3) {
        uVar6 = FUN_009423b0(param_1);
        FUN_00937300(uVar6,4,0,uVar1 + 0x84);
        return;
      }
      FUN_00942390(param_1);
      FUN_00931a60();
      FUN_00934830();
      return;
    }
  }
  return;
}


