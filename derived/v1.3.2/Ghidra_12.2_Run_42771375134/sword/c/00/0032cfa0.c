/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0032cfa0; name: FUN_0032cfa0
 */


int FUN_0032cfa0(long param_1,long *param_2,int param_3)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulong local_50;
  undefined1 local_48;
  uint7 uStack_47;
  
  FUN_0032dcc0(param_2,param_1 + 0x18);
  FUN_0032d470(param_2,param_1 + 0x30,param_3 + 2);
  lVar4 = *param_2;
  pcVar9 = *(code **)(param_1 + 0x60);
  local_78._0_8_ = *(undefined8 *)(param_1 + 0x50);
  puVar5 = (uint *)(lVar4 + 0x10);
  uVar7 = *puVar5;
  if (uVar7 != 0) {
    if (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar7 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_2[1] + 0x20))
                ((long *)param_2[1],
                 *(undefined8 *)(*(long *)(lVar4 + 8) + (ulong)(uVar7 - 1) * 0x10));
      lVar4 = *param_2;
      puVar5 = (uint *)(lVar4 + 0x10);
      uVar7 = *puVar5;
      *(undefined1 *)(*(long *)(lVar4 + 8) + (ulong)(uVar7 - 1) * 0x10 + 8) = 1;
    }
  }
  local_78._8_8_ = local_78._8_8_ & 0xffffffffffffff00;
  if (uVar7 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    puVar10 = (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)uVar7 * 0x10);
    puVar10[1] = local_78._8_8_;
    *puVar10 = local_78._0_8_;
    *puVar5 = *puVar5 + 1;
    piVar6 = (int *)param_2[5];
  }
  else {
    FUN_00327960(lVar4,local_78);
    piVar6 = (int *)param_2[5];
  }
  if (piVar6 != (int *)0x0) {
    *piVar6 = *piVar6 + 1;
  }
  local_78 = (*pcVar9)(param_2[2]);
  plVar2 = (long *)param_2[1];
  puVar10 = (undefined8 *)param_2[3];
  iVar3 = *(int *)(*param_2 + 0x10);
  if (iVar3 == 0) {
    pcVar12 = "bad__repx__name";
  }
  else {
    pcVar12 = *(char **)(*(long *)(*param_2 + 8) + (ulong)(iVar3 - 1) * 0x10);
  }
  FUN_00331ae0(puVar10,local_78);
  local_50 = local_50 & 0xffffffffffffff00;
  (**(code **)*puVar10)(puVar10,&local_50,1);
  (**(code **)(*plVar2 + 0x10))(plVar2,pcVar12,puVar10[4]);
  puVar10[3] = 0;
  lVar4 = *param_2;
  puVar5 = (uint *)(lVar4 + 0x10);
  if (*puVar5 == 0) {
    pcVar9 = *(code **)(param_1 + 0x80);
    uVar11 = *(undefined8 *)(param_1 + 0x70);
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar5 - 1;
    if (*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar7 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_2[1] + 0x28))();
      lVar4 = *param_2;
      puVar5 = (uint *)(lVar4 + 0x10);
      uVar7 = *puVar5 - 1;
    }
    *(uint *)(lVar4 + 0x10) = uVar7;
    pcVar9 = *(code **)(param_1 + 0x80);
    uVar11 = *(undefined8 *)(param_1 + 0x70);
    if (uVar7 != 0) {
      if (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar7 - 1) * 0x10 + 8) == '\0') {
        (**(code **)(*(long *)param_2[1] + 0x20))
                  ((long *)param_2[1],
                   *(undefined8 *)(*(long *)(lVar4 + 8) + (ulong)(uVar7 - 1) * 0x10));
        lVar4 = *param_2;
        puVar5 = (uint *)(lVar4 + 0x10);
        uVar7 = *puVar5;
        *(undefined1 *)(*(long *)(lVar4 + 8) + (ulong)(uVar7 - 1) * 0x10 + 8) = 1;
      }
    }
  }
  local_78._8_8_ = local_78._8_8_ & 0xffffffffffffff00;
  local_78._0_8_ = uVar11;
  if (uVar7 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    puVar10 = (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)uVar7 * 0x10);
    puVar10[1] = local_78._8_8_;
    *puVar10 = uVar11;
    *puVar5 = *puVar5 + 1;
    piVar6 = (int *)param_2[5];
  }
  else {
    FUN_00327960(lVar4,local_78);
    piVar6 = (int *)param_2[5];
  }
  if (piVar6 != (int *)0x0) {
    *piVar6 = *piVar6 + 1;
  }
  local_78 = (*pcVar9)(param_2[2]);
  plVar2 = (long *)param_2[1];
  puVar10 = (undefined8 *)param_2[3];
  iVar3 = *(int *)(*param_2 + 0x10);
  if (iVar3 == 0) {
    pcVar12 = "bad__repx__name";
  }
  else {
    pcVar12 = *(char **)(*(long *)(*param_2 + 8) + (ulong)(iVar3 - 1) * 0x10);
  }
  FUN_00331ae0(puVar10,local_78);
  local_50 = local_50 & 0xffffffffffffff00;
  (**(code **)*puVar10)(puVar10,&local_50,1);
  (**(code **)(*plVar2 + 0x10))(plVar2,pcVar12,puVar10[4]);
  puVar10[3] = 0;
  puVar5 = (uint *)(*param_2 + 0x10);
  if (*puVar5 != 0) {
    uVar7 = *puVar5 - 1;
    if (*(char *)(*(long *)(*param_2 + 8) + (ulong)uVar7 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_2[1] + 0x28))();
      puVar5 = (uint *)(*param_2 + 0x10);
      uVar7 = *puVar5 - 1;
    }
    *puVar5 = uVar7;
  }
  FUN_0032d600(param_2,param_1 + 0x90,param_3 + 5);
  FUN_0032d730(param_2,param_1 + 0xb0,param_3 + 6);
  FUN_0032d8c0(param_2,param_1 + 0xd0,param_3 + 7);
  FUN_0032da50(param_2,param_1 + 0xf0,param_3 + 8);
  local_78._0_8_ = ((ulong)local_78._0_8_ >> 8 & 0xffffff) << 8;
  local_58 = *(undefined8 *)(param_1 + 0x140);
  local_60 = *(undefined8 *)(param_1 + 0x138);
  local_68 = *(undefined8 *)(param_1 + 0x130);
  local_78._8_8_ = *(undefined8 *)(param_1 + 0x128);
  lVar4 = *param_2;
  uVar8 = *(ulong *)(param_1 + 0x128);
  puVar5 = (uint *)(lVar4 + 0x10);
  uVar7 = *puVar5;
  if (uVar7 != 0) {
    if (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar7 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_2[1] + 0x20))
                ((long *)param_2[1],
                 *(undefined8 *)(*(long *)(lVar4 + 8) + (ulong)(uVar7 - 1) * 0x10));
      lVar4 = *param_2;
      puVar5 = (uint *)(lVar4 + 0x10);
      uVar7 = *puVar5;
      *(undefined1 *)(*(long *)(lVar4 + 8) + (ulong)(uVar7 - 1) * 0x10 + 8) = 1;
    }
  }
  local_48 = 0;
  local_50 = uVar8;
  if (uVar7 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    puVar1 = (ulong *)(*(long *)(lVar4 + 8) + (ulong)uVar7 * 0x10);
    puVar1[1] = (ulong)uStack_47 << 8;
    *puVar1 = uVar8;
    *puVar5 = *puVar5 + 1;
  }
  else {
    FUN_00327960(lVar4,&local_50);
  }
  FUN_00332460(param_2,local_78);
  puVar5 = (uint *)(*param_2 + 0x10);
  if (*puVar5 != 0) {
    uVar7 = *puVar5 - 1;
    if (*(char *)(*(long *)(*param_2 + 8) + (ulong)uVar7 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_2[1] + 0x28))();
      puVar5 = (uint *)(*param_2 + 0x10);
      uVar7 = *puVar5 - 1;
    }
    *puVar5 = uVar7;
  }
  return param_3 + 0xd;
}


