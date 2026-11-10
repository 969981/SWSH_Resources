/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b9350; name: FUN_010b9350
 */


void FUN_010b9350(long param_1)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  void *__src;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  long local_68;
  
  uVar3 = FUN_010384a0(*(undefined8 *)(param_1 + 0xa8));
  plVar10 = (long *)PTR_DAT_027108d8;
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_027108d8;
  uVar3 = FUN_010386e0(*(undefined8 *)(param_1 + 0xa8));
  piVar1 = (int *)(lVar11 + 0x11af0);
  iVar7 = *piVar1;
  bVar6 = true;
  switch(*(undefined4 *)(param_1 + (uVar3 & 0xffffffff) * 4 + 0xd0)) {
  case 0:
    lVar12 = *plVar10;
    uVar3 = 0;
    lVar9 = 0x32;
    __src = (void *)(lVar12 + 0x108);
    do {
      if ((*(char *)((long)__src + 0x50) != '\0') && (*(int *)((long)__src + 4) != -1)) {
        memcpy((void *)(lVar12 + uVar3 * 0xa0 + 0x3f88),__src,0x9a);
        uVar3 = (ulong)((int)uVar3 + 1);
      }
      __src = (void *)((long)__src + 0xa0);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    *(int *)(lVar12 + 0x11aec) = (int)uVar3;
    bVar6 = false;
    if ((int)uVar3 != 0) {
      *(undefined4 *)(lVar12 + 0x11af0) = 0;
    }
    plVar10 = (long *)PTR_DAT_027108d8;
    goto switchD_010b93cc_caseD_6;
  case 1:
    uVar4 = 5;
    uVar5 = 1;
    break;
  case 2:
    uVar4 = 2;
    uVar5 = 2;
    break;
  case 3:
    uVar4 = 3;
    uVar5 = 3;
    break;
  case 4:
    uVar4 = 4;
    uVar5 = 4;
    break;
  case 5:
    uVar5 = 5;
    uVar4 = 1;
    break;
  default:
    goto switchD_010b93cc_caseD_6;
  case 7:
    *piVar1 = 8;
    iVar8 = 0;
    lVar9 = -8000;
    *(int *)(lVar11 + 0x11aec) = 0;
    do {
      if (*(int *)(lVar11 + lVar9 + 0x204c) != -1) {
        iVar8 = iVar8 + 1;
        *(int *)(lVar11 + 0x11aec) = iVar8;
      }
      lVar9 = lVar9 + 0xa0;
    } while (lVar9 != 0);
    bVar6 = true;
    goto switchD_010b93cc_caseD_6;
  }
  FUN_010b3410(lVar11 + 0x108,uVar4,uVar5);
  bVar6 = false;
switchD_010b93cc_caseD_6:
  piVar2 = (int *)(lVar11 + 0x11aec);
  if (*piVar2 == 0) {
    if (!bVar6) {
      FUN_010bc320(param_1,0xf8877e581d918bda,0,0,0,0);
      *(undefined4 *)(param_1 + 0x7c) = 2;
      if (*piVar1 == 8) {
        iVar7 = 0;
        lVar9 = -8000;
        *piVar1 = 8;
        *piVar2 = 0;
        do {
          if (*(int *)(lVar11 + lVar9 + 0x204c) != -1) {
            iVar7 = iVar7 + 1;
            *piVar2 = iVar7;
          }
          lVar9 = lVar9 + 0xa0;
        } while (lVar9 != 0);
      }
      else {
        FUN_010b1dc0(lVar11 + 0x108);
      }
      goto LAB_010b9620;
    }
LAB_010b9538:
    iVar7 = *(int *)(param_1 + 0x7c);
  }
  else {
    if (iVar7 == *piVar1) goto LAB_010b9538;
    FUN_010b2aa0(*(undefined8 *)(param_1 + 0x90),0);
    FUN_010b1600(*(undefined8 *)(param_1 + 0x90),0xffffffff);
    lVar9 = *plVar10;
    lVar11 = *(long *)(param_1 + 0x88);
    FUN_016b2d70(*(undefined8 *)(lVar11 + 0x5e0),*(int *)(lVar9 + 0x11aec) != 0);
    FUN_016b2d70(*(undefined8 *)(lVar11 + 0x5e8),*(int *)(lVar9 + 0x11aec) != 0);
    FUN_010b15f0(*(undefined8 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x7c) = 0x2f;
    iVar7 = *(int *)(param_1 + 0x7c);
  }
  if (iVar7 != 0x2f) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
  }
  FUN_01038270(*(undefined8 *)(param_1 + 0xa8),1);
  lVar11 = *(long *)(param_1 + 0x88);
  FUN_016b2d70(*(undefined8 *)(lVar11 + 0x5f0),1);
  FUN_016b2d70(*(undefined8 *)(lVar11 + 0x5f8),1);
  FUN_016b2d70(*(undefined8 *)(lVar11 + 0x600),*(undefined1 *)(lVar11 + 0x620));
  FUN_016b2d70(*(undefined8 *)(lVar11 + 0x608),1);
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),1,1);
  if (*(int *)(param_1 + 0x80) == 0) {
    lVar11 = *(long *)(param_1 + 0x88);
    (**(code **)(**(long **)(lVar11 + 0x618) + 0x50))();
    FUN_016b2d70(*(undefined8 *)(lVar11 + 0x618),1);
    FUN_016b2da0(*(undefined8 *)(lVar11 + 0x618),1);
    local_68 = (ulong)*(uint *)(lVar11 + 0x610) << 0x20;
    FUN_016b7990(*(undefined8 *)(lVar11 + 0x618),&local_68,1,0);
    FUN_010ad950(*(undefined8 *)(param_1 + 0x88),1);
  }
  else {
    FUN_010b2a10(*(undefined8 *)(param_1 + 0x90),1);
    FUN_010b1170(*(undefined8 *)(param_1 + 0x90),1);
  }
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
LAB_010b9620:
  local_68 = -0x3f632e06ba6112a6;
  iVar7 = *(int *)(*plVar10 + 0x11af0);
  lVar11 = *(long *)(param_1 + 0x88) + 0x100;
  FUN_00ffd010(lVar11,&local_68);
  uVar13 = 0x3f800000;
  if (iVar7 == 8) {
    uVar13 = 0;
  }
  FUN_00ffd510(uVar13,lVar11,&local_68);
  return;
}


