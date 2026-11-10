/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b11c0; name: FUN_009b11c0
 */


void FUN_009b11c0(long param_1)

{
  undefined2 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  
  piVar8 = (int *)(param_1 + 0x80);
  switch(*piVar8) {
  case 0:
    return;
  case 1:
    uVar2 = FUN_007d4e70(param_1 + 0xd0);
    if ((uVar2 & 1) != 0) {
      if (*piVar8 != 0x10) {
        *piVar8 = 2;
      }
      *(undefined1 *)(param_1 + 0x370) = 0;
      if (*(long **)(param_1 + 0x2c0) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x2c0) + 8))();
        puVar4 = *(undefined8 **)(param_1 + 0x2c0);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,*(undefined2 *)(param_1 + 0x17c));
          sVar5 = *(short *)(param_1 + 0x17c);
          if (*(short *)(param_1 + 0x84) == sVar5) goto LAB_009b1574;
          goto LAB_009b1548;
        }
      }
    }
    break;
  case 2:
    if (*(long *)(param_1 + 0x88) != 0) {
      iVar6 = 3;
LAB_009b1534:
      *piVar8 = iVar6;
    }
    break;
  case 3:
    if (((*(long *)(param_1 + 0x2a8) != 0) && (*(long *)(param_1 + 0x88) != 0)) &&
       ((uVar2 = FUN_007d4f10(param_1 + 0xd0), (uVar2 & 1) != 0 &&
        ((uVar2 = FUN_009b9b90(*(undefined8 *)(param_1 + 0x2a8),*(undefined8 *)(param_1 + 0x88),
                               *(undefined8 *)(*(long *)PTR_DAT_02716a30 + 0xf8)), (uVar2 & 1) != 0
         && (*piVar8 != 0x10)))))) {
      iVar6 = 4;
      goto LAB_009b1534;
    }
    break;
  case 4:
    if (((*(long *)(param_1 + 0x1c0) != 0) &&
        (uVar2 = FUN_007d3690(*(long *)(param_1 + 0x1c0),*(undefined2 *)(param_1 + 0x86)),
        (uVar2 & 1) != 0)) &&
       (uVar2 = FUN_01940760(*(undefined8 *)PTR_DAT_02716a30), *piVar8 != 0x10)) {
      iVar6 = 7;
      if ((uVar2 & 1) != 0) {
        iVar6 = 8;
      }
      goto LAB_009b1534;
    }
    break;
  case 5:
    if (((*(long *)(param_1 + 0x2b8) != 0) && (*(long *)(param_1 + 0xa8) != 0)) &&
       (uVar2 = FUN_007d4f10(param_1 + 0xd0), (uVar2 & 1) != 0)) {
      iVar6 = *piVar8;
      if (iVar6 != 0x10) {
        *piVar8 = 6;
      }
      uVar2 = FUN_009b7300(*(undefined8 *)(param_1 + 0x2b8),*(undefined8 *)(param_1 + 0xa8),
                           *(undefined8 *)(*(long *)PTR_DAT_02716a30 + 0xf8));
      if ((uVar2 & 1) == 0) {
        if (*piVar8 == 0x10) {
          if (iVar6 != 0) break;
          *piVar8 = 0;
          sVar5 = *(short *)(param_1 + 0x17c);
          if (*(short *)(param_1 + 0x84) == sVar5) goto LAB_009b1574;
        }
        else {
          *piVar8 = iVar6;
          sVar5 = *(short *)(param_1 + 0x17c);
          if (*(short *)(param_1 + 0x84) == sVar5) goto LAB_009b1574;
        }
        goto LAB_009b1548;
      }
    }
    break;
  case 8:
    uVar2 = FUN_007a2840(*(undefined8 *)(param_1 + 0x2a0));
    if (((uVar2 & 1) != 0) && (*piVar8 != 0x10)) {
      iVar6 = 9;
      goto LAB_009b1534;
    }
    break;
  case 9:
    uVar2 = FUN_007d4fb0(param_1 + 0xd0);
    if (((uVar2 & 1) == 0) && (*piVar8 != 0x10)) {
      iVar6 = 10;
      goto LAB_009b1534;
    }
    break;
  case 10:
    uVar1 = *(undefined2 *)(param_1 + 0x86);
    uVar2 = FUN_007d4da0(param_1 + 0xd0);
    if ((((((uVar2 & 1) != 0) &&
          (uVar2 = FUN_007d3060(*(undefined8 *)(param_1 + 0x1c0),uVar1), (uVar2 & 1) != 0)) &&
         (uVar2 = FUN_007d4f50(param_1 + 0xd0), (uVar2 & 1) != 0)) &&
        ((*(long *)(param_1 + 0x1c0) != 0 &&
         (uVar2 = FUN_007d33b0(*(long *)(param_1 + 0x1c0),uVar1), (uVar2 & 1) != 0)))) &&
       (*piVar8 != 0x10)) {
      iVar6 = 7;
      goto LAB_009b1534;
    }
    break;
  case 0xb:
    FUN_007a2760(*(undefined8 *)(param_1 + 0x2a0));
    if (*(int *)(param_1 + 0x80) != 0x10) {
      uVar7 = 2;
      if (*(char *)(param_1 + 0x374) != '\0') {
        uVar7 = 0xc;
      }
      *(undefined4 *)(param_1 + 0x80) = uVar7;
      sVar5 = *(short *)(param_1 + 0x17c);
      if (*(short *)(param_1 + 0x84) == sVar5) goto LAB_009b1574;
      goto LAB_009b1548;
    }
    break;
  case 0xd:
    uVar2 = FUN_007d4e70(param_1 + 0xd0);
    if (((uVar2 & 1) != 0) && (*piVar8 != 0x10)) {
      iVar6 = 0xe;
      goto LAB_009b1534;
    }
    break;
  case 0xe:
    if ((*(short *)(param_1 + 0x84) == *(short *)(param_1 + 0x17c)) ||
       (*(short *)(param_1 + 0x86) != *(short *)(param_1 + 0x17c))) {
      iVar6 = 0xf;
      goto LAB_009b1534;
    }
    FUN_009b9e20(param_1);
    puVar4 = *(undefined8 **)(param_1 + 0x2c0);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,*(undefined2 *)(param_1 + 0x17c));
      plVar3 = *(long **)(param_1 + 0x2c0);
      if (plVar3 != (long *)0x0) goto LAB_009b15dc;
    }
    break;
  case 0xf:
    if (*(long *)(param_1 + 0x88) == 0) {
      *(undefined4 *)(param_1 + 0x80) = 2;
LAB_009b15d4:
      plVar3 = *(long **)(param_1 + 0x2c0);
    }
    else {
      if (((*(long *)(param_1 + 0x2a8) == 0) ||
          (uVar2 = FUN_007d4f10(param_1 + 0xd0), (uVar2 & 1) == 0)) ||
         (uVar2 = FUN_009b9b90(*(undefined8 *)(param_1 + 0x2a8),*(undefined8 *)(param_1 + 0x88),
                               *(undefined8 *)(*(long *)PTR_DAT_02716a30 + 0xf8)), (uVar2 & 1) == 0)
         ) break;
      if (*piVar8 == 0x10) goto LAB_009b15d4;
      *piVar8 = 4;
      plVar3 = *(long **)(param_1 + 0x2c0);
    }
    if (plVar3 == (long *)0x0) break;
