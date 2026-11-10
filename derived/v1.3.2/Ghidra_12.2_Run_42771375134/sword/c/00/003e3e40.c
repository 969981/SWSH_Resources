/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e3e40; name: FUN_003e3e40
 */


void FUN_003e3e40(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  lVar5 = *(long *)(param_1 + 0x738);
  uVar1 = *(uint *)(lVar5 + 0xb4);
  iVar2 = *(int *)(lVar5 + 0x1b4);
  *(uint *)(param_1 + 0x744) = uVar1 + 1;
  if ((uVar1 == 0) || (*(int *)(lVar5 + 0xb8) != 0)) {
    if (*(int *)(param_1 + 0x740) == 0) {
      if (uVar1 == 0) {
        FUN_00123650();
        return;
      }
    }
    else {
      uVar7 = (ulong)(uVar1 & 1);
      uVar3 = iVar2 - 1;
      uVar6 = (ulong)(uVar1 & 1 ^ 1);
      if (uVar1 != uVar3) {
        lVar5 = *(long *)(param_1 + 0x1660);
        lVar10 = lVar5 + uVar6 * 0x38;
        plVar11 = (long *)(lVar10 + 0x18);
        *plVar11 = (long)param_2;
        *(undefined4 *)(lVar10 + 0x20) = 1;
        if (param_2 != (long *)0x0) {
          (**(code **)(*param_2 + 0x20))(param_2);
          *(undefined8 *)(lVar5 + uVar6 * 0x38 + 0x10) = *(undefined8 *)(*plVar11 + 0x10);
          lVar5 = *(long *)(param_1 + 0x1660);
        }
        lVar10 = *(long *)(param_1 + 0x1650);
        plVar11 = (long *)(lVar5 + uVar6 * 0x38);
        lVar5 = lVar10 + uVar6 * 0x38;
        plVar9 = (long *)(lVar5 + 0x18);
        *plVar9 = (long)plVar11;
        *(undefined4 *)(lVar5 + 0x20) = 1;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x20))();
          *(undefined8 *)(lVar10 + uVar6 * 0x38 + 0x10) = *(undefined8 *)(*plVar9 + 0x10);
        }
      }
      lVar5 = *(long *)(param_1 + 0x1670);
      if (uVar1 != uVar3) {
        param_2 = (long *)(*(long *)(param_1 + 0x1650) + uVar6 * 0x38);
      }
      lVar10 = lVar5 + uVar7 * 0x38;
      plVar11 = (long *)(lVar10 + 0x18);
      *plVar11 = (long)param_2;
      *(undefined4 *)(lVar10 + 0x20) = 1;
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x20))(param_2);
        *(undefined8 *)(lVar5 + uVar7 * 0x38 + 0x10) = *(undefined8 *)(*plVar11 + 0x10);
        lVar5 = *(long *)(param_1 + 0x1670);
      }
      lVar10 = *(long *)(param_1 + 0x1640);
      plVar11 = (long *)(lVar5 + uVar7 * 0x38);
      lVar5 = lVar10 + uVar7 * 0x38;
      plVar9 = (long *)(lVar5 + 0x18);
      *plVar9 = (long)plVar11;
      *(undefined4 *)(lVar5 + 0x20) = 1;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
        *(undefined8 *)(lVar10 + uVar7 * 0x38 + 0x10) = *(undefined8 *)(*plVar9 + 0x10);
        lVar10 = *(long *)(param_1 + 0x1640);
      }
      lVar8 = uVar7 * 0x38;
      lVar5 = *(long *)(param_1 + 0x1630) + lVar8;
      *(undefined4 *)(lVar5 + 0x20) = 1;
      *(long **)(lVar5 + 0x18) = (long *)(lVar10 + lVar8);
      (**(code **)(*(long *)(lVar10 + lVar8) + 0x20))();
      *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x10);
      plVar11 = (long *)(*(long *)(param_1 + 0x1630) + lVar8);
      lVar5 = *(long *)(param_1 + 0x1620) + lVar8;
      *(undefined4 *)(lVar5 + 0x20) = 1;
      *(long **)(lVar5 + 0x18) = plVar11;
      (**(code **)(*plVar11 + 0x20))();
      *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x10);
      lVar5 = *(long *)(param_1 + 0x1620) + lVar8;
      plVar11 = (long *)(**(code **)(**(long **)(lVar5 + 0x10) + 0x10))();
      uVar4 = (**(code **)(*plVar11 + 8))();
      FUN_001321b0(*(undefined8 *)(param_1 + 0x728),uVar4,
                   *(undefined8 *)(*(long *)(param_1 + 0x720) + 0x7b0),*(long *)(param_1 + 0x720),0,
                   lVar5,0);
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1670) + lVar8) + 0x28))();
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1640) + lVar8) + 0x28))();
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1630) + lVar8) + 0x28))();
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1620) + lVar8) + 0x28))();
      if (uVar1 != uVar3) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x1660) + uVar6 * 0x38) + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x003e4100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(*(long *)(param_1 + 0x1650) + uVar6 * 0x38) + 0x28))();
        return;
      }
    }
  }
  return;
}


