/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00386af0; name: FUN_00386af0
 */


void FUN_00386af0(long *param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  int local_44;
  
  lVar6 = *param_1;
  uVar10 = *param_3;
  puVar7 = (uint *)(lVar6 + 0x10);
  uVar8 = *puVar7;
  if (uVar8 != 0) {
    if (*(char *)(*(long *)(lVar6 + 8) + (ulong)(uVar8 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_1[1] + 0x20))
                ((long *)param_1[1],
                 *(undefined8 *)(*(long *)(lVar6 + 8) + (ulong)(uVar8 - 1) * 0x10));
      lVar6 = *param_1;
      puVar7 = (uint *)(lVar6 + 0x10);
      uVar8 = *puVar7;
      *(undefined1 *)(*(long *)(lVar6 + 8) + (ulong)(uVar8 - 1) * 0x10 + 8) = 1;
    }
  }
  uVar4 = local_60;
  local_60 = local_60 & 0xffffff00;
  local_68 = uVar10;
  if (uVar8 < (*(uint *)(lVar6 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10);
    puVar1[1] = CONCAT44(uStack_5c,uVar4) & 0xffffffffffffff00;
    *puVar1 = uVar10;
    *puVar7 = *puVar7 + 1;
  }
  else {
    FUN_00327960(lVar6,&local_68);
  }
  local_44 = 0x1b6;
  piVar3 = &local_44;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar3 = (int *)param_1[5];
  }
  if ((int *)param_1[6] == (int *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)param_1[6];
  }
  lVar6 = *param_1;
  lVar11 = *param_4;
  puVar7 = (uint *)(lVar6 + 0x10);
  uVar8 = *puVar7;
  bVar5 = uVar8 == 0;
  if (lVar11 != 0) {
    iVar9 = iVar9 + 0x10;
    do {
      if (bVar5) {
        uVar8 = 0;
      }
      else if (*(char *)(*(long *)(lVar6 + 8) + (ulong)(uVar8 - 1) * 0x10 + 8) == '\0') {
        (**(code **)(*(long *)param_1[1] + 0x20))
                  ((long *)param_1[1],
                   *(undefined8 *)(*(long *)(lVar6 + 8) + (ulong)(uVar8 - 1) * 0x10));
        lVar6 = *param_1;
        puVar7 = (uint *)(lVar6 + 0x10);
        uVar8 = *puVar7;
        *(undefined1 *)(*(long *)(lVar6 + 8) + (ulong)(uVar8 - 1) * 0x10 + 8) = 1;
      }
      uVar4 = local_60;
      local_60 = local_60 & 0xffffff00;
      local_68 = lVar11;
      if (uVar8 < (*(uint *)(lVar6 + 0x14) & 0x7fffffff)) {
        plVar2 = (long *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10);
        plVar2[1] = CONCAT44(uStack_5c,uVar4) & 0xffffffffffffff00;
        *plVar2 = lVar11;
        *puVar7 = *puVar7 + 1;
      }
      else {
        FUN_00327960(lVar6,&local_68);
      }
      local_60 = *(uint *)(param_4 + 1);
      local_68 = CONCAT44(iVar9,(undefined4)local_68);
      local_68 = CONCAT71(local_68._1_7_,1);
      local_58 = param_3;
      FUN_00386d90(param_1,*piVar3,&local_68);
      lVar6 = *param_1;
      puVar7 = (uint *)(lVar6 + 0x10);
      if (*puVar7 != 0) {
        uVar8 = *puVar7 - 1;
        if (*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10 + 8) != '\0') {
          (**(code **)(*(long *)param_1[1] + 0x28))();
          lVar6 = *param_1;
          puVar7 = (uint *)(lVar6 + 0x10);
          uVar8 = *puVar7 - 1;
        }
        *(uint *)(lVar6 + 0x10) = uVar8;
      }
      *piVar3 = *piVar3 + 1;
      lVar11 = param_4[2];
      uVar8 = *puVar7;
      bVar5 = uVar8 == 0;
      iVar9 = iVar9 + 0x1c;
      param_4 = param_4 + 2;
    } while (lVar11 != 0);
  }
  if (!bVar5) {
    uVar8 = uVar8 - 1;
    if (*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar8 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_1[1] + 0x28))();
      puVar7 = (uint *)(*param_1 + 0x10);
      uVar8 = *puVar7 - 1;
    }
    *puVar7 = uVar8;
  }
  return;
}


