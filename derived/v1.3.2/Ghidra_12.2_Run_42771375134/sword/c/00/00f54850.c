/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f54850; name: FUN_00f54850
 */


undefined8
FUN_00f54850(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 *param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  char *pcVar7;
  byte *pbVar8;
  
  *param_6 = 1;
  param_6[1] = param_6[1] + 1;
  if ((int)param_4 == 7) {
    iVar1 = FUN_01760f10(param_2,param_3);
    if (iVar1 != 0) {
      uVar2 = FUN_0175ef10(param_2);
      pbVar3 = (byte *)FUN_00f52fb0();
      pbVar8 = *(byte **)(pbVar3 + 0x10);
      if ((*pbVar3 & 1) == 0) {
        pbVar8 = pbVar3 + 1;
      }
      FUN_01760900(param_2,0xfff0b9d8,pbVar8);
      iVar1 = FUN_0175f320(param_2,0xffffffff);
      if ((iVar1 == 0) || (iVar1 = FUN_0175f730(param_2,0xffffffff,uVar2), iVar1 != 1)) {
        FUN_0175ef30(param_2,0xfffffffe);
        pbVar3 = (byte *)FUN_00f51d70();
        pbVar8 = *(byte **)(pbVar3 + 0x10);
        if ((*pbVar3 & 1) == 0) {
          pbVar8 = pbVar3 + 1;
        }
        FUN_01760900(param_2,0xfff0b9d8,pbVar8);
        iVar1 = FUN_0175f320(param_2,0xffffffff);
        if ((iVar1 == 0) || (iVar1 = FUN_0175f730(param_2,0xffffffff,uVar2), iVar1 != 1)) {
          FUN_0175ef30(param_2,0xfffffffe);
          pbVar3 = (byte *)FUN_00f53810();
          pbVar8 = *(byte **)(pbVar3 + 0x10);
          if ((*pbVar3 & 1) == 0) {
            pbVar8 = pbVar3 + 1;
          }
          FUN_01760900(param_2,0xfff0b9d8,pbVar8);
          iVar1 = FUN_0175f320(param_2,0xffffffff);
          if ((iVar1 == 0) || (iVar1 = FUN_0175f730(param_2,0xffffffff,uVar2), iVar1 != 1)) {
            FUN_0175ef30(param_2,0xfffffffe);
            pbVar3 = (byte *)FUN_00f54030();
            pbVar8 = *(byte **)(pbVar3 + 0x10);
            if ((*pbVar3 & 1) == 0) {
              pbVar8 = pbVar3 + 1;
            }
            FUN_01760900(param_2,0xfff0b9d8,pbVar8);
            iVar1 = FUN_0175f320(param_2,0xffffffff);
            if ((iVar1 == 0) || (iVar1 = FUN_0175f730(param_2,0xffffffff,uVar2), iVar1 != 1)) {
              FUN_0175ef30(param_2,0xfffffffe);
              if (*PTR_DAT_02720bf0 == '\0') {
LAB_00f54acc:
                FUN_0175ef30(param_2,0xfffffffe);
              }
              else {
                FUN_017603f0(param_2,"class_check");
                FUN_01760bb0(param_2,uVar2);
                iVar1 = FUN_0175f320(param_2,0xffffffff);
                if (iVar1 == 0) {
                  FUN_0175ef30(param_2,0xfffffffe);
                  goto LAB_00f54acc;
                }
                pcVar5 = (code *)FUN_01760060(param_2,0xffffffff);
                FUN_00f52ef0();
                uVar6 = (*pcVar5)();
                FUN_0175ef30(param_2,0xfffffffe);
                FUN_0175ef30(param_2,0xfffffffe);
                if ((uVar6 & 1) != 0) goto LAB_00f54a00;
              }
              pcVar5 = (code *)*param_5;
              pcVar7 = "value at this index does not properly reflect the desired type";
              param_4 = 7;
              goto LAB_00f54a18;
            }
          }
        }
      }
      FUN_0175ef30(param_2,0xfffffffd);
    }
LAB_00f54a00:
    uVar4 = 1;
  }
  else {
    pcVar5 = (code *)*param_5;
    pcVar7 = "value is not a valid userdata";
LAB_00f54a18:
    (*pcVar5)(param_2,param_3,7,param_4,pcVar7);
    uVar4 = 0;
  }
  return uVar4;
}


