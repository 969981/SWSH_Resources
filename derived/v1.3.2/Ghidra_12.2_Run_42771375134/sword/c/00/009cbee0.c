/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cbee0; name: FUN_009cbee0
 */


void FUN_009cbee0(long param_1)

{
  undefined2 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  
  lVar2 = *(long *)(param_1 + 0xd8);
  if (lVar2 == 0) {
    return;
  }
  piVar9 = (int *)(lVar2 + 0x80);
  switch(*piVar9) {
  case 0:
    return;
  case 1:
    uVar3 = FUN_007d4e70(lVar2 + 0xd0);
    if ((uVar3 & 1) != 0) {
      if (*piVar9 != 0x10) {
        *piVar9 = 2;
      }
      *(undefined1 *)(lVar2 + 0x370) = 0;
      if (*(long **)(lVar2 + 0x2c0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar2 + 0x2c0) + 8))();
        puVar5 = *(undefined8 **)(lVar2 + 0x2c0);
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,*(undefined2 *)(lVar2 + 0x17c));
          sVar6 = *(short *)(lVar2 + 0x17c);
          if (*(short *)(lVar2 + 0x84) == sVar6) goto LAB_009cc2a4;
          goto LAB_009cc278;
        }
      }
    }
    break;
  case 2:
    if (*(long *)(lVar2 + 0x88) != 0) {
      iVar7 = 3;
LAB_009cc264:
      *piVar9 = iVar7;
    }
    break;
  case 3:
    if (((*(long *)(lVar2 + 0x2a8) != 0) && (*(long *)(lVar2 + 0x88) != 0)) &&
       ((uVar3 = FUN_007d4f10(lVar2 + 0xd0), (uVar3 & 1) != 0 &&
        ((uVar3 = FUN_009d0f90(*(undefined8 *)(lVar2 + 0x2a8),*(undefined8 *)(lVar2 + 0x88),
                               *(undefined8 *)(*(long *)PTR_DAT_02716a30 + 0xf8)), (uVar3 & 1) != 0
         && (*piVar9 != 0x10)))))) {
      iVar7 = 4;
      goto LAB_009cc264;
    }
    break;
  case 4:
    if (((*(long *)(lVar2 + 0x1c0) != 0) &&
        (uVar3 = FUN_007d3690(*(long *)(lVar2 + 0x1c0),*(undefined2 *)(lVar2 + 0x86)),
        (uVar3 & 1) != 0)) &&
       (uVar3 = FUN_01940760(*(undefined8 *)PTR_DAT_02716a30), *piVar9 != 0x10)) {
      iVar7 = 7;
      if ((uVar3 & 1) != 0) {
        iVar7 = 8;
      }
      goto LAB_009cc264;
    }
    break;
  case 5:
    if (((*(long *)(lVar2 + 0x2b8) != 0) && (*(long *)(lVar2 + 0xa8) != 0)) &&
       (uVar3 = FUN_007d4f10(lVar2 + 0xd0), (uVar3 & 1) != 0)) {
      iVar7 = *piVar9;
      if (iVar7 != 0x10) {
        *piVar9 = 6;
      }
      uVar3 = FUN_009b7300(*(undefined8 *)(lVar2 + 0x2b8),*(undefined8 *)(lVar2 + 0xa8),
                           *(undefined8 *)(*(long *)PTR_DAT_02716a30 + 0xf8));
      if ((uVar3 & 1) == 0) {
        if (*piVar9 == 0x10) {
          if (iVar7 != 0) break;
          *piVar9 = 0;
          sVar6 = *(short *)(lVar2 + 0x17c);
          if (*(short *)(lVar2 + 0x84) == sVar6) goto LAB_009cc2a4;
        }
        else {
          *piVar9 = iVar7;
          sVar6 = *(short *)(lVar2 + 0x17c);
          if (*(short *)(lVar2 + 0x84) == sVar6) goto LAB_009cc2a4;
        }
        goto LAB_009cc278;
      }
    }
    break;
  case 8:
    uVar3 = FUN_007a2840(*(undefined8 *)(lVar2 + 0x2a0));
    if (((uVar3 & 1) != 0) && (*piVar9 != 0x10)) {
      iVar7 = 9;
      goto LAB_009cc264;
    }
    break;
  case 9:
    uVar3 = FUN_007d4fb0(lVar2 + 0xd0);
    if (((uVar3 & 1) == 0) && (*piVar9 != 0x10)) {
      iVar7 = 10;
      goto LAB_009cc264;
    }
    break;
  case 10:
    uVar1 = *(undefined2 *)(lVar2 + 0x86);
    uVar3 = FUN_007d4da0(lVar2 + 0xd0);
    if ((((((uVar3 & 1) != 0) &&
          (uVar3 = FUN_007d3060(*(undefined8 *)(lVar2 + 0x1c0),uVar1), (uVar3 & 1) != 0)) &&
         (uVar3 = FUN_007d4f50(lVar2 + 0xd0), (uVar3 & 1) != 0)) &&
        ((*(long *)(lVar2 + 0x1c0) != 0 &&
         (uVar3 = FUN_007d33b0(*(long *)(lVar2 + 0x1c0),uVar1), (uVar3 & 1) != 0)))) &&
       (*piVar9 != 0x10)) {
      iVar7 = 7;
      goto LAB_009cc264;
    }
    break;
  case 0xb:
    FUN_007a2760(*(undefined8 *)(lVar2 + 0x2a0));
    if (*(int *)(lVar2 + 0x80) != 0x10) {
      uVar8 = 2;
      if (*(char *)(lVar2 + 0x374) != '\0') {
        uVar8 = 0xc;
      }
      *(undefined4 *)(lVar2 + 0x80) = uVar8;
      sVar6 = *(short *)(lVar2 + 0x17c);
      if (*(short *)(lVar2 + 0x84) == sVar6) goto LAB_009cc2a4;
      goto LAB_009cc278;
    }
    break;
  case 0xd:
    uVar3 = FUN_007d4e70(lVar2 + 0xd0);
    if (((uVar3 & 1) != 0) && (*piVar9 != 0x10)) {
      iVar7 = 0xe;
      goto LAB_009cc264;
    }
    break;
  case 0xe:
    if ((*(short *)(lVar2 + 0x84) == *(short *)(lVar2 + 0x17c)) ||
       (*(short *)(lVar2 + 0x86) != *(short *)(lVar2 + 0x17c))) {
      iVar7 = 0xf;
      goto LAB_009cc264;
    }
    FUN_009d1220(lVar2);
    puVar5 = *(undefined8 **)(lVar2 + 0x2c0);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,*(undefined2 *)(lVar2 + 0x17c));
      plVar4 = *(long **)(lVar2 + 0x2c0);
      if (plVar4 != (long *)0x0) goto LAB_009cc30c;
    }
    break;
  case 0xf:
    if (*(long *)(lVar2 + 0x88) == 0) {
      *(undefined4 *)(lVar2 + 0x80) = 2;
LAB_009cc304:
      plVar4 = *(long **)(lVar2 + 0x2c0);
    }
    else {
      if (((*(long *)(lVar2 + 0x2a8) == 0) || (uVar3 = FUN_007d4f10(lVar2 + 0xd0), (uVar3 & 1) == 0)
          ) || (uVar3 = FUN_009d0f90(*(undefined8 *)(lVar2 + 0x2a8),*(undefined8 *)(lVar2 + 0x88),
                                     *(undefined8 *)(*(long *)PTR_DAT_02716a30 + 0xf8)),
               (uVar3 & 1) == 0)) break;
      if (*piVar9 == 0x10) goto LAB_009cc304;
      *piVar9 = 4;
      plVar4 = *(long **)(lVar2 + 0x2c0);
    }
    if (plVar4 == (long *)0x0) break;
