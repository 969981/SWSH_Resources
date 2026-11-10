/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00656550; name: FUN_00656550
 */


undefined8 FUN_00656550(long param_1)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = 0;
  lVar9 = 0;
  lVar10 = 0x2c0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  do {
    lVar4 = param_1 + lVar8;
    plVar3 = *(long **)(lVar4 + 0xa8);
    if (plVar3 == (long *)0x0) {
      plVar3 = *(long **)(lVar4 + 0xb8);
      if (plVar3 != (long *)0x0) {
        pcVar6 = *(code **)(*plVar3 + 0x88);
        goto LAB_00656688;
      }
      plVar3 = *(long **)(lVar4 + 0xc0);
      if (plVar3 == (long *)0x0) {
        lVar4 = *(long *)(param_1 + lVar10);
      }
      else {
        lVar1 = (**(code **)(*plVar3 + 0x98))(plVar3);
        *(undefined4 *)(param_1 + lVar9 * 4 + 0x29c) = *(undefined4 *)(lVar1 + 4);
        uVar5 = (**(code **)(*plVar3 + 0x140))(plVar3);
        *(undefined8 *)(param_1 + lVar10) = uVar5;
        iVar7 = *(int *)(lVar4 + 200);
        lVar1 = param_1 + lVar9 * 8;
        piVar2 = (int *)(**(code **)(*plVar3 + 0x98))(plVar3);
        if ((*piVar2 == 4) || (piVar2 = (int *)(**(code **)(*plVar3 + 0x98))(plVar3), *piVar2 == 6))
        {
          iVar7 = *(int *)(lVar4 + 0xd4) + *(int *)(lVar4 + 200) * 6;
        }
        uVar5 = (**(code **)(*plVar3 + 0x150))(plVar3,*(undefined4 *)(lVar4 + 0xd0),iVar7);
        *(undefined8 *)(lVar1 + 0x308) = uVar5;
        lVar4 = *(long *)(lVar1 + 0x2c0);
      }
    }
    else {
      plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(plVar3,*(undefined4 *)(lVar4 + 0xb0));
      pcVar6 = *(code **)(*plVar3 + 0x88);
LAB_00656688:
      lVar4 = (*pcVar6)(plVar3);
      *(undefined4 *)(param_1 + lVar9 * 4 + 0x29c) = *(undefined4 *)(lVar4 + 4);
      uVar5 = (**(code **)(*plVar3 + 200))(plVar3);
      *(undefined8 *)(param_1 + lVar10) = uVar5;
      lVar4 = param_1 + lVar9 * 8;
      uVar5 = (**(code **)(*plVar3 + 0xd0))(plVar3);
      *(undefined8 *)(lVar4 + 0x308) = uVar5;
      lVar4 = *(long *)(lVar4 + 0x2c0);
    }
    if ((lVar4 != 0) && (*(long *)(param_1 + lVar9 * 8 + 0x308) != 0)) {
      *(int *)(param_1 + 0x298) = *(int *)(param_1 + 0x298) + 1;
    }
    lVar8 = lVar8 + 0x38;
    lVar9 = lVar9 + 1;
    lVar10 = lVar10 + 8;
  } while (lVar8 != 0x1c0);
  if (*(long **)(param_1 + 0x268) == (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x270);
    if (plVar3 == (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x278);
      if (plVar3 == (long *)0x0) {
        return 1;
      }
      lVar8 = (**(code **)(*plVar3 + 0x98))(plVar3);
      *(undefined4 *)(param_1 + 700) = *(undefined4 *)(lVar8 + 4);
      uVar5 = (**(code **)(*plVar3 + 0x140))(plVar3);
      *(undefined8 *)(param_1 + 0x300) = uVar5;
      uVar5 = (**(code **)(*plVar3 + 0x150))(plVar3,0,*(undefined4 *)(param_1 + 0x280));
      goto LAB_00656760;
    }
  }
  else {
    plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x268) + 200))();
    if (plVar3 == (long *)0x0) {
      return 1;
    }
  }
  lVar8 = (**(code **)(*plVar3 + 0x88))(plVar3);
  *(undefined4 *)(param_1 + 700) = *(undefined4 *)(lVar8 + 4);
  uVar5 = (**(code **)(*plVar3 + 200))(plVar3);
  *(undefined8 *)(param_1 + 0x300) = uVar5;
  uVar5 = (**(code **)(*plVar3 + 0xd0))(plVar3);
LAB_00656760:
  *(undefined8 *)(param_1 + 0x348) = uVar5;
  return 1;
}


