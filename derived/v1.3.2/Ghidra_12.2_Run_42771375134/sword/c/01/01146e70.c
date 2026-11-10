/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01146e70; name: FUN_01146e70
 */


void FUN_01146e70(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  plVar7 = (long *)(param_1 + 0x88);
  lVar5 = *plVar7;
  lVar2 = *(long *)(lVar5 + 0x3c0);
  *(undefined8 *)(lVar5 + 0x3c0) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(undefined2 *)(lVar5 + 0x3cc) = 0xffff;
  *(undefined4 *)(lVar5 + 0x3c8) = 0xffffffff;
  lVar2 = *plVar7;
  lVar8 = *(long *)(lVar2 + 0x418);
  if (lVar8 != 0) {
    plVar4 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = *(long *)(lVar5 + 0x3c0);
    *(long *)(lVar5 + 0x3c0) = lVar8;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar2 = *plVar7;
  }
  lVar5 = *(long *)(lVar2 + 0x3d0);
  *(undefined8 *)(lVar2 + 0x3d0) = 0;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  *(undefined2 *)(lVar2 + 0x3dc) = 0xffff;
  *(undefined4 *)(lVar2 + 0x3d8) = 0xffffffff;
  lVar5 = *plVar7;
  lVar8 = *(long *)(lVar5 + 0x420);
  if (lVar8 != 0) {
    plVar4 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = *(long *)(lVar2 + 0x3d0);
    *(long *)(lVar2 + 0x3d0) = lVar8;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar5 = *plVar7;
  }
  lVar2 = *(long *)(lVar5 + 0x3e0);
  *(undefined8 *)(lVar5 + 0x3e0) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(undefined2 *)(lVar5 + 0x3ec) = 0xffff;
  *(undefined4 *)(lVar5 + 1000) = 0xffffffff;
  lVar8 = *plVar7;
  lVar2 = *(long *)(lVar8 + 0x428);
  if (lVar2 != 0) {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar8 = *(long *)(lVar5 + 0x3e0);
    *(long *)(lVar5 + 0x3e0) = lVar2;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar8 = *plVar7;
  }
  lVar2 = *(long *)(lVar8 + 0x3f0);
  *(undefined8 *)(lVar8 + 0x3f0) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(undefined2 *)(lVar8 + 0x3fc) = 0xffff;
  *(undefined4 *)(lVar8 + 0x3f8) = 0xffffffff;
  lVar2 = *plVar7;
  lVar5 = *(long *)(lVar2 + 0x430);
  if (lVar5 != 0) {
    plVar4 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = *(long *)(lVar8 + 0x3f0);
    *(long *)(lVar8 + 0x3f0) = lVar5;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar2 = *plVar7;
  }
  lVar5 = *(long *)(lVar2 + 0x400);
  *(undefined8 *)(lVar2 + 0x400) = 0;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  *(undefined2 *)(lVar2 + 0x40c) = 0xffff;
  *(undefined4 *)(lVar2 + 0x408) = 0xffffffff;
  lVar5 = *(long *)(*plVar7 + 0x438);
  if (lVar5 != 0) {
    plVar4 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar8 = *(long *)(lVar2 + 0x400);
    *(long *)(lVar2 + 0x400) = lVar5;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  lVar2 = *(long *)(param_1 + 0x90);
  plVar4 = *(long **)(lVar2 + 0x98);
  if ((plVar4 != (long *)0x0) && (plVar9 = (long *)*plVar4, plVar9 != (long *)plVar4[1])) {
    do {
      lVar2 = *plVar9;
      if ((lVar2 != 0) && (*(char *)(param_1 + 0x178) != '\0')) {
        if (*(long *)(param_1 + 0x180) == lVar2) {
          lVar2 = 0;
        }
        else if (*(long *)(param_1 + 0x188) == lVar2) {
          lVar2 = 1;
        }
        else if (*(long *)(param_1 + 400) == lVar2) {
          lVar2 = 2;
        }
        else {
          if (*(long *)(param_1 + 0x198) != lVar2) goto LAB_01147460;
          lVar2 = 3;
        }
        plVar6 = *(long **)(*(long *)PTR_DAT_02710540 + 0x68);
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar6;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        plVar3 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x90,8);
        if (plVar3 == (long *)0x0) {
          (**(code **)(*plVar6 + 0xb8))(plVar6);
        }
        FUN_00883c20(plVar3,plVar6);
        plVar3[1] = (long)plVar6;
        plVar3[2] = (long)plVar3;
        plVar3[3] = 0x90;
        plVar3[4] = 8;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        if (plVar3 != (long *)0x0) {
          (**(code **)(plVar3[9] + 0x10))();
        }
        iVar1 = *(int *)((long)plVar9 + 0xc);
        if ((-1 < iVar1) &&
           (plVar6 = *(long **)(*plVar7 + lVar2 * 8 + 0x418),
           lVar5 = (**(code **)(*plVar6 + 0x58))(plVar6,iVar1), lVar5 != 0)) {
          (**(code **)(*plVar3 + 0x28))(plVar3,lVar5);
          *(undefined1 *)(*plVar7 + lVar2 * 0x10 + (long)iVar1 + 0x3c8) = 0;
        }
        iVar1 = (int)plVar9[2];
        if ((-1 < iVar1) &&
           (plVar6 = *(long **)(*plVar7 + lVar2 * 8 + 0x418),
           lVar5 = (**(code **)(*plVar6 + 0x58))(plVar6,iVar1), lVar5 != 0)) {
          (**(code **)(*plVar3 + 0x28))(plVar3,lVar5);
          *(undefined1 *)(*plVar7 + lVar2 * 0x10 + (long)iVar1 + 0x3c8) = 1;
        }
        iVar1 = *(int *)((long)plVar9 + 0x14);
        if ((-1 < iVar1) &&
           (plVar6 = *(long **)(*plVar7 + lVar2 * 8 + 0x418),
           lVar5 = (**(code **)(*plVar6 + 0x58))(plVar6,iVar1), lVar5 != 0)) {
          (**(code **)(*plVar3 + 0x28))(plVar3,lVar5);
          *(undefined1 *)(*plVar7 + lVar2 * 0x10 + (long)iVar1 + 0x3c8) = 2;
        }
        iVar1 = (int)plVar9[3];
        if ((-1 < iVar1) &&
           (plVar6 = *(long **)(*plVar7 + lVar2 * 8 + 0x418),
           lVar5 = (**(code **)(*plVar6 + 0x58))(plVar6,iVar1), lVar5 != 0)) {
          (**(code **)(*plVar3 + 0x28))(plVar3,lVar5);
          *(undefined1 *)(*plVar7 + lVar2 * 0x10 + (long)iVar1 + 0x3c8) = 3;
        }
        iVar1 = *(int *)((long)plVar9 + 0x1c);
        if ((-1 < iVar1) &&
           (plVar6 = *(long **)(*plVar7 + lVar2 * 8 + 0x418),
           lVar5 = (**(code **)(*plVar6 + 0x58))(plVar6,iVar1), lVar5 != 0)) {
          (**(code **)(*plVar3 + 0x28))(plVar3,lVar5);
          *(undefined1 *)(*plVar7 + lVar2 * 0x10 + (long)iVar1 + 0x3c8) = 4;
        }
        iVar1 = (int)plVar9[4];
        if ((-1 < iVar1) &&
           (plVar6 = *(long **)(*plVar7 + lVar2 * 8 + 0x418),
           lVar5 = (**(code **)(*plVar6 + 0x58))(plVar6,iVar1), lVar5 != 0)) {
          (**(code **)(*plVar3 + 0x28))(plVar3,lVar5);
          *(undefined1 *)(*plVar7 + lVar2 * 0x10 + (long)iVar1 + 0x3c8) = 5;
        }
        plVar6 = (long *)(*plVar7 + lVar2 * 8 + 0x418);
        if (plVar3 != (long *)0x0) {
          (**(code **)(plVar3[9] + 0x10))();
        }
        lVar2 = *plVar6;
        *plVar6 = (long)plVar3;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
        }
        if (plVar3 != (long *)0x0) {
          (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
        }
      }
LAB_01147460:
      plVar9 = plVar9 + 5;
    } while (plVar9 != (long *)plVar4[1]);
    lVar2 = *(long *)(param_1 + 0x90);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0114749c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x50) + 0x18))();
  return;
}