LAB_009cc30c:
    (**(code **)(*plVar4 + 0x28))();
    sVar6 = *(short *)(lVar2 + 0x17c);
    if (*(short *)(lVar2 + 0x84) == sVar6) goto LAB_009cc2a4;
    goto LAB_009cc278;
  case 0x10:
    uVar3 = FUN_007d4b30(lVar2 + 0xd0);
    if ((uVar3 & 1) == 0) {
      *piVar9 = 0;
      return;
    }
  }
  sVar6 = *(short *)(lVar2 + 0x17c);
  if (*(short *)(lVar2 + 0x84) != sVar6) {
LAB_009cc278:
    if (*(short *)(lVar2 + 0x86) != sVar6) {
      FUN_009d1220(lVar2);
      plVar4 = *(long **)(lVar2 + 0x2c0);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,*(undefined2 *)(lVar2 + 0x17c));
      }
    }
  }
LAB_009cc2a4:
  if ((*(short *)(lVar2 + 0x84) != *(short *)(lVar2 + 0x17c)) &&
     (*(short *)(lVar2 + 0x86) == *(short *)(lVar2 + 0x17c))) {
    FUN_009d1220(lVar2);
    puVar5 = *(undefined8 **)(lVar2 + 0x2c0);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,*(undefined2 *)(lVar2 + 0x17c));
    }
  }
  FUN_009d0e50(lVar2);
  FUN_007d4b80(lVar2 + 0xd0);
  return;
}


