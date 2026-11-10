/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0032ffb0; name: FUN_0032ffb0
 */


int FUN_0032ffb0(ulong *param_1,long *param_2,int param_3)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  ulong uVar11;
  char *pcVar12;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined1 local_44 [4];
  
  lVar5 = *param_2;
  pcVar9 = (code *)param_1[2];
  uVar11 = *param_1;
  puVar6 = (uint *)(lVar5 + 0x10);
  uVar8 = *puVar6;
  if (uVar8 != 0) {
    if (*(char *)(*(long *)(lVar5 + 8) + (ulong)(uVar8 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_2[1] + 0x20))
                ((long *)param_2[1],
                 *(undefined8 *)(*(long *)(lVar5 + 8) + (ulong)(uVar8 - 1) * 0x10));
      lVar5 = *param_2;
      puVar6 = (uint *)(lVar5 + 0x10);
      uVar8 = *puVar6;
      *(undefined1 *)(*(long *)(lVar5 + 8) + (ulong)(uVar8 - 1) * 0x10 + 8) = 1;
    }
  }
  local_78 = local_78 & 0xffffffffffffff00;
  local_80 = uVar11;
  if (uVar8 < (*(uint *)(lVar5 + 0x14) & 0x7fffffff)) {
    puVar1 = (ulong *)(*(long *)(lVar5 + 8) + (ulong)uVar8 * 0x10);
    puVar1[1] = local_78;
    *puVar1 = uVar11;
    *puVar6 = *puVar6 + 1;
    piVar7 = (int *)param_2[5];
  }
  else {
    FUN_00327960(lVar5,&local_80);
    piVar7 = (int *)param_2[5];
  }
  if (piVar7 != (int *)0x0) {
    *piVar7 = *piVar7 + 1;
  }
  (*pcVar9)(&local_80,param_2[2]);
  plVar2 = (long *)param_2[1];
  puVar10 = (undefined8 *)param_2[3];
  iVar3 = *(int *)(*param_2 + 0x10);
  if (iVar3 == 0) {
    pcVar12 = "bad__repx__name";
  }
  else {
    pcVar12 = *(char **)(*(long *)(*param_2 + 8) + (ulong)(iVar3 - 1) * 0x10);
  }
  local_58 = local_80;
  local_50 = (uint)local_78;
  FUN_0031b3b0(puVar10,&local_58);
  local_44[0] = 0;
  (**(code **)*puVar10)(puVar10,local_44,1);
  (**(code **)(*plVar2 + 0x10))(plVar2,pcVar12,puVar10[4]);
  puVar10[3] = 0;
  lVar5 = *param_2;
  puVar6 = (uint *)(lVar5 + 0x10);
  if (*puVar6 != 0) {
    uVar8 = *puVar6 - 1;
    if (*(char *)(*(long *)(lVar5 + 8) + (ulong)uVar8 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_2[1] + 0x28))();
      lVar5 = *param_2;
      puVar6 = (uint *)(lVar5 + 0x10);
      uVar8 = *puVar6 - 1;
    }
    *(uint *)(lVar5 + 0x10) = uVar8;
  }
  local_80 = (local_80 >> 8 & 0xffffff) << 8;
  local_60 = param_1[7];
  local_68 = param_1[6];
  local_70 = param_1[5];
  local_78 = param_1[4];
  uVar11 = param_1[4];
  uVar8 = *puVar6;
  if (uVar8 != 0) {
    if (*(char *)(*(long *)(lVar5 + 8) + (ulong)(uVar8 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_2[1] + 0x20))
                ((long *)param_2[1],
                 *(undefined8 *)(*(long *)(lVar5 + 8) + (ulong)(uVar8 - 1) * 0x10));
      lVar5 = *param_2;
      puVar6 = (uint *)(lVar5 + 0x10);
      uVar8 = *puVar6;
      *(undefined1 *)(*(long *)(lVar5 + 8) + (ulong)(uVar8 - 1) * 0x10 + 8) = 1;
    }
  }
  uVar4 = local_50;
  local_50 = local_50 & 0xffffff00;
  local_58 = uVar11;
  if (uVar8 < (*(uint *)(lVar5 + 0x14) & 0x7fffffff)) {
    puVar1 = (ulong *)(*(long *)(lVar5 + 8) + (ulong)uVar8 * 0x10);
    puVar1[1] = CONCAT44(uStack_4c,uVar4) & 0xffffffffffffff00;
    *puVar1 = uVar11;
    *puVar6 = *puVar6 + 1;
  }
  else {
    FUN_00327960(lVar5,&local_58);
  }
  FUN_003302b0(param_2,&local_80);
  puVar6 = (uint *)(*param_2 + 0x10);
  if (*puVar6 != 0) {
    uVar8 = *puVar6 - 1;
    if (*(char *)(*(long *)(*param_2 + 8) + (ulong)uVar8 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_2[1] + 0x28))();
      puVar6 = (uint *)(*param_2 + 0x10);
      uVar8 = *puVar6 - 1;
    }
    *puVar6 = uVar8;
  }
  return param_3 + 2;
}


