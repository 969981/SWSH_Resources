/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcf510; name: FUN_00bcf510
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00bcf510(long param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long local_58;
  
  if (param_2 == 0) {
    uVar6 = FUN_0150a670(*(undefined8 *)(param_1 + 0x70),param_3,param_4);
    if ((uVar6 & 1) != 0) {
      return 2;
    }
    uVar6 = FUN_00bcd4d0(uVar6,0,param_3,param_4);
    if ((uVar6 & 1) != 0) {
      return 3;
    }
    uVar5 = 0;
    if ((param_3 < 0x20) && (param_4 < 0x1e)) {
      uVar5 = *(undefined8 *)(param_1 + 0x68);
      local_58 = *(long *)(param_1 + 0x78);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
      }
      FUN_01505e60(uVar5,&local_58,param_3,param_4);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      uVar6 = FUN_008787d0(*(undefined8 *)(param_1 + 0x78));
      if ((uVar6 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x78);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else {
    if (param_2 == 1) {
      if ((param_3 == 0) && (uVar2 = FUN_00884820(*(undefined8 *)(param_1 + 0x60)), uVar2 != 0)) {
        uVar7 = 0;
        do {
          if (param_4 != uVar7) {
            uVar3 = FUN_00884820(*(undefined8 *)(param_1 + 0x60));
            if (uVar7 < uVar3) {
              uVar5 = (**(code **)(**(long **)(param_1 + 0x60) + 0x50))
                                (*(long **)(param_1 + 0x60),uVar7);
              iVar4 = FUN_0087afd0(uVar5);
            }
            else {
              uVar5 = 0;
              iVar4 = FUN_0087afd0(0);
            }
            if ((iVar4 != 0) && (uVar6 = FUN_0087d610(uVar5,2), (uVar6 & 1) == 0))
            goto LAB_00bcf5d8;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar2);
      }
      return 4;
    }
LAB_00bcf5d8:
    uVar5 = FUN_00bccb30(param_1,param_2,param_3,param_4);
  }
  if ((param_5 & 1) == 0) {
    uVar6 = FUN_0087d610(uVar5,2);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
  }
  else {
    uVar6 = FUN_0087d610(uVar5,1);
    if ((uVar6 & 1) != 0) {
      return 6;
    }
  }
  iVar4 = FUN_008783b0(uVar5);
  if ((((iVar4 == 0x382) || (iVar4 == 800)) || (iVar4 == 0x286)) &&
     (sVar1 = FUN_008783c0(uVar5), sVar1 != 0)) {
    uVar5 = 5;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


