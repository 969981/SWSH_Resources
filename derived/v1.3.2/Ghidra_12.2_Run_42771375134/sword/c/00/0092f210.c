/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092f210; name: FUN_0092f210
 */


undefined8 FUN_0092f210(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_008f8110();
  if (iVar2 == 2) {
    uVar4 = FUN_009122a0();
    if ((uVar4 & 1) != 0) {
      uVar5 = FUN_00931920(param_2);
      FUN_008df3c0(uVar5,0);
      cVar1 = FUN_009141d0();
      if (cVar1 == '\0') {
        return 1;
      }
    }
    uVar5 = FUN_00931920(param_2);
    FUN_008df7f0(uVar5,4);
    uVar4 = FUN_008e1600();
    if ((uVar4 & 1) == 0) {
      FUN_00931a50(param_2);
      uVar4 = FUN_009347b0();
      if ((uVar4 & 1) == 0) {
        uVar5 = FUN_0092f460(param_1,param_2,0);
        return uVar5;
      }
    }
    return 1;
  }
  uVar4 = FUN_008f35c0(param_1,0x8000);
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_00931920(param_2);
    FUN_008df3c0(uVar5,0);
    cVar1 = FUN_009141d0();
    if (cVar1 == '\0') {
      return 1;
    }
  }
  uVar4 = FUN_008f37f0(param_1,0);
  if ((uVar4 & 1) == 0) {
LAB_0092f374:
    uVar4 = FUN_008f37f0(param_1,1);
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_008f8ca0(param_1,1);
      uVar4 = FUN_0092f460(param_1,param_2,uVar3);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
    }
    uVar4 = FUN_008f37f0(param_1,2);
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_008f8ca0(param_1,2);
      uVar4 = FUN_0092f460(param_1,param_2,uVar3);
      if ((uVar4 & 1) != 0) goto LAB_0092f438;
    }
    uVar4 = FUN_008f37f0(param_1,3);
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_008f8ca0(param_1,3);
      uVar4 = FUN_0092f460(param_1,param_2,uVar3);
      if ((uVar4 & 1) != 0) goto LAB_0092f438;
    }
    uVar4 = FUN_008f37f0(param_1,4);
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_008f8ca0(param_1,4);
      uVar4 = FUN_0092f460(param_1,param_2,uVar3);
      if ((uVar4 & 1) != 0) goto LAB_0092f438;
    }
    uVar5 = 0;
  }
  else {
    uVar3 = FUN_008f8ca0(param_1,0);
    uVar4 = FUN_0092f460(param_1,param_2,uVar3);
    if ((uVar4 & 1) == 0) goto LAB_0092f374;
LAB_0092f438:
    uVar5 = 1;
  }
  return uVar5;
}


