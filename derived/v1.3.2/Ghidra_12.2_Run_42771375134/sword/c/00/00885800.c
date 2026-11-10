/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00885800; name: FUN_00885800
 */


undefined8 FUN_00885800(long *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  byte bVar9;
  
  iVar2 = FUN_008660d0(3);
  if (iVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar8 = 0;
      uVar3 = 0;
      bVar9 = 0;
      iVar2 = bVar1 - 1;
      do {
        uVar4 = (**(code **)(*param_1 + 0x50))(param_1,uVar8);
        if (bVar9 == 0) {
          lVar5 = 0;
          if ((int)uVar8 < iVar2) goto LAB_00885888;
LAB_00885900:
          lVar6 = 0;
          uVar7 = FUN_0087ee60(uVar4);
        }
        else {
          lVar5 = (**(code **)(*param_1 + 0x50))(param_1,uVar8 - 1);
          if (iVar2 <= (int)uVar8) goto LAB_00885900;
LAB_00885888:
          lVar6 = (**(code **)(*param_1 + 0x50))(param_1,uVar8 + 1);
          uVar7 = FUN_0087ee60(uVar4);
        }
        if ((uVar7 & 1) != 0) {
          if ((lVar5 != 0) && (uVar7 = FUN_0087ee80(lVar5), (uVar7 & 1) == 0)) {
            FUN_0087ef40(uVar4,lVar5);
            uVar3 = 1;
          }
          if ((lVar6 != 0) && (uVar7 = FUN_0087ee80(lVar6), (uVar7 & 1) == 0)) {
            FUN_0087ef40(uVar4,lVar6);
            bVar9 = bVar9 + 1;
            uVar3 = 1;
          }
        }
        bVar9 = bVar9 + 1;
        uVar8 = (uint)bVar9;
      } while (uVar8 < bVar1);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


