/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00392c30; name: FUN_00392c30
 */


void FUN_00392c30(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 local_68;
  undefined1 local_60;
  uint7 uStack_5f;
  undefined8 *local_58;
  undefined8 local_50;
  undefined1 local_48;
  uint7 uStack_47;
  int local_34;
  
  local_34 = 0x1ba;
  piVar2 = &local_34;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar2 = (int *)param_1[5];
  }
  if ((int *)param_1[6] == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)param_1[6];
  }
  lVar3 = *param_1;
  uVar7 = *param_2;
  puVar4 = (uint *)(lVar3 + 0x10);
  uVar5 = *puVar4;
  if (uVar5 != 0) {
    if (*(char *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_1[1] + 0x20))
                ((long *)param_1[1],
                 *(undefined8 *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - 1) * 0x10));
      lVar3 = *param_1;
      puVar4 = (uint *)(lVar3 + 0x10);
      uVar5 = *puVar4;
      *(undefined1 *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - 1) * 0x10 + 8) = 1;
    }
  }
  local_60 = 0;
  local_68 = uVar7;
  if (uVar5 < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 8) + (ulong)uVar5 * 0x10);
    puVar1[1] = (ulong)uStack_5f << 8;
    *puVar1 = uVar7;
    *puVar4 = *puVar4 + 1;
  }
  else {
    FUN_00327960(lVar3,&local_68);
  }
  lVar3 = *param_1;
  uVar7 = param_2[2];
  puVar4 = (uint *)(lVar3 + 0x10);
  uVar5 = *puVar4;
  if (uVar5 != 0) {
    if (*(char *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_1[1] + 0x20))
                ((long *)param_1[1],
                 *(undefined8 *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - 1) * 0x10));
      lVar3 = *param_1;
      puVar4 = (uint *)(lVar3 + 0x10);
      uVar5 = *puVar4;
      *(undefined1 *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - 1) * 0x10 + 8) = 1;
    }
  }
  local_60 = 0;
  local_68 = uVar7;
  if (uVar5 < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 8) + (ulong)uVar5 * 0x10);
    puVar1[1] = (ulong)uStack_5f << 8;
    *puVar1 = uVar7;
    *puVar4 = *puVar4 + 1;
  }
  else {
    FUN_00327960(lVar3,&local_68);
  }
  local_68 = CONCAT71(local_68._1_7_,1);
  local_60 = 1;
  local_68 = CONCAT44(iVar6 + 0x7c,(undefined4)local_68);
  local_58 = param_2;
  FUN_00392fb0(param_1,*piVar2,&local_68);
  *piVar2 = *piVar2 + 1;
  lVar3 = *param_1;
  puVar4 = (uint *)(lVar3 + 0x10);
  if (*puVar4 == 0) {
    uVar7 = param_2[3];
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4 - 1;
    if (*(char *)(*(long *)(lVar3 + 8) + (ulong)uVar5 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_1[1] + 0x28))();
      lVar3 = *param_1;
      puVar4 = (uint *)(lVar3 + 0x10);
      uVar5 = *puVar4 - 1;
    }
    *(uint *)(lVar3 + 0x10) = uVar5;
    uVar7 = param_2[3];
    if (uVar5 != 0) {
      if (*(char *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - 1) * 0x10 + 8) == '\0') {
        (**(code **)(*(long *)param_1[1] + 0x20))
                  ((long *)param_1[1],
                   *(undefined8 *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - 1) * 0x10));
        lVar3 = *param_1;
        puVar4 = (uint *)(lVar3 + 0x10);
        uVar5 = *puVar4;
        *(undefined1 *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - 1) * 0x10 + 8) = 1;
      }
    }
  }
  local_48 = 0;
  local_50 = uVar7;
  if (uVar5 < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 8) + (ulong)uVar5 * 0x10);
    puVar1[1] = (ulong)uStack_47 << 8;
    *puVar1 = uVar7;
    *puVar4 = *puVar4 + 1;
  }
  else {
    FUN_00327960(lVar3,&local_50);
  }
  local_60 = 0;
  local_68 = CONCAT71(local_68._1_7_,1);
  local_68 = CONCAT44(iVar6 + 0x80,(undefined4)local_68);
  FUN_00392fb0(param_1,*piVar2,&local_68);
  lVar3 = *param_1;
  puVar4 = (uint *)(lVar3 + 0x10);
  if (*puVar4 != 0) {
    uVar5 = *puVar4 - 1;
    if (*(char *)(*(long *)(lVar3 + 8) + (ulong)uVar5 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_1[1] + 0x28))();
      lVar3 = *param_1;
      puVar4 = (uint *)(lVar3 + 0x10);
      uVar5 = *puVar4 - 1;
    }
    *(uint *)(lVar3 + 0x10) = uVar5;
    if (uVar5 != 0) {
      uVar5 = uVar5 - 1;
      if (*(char *)(*(long *)(lVar3 + 8) + (ulong)uVar5 * 0x10 + 8) != '\0') {
        (**(code **)(*(long *)param_1[1] + 0x28))();
        puVar4 = (uint *)(*param_1 + 0x10);
        uVar5 = *puVar4 - 1;
      }
      *puVar4 = uVar5;
    }
  }
  return;
}


