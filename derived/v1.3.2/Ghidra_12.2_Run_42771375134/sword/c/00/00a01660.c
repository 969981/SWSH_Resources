/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a01660; name: FUN_00a01660
 */


void FUN_00a01660(long param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  
  *(undefined4 *)(*(long *)(param_1 + 0x1a0) + 0x20) = 0;
  *(uint *)(*(long *)(param_1 + 0x1a0) + 0x24) = (uint)(*(int *)(param_1 + 0x8c) == 1);
  iVar1 = *(int *)(param_1 + 0x8c);
  plVar9 = *(long **)(param_1 + 0xb0);
  if (plVar9 != (long *)0x0) {
    (**(code **)(plVar9[9] + 0x10))();
  }
  bVar3 = *(byte *)(param_1 + 300);
  if (-1 < (char)bVar3) {
    plVar10 = *(long **)(*(long *)(param_1 + 0x1a0) + 0x28);
    uVar11 = (ulong)bVar3;
    uVar4 = (**(code **)(*plVar9 + 0x58))(plVar9,(int)(char)bVar3);
    (**(code **)(*plVar10 + 0x28))(plVar10,uVar4);
    iVar2 = *(int *)(param_1 + 0x1e0);
    if (iVar2 == 2) {
      uVar6 = 0;
      uVar7 = 2;
    }
    else if (iVar2 == 1) {
      lVar8 = param_1 + uVar11 * 8;
      uVar11 = (ulong)*(uint *)(lVar8 + 0x204);
      uVar6 = (ulong)*(uint *)(lVar8 + 0x200) << 0x20;
      uVar7 = 1;
    }
    else if (iVar2 == 0) {
      uVar6 = 0;
      uVar7 = 0;
      uVar11 = (ulong)bVar3;
    }
    else {
      uVar11 = 0;
      uVar6 = 0;
      uVar7 = 0;
    }
    lVar8 = *(long *)(param_1 + 0x1a0);
    *(ulong *)(lVar8 + 0x30) = uVar7 | uVar6;
    *(int *)(lVar8 + 0x38) = (int)uVar11;
    bVar3 = *(byte *)(param_1 + 0x12d);
    if (-1 < (char)bVar3) {
      plVar10 = *(long **)(*(long *)(param_1 + 0x1a0) + 0x28);
      uVar4 = (**(code **)(*plVar9 + 0x58))(plVar9,(int)(char)bVar3);
      (**(code **)(*plVar10 + 0x28))(plVar10,uVar4);
      iVar2 = *(int *)(param_1 + 0x1e0);
      if (iVar2 == 0) {
        uVar11 = 0;
        uVar6 = 0;
        uVar5 = (uint)bVar3;
      }
      else {
        uVar5 = (uint)bVar3;
        if (iVar2 == 1) {
          lVar8 = param_1 + (ulong)bVar3 * 8;
          uVar5 = *(uint *)(lVar8 + 0x204);
          uVar11 = (ulong)*(uint *)(lVar8 + 0x200) << 0x20;
          uVar6 = 1;
        }
        else if (iVar2 == 2) {
          uVar11 = 0;
          uVar6 = 2;
        }
        else {
          uVar5 = 0;
          uVar11 = 0;
          uVar6 = 0;
        }
      }
      lVar8 = *(long *)(param_1 + 0x1a0);
      *(ulong *)(lVar8 + 0x3c) = uVar6 | uVar11;
      *(uint *)(lVar8 + 0x44) = uVar5;
      bVar3 = *(byte *)(param_1 + 0x12e);
      if (-1 < (char)bVar3) {
        plVar10 = *(long **)(*(long *)(param_1 + 0x1a0) + 0x28);
        uVar4 = (**(code **)(*plVar9 + 0x58))(plVar9,(int)(char)bVar3);
        (**(code **)(*plVar10 + 0x28))(plVar10,uVar4);
        iVar2 = *(int *)(param_1 + 0x1e0);
        if (iVar2 == 0) {
          uVar11 = 0;
          uVar6 = 0;
          uVar5 = (uint)bVar3;
        }
        else {
          uVar5 = (uint)bVar3;
          if (iVar2 == 1) {
            lVar8 = param_1 + (ulong)bVar3 * 8;
            uVar5 = *(uint *)(lVar8 + 0x204);
            uVar11 = (ulong)*(uint *)(lVar8 + 0x200) << 0x20;
            uVar6 = 1;
          }
          else if (iVar2 == 2) {
            uVar11 = 0;
            uVar6 = 2;
          }
          else {
            uVar5 = 0;
            uVar11 = 0;
            uVar6 = 0;
          }
        }
        lVar8 = *(long *)(param_1 + 0x1a0);
        *(ulong *)(lVar8 + 0x48) = uVar6 | uVar11;
        *(uint *)(lVar8 + 0x50) = uVar5;
        if (iVar1 != 0) {
          bVar3 = *(byte *)(param_1 + 0x12f);
          if (-1 < (char)bVar3) {
            plVar10 = *(long **)(*(long *)(param_1 + 0x1a0) + 0x28);
            uVar4 = (**(code **)(*plVar9 + 0x58))(plVar9,(int)(char)bVar3);
            (**(code **)(*plVar10 + 0x28))(plVar10,uVar4);
            iVar1 = *(int *)(param_1 + 0x1e0);
            if (iVar1 == 0) {
              uVar11 = 0;
              uVar6 = 0;
              uVar5 = (uint)bVar3;
            }
            else {
              uVar5 = (uint)bVar3;
              if (iVar1 == 1) {
                lVar8 = param_1 + (ulong)bVar3 * 8;
                uVar5 = *(uint *)(lVar8 + 0x204);
                uVar11 = (ulong)*(uint *)(lVar8 + 0x200) << 0x20;
                uVar6 = 1;
              }
              else if (iVar1 == 2) {
                uVar11 = 0;
                uVar6 = 2;
              }
              else {
                uVar5 = 0;
                uVar11 = 0;
                uVar6 = 0;
              }
            }
            lVar8 = *(long *)(param_1 + 0x1a0);
            *(ulong *)(lVar8 + 0x54) = uVar6 | uVar11;
            *(uint *)(lVar8 + 0x5c) = uVar5;
          }
        }
      }
    }
  }
  *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x60) = *(undefined8 *)(param_1 + 0x1e0);
  if (plVar9 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a01970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar9[9] + 0x18))(plVar9 + 9);
  return;
}


