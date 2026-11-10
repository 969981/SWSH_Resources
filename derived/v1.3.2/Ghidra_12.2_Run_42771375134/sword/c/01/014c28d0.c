/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c28d0; name: FUN_014c28d0
 */


undefined8
FUN_014c28d0(undefined8 param_1,short *param_2,undefined8 param_3,long param_4,int param_5,
            int param_6,undefined4 param_7)

{
  short *psVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  short *psVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  plVar4 = (long *)FUN_019cc190(param_3);
  if ((plVar4 == (long *)0x0) || (iVar3 = (**(code **)(*plVar4 + 0x48))(), iVar3 == 2)) {
    puVar2 = PTR_DAT_02710820;
    if (param_5 - 2U < 8) {
      lVar7 = *(long *)(&DAT_02171e40 + (long)(int)(param_5 - 2U) * 8);
    }
    else {
      lVar7 = 0;
    }
    lVar7 = *(long *)(*(long *)PTR_DAT_02710820 + lVar7 * 0x20 + (long)param_6 * 8 + 0x1c0);
    if (lVar7 != 0) {
      plVar4 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    uVar10 = 0;
    lVar9 = lVar7;
    if ((0 < param_4) && (*param_2 != 0)) {
      psVar1 = param_2 + param_4;
      uVar10 = 0;
      if (lVar7 == 0) {
        do {
          psVar5 = (short *)FUN_0077db30(param_2);
          if (param_2 == psVar5) {
            uVar6 = FUN_014ba310(*param_2);
            if ((uVar6 & 1) == 0) {
              uVar6 = FUN_014ba2e0(*param_2,0);
              if ((uVar6 & 1) == 0) {
                FUN_014c4740(lVar9,*param_2,param_7);
                uVar10 = 1;
                psVar5 = param_2 + 1;
              }
              else {
                iVar3 = FUN_014ba2c0(*param_2);
                if (iVar3 - 2U < 8) {
                  lVar8 = *(long *)(&DAT_02171e40 + (long)(int)(iVar3 - 2U) * 8);
                }
                else {
                  lVar8 = 0;
                }
                lVar8 = *(long *)(*(long *)puVar2 + lVar8 * 0x20 + (long)param_6 * 8 + 0x1c0);
                if (lVar8 != 0) {
                  (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
                }
                if (lVar9 != 0) {
                  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
                }
                lVar9 = lVar8;
                psVar5 = param_2 + 1;
              }
            }
            else {
              if (lVar9 != 0) {
                (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
              }
              lVar9 = lVar7;
              psVar5 = param_2 + 1;
            }
          }
          param_2 = psVar5;
        } while ((param_2 < psVar1) && (*param_2 != 0));
      }
      else {
        do {
          psVar5 = (short *)FUN_0077db30(param_2);
          if (param_2 == psVar5) {
            uVar6 = FUN_014ba310(*param_2);
            if ((uVar6 & 1) == 0) {
              uVar6 = FUN_014ba2e0(*param_2,0);
              if ((uVar6 & 1) != 0) {
                iVar3 = FUN_014ba2c0(*param_2);
                if (iVar3 - 2U < 8) {
                  lVar8 = *(long *)(&DAT_02171e40 + (long)(int)(iVar3 - 2U) * 8);
                }
                else {
                  lVar8 = 0;
                }
                lVar8 = *(long *)(*(long *)puVar2 + lVar8 * 0x20 + (long)param_6 * 8 + 0x1c0);
                if (lVar8 != 0) {
                  (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
                }
                if (lVar9 != 0) {
                  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
                }
                goto joined_r0x014c2ad0;
              }
              FUN_014c4740(lVar9,*param_2,param_7);
              uVar10 = 1;
              psVar5 = param_2 + 1;
            }
            else {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))(lVar7 + 0x48);
              if (lVar9 == 0) {
                lVar9 = lVar7;
                psVar5 = param_2 + 1;
              }
              else {
                (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
                lVar8 = lVar7;
joined_r0x014c2ad0:
                lVar9 = lVar8;
                psVar5 = param_2 + 1;
              }
            }
          }
          param_2 = psVar5;
        } while ((param_2 < psVar1) && (*param_2 != 0));
      }
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}


