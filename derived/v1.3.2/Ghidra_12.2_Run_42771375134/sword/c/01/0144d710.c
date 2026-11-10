/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144d710; name: FUN_0144d710
 */


undefined1  [16] FUN_0144d710(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  iVar4 = FUN_01452390();
  sVar3 = FUN_008787f0(*param_3);
  iVar8 = 1;
  if (sVar3 == 0xd7) {
    iVar8 = 2;
  }
  uVar6 = FUN_0087ee80(*param_3);
  uVar9 = 0x10;
  if ((uVar6 & 1) == 0) {
    uVar9 = 8;
  }
  iVar5 = FUN_01452320(param_1,param_2);
  sVar3 = FUN_008787f0(*param_3);
  if (sVar3 == 0x126) {
    bVar2 = iVar5 == 0;
    uVar7 = 6;
    if (!bVar2) {
      uVar7 = 0;
    }
  }
  else {
    sVar3 = FUN_008787f0(*param_3);
    if (sVar3 == 0x121) {
      bVar2 = iVar5 == 1;
      uVar7 = 6;
      if (!bVar2) {
        uVar7 = 1;
      }
    }
    else {
      sVar3 = FUN_008787f0(*param_3);
      if (sVar3 == 0x122) {
        bVar2 = iVar5 == 2;
        uVar10 = 2;
      }
      else {
        sVar3 = FUN_008787f0(*param_3);
        if (sVar3 == 0x123) {
          bVar2 = iVar5 == 3;
          uVar10 = 3;
        }
        else {
          sVar3 = FUN_008787f0(*param_3);
          if (sVar3 != 0x124) {
            sVar3 = FUN_008787f0(*param_3);
            if (sVar3 != 0x125) {
              uVar1 = 0;
              uVar7 = 6;
              goto LAB_0144d848;
            }
            bVar2 = iVar5 == 5;
            uVar7 = 5;
            if (bVar2) {
              uVar7 = 6;
            }
            goto LAB_0144d840;
          }
          bVar2 = iVar5 == 4;
          uVar10 = 4;
        }
      }
      uVar7 = 6;
      if (!bVar2) {
        uVar7 = uVar10;
      }
    }
  }
LAB_0144d840:
  iVar5 = iVar4 + 8;
  uVar1 = 0;
  if (!bVar2) {
    iVar5 = iVar4;
    uVar1 = uVar9;
  }
  iVar4 = iVar5;
LAB_0144d848:
  auVar11._4_4_ = uVar1;
  auVar11._0_4_ = iVar4 * (iVar8 << (uVar6 & 1));
  auVar11._8_8_ = uVar7;
  return auVar11;
}


