/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fe620; name: FUN_008fe620
 */


undefined8 FUN_008fe620(long param_1,int *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  short sVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  
  switch(*param_2) {
  case 0:
    iVar3 = FUN_008f3790(*(undefined8 *)(param_1 + 0x58));
    if (iVar3 != 4) {
      (**(code **)(**(long **)(param_1 + 0x358) + 0x68))();
    }
    *param_2 = *param_2 + 1;
switchD_008fe65c_caseD_1:
    uVar6 = (**(code **)(**(long **)(param_1 + 0x358) + 0x70))();
    if ((uVar6 & 1) == 0) {
switchD_008fe65c_default:
    }
    else {
      uVar2 = FUN_008f9310(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6));
      uVar10 = *(undefined8 *)(param_1 + 0x58);
      uVar5 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
      lVar8 = *(long *)(param_1 + 0x358);
      if (lVar8 == 0) {
        uVar1 = *(undefined1 *)(param_1 + 0x2a6);
        *(undefined8 *)(param_1 + 0x1048) = uVar10;
        *(undefined8 *)(param_1 + 0x1050) = uVar5;
        lVar4 = *(long *)(param_1 + 0x1058);
        *(undefined8 *)(param_1 + 0x1058) = 0;
      }
      else {
        plVar9 = (long *)(lVar8 + 0x48);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        *(undefined8 *)(param_1 + 0x1048) = uVar10;
        *(undefined8 *)(param_1 + 0x1050) = uVar5;
        uVar1 = *(undefined1 *)(param_1 + 0x2a6);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        lVar4 = *(long *)(param_1 + 0x1058);
        *(long *)(param_1 + 0x1058) = lVar8;
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      }
      *(undefined1 *)(param_1 + 0x1061) = uVar2;
      *(undefined1 *)(param_1 + 0x1060) = uVar1;
      *(undefined4 *)(param_1 + 0x1064) = 0;
      *(undefined1 *)(param_1 + 0x1062) = 0;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
LAB_008fe7ac:
      iVar3 = *param_2 + 1;
LAB_008fe7b4:
      *param_2 = iVar3;
    }
    return 0;
  case 1:
    goto switchD_008fe65c_caseD_1;
  case 2:
    uVar6 = FUN_009015f0(param_1 + 0x1048);
    if ((uVar6 & 1) == 0) goto switchD_008fe65c_default;
    uVar5 = FUN_00931a70(*(undefined8 *)(param_1 + 0x70));
    iVar3 = FUN_0092fc70(uVar5,0xc,0x1f,0,0);
    if (iVar3 < 0) {
      iVar3 = 4;
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x358) + 0x708))(*(long **)(param_1 + 0x358),iVar3,0xc);
      iVar3 = *param_2 + 1;
    }
    goto LAB_008fe7b4;
  case 3:
    uVar6 = (**(code **)(**(long **)(param_1 + 0x358) + 0x710))();
    if ((uVar6 & 1) == 0) goto switchD_008fe65c_default;
    goto LAB_008fe7ac;
  case 4:
    sVar7 = *(short *)(param_1 + 0x338);
    if (*(short *)(param_1 + 0x336) == 0 && sVar7 == 0) {
      if (*(short *)(param_1 + 0x33a) == 0) goto LAB_008fe868;
      sVar7 = 0;
    }
    FUN_009c94e0(*(undefined8 *)(param_1 + 0x250),0,sVar7);
    FUN_009c94e0(*(undefined8 *)(param_1 + 0x250),1,*(undefined2 *)(param_1 + 0x33a));
    FUN_009c94e0(*(undefined8 *)(param_1 + 0x250),2,*(undefined2 *)(param_1 + 0x336));
    if (*(short *)(param_1 + 0x338) != 0) {
      (**(code **)(**(long **)(param_1 + 0x358) + 0x570))(*(long **)(param_1 + 0x358),0,1);
    }
    if (*(short *)(param_1 + 0x33a) != 0) {
      (**(code **)(**(long **)(param_1 + 0x358) + 0x570))(*(long **)(param_1 + 0x358),1,1);
    }
LAB_008fe868:
    FUN_00901750(param_1);
    if (*(undefined **)(param_1 + 0xd0) != PTR_LAB_02717cf8) {
      return 1;
    }
    if (*(ulong *)(param_1 + 0xd8) == 0 ||
        (*(ulong *)(param_1 + 0xd8) & 1) == 0 && *(undefined **)(param_1 + 0xd0) == (undefined *)0x0
       ) {
      (**(code **)(**(long **)(param_1 + 0x358) + 0x4f0))();
      return 1;
    }
    return 1;
  default:
    goto switchD_008fe65c_default;
  }
}


