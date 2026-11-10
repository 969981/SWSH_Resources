/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a4220; name: FUN_009a4220
 */


void FUN_009a4220(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  iVar4 = FUN_00942620();
  if (iVar4 == 2) {
    FUN_00942380(param_1);
    uVar5 = FUN_009122a0();
    if ((((uVar5 & 1) == 0) && (uVar5 = FUN_009426f0(param_1), (uVar5 & 1) == 0)) &&
       (uVar5 = FUN_009a4760(param_1), (uVar5 & 1) == 0)) {
      uVar6 = FUN_00942380(param_1);
      uVar5 = FUN_008f37f0(uVar6,0);
      if ((uVar5 & 1) != 0) {
        FUN_009425f0(param_1,0);
        cVar1 = FUN_009141d0();
        if (cVar1 == '\0') {
          uVar6 = FUN_009423b0(param_1);
          FUN_00939d60(uVar6,0);
          FUN_00942390(param_1);
          uVar6 = FUN_00931a60();
          bVar2 = FUN_009347c0(uVar6,0);
          FUN_00942380(param_1);
          bVar3 = FUN_00912290();
          if (bVar3 <= bVar2) {
            uVar6 = FUN_009423b0(param_1);
            FUN_009372a0(uVar6,0,0x8a);
            uVar6 = FUN_009423b0(param_1);
            FUN_00936040(uVar6,0x187,0);
            FUN_009a4a10(param_1,0);
          }
        }
      }
      uVar6 = FUN_00942380(param_1);
      uVar5 = FUN_008f37f0(uVar6,1);
      if ((uVar5 & 1) != 0) {
        FUN_009425f0(param_1,1);
        cVar1 = FUN_009141d0();
        if (cVar1 == '\0') {
          uVar6 = FUN_009423b0(param_1);
          FUN_00939d60(uVar6,1);
          FUN_00942390(param_1);
          uVar6 = FUN_00931a60();
          bVar2 = FUN_009347c0(uVar6,1);
          FUN_00942380(param_1);
          bVar3 = FUN_00912290();
          if (bVar3 <= bVar2) {
            uVar6 = FUN_009423b0(param_1);
            FUN_009372a0(uVar6,1,0x8a);
            uVar6 = FUN_009423b0(param_1);
            FUN_00936040(uVar6,0x187,1);
            FUN_009a4a10(param_1,1);
          }
        }
      }
      uVar6 = FUN_00942380(param_1);
      uVar5 = FUN_008f37f0(uVar6,2);
      if ((uVar5 & 1) != 0) {
        FUN_009425f0(param_1,2);
        cVar1 = FUN_009141d0();
        if (cVar1 == '\0') {
          uVar6 = FUN_009423b0(param_1);
          FUN_00939d60(uVar6,2);
          FUN_00942390(param_1);
          uVar6 = FUN_00931a60();
          bVar2 = FUN_009347c0(uVar6,2);
          FUN_00942380(param_1);
          bVar3 = FUN_00912290();
          if (bVar3 <= bVar2) {
            uVar6 = FUN_009423b0(param_1);
            FUN_009372a0(uVar6,2,0x8a);
            uVar6 = FUN_009423b0(param_1);
            FUN_00936040(uVar6,0x187,2);
            FUN_009a4a10(param_1,2);
          }
        }
      }
      uVar6 = FUN_00942380(param_1);
      uVar5 = FUN_008f37f0(uVar6,3);
      if ((uVar5 & 1) != 0) {
        FUN_009425f0(param_1,3);
        cVar1 = FUN_009141d0();
        if (cVar1 == '\0') {
          uVar6 = FUN_009423b0(param_1);
          FUN_00939d60(uVar6,3);
          FUN_00942390(param_1);
          uVar6 = FUN_00931a60();
          bVar2 = FUN_009347c0(uVar6,3);
          FUN_00942380(param_1);
          bVar3 = FUN_00912290();
          if (bVar3 <= bVar2) {
            uVar6 = FUN_009423b0(param_1);
            FUN_009372a0(uVar6,3,0x8a);
            uVar6 = FUN_009423b0(param_1);
            FUN_00936040(uVar6,0x187,3);
            FUN_009a4a10(param_1,3);
          }
        }
      }
      uVar6 = FUN_00942380(param_1);
      uVar5 = FUN_008f37f0(uVar6,4);
      if ((uVar5 & 1) != 0) {
        FUN_009425f0(param_1,4);
        cVar1 = FUN_009141d0();
        if (cVar1 == '\0') {
          uVar6 = FUN_009423b0(param_1);
          FUN_00939d60(uVar6,4);
          FUN_00942390(param_1);
          uVar6 = FUN_00931a60();
          bVar2 = FUN_009347c0(uVar6,4);
          FUN_00942380(param_1);
          bVar3 = FUN_00912290();
          if (bVar3 <= bVar2) {
            uVar6 = FUN_009423b0(param_1);
            FUN_009372a0(uVar6,4,0x8a);
            uVar6 = FUN_009423b0(param_1);
            FUN_00936040(uVar6,0x187,4);
            FUN_009a4a10(param_1,4);
            return;
          }
        }
      }
    }
  }
  return;
}


