/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bce790; name: FUN_00bce790
 */


undefined8 FUN_00bce790(long param_1,int param_2,int param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (param_2 == 1) {
    if (param_3 == 0) {
      iVar2 = FUN_00884820(*(undefined8 *)(param_1 + 0x60));
      if (iVar2 != 0) {
        uVar8 = 0;
        do {
          if ((((param_4 != uVar8) && (lVar4 = FUN_00bccb30(param_1,1,0,uVar8), lVar4 != 0)) &&
              (iVar2 = FUN_0087afd0(), iVar2 != 0)) &&
             (uVar5 = FUN_0087d610(lVar4,2), (uVar5 & 1) == 0)) {
            param_2 = 1;
            param_3 = 0;
            goto LAB_00bce884;
          }
          uVar8 = uVar8 + 1;
          uVar3 = FUN_00884820(*(undefined8 *)(param_1 + 0x60));
        } while (uVar8 < uVar3);
      }
      uVar7 = 0xd;
    }
    else {
      uVar7 = 0xc;
    }
  }
  else {
    uVar5 = FUN_0150a670(*(undefined8 *)(param_1 + 0x70),param_3,param_4);
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_00bcd4d0(uVar5,param_2,param_3,param_4);
      if ((uVar5 & 1) == 0) {
LAB_00bce884:
        uVar6 = FUN_00bccb30(param_1,param_2,param_3,param_4);
        uVar5 = FUN_0087d610(uVar6,2);
        if ((uVar5 & 1) == 0) {
          sVar1 = FUN_008787f0(uVar6);
          if ((ushort)(sVar1 - 0x44fU) < 2) {
            uVar7 = 0x11;
          }
          else {
            iVar2 = FUN_008783b0(uVar6);
            if (iVar2 == 0x382) {
              sVar1 = FUN_008783c0(uVar6);
              if (sVar1 == 0) {
                return 1;
              }
            }
            else if (iVar2 == 800) {
              sVar1 = FUN_008783c0(uVar6);
              if (sVar1 == 0) {
                return 1;
              }
            }
            else {
              if (iVar2 != 0x286) {
                return 1;
              }
              sVar1 = FUN_008783c0(uVar6);
              if (sVar1 == 0) {
                return 1;
              }
            }
            uVar7 = 0xf;
          }
        }
        else {
          uVar7 = 0xe;
        }
      }
      else {
        uVar7 = 0x12;
      }
    }
    else {
      uVar7 = 0x10;
    }
  }
  *(undefined4 *)(param_1 + 0x80) = uVar7;
  return 0;
}


