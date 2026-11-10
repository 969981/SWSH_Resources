/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0032f8c0; name: FUN_0032f8c0
 */


int FUN_0032f8c0(ulong *param_1,long *param_2,int param_3)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  code *pcVar9;
  ulong uVar10;
  ulong local_138;
  ulong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [32];
  long local_d8;
  long lStack_d0;
  undefined1 *local_c8;
  long lStack_c0;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  
  lVar5 = *param_2;
  pcVar9 = (code *)param_1[2];
  uVar10 = *param_1;
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
  local_98 = local_98 & 0xffffffffffffff00;
  local_a0 = uVar10;
  if (uVar8 < (*(uint *)(lVar5 + 0x14) & 0x7fffffff)) {
    puVar1 = (ulong *)(*(long *)(lVar5 + 8) + (ulong)uVar8 * 0x10);
    puVar1[1] = local_98;
    *puVar1 = uVar10;
    *puVar6 = *puVar6 + 1;
    piVar7 = (int *)param_2[5];
  }
  else {
    FUN_00327960(lVar5,&local_a0);
    piVar7 = (int *)param_2[5];
  }
  if (piVar7 != (int *)0x0) {
    *piVar7 = *piVar7 + 1;
  }
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  local_130 = 0;
  FUN_002172c0(&local_138);
  (*pcVar9)(auStack_f8,param_2[2]);
  lVar5 = *param_2;
  lVar3 = param_2[1];
  lVar2 = param_2[3];
  lVar4 = param_2[4];
  FUN_002172c0(&local_a0);
  local_a8 = 0;
  uStack_b0 = 0;
  local_d8 = lVar5;
  lStack_d0 = lVar3;
  local_c8 = auStack_f8;
  lStack_c0 = lVar2;
  local_b8 = lVar4;
  FUN_0032ffb0(&local_a0,&local_d8,0);
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
  local_a0 = (local_a0 >> 8 & 0xffffff) << 8;
  local_80 = param_1[7];
  local_88 = param_1[6];
  uVar10 = param_1[4];
  local_90 = param_1[5];
  local_98 = param_1[4];
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
  local_130 = local_130 & 0xffffffffffffff00;
  local_138 = uVar10;
  if (uVar8 < (*(uint *)(lVar5 + 0x14) & 0x7fffffff)) {
    puVar1 = (ulong *)(*(long *)(lVar5 + 8) + (ulong)uVar8 * 0x10);
    puVar1[1] = local_130;
    *puVar1 = uVar10;
    *puVar6 = *puVar6 + 1;
  }
  else {
    FUN_00327960(lVar5,&local_138);
  }
  FUN_003303b0(param_2,&local_a0);
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
  FUN_0032fbb0(param_2,param_1 + 8,param_3 + 2);
  FUN_0032fd40(param_2,param_1 + 0xc,param_3 + 3);
  return param_3 + 4;
}


