/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b9e80; name: FUN_012b9e80
 */


void FUN_012b9e80(undefined1 *param_1,long param_2)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  undefined2 local_38;
  undefined1 local_36;
  undefined2 local_34;
  undefined1 local_32;
  undefined2 local_28;
  undefined1 local_26;
  undefined2 local_24;
  undefined1 local_22;
  
  cVar2 = FUN_00878ac0(*(undefined8 *)(param_2 + 0x58));
  if (cVar2 == '\0') {
    fVar9 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
    uVar8 = *(undefined8 *)(&DAT_02168b70 + (ulong)(0.5 <= fVar9) * 8);
    uVar4 = FUN_0131acf0(*(undefined8 *)(param_2 + 0xc0));
    if (((uVar4 & 1) == 0) || (lVar7 = *(long *)(param_2 + 0xc0), lVar7 == 0)) {
      uVar6 = 0x23;
    }
    else {
      FUN_0131acf0(lVar7);
      piVar5 = *(int **)(lVar7 + 0x130);
      puVar1 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (4 - (long)*piVar5)));
      uVar6 = 0x23;
      if (*(char *)((long)puVar1 + (ulong)*puVar1 + 0x2f) != '\0') {
        uVar6 = 0x2b;
      }
    }
    *(undefined4 *)(param_1 + 0x20) = 3;
    local_28 = local_24;
    local_26 = local_22;
  }
  else {
    bVar3 = FUN_00878ac0(*(undefined8 *)(param_2 + 0x58));
    if (bVar3 < 0x32) {
      fVar9 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
      uVar8 = *(undefined8 *)(&DAT_02168b80 + (ulong)(0.5 <= fVar9) * 8);
      uVar4 = FUN_0131acf0(*(undefined8 *)(param_2 + 0xc0));
      if (((uVar4 & 1) == 0) || (lVar7 = *(long *)(param_2 + 0xc0), lVar7 == 0)) {
        uVar6 = 0x23;
      }
      else {
        FUN_0131acf0(lVar7);
        piVar5 = *(int **)(lVar7 + 0x130);
        puVar1 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (4 - (long)*piVar5)));
        uVar6 = 0x23;
        if (*(char *)((long)puVar1 + (ulong)*puVar1 + 0x2e) != '\0') {
          uVar6 = 0x2a;
        }
      }
      *(undefined4 *)(param_1 + 0x20) = 3;
    }
    else {
      bVar3 = FUN_00878ac0(*(undefined8 *)(param_2 + 0x58));
      if (0x95 < bVar3) {
        bVar3 = FUN_00878ac0(*(undefined8 *)(param_2 + 0x58));
        if (bVar3 < 0xfa) {
          *param_1 = 0;
          return;
        }
        fVar9 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
        uVar8 = *(undefined8 *)(&DAT_02168ba0 + (ulong)(0.5 <= fVar9) * 8);
        uVar4 = FUN_0131acf0(*(undefined8 *)(param_2 + 0xc0));
        if (((uVar4 & 1) == 0) || (lVar7 = *(long *)(param_2 + 0xc0), lVar7 == 0)) {
          uVar6 = 0x23;
        }
        else {
          FUN_0131acf0(lVar7);
          piVar5 = *(int **)(lVar7 + 0x130);
          puVar1 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (4 - (long)*piVar5)));
          uVar6 = 0x22;
          if (*(char *)((long)puVar1 + (ulong)*puVar1 + 0x26) == '\0') {
            uVar6 = 0x23;
          }
        }
        param_1[0x24] = 0;
        *(undefined8 *)(param_1 + 8) = uVar8;
        *(undefined8 *)(param_1 + 0x10) = uVar6;
        *(undefined8 *)(param_1 + 0x18) = 1;
        *(undefined4 *)(param_1 + 0x20) = 1;
        local_28 = local_38;
        local_26 = local_36;
        goto LAB_012ba140;
      }
      fVar9 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
      uVar8 = *(undefined8 *)(&DAT_02168b90 + (ulong)(0.5 <= fVar9) * 8);
      uVar4 = FUN_0131acf0(*(undefined8 *)(param_2 + 0xc0));
      if (((uVar4 & 1) == 0) || (lVar7 = *(long *)(param_2 + 0xc0), lVar7 == 0)) {
        uVar6 = 0x23;
      }
      else {
        FUN_0131acf0(lVar7);
        piVar5 = *(int **)(lVar7 + 0x130);
        puVar1 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (4 - (long)*piVar5)));
        uVar6 = 0x22;
        if (*(char *)((long)puVar1 + (ulong)*puVar1 + 0x26) == '\0') {
          uVar6 = 0x23;
        }
      }
      *(undefined4 *)(param_1 + 0x20) = 3;
      local_28 = local_34;
      local_26 = local_32;
    }
  }
  *(undefined8 *)(param_1 + 8) = uVar8;
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  *(undefined8 *)(param_1 + 0x18) = 1;
  param_1[0x24] = 0;
LAB_012ba140:
  param_1[0x27] = local_26;
  *(undefined2 *)(param_1 + 0x25) = local_28;
  *param_1 = 1;
  return;
}


