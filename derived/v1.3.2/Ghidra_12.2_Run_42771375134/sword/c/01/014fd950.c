/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014fd950; name: FUN_014fd950
 */


ulong FUN_014fd950(long *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  byte local_30 [4];
  byte local_2c [4];
  uint local_28;
  uint local_24;
  
  plVar4 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar5 = (long *)(**(code **)(*plVar4 + 0x28))();
  uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,1,plVar4[1]);
  if ((uVar6 & 1) == 0) {
LAB_014fdc24:
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*plVar4 + 0x10))(plVar4,local_2c,1,0);
    uVar8 = (uint)local_2c[0] << 8;
    if ((uVar6 & 1) == 0) {
      uVar8 = 0;
    }
    if ((uVar6 & 1) == 0) goto LAB_014fdc24;
    uVar8 = uVar8 >> 8;
    uVar6 = (ulong)uVar8;
    if (9 < (uVar8 - 8 & 0xff)) {
      if (uVar8 - 1 < 2) {
        uVar7 = 0;
        uVar9 = 0;
        uVar6 = 3;
        goto LAB_014fdc30;
      }
      if (uVar8 == 5) {
        plVar4 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
        plVar5 = (long *)(**(code **)(*plVar4 + 0x28))();
        uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,4,plVar4[1] + 1);
        if ((uVar6 & 1) != 0) {
          uVar6 = (**(code **)(*plVar4 + 0x10))(plVar4,&local_24,4,1);
          uVar9 = (ulong)local_24 << 0x20;
          if ((uVar6 & 1) == 0) {
            uVar9 = 0;
          }
          if ((uVar6 & 1) != 0) {
            plVar4 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
            plVar5 = (long *)(**(code **)(*plVar4 + 0x28))();
            uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,1,plVar4[1] + 5);
            if ((uVar6 & 1) != 0) {
              uVar6 = (**(code **)(*plVar4 + 0x10))(plVar4,local_30,1,5);
              uVar7 = (ulong)local_30[0] << 8;
              if ((uVar6 & 1) == 0) {
                uVar7 = 0;
              }
              if ((uVar6 & 1) != 0) {
                iVar1 = (int)(uVar7 >> 8);
                bVar2 = 9 < (iVar1 - 8U & 0xff);
                uVar8 = 5;
                if (iVar1 != 3 && bVar2) {
                  uVar8 = 0;
                }
                uVar6 = (ulong)uVar8;
                if (iVar1 != 3 && bVar2) {
                  uVar9 = 0;
                  uVar7 = 0;
                }
                goto LAB_014fdc30;
              }
            }
          }
        }
      }
      else if (uVar8 == 4) {
        plVar4 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
        plVar5 = (long *)(**(code **)(*plVar4 + 0x28))();
        uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,4,plVar4[1] + 1);
        if ((uVar6 & 1) == 0) {
          uVar9 = 0;
          uVar8 = 0;
        }
        else {
          uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,&local_28,4,1);
          uVar8 = uVar3 & 1;
          uVar9 = (ulong)local_28 << 0x20;
          if ((uVar3 & 1) == 0) {
            uVar9 = 0;
          }
        }
        uVar7 = 0;
        if (uVar8 == 0) {
          uVar9 = 0;
        }
        uVar6 = (ulong)(uVar8 != 0) << 2;
        goto LAB_014fdc30;
      }
      goto LAB_014fdc24;
    }
  }
  uVar7 = 0;
  uVar9 = 0;
LAB_014fdc30:
  return uVar7 | uVar6 | uVar9;
}


