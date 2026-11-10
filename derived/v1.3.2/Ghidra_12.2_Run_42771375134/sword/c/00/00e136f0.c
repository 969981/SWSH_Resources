/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e136f0; name: FUN_00e136f0
 */


void FUN_00e136f0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  uint *puVar4;
  int *piVar5;
  ulong uVar6;
  ushort *puVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  ulong local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  long local_48;
  
  if (*(long *)(param_1 + 0xe0) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x248) == 0) {
    lVar11 = 0;
  }
  else {
    puVar4 = *(uint **)(*(long *)(param_1 + 0x248) + 400);
    lVar11 = (long)puVar4 + (ulong)*puVar4;
  }
  local_70 = *(ulong *)(param_1 + 0xf8);
  FUN_00e11680(&local_48,"bin/archive/field/area/other/",&local_70,".gfpak");
  lVar12 = *(long *)PTR_DAT_0271e8d0;
  FUN_006cf0c0(&local_70,&local_48);
  iVar1 = *(int *)(param_1 + 0x360);
  if ((iVar1 != -1) && (uVar9 = *(ulong *)(lVar12 + (long)iVar1 * 0x58 + 0x50), uVar9 != 0)) {
    uVar10 = uVar9 - 1;
    if ((uVar10 & uVar9) == 0) {
      uVar6 = uVar10 & local_70;
    }
    else {
      uVar6 = local_70;
      if (uVar9 <= local_70) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = local_70 / uVar9;
        }
        uVar6 = local_70 - uVar6 * uVar9;
      }
    }
    plVar8 = *(long **)(*(long *)(lVar12 + (long)iVar1 * 0x58 + 0x48) + uVar6 * 8);
    if (plVar8 == (long *)0x0) {
LAB_00e13854:
      lVar12 = 0;
      goto joined_r0x00e13858;
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      if ((uVar10 & uVar9) == 0) {
        do {
          uVar9 = plVar8[1];
          if (local_70 != uVar9 && (uVar9 & uVar10) != uVar6) goto LAB_00e13a48;
          if ((local_70 == uVar9) && (plVar8[2] == local_70)) goto LAB_00e13a30;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
        goto LAB_00e13854;
      }
      do {
        uVar10 = plVar8[1];
        if (local_70 == uVar10) {
          if (plVar8[2] == local_70) goto LAB_00e13a30;
        }
        else {
          if (uVar9 <= uVar10) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar10 / uVar9;
            }
            uVar10 = uVar10 - uVar2 * uVar9;
          }
          if (uVar10 != uVar6) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
LAB_00e13a48:
  lVar12 = 0;
joined_r0x00e13858:
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  puVar3 = PTR_DAT_027194e0;
  uVar13 = *(undefined8 *)PTR_DAT_027194e0;
  uVar14 = *(undefined8 *)(param_1 + 0xe0);
  uVar15 = *(undefined8 *)(param_1 + 0x48);
  FUN_006e2db0(&local_70,*(long *)(lVar12 + 8),*(undefined8 *)(*(long *)(lVar12 + 8) + 400));
  FUN_00e13a60(uVar13,uVar14,uVar15,&local_70,*(undefined4 *)(param_1 + 0x360),lVar11);
  if (local_68 != (char *)0x0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = (char *)0x0;
  }
  piVar5 = *(int **)(param_1 + 0x48);
  puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
  if (((*puVar7 < 0x43) || ((ulong)puVar7[0x21] == 0)) ||
     (0.0 <= *(float *)((long)piVar5 + (ulong)puVar7[0x21]))) {
    local_70 = 0xc489900eb76a3567;
    local_68 = "ShadowFadeLength";
    local_60 = 0x10;
    local_58 = 0;
    uVar16 = 0;
    if ((0x42 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
       (uVar9 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x21], uVar9 != 0)) {
      uVar16 = *(undefined4 *)((long)piVar5 + uVar9);
    }
    FUN_00dd4900(uVar16,*(undefined8 *)puVar3,&local_70);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    piVar5 = *(int **)(param_1 + 0x48);
    puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
  }
  if (((*puVar7 < 0x45) || ((ulong)puVar7[0x22] == 0)) ||
     (0.0 <= *(float *)((long)piVar5 + (ulong)puVar7[0x22]))) {
    local_70 = 0xb740941422bf5a7b;
    local_68 = "ShadowFadePow";
    local_60 = 0xd;
    local_58 = 0;
    uVar16 = 0;
    if ((0x44 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
       (uVar9 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x22], uVar9 != 0)) {
      uVar16 = *(undefined4 *)((long)piVar5 + uVar9);
    }
    FUN_00dd4900(uVar16,*(undefined8 *)puVar3,&local_70);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
LAB_00e13a30:
  if (plVar8[3] != 0) {
    lVar12 = plVar8[3] + 0x10;
    goto joined_r0x00e13858;
  }
  goto LAB_00e13a48;
}


