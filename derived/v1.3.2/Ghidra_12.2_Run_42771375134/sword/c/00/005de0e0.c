/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005de0e0; name: FUN_005de0e0
 */


undefined8 FUN_005de0e0(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  uVar5 = FUN_005dca90();
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  lVar6 = (**(code **)(*(long *)param_1[0x18] + 0x50))();
  puVar3 = PTR_DAT_02713e78;
  puVar2 = PTR_DAT_02713e78;
  if (*(undefined **)(lVar6 + 8) != (undefined *)0x0) {
    puVar2 = *(undefined **)(lVar6 + 8);
  }
  (**(code **)(*param_1 + 0x48))(param_1,puVar2);
  lVar6 = (**(code **)(*(long *)param_1[0x18] + 0x68))();
  if (*(undefined **)(lVar6 + 8) != (undefined *)0x0) {
    puVar3 = *(undefined **)(lVar6 + 8);
  }
  (**(code **)(*param_1 + 0x60))(param_1,puVar3);
  iVar4 = (int)*(undefined8 *)(param_1[0x18] + 200);
  if (iVar4 < 1) {
    return 1;
  }
  plVar1 = param_1 + 0x19;
  if ((ulong)param_1[0x1c] < (ulong)(long)iVar4) {
    uVar5 = FUN_005de400(plVar1,(long)iVar4,1);
    if ((uVar5 & 1) == 0) {
      param_1[0x1b] = 0;
    }
    else {
      uVar5 = param_1[0x1c];
      uVar7 = param_1[0x1b];
      if (uVar5 < (ulong)param_1[0x1b]) {
        param_1[0x1b] = uVar5;
        uVar7 = uVar5;
      }
      if (uVar7 != 0) {
        param_1[0x1f] = param_1[0x1e];
        param_1[0x20] = param_1[0x1e] + uVar7 * 8;
        lVar6 = param_1[0x18];
        iVar4 = *(int *)(lVar6 + 200);
        goto joined_r0x005de1e8;
      }
    }
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  lVar6 = param_1[0x18];
  iVar4 = *(int *)(lVar6 + 200);
joined_r0x005de1e8:
  if (0 < iVar4) {
    lVar10 = 0;
    do {
      plVar9 = *(long **)(*(long *)(lVar6 + 0xe0) + lVar10 * 8);
      iVar4 = (**(code **)(*plVar9 + 0x80))(plVar9);
      if (iVar4 == 2) {
        lVar6 = FUN_005de620(param_1[6],plVar9);
joined_r0x005de290:
        if (lVar6 != 0) {
          uVar5 = param_1[0x1b];
          uVar7 = param_1[0x1c];
          if (uVar7 <= uVar5) {
            if (param_1[0x21] == 0) {
              lVar8 = uVar7 * 2;
              if (lVar8 == 0) {
                lVar8 = 1;
              }
              uVar5 = FUN_005de400(plVar1,lVar8,1);
            }
            else {
              uVar5 = FUN_005de400(plVar1,param_1[0x21] + uVar7,1);
            }
            if ((uVar5 & 1) == 0) {
              param_1[0x1b] = 0;
              param_1[0x1f] = 0;
              param_1[0x20] = 0;
              goto LAB_005de2bc;
            }
            uVar5 = param_1[0x1b];
          }
          *(long *)(param_1[0x1e] + uVar5 * 8) = lVar6;
          lVar6 = param_1[0x1b];
          param_1[0x1b] = lVar6 + 1;
          param_1[0x1f] = param_1[0x1e];
          param_1[0x20] = param_1[0x1e] + (lVar6 + 1) * 8;
        }
      }
      else if (iVar4 == 1) {
        lVar6 = FUN_005dd8d0(param_1[6],plVar9);
        goto joined_r0x005de290;
      }
LAB_005de2bc:
      lVar6 = param_1[0x18];
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(lVar6 + 200));
  }
  return 1;
}