LAB_009b15dc:
    (**(code **)(*plVar3 + 0x28))();
    sVar5 = *(short *)(param_1 + 0x17c);
    if (*(short *)(param_1 + 0x84) == sVar5) goto LAB_009b1574;
    goto LAB_009b1548;
  case 0x10:
    uVar2 = FUN_007d4b30(param_1 + 0xd0);
    if ((uVar2 & 1) == 0) {
      *piVar8 = 0;
      return;
    }
  }
  sVar5 = *(short *)(param_1 + 0x17c);
  if (*(short *)(param_1 + 0x84) != sVar5) {
LAB_009b1548:
    if (*(short *)(param_1 + 0x86) != sVar5) {
      FUN_009b9e20(param_1);
      plVar3 = *(long **)(param_1 + 0x2c0);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,*(undefined2 *)(param_1 + 0x17c));
      }
    }
  }
LAB_009b1574:
  if ((*(short *)(param_1 + 0x84) != *(short *)(param_1 + 0x17c)) &&
     (*(short *)(param_1 + 0x86) == *(short *)(param_1 + 0x17c))) {
    FUN_009b9e20(param_1);
    puVar4 = *(undefined8 **)(param_1 + 0x2c0);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,*(undefined2 *)(param_1 + 0x17c));
    }
  }
  FUN_009b9a50(param_1);
  FUN_007d4b80(param_1 + 0xd0);
  return;
}


