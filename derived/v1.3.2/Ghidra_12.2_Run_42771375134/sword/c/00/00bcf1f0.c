/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcf1f0; name: FUN_00bcf1f0
 */


undefined4
FUN_00bcf1f0(long param_1,int param_2,uint param_3,uint param_4,int param_5,uint param_6,
            uint param_7,long param_8,uint param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ushort *puVar8;
  uint uVar9;
  long local_68;
  
  if (param_5 == 0) {
    if (param_2 == 1) {
      return 5;
    }
LAB_00bcf3a0:
    if (param_2 != 0) goto LAB_00bcf3a4;
    uVar7 = FUN_0150a670(*(undefined8 *)(param_1 + 0x70),param_3,param_4);
    if ((uVar7 & 1) != 0) {
      return 2;
    }
    uVar7 = FUN_00bcd4d0(uVar7,0,param_3,param_4);
    if ((uVar7 & 1) != 0) {
      return 3;
    }
    uVar6 = 0;
    if ((param_3 < 0x20) && (param_4 < 0x1e)) {
      uVar6 = *(undefined8 *)(param_1 + 0x68);
      local_68 = *(long *)(param_1 + 0x78);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
      }
      FUN_01505e60(uVar6,&local_68,param_3,param_4);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      uVar7 = FUN_008787d0(*(undefined8 *)(param_1 + 0x78));
      if ((uVar7 & 1) == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x78);
        uVar7 = FUN_0087d610(uVar6,2);
      }
      else {
        uVar6 = 0;
        uVar7 = FUN_0087d610(0,2);
      }
      goto joined_r0x00bcf508;
    }
  }
  else {
    if (param_2 != 1) goto LAB_00bcf3a0;
    if (param_3 != 0) {
      return 4;
    }
    if (param_5 == 1) {
      uVar1 = FUN_00884820(*(undefined8 *)(param_1 + 0x60));
      if (uVar1 == 0) {
        return 4;
      }
      uVar9 = 0;
      if (param_9 != 0) {
        do {
          if (uVar9 != param_4) {
            uVar2 = FUN_00884820(*(undefined8 *)(param_1 + 0x60));
            if (uVar9 < uVar2) {
              uVar6 = (**(code **)(**(long **)(param_1 + 0x60) + 0x50))
                                (*(long **)(param_1 + 0x60),uVar9);
              iVar3 = FUN_0087afd0(uVar6);
            }
            else {
              uVar6 = 0;
              iVar3 = FUN_0087afd0(0);
            }
            if ((iVar3 != 0) && (uVar7 = FUN_0087d610(uVar6,2), (uVar7 & 1) == 0)) {
              uVar7 = 0;
              puVar8 = (ushort *)(param_8 + 6);
              while (((*(int *)(puVar8 + -3) != 1 || (puVar8[-1] != 0)) || (uVar9 != *puVar8))) {
                uVar7 = uVar7 + 1;
                puVar8 = puVar8 + 4;
                if (param_9 <= uVar7) goto LAB_00bcf3a0;
              }
            }
          }
          uVar9 = uVar9 + 1;
          if (uVar1 <= uVar9) {
            return 4;
          }
        } while( true );
      }
      do {
        if (param_4 != uVar9) {
          uVar2 = FUN_00884820(*(undefined8 *)(param_1 + 0x60));
          if (uVar9 < uVar2) {
            uVar6 = (**(code **)(**(long **)(param_1 + 0x60) + 0x50))
                              (*(long **)(param_1 + 0x60),uVar9);
            iVar3 = FUN_0087afd0(uVar6);
          }
          else {
            uVar6 = 0;
            iVar3 = FUN_0087afd0(0);
          }
          if ((iVar3 != 0) && (uVar7 = FUN_0087d610(uVar6,2), (uVar7 & 1) == 0)) goto LAB_00bcf3a0;
        }
        uVar9 = uVar9 + 1;
        if (uVar1 <= uVar9) {
          return 4;
        }
      } while( true );
    }
LAB_00bcf3a4:
    uVar6 = FUN_00bccb30(param_1,param_2,param_3,param_4);
  }
  uVar7 = FUN_0087d610(uVar6,2);
joined_r0x00bcf508:
  if ((uVar7 & 1) == 0) {
    if ((param_7 & 1) != 0) {
      uVar4 = FUN_008783b0(uVar6);
      uVar5 = FUN_008783c0(uVar6);
      uVar7 = FUN_009fc280(uVar4,uVar5);
      if ((uVar7 & 1) != 0) {
        return 7;
      }
    }
    iVar3 = FUN_0087afd0(uVar6);
    uVar4 = 0;
    if (iVar3 == 0 && (param_6 & 1) == 0) {
      uVar4 = 6;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


