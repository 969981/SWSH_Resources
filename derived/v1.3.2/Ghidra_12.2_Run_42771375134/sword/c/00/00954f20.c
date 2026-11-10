/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00954f20; name: FUN_00954f20
 */


uint FUN_00954f20(undefined8 param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_0093ec60();
  uVar4 = FUN_008e4c70();
  uVar5 = FUN_008e2890(uVar6,uVar4);
  if (((uVar5 & 0xff) == 4) || (sVar3 = FUN_008e2480(uVar6,uVar5), sVar3 != 0)) {
    uVar6 = FUN_0093ec60(param_1,param_2);
    bVar1 = FUN_008e2150();
    if (bVar1 == 0) {
      uVar5 = 4;
    }
    else {
      uVar5 = 0;
      do {
        sVar3 = FUN_008e2480(uVar6,uVar5);
        if (sVar3 == 0) goto LAB_00954fc0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < bVar1);
      uVar5 = 4;
LAB_00954fc0:
      if ((uVar5 & 0xff) != 4) {
        return uVar5;
      }
    }
    if ((param_3 & 1) != 0) {
      uVar6 = FUN_0093ec60(param_1,param_2);
      bVar1 = FUN_008e2150();
      if (bVar1 != 0) {
        uVar5 = 0;
        do {
          cVar2 = FUN_008e2440(uVar6,uVar5);
          if (cVar2 != '\0') {
            return uVar5;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < bVar1);
      }
      uVar5 = 4;
    }
  }
  return uVar5;
}


