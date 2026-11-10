/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a2430; name: FUN_012a2430
 */


ulong FUN_012a2430(long param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ushort *puVar9;
  long *plVar10;
  int local_38 [2];
  
  iVar2 = *(int *)(param_1 + 0xa0);
  switch(iVar2) {
  case 0:
    FUN_012a2710(param_1);
    break;
  case 1:
    FUN_012a2a40(param_1);
    uVar7 = FUN_007df3a0(*(undefined8 *)(param_1 + 0x78),
                         "https://v3-lp1.vp.n.srv.nintendo.net/v1/validate",
                         *(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
    if ((uVar7 & 1) != 0) {
      uVar8 = 0;
      uVar7 = 0;
      *(undefined4 *)(param_1 + 0xa0) = 2;
      goto LAB_012a2648;
    }
LAB_012a25a8:
    uVar8 = 0;
    uVar7 = 0;
    *(undefined4 *)(param_1 + 0xa0) = 5;
    goto LAB_012a2648;
  case 2:
  case 3:
    uVar7 = FUN_007df8a0(*(undefined8 *)(param_1 + 0x78));
    if ((uVar7 & 1) != 0) goto switchD_012a2464_default;
    uVar7 = FUN_007df910(*(undefined8 *)(param_1 + 0x78));
    if (((((uVar7 & 1) == 0) ||
         (piVar4 = (int *)FUN_007df930(*(undefined8 *)(param_1 + 0x78)), piVar4 == (int *)0x0)) ||
        (*piVar4 == 0)) ||
       (iVar3 = FUN_007df960(*(undefined8 *)(param_1 + 0x78)), 99 < iVar3 - 200U))
    goto LAB_012a25a8;
    if (iVar2 == 2) {
      uVar5 = FUN_012a2840(param_1);
      uVar8 = 0;
      uVar7 = 0;
      if ((uVar5 & 1) == 0) {
        *(undefined4 *)(param_1 + 0xa0) = 3;
      }
      else {
        *(undefined4 *)(param_1 + 0xa0) = 4;
      }
      goto LAB_012a2648;
    }
    lVar6 = FUN_007df930(*(undefined8 *)(param_1 + 0x78));
    puVar9 = *(ushort **)(lVar6 + 8) + 1;
    uVar1 = **(ushort **)(lVar6 + 8);
    uVar1 = uVar1 >> 8 | uVar1 << 8;
    lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x260);
    if (lVar6 == 0) {
      FUN_0154fb60(0,uVar1,puVar9);
    }
    else {
      plVar10 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_0154fb60(lVar6,uVar1,puVar9);
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    break;
  case 4:
    if ((*(long *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x70) != 0)) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))();
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    lVar6 = *(long *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (lVar6 == 0) {
      uVar7 = 0x100;
    }
    else {
      FUN_007df2d0(lVar6);
      (**(code **)(**(long **)(param_1 + 0x80) + 0x18))
                (*(long **)(param_1 + 0x80),lVar6,*(undefined8 *)(param_1 + 0x88),
                 *(undefined8 *)(param_1 + 0x90));
      uVar7 = 0x100;
    }
    goto LAB_012a2644;
  case 5:
    iVar2 = FUN_007df960(*(undefined8 *)(param_1 + 0x78));
    piVar4 = (int *)FUN_007df950(*(undefined8 *)(param_1 + 0x78));
    local_38[0] = *piVar4;
    if (local_38[0] == 0) {
      if ((iVar2 != 0) && (99 < iVar2 - 200U)) {
        FUN_011f9490(*(undefined8 *)PTR_DAT_02710490,iVar2);
      }
      lVar6 = *(long *)(param_1 + 0x68);
    }
    else {
      FUN_011f9040(*(undefined8 *)PTR_DAT_02710490,local_38);
      lVar6 = *(long *)(param_1 + 0x68);
    }
    if ((lVar6 != 0) && (*(int *)(param_1 + 0x70) != 0)) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))();
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    lVar6 = *(long *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (lVar6 != 0) {
      FUN_007df2d0(lVar6);
      (**(code **)(**(long **)(param_1 + 0x80) + 0x18))
                (*(long **)(param_1 + 0x80),lVar6,*(undefined8 *)(param_1 + 0x88),
                 *(undefined8 *)(param_1 + 0x90));
    }
    uVar7 = 0;
LAB_012a2644:
    uVar8 = 1;
    goto LAB_012a2648;
  default:
switchD_012a2464_default:
    uVar8 = 0;
    uVar7 = 0;
    goto LAB_012a2648;
  }
  uVar8 = 0;
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0xa0) = 1;
LAB_012a2648:
  return uVar7 | uVar8;
}


