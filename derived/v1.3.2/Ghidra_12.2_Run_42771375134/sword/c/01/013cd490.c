/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013cd490; name: FUN_013cd490
 */


void FUN_013cd490(long param_1)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  uint local_134;
  byte local_124 [4];
  undefined1 *local_120;
  code *local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  long *local_100;
  ulong *puStack_f8;
  long local_98;
  char *pcStack_90;
  undefined8 local_88;
  long local_80;
  ulong local_78 [3];
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar10 != (undefined8 *)0x0)) {
    plVar5 = (long *)(**(code **)*puVar10)(puVar10);
    lVar6 = FUN_0132d9a0();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar6) {
        puVar10 = puVar10 + -10;
        goto LAB_013cd4f8;
      }
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_013cd4f8:
  local_78[0] = 0xffffffffffffffff;
  FUN_0142bba0(puVar10[0xc],0xdaef13b63d78cbff,local_78);
  bVar2 = FUN_012d62d0(8);
  bVar3 = FUN_012d63e0(8);
  lVar6 = local_98;
  if ((((bVar2 | bVar3) & 1) == 0) || (*(char *)(param_1 + 0x84) != '\0')) goto joined_r0x013cd780;
  local_98 = 0x359fe15b1d82d2ad;
  pcStack_90 = "Play_Camp_Switching_Toy";
  local_88 = 0x17;
  local_80 = 0;
  FUN_012d6d40(&local_98);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (((bVar3 ^ *(char *)(puVar10 + 0xc9) != '\0') & 1) != 0) {
    *(byte *)(puVar10 + 0xc9) = bVar3 & 1;
    local_78[0] = *(ulong *)(param_1 + 0x88);
    lVar6 = local_98;
    goto joined_r0x013cd780;
  }
  FUN_0142c3d0(&local_98);
  uVar8 = FUN_01321f40(*(undefined8 *)(param_1 + 0x90));
  if ((uVar8 & 1) == 0) {
    local_134 = FUN_01363360(*(undefined8 *)(param_1 + 0x98));
    uVar8 = FUN_01321f40(*(undefined8 *)(param_1 + 0x90));
    if ((uVar8 & 1) != 0) goto LAB_013cd61c;
LAB_013cd5e8:
    local_78[0] = FUN_01363360(*(undefined8 *)(param_1 + 0x98));
    local_78[0] = local_78[0] & 1;
  }
  else {
    local_134 = 1;
    uVar8 = FUN_01321f40(*(undefined8 *)(param_1 + 0x90));
    if ((uVar8 & 1) == 0) goto LAB_013cd5e8;
LAB_013cd61c:
    local_78[0] = 1;
  }
  local_78[0] = *(long *)(param_1 + 0x88) + local_78[0];
  do {
    lVar6 = puVar10[0x6c];
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    local_120 = &LAB_013d3380;
    local_118 = FUN_013d3410;
    local_110 = &LAB_013d3420;
    puStack_108 = &LAB_013d3430;
    local_100 = &local_98;
    puStack_f8 = local_78;
    lVar11 = FUN_01323050(lVar6,&local_120);
    pcVar1 = local_118;
    if (local_118 != (code *)0x0) {
      local_110 = (undefined1 *)0x0;
      puStack_108 = (undefined1 *)0x0;
      local_120 = (undefined1 *)0x0;
      local_118 = (code *)0x0;
      (*pcVar1)(&local_100);
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
  } while (lVar11 != 0);
  iVar4 = FUN_0132bbb0(local_98,local_78[0]);
  uVar8 = FUN_01321f40(*(undefined8 *)(param_1 + 0x90));
  uVar7 = FUN_01321fb0(*(undefined8 *)(param_1 + 0x90));
  if (((iVar4 != 7) && ((uVar8 & 1) == 0)) && ((uVar7 & 1) != 0)) {
    lVar6 = FUN_0132bba0(local_98,0);
    lVar11 = FUN_0132bb20(local_98);
    local_78[0] = lVar11 + lVar6;
  }
  uVar7 = FUN_0132bb10(local_98);
  uVar8 = 0;
  if (uVar7 != 0) {
    uVar8 = local_78[0] / uVar7;
  }
  local_78[0] = local_78[0] - uVar8 * uVar7;
  if (local_78[0] == 0 && ((local_134 ^ 0xffffffff) & 1) == 0) {
    FUN_013cec60(param_1);
    local_78[0] = 0xffffffffffffffff;
  }
  lVar6 = 0;
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
    lVar6 = local_98;
  }
joined_r0x013cd780:
  local_98 = lVar6;
  if (local_78[0] == 0xffffffffffffffff) {
    uVar8 = 0xffffffff;
  }
  else {
    FUN_013cec60(param_1);
    *(ulong *)(param_1 + 0x88) = local_78[0];
    uVar8 = local_78[0];
  }
  FUN_013cd880(param_1,uVar8);
  FUN_013cf180(param_1,local_78[0] & 0xffffffff);
  uVar8 = FUN_01321f40(*(undefined8 *)(param_1 + 0x90));
  if (((uVar8 & 1) != 0) ||
     (uVar8 = FUN_01363360(*(undefined8 *)(param_1 + 0x98)), (uVar8 & 1) != 0)) {
    lVar11 = *(long *)(param_1 + 0x88);
    FUN_013a5170(&local_98);
    lVar6 = local_98;
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      local_98 = 0;
    }
    if (lVar11 == 0) {
      uVar9 = 2;
    }
    else {
      uVar9 = 1;
    }
    FUN_0130a7b0(lVar6,uVar9);
  }
  if (*(char *)(param_1 + 0x84) == '\0') {
    local_124[0] = 0;
    uVar8 = FUN_012d6270(2,local_124);
    if ((uVar8 & 1) != 0) {
      FUN_013cec60(param_1);
      FUN_013a5170(&local_98);
      lVar6 = local_98;
      if (local_98 != 0) {
        (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
        local_98 = 0;
      }
      FUN_0130a7b0(lVar6,0);
      *(byte *)(puVar10 + 0xc9) = local_124[0] ^ 1;
    }
  }
  return;
}


