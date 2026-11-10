/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fcb4d0; name: FUN_00fcb4d0
 */


void FUN_00fcb4d0(undefined4 param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  ushort uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined4 uVar14;
  long local_58;
  long local_48;
  
  if (*(int *)(param_2 + 0x80) == 0) {
    return;
  }
  lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(lVar10 + 2000);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(lVar11 + 0x80);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  uVar3 = FUN_00fa7950(lVar12);
  if ((uVar3 & 1) == 0) goto LAB_00fcbc1c;
  uVar4 = FUN_00fa7e30(lVar12);
  if (*(int *)(param_2 + 0x80) - 1U < 3) {
    FUN_00fa7e40(&local_48,lVar12,param_1);
    if (local_48 != 0) {
      lVar5 = FUN_00fa74a0(lVar12,param_1);
      if ((lVar5 != 0) &&
         (piVar6 = (int *)FUN_00fa70a0(local_48,lVar5,param_3), piVar6 != (int *)0x0)) {
        uVar14 = 0;
        if ((0x3a < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
           (uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x1d], uVar3 != 0)) {
          uVar14 = *(undefined4 *)((long)piVar6 + uVar3);
        }
        *(undefined4 *)(param_2 + 0x8c) = uVar14;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x45) {
          uVar9 = 0;
        }
        else {
          uVar9 = ((ushort *)((long)piVar6 - (long)*piVar6))[0x22];
          if ((ulong)uVar9 != 0) {
            uVar9 = (ushort)*(undefined4 *)((long)piVar6 + (ulong)uVar9);
          }
        }
        *(ushort *)(param_2 + 0x90) = uVar9;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x4b) {
          uVar9 = 0;
        }
        else {
          uVar9 = ((ushort *)((long)piVar6 - (long)*piVar6))[0x25];
          if ((ulong)uVar9 != 0) {
            uVar9 = (ushort)*(undefined4 *)((long)piVar6 + (ulong)uVar9);
          }
        }
        *(ushort *)(param_2 + 0x92) = uVar9;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x47) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x23];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = (undefined1)*(undefined4 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x94) = uVar8;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x4d) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x26];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = (undefined1)*(undefined4 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x95) = uVar8;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x43) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x21];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = (undefined1)*(undefined4 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x96) = uVar8;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x49) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x24];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = (undefined1)*(undefined4 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x97) = uVar8;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x3d) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x1e];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = (undefined1)*(undefined4 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x98) = uVar8;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x3f) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x1f];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = (undefined1)*(undefined4 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x99) = uVar8;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x41) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x20];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = (undefined1)*(undefined4 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x9a) = uVar8;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x41) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x20];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = (undefined1)*(undefined4 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x9b) = uVar8;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x2b) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x15];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = *(undefined1 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x9d) = uVar8;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x2d) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x16];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = *(undefined1 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x9e) = uVar8;
      }
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    uVar1 = *(int *)(param_2 + 0x80) - 1;
    if (uVar1 < 3) {
      uVar14 = *(undefined4 *)(&DAT_02161ec4 + (long)(int)uVar1 * 4);
LAB_00fcbab8:
      FUN_011b80e0(&local_48,uVar4,uVar14);
      if (local_48 != 0) {
        FUN_01029800(&local_58);
        lVar5 = local_58;
        if (local_58 != 0) {
          plVar13 = (long *)(local_58 + 0x48);
          (**(code **)(*plVar13 + 0x10))(plVar13);
          puVar7 = (undefined4 *)FUN_011b7fe0(lVar5);
          if (puVar7 == (undefined4 *)0x0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *puVar7;
          }
          *(undefined4 *)(param_2 + 0xa0) = uVar14;
          (**(code **)(*plVar13 + 0x18))(plVar13);
          uVar2 = FUN_011b8030(local_58);
          *(undefined2 *)(param_2 + 0xa4) = uVar2;
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            local_58 = 0;
          }
        }
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
      }
    }
  }
  else if (*(int *)(param_2 + 0x80) == 4) {
    FUN_00fa7e90(&local_48,lVar12);
    if (local_48 != 0) {
      lVar5 = FUN_00fa74e0(lVar12);
      if ((lVar5 != 0) &&
         (piVar6 = (int *)FUN_00fa6950(local_48,lVar5,param_3), piVar6 != (int *)0x0)) {
        uVar14 = 0;
        if ((0x38 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
           (uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x1c], uVar3 != 0)) {
          uVar14 = *(undefined4 *)((long)piVar6 + uVar3);
        }
        *(undefined4 *)(param_2 + 0x8c) = uVar14;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x43) {
          uVar9 = 0;
        }
        else {
          uVar9 = ((ushort *)((long)piVar6 - (long)*piVar6))[0x21];
          if ((ulong)uVar9 != 0) {
            uVar9 = (ushort)*(undefined4 *)((long)piVar6 + (ulong)uVar9);
          }
        }
        *(ushort *)(param_2 + 0x90) = uVar9;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x49) {
          uVar9 = 0;
        }
        else {
          uVar9 = ((ushort *)((long)piVar6 - (long)*piVar6))[0x24];
          if ((ulong)uVar9 != 0) {
            uVar9 = (ushort)*(undefined4 *)((long)piVar6 + (ulong)uVar9);
          }
        }
        *(ushort *)(param_2 + 0x92) = uVar9;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x45) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x22];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = (undefined1)*(undefined4 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x94) = uVar8;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x4b) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x25];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = (undefined1)*(undefined4 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x95) = uVar8;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x41) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x20];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = (undefined1)*(undefined4 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x96) = uVar8;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x47) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x23];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = (undefined1)*(undefined4 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x97) = uVar8;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x3b) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x1d];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = (undefined1)*(undefined4 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x98) = uVar8;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x3d) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x1e];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = (undefined1)*(undefined4 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x99) = uVar8;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x3f) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x1f];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = (undefined1)*(undefined4 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x9a) = uVar8;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x3f) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0x1f];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = (undefined1)*(undefined4 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x9b) = uVar8;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x17) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0xb];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = *(undefined1 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x9d) = uVar8;
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x19) {
          uVar8 = 0;
        }
        else {
          uVar3 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0xc];
          uVar8 = 0;
          if (uVar3 != 0) {
            uVar8 = *(undefined1 *)((long)piVar6 + uVar3);
          }
        }
        *(undefined1 *)(param_2 + 0x9e) = uVar8;
      }
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    uVar14 = 1;
    goto LAB_00fcbab8;
  }
  FUN_011b80e0(&local_48,uVar4,2);
  if (local_48 == 0) {
LAB_00fcbb9c:
    local_58 = 0;
  }
  else {
    FUN_01029800(&local_58);
    if (local_58 != 0) {
      uVar2 = FUN_011b8030();
      *(undefined2 *)(param_2 + 0xa6) = uVar2;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        goto LAB_00fcbb9c;
      }
    }
  }
  FUN_011b80e0(&local_58,uVar4,3);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  local_48 = local_58;
  if (local_58 == 0) {
LAB_00fcbc00:
    local_58 = 0;
  }
  else {
    FUN_01029800(&local_58);
    if (local_58 != 0) {
      uVar2 = FUN_011b8030();
      *(undefined2 *)(param_2 + 0xa8) = uVar2;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        goto LAB_00fcbc00;
      }
    }
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
LAB_00fcbc1c:
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  return;
}


