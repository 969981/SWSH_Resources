/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0078d360; name: FUN_0078d360
 */


void FUN_0078d360(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  
  plVar8 = *(long **)(param_1 + 8);
  plVar9 = plVar8;
  if (param_3 != (long *)0x0) {
    plVar9 = param_3;
  }
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar1 + 0x80) < 0x10) {
    *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar8;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
    lVar2 = (**(code **)(*plVar8 + 0x10))(plVar8,0x16b8,8);
    if (lVar2 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_0078ec30(lVar2,param_2,plVar9);
    *(long **)(lVar2 + 8) = plVar8;
    *(long *)(lVar2 + 0x10) = lVar2;
    *(undefined8 *)(lVar2 + 0x18) = 0x16b8;
    *(undefined8 *)(lVar2 + 0x20) = 8;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x238) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x238) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x238) = 0;
    }
    *(long *)(param_1 + 0x238) = lVar2;
    uVar5 = (ulong)*(int *)(param_2 + 0x48);
    lVar1 = *(long *)(param_1 + 0x648);
    plVar9 = (long *)(param_1 + 0x640);
    lVar2 = lVar1 - *(long *)(param_1 + 0x640) >> 3;
    uVar7 = lVar2 * -0x7d05f417d05f417d;
    if (uVar7 < uVar5) {
      FUN_0078db40(plVar9,uVar5 + lVar2 * 0x7d05f417d05f417d);
      lVar2 = *(long *)(param_1 + 0x648);
      lVar1 = *plVar9;
      if (lVar1 == lVar2) {
        return;
      }
    }
    else {
      lVar2 = lVar1;
      if (uVar7 != uVar5) {
        lVar2 = *(long *)(param_1 + 0x640) + uVar5 * 0x158;
        while (lVar3 = lVar1, lVar2 != lVar3) {
          if (*(long *)(lVar3 + -0x10) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar3 + -0x10) + 0x48) + 0x18))();
            *(undefined8 *)(lVar3 + -0x10) = 0;
          }
          lVar1 = lVar3 + -0x158;
          if (*(long *)(lVar3 + -0x18) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar3 + -0x18) + 0x48) + 0x18))();
            *(undefined8 *)(lVar3 + -0x18) = 0;
          }
        }
        *(long *)(param_1 + 0x648) = lVar2;
      }
      lVar1 = *plVar9;
      if (lVar1 == lVar2) {
        return;
      }
    }
    iVar10 = 0;
    while( true ) {
      plVar9 = *(long **)(param_1 + 8);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar3 + 0x80)) break;
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar9;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,800,0x10);
      if (lVar4 == 0) {
        (**(code **)(*plVar9 + 0xb8))(plVar9);
      }
      FUN_006d6c90(lVar4,0);
      *(long **)(lVar4 + 8) = plVar9;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 800;
      *(undefined8 *)(lVar4 + 0x20) = 0x10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      FUN_006d1120(lVar4);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      pcVar6 = *(code **)(lVar4 + 0x2a8);
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)(lVar4 + 0x2b0) = 0;
        *(undefined8 *)(lVar4 + 0x2b8) = 0;
        *(undefined8 *)(lVar4 + 0x2a0) = 0;
        *(undefined8 *)(lVar4 + 0x2a8) = 0;
        (*pcVar6)(lVar4 + 0x2c0);
      }
      *(long *)(lVar4 + 0x2c0) = param_1;
      *(undefined1 **)(lVar4 + 0x2a0) = &LAB_0078df30;
      *(undefined1 **)(lVar4 + 0x2a8) = &LAB_0078e150;
      *(undefined1 **)(lVar4 + 0x2b0) = &LAB_0078e160;
      *(ulong *)(lVar4 + 0x130) = *(ulong *)(lVar4 + 0x130) | 0x20;
      *(long *)(lVar4 + 0x2c8) = lVar1;
      *(undefined1 **)(lVar4 + 0x2b8) = &LAB_0078e170;
      *(ulong *)(lVar4 + 0x138) = *(ulong *)(lVar4 + 0x138) | 1;
      if (*(long *)(lVar1 + 0x148) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + 0x148) + 0x48) + 0x18))();
        *(undefined8 *)(lVar1 + 0x148) = 0;
      }
      *(long *)(lVar1 + 0x148) = lVar4;
      *(int *)(lVar1 + 0x150) = iVar10;
      lVar1 = lVar1 + 0x158;
      iVar10 = iVar10 + 1;
      if (lVar2 == lVar1) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


