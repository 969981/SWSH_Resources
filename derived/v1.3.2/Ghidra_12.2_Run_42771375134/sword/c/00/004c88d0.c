/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c88d0; name: FUN_004c88d0
 */


void FUN_004c88d0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar2 = PTR_DAT_02712ac0;
  lVar6 = *(long *)(param_1 + 0x38);
  uVar9 = 4;
LAB_004c890c:
  uVar8 = uVar9 & 0xffffffff;
  plVar4 = (long *)(lVar6 + 0x350 + (ulong)((int)uVar9 - 1) * 8);
  do {
    plVar3 = (long *)*plVar4;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x70))(plVar3,param_1);
      iVar7 = *(int *)(param_1 + 0x30);
      if (iVar7 != 0x2b) {
        if ((iVar7 != 0x11) && (iVar7 != 0x2d)) {
          return;
        }
        if ((uint)uVar8 < 4) goto LAB_004c8a00;
LAB_004c8a58:
        FUN_004d13e0(lVar6 + 0x1a0,param_1);
        FUN_004e0b90(lVar6 + 0x370,param_1);
        FUN_004db890(lVar6,param_1);
        if ((*(int *)(param_1 + 0x30) != 0x2d) && (*(int *)(param_1 + 0x30) != 0x11)) {
          return;
        }
        FUN_0048f610(*(undefined8 *)PTR_DAT_02712ad0,param_1);
        for (lVar6 = *(long *)(lVar6 + 0x48); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x40)) {
          if ((*(long *)(lVar6 + 0x20) != 0) && ((~*(byte *)(lVar6 + 0x2a4) & 3) != 0)) {
            *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x30);
            uVar5 = FUN_004699e0(lVar6);
            FUN_004d4930(uVar5,param_1,lVar6);
          }
        }
        return;
      }
    }
    uVar8 = uVar8 - 1;
    plVar4 = plVar4 + -1;
  } while ((int)uVar8 != 0);
LAB_004c8948:
  FUN_004d63d0(lVar6 + 0xa0,param_1);
  iVar7 = *(int *)(param_1 + 0x30);
  uVar8 = 0;
  if ((iVar7 != 0x11) && (iVar7 != 0x2d)) {
    if (iVar7 != 0x2b) {
      return;
    }
    do {
      *(short *)(param_1 + 0x10) = (short)*(undefined4 *)puVar2;
      (**(code **)(**(long **)(lVar6 + 0x70) + 0x60))(*(long **)(lVar6 + 0x70),param_1);
      iVar7 = *(int *)(param_1 + 0x30);
      if (iVar7 == 0x2e) {
        FUN_004da8e0(lVar6);
        iVar7 = *(int *)(param_1 + 0x30);
      }
      if ((iVar7 != 0x2d) && (iVar7 != 0x11)) {
        return;
      }
      FUN_004d6470(lVar6 + 0xa0,param_1);
      iVar7 = *(int *)(param_1 + 0x30);
    } while (iVar7 == 0x2b);
    if ((iVar7 != 0x11) && (iVar7 != 0x2d)) {
      return;
    }
    uVar8 = 0;
  }
LAB_004c8a00:
  uVar9 = uVar8 & 0xffffffff;
  iVar7 = -(int)uVar8;
  do {
    plVar4 = *(long **)(lVar6 + uVar9 * 8 + 0x350);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x78))(plVar4,param_1);
      iVar1 = *(int *)(param_1 + 0x30);
      if ((iVar1 != 0x11) && (iVar1 != 0x2d)) break;
    }
    uVar9 = uVar9 + 1;
    iVar7 = iVar7 + -1;
    if (3 < uVar9) goto LAB_004c8a58;
  } while( true );
  if (iVar1 != 0x2b) {
    return;
  }
  if (iVar7 != 0) goto LAB_004c890c;
  goto LAB_004c8948;
}


