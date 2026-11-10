/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b7c970; name: FUN_00b7c970
 */


int FUN_00b7c970(undefined8 param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  lVar4 = FUN_009c5ff0();
  if (lVar4 == 0) {
LAB_00b7ca10:
    lVar4 = FUN_009c5ff0(param_1);
    if (lVar4 != 0) {
      uVar5 = FUN_009c5ff0(param_1);
      uVar6 = FUN_008f35c0(uVar5,0x40000000);
      if ((uVar6 & 1) != 0) {
        return 0x213;
      }
    }
    lVar4 = FUN_009c5ff0(param_1);
    if (lVar4 != 0) {
      FUN_009c5ff0(param_1);
      uVar6 = FUN_008f89e0();
      if ((uVar6 & 1) != 0) {
        FUN_009c5ff0(param_1);
        iVar3 = FUN_008f8110();
        if (iVar3 != 2) {
          FUN_009c5ff0(param_1);
          bVar1 = FUN_008f8960();
          bVar2 = FUN_008e12a0(param_2,0x11);
          if (bVar1 < bVar2) {
            iVar3 = param_3 + 0x1fc;
            if (5 < param_3 - 1U) {
              iVar3 = param_3;
            }
            return iVar3;
          }
        }
      }
    }
  }
  else {
    uVar5 = FUN_009c5ff0(param_1);
    uVar6 = FUN_008f35c0(uVar5,0x400);
    if ((uVar6 & 1) == 0) {
      uVar5 = FUN_009c5ff0(param_1);
      uVar6 = FUN_008f35c0(uVar5,0x80000);
      if ((uVar6 & 1) == 0) {
        uVar5 = FUN_009c5ff0(param_1);
        uVar6 = FUN_008f35c0(uVar5,0x4000);
        if ((uVar6 & 1) == 0) {
          uVar5 = FUN_009c5ff0(param_1);
          uVar6 = FUN_008f89c0(uVar5,0x40);
          if ((uVar6 & 1) == 0) {
            uVar5 = FUN_009c5ff0(param_1);
            uVar6 = FUN_008f89c0(uVar5,0x80);
            if ((uVar6 & 1) == 0) goto LAB_00b7ca10;
          }
        }
      }
    }
    param_3 = 6;
  }
  return param_3;
}


