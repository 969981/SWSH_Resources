/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00336af0; name: FUN_00336af0
 */


void FUN_00336af0(long param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 local_d0 [4];
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_50;
  undefined1 local_48;
  uint7 uStack_47;
  
  FUN_00338470(param_2,param_1 + 0x108,param_3 + 1);
  FUN_003386e0(param_2,param_1 + 0x140,param_3 + 3);
  FUN_00338870(param_2,param_1 + 0x160,param_3 + 4);
  FUN_00338a00(param_2,param_1 + 0x198,param_3 + 6);
  local_d0[0] = 0;
  local_cc = 0;
  local_b0 = *(undefined8 *)(param_1 + 0x1d0);
  local_b8 = *(undefined8 *)(param_1 + 0x1c8);
  local_50 = *(undefined8 *)(param_1 + 0x1b8);
  local_c0 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = *(undefined8 *)(param_1 + 0x1b8);
  lVar2 = *param_2;
  puVar3 = (uint *)(lVar2 + 0x10);
  uVar4 = *puVar3;
  if (uVar4 != 0) {
    if (*(char *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_2[1] + 0x20))
                ((long *)param_2[1],
                 *(undefined8 *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10));
      lVar2 = *param_2;
      puVar3 = (uint *)(lVar2 + 0x10);
      uVar4 = *puVar3;
      *(undefined1 *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) = 1;
    }
  }
  local_48 = 0;
  if (uVar4 < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10);
    puVar1[1] = (ulong)uStack_47 << 8;
    *puVar1 = local_50;
    *puVar3 = *puVar3 + 1;
  }
  else {
    FUN_00327960(lVar2,&local_50);
  }
  FUN_0033a010(param_2,local_d0);
  lVar2 = *param_2;
  puVar3 = (uint *)(lVar2 + 0x10);
  if (*puVar3 != 0) {
    uVar4 = *puVar3 - 1;
    if (*(char *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_2[1] + 0x28))();
      lVar2 = *param_2;
      puVar3 = (uint *)(lVar2 + 0x10);
      uVar4 = *puVar3 - 1;
    }
    *(uint *)(lVar2 + 0x10) = uVar4;
  }
  local_d0[0] = 0;
  local_cc = 0;
  local_b0 = *(undefined8 *)(param_1 + 0x1f0);
  local_b8 = *(undefined8 *)(param_1 + 0x1e8);
  uVar5 = *(undefined8 *)(param_1 + 0x1d8);
  local_c0 = *(undefined8 *)(param_1 + 0x1e0);
  local_c8 = *(undefined8 *)(param_1 + 0x1d8);
  uVar4 = *puVar3;
  if (uVar4 != 0) {
    if (*(char *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_2[1] + 0x20))
                ((long *)param_2[1],
                 *(undefined8 *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10));
      lVar2 = *param_2;
      puVar3 = (uint *)(lVar2 + 0x10);
      uVar4 = *puVar3;
      *(undefined1 *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) = 1;
    }
  }
  local_48 = 0;
  local_50 = uVar5;
  if (uVar4 < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10);
    puVar1[1] = (ulong)uStack_47 << 8;
    *puVar1 = uVar5;
    *puVar3 = *puVar3 + 1;
  }
  else {
    FUN_00327960(lVar2,&local_50);
  }
  FUN_0033a110(param_2,local_d0);
  lVar2 = *param_2;
  puVar3 = (uint *)(lVar2 + 0x10);
  if (*puVar3 != 0) {
    uVar4 = *puVar3 - 1;
    if (*(char *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_2[1] + 0x28))();
      lVar2 = *param_2;
      puVar3 = (uint *)(lVar2 + 0x10);
      uVar4 = *puVar3 - 1;
    }
    *(uint *)(lVar2 + 0x10) = uVar4;
  }
  local_d0[0] = 0;
  local_cc = 0;
  local_b0 = *(undefined8 *)(param_1 + 0x210);
  local_b8 = *(undefined8 *)(param_1 + 0x208);
  uVar5 = *(undefined8 *)(param_1 + 0x1f8);
  local_c0 = *(undefined8 *)(param_1 + 0x200);
  local_c8 = *(undefined8 *)(param_1 + 0x1f8);
  uVar4 = *puVar3;
  if (uVar4 != 0) {
    if (*(char *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_2[1] + 0x20))
                ((long *)param_2[1],
                 *(undefined8 *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10));
      lVar2 = *param_2;
      puVar3 = (uint *)(lVar2 + 0x10);
      uVar4 = *puVar3;
      *(undefined1 *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) = 1;
    }
  }
  local_48 = 0;
  local_50 = uVar5;
  if (uVar4 < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10);
    puVar1[1] = (ulong)uStack_47 << 8;
    *puVar1 = uVar5;
    *puVar3 = *puVar3 + 1;
  }
  else {
    FUN_00327960(lVar2,&local_50);
  }
  FUN_0033a210(param_2,local_d0);
  lVar2 = *param_2;
  puVar3 = (uint *)(lVar2 + 0x10);
  if (*puVar3 != 0) {
    uVar4 = *puVar3 - 1;
    if (*(char *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_2[1] + 0x28))();
      lVar2 = *param_2;
      puVar3 = (uint *)(lVar2 + 0x10);
      uVar4 = *puVar3 - 1;
    }
    *(uint *)(lVar2 + 0x10) = uVar4;
  }
  local_d0[0] = 0;
  local_cc = 0;
  local_b0 = *(undefined8 *)(param_1 + 0x248);
  local_b8 = *(undefined8 *)(param_1 + 0x240);
  local_c0 = *(undefined8 *)(param_1 + 0x238);
  local_c8 = *(undefined8 *)(param_1 + 0x230);
  uVar5 = *(undefined8 *)(param_1 + 0x230);
  uVar4 = *puVar3;
  if (uVar4 != 0) {
    if (*(char *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_2[1] + 0x20))
                ((long *)param_2[1],
                 *(undefined8 *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10));
      lVar2 = *param_2;
      puVar3 = (uint *)(lVar2 + 0x10);
      uVar4 = *puVar3;
      *(undefined1 *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) = 1;
    }
  }
  local_48 = 0;
  local_50 = uVar5;
  if (uVar4 < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10);
    puVar1[1] = (ulong)uStack_47 << 8;
    *puVar1 = uVar5;
    *puVar3 = *puVar3 + 1;
  }
  else {
    FUN_00327960(lVar2,&local_50);
  }
  FUN_0033a310(param_2,local_d0);
  lVar2 = *param_2;
  puVar3 = (uint *)(lVar2 + 0x10);
  if (*puVar3 != 0) {
    uVar4 = *puVar3 - 1;
    if (*(char *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_2[1] + 0x28))();
      lVar2 = *param_2;
      puVar3 = (uint *)(lVar2 + 0x10);
      uVar4 = *puVar3 - 1;
    }
    *(uint *)(lVar2 + 0x10) = uVar4;
  }
  local_d0[0] = 0;
  local_cc = 0;
  local_b0 = *(undefined8 *)(param_1 + 0x268);
  local_b8 = *(undefined8 *)(param_1 + 0x260);
  local_c0 = *(undefined8 *)(param_1 + 600);
  local_c8 = *(undefined8 *)(param_1 + 0x250);
  uVar5 = *(undefined8 *)(param_1 + 0x250);
  uVar4 = *puVar3;
  if (uVar4 != 0) {
    if (*(char *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_2[1] + 0x20))
                ((long *)param_2[1],
                 *(undefined8 *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10));
      lVar2 = *param_2;
      puVar3 = (uint *)(lVar2 + 0x10);
      uVar4 = *puVar3;
      *(undefined1 *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) = 1;
    }
  }
  local_48 = 0;
  local_50 = uVar5;
  if (uVar4 < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10);
    puVar1[1] = (ulong)uStack_47 << 8;
    *puVar1 = uVar5;
    *puVar3 = *puVar3 + 1;
  }
  else {
    FUN_00327960(lVar2,&local_50);
  }
  FUN_0033a410(param_2,local_d0);
  lVar2 = *param_2;
  puVar3 = (uint *)(lVar2 + 0x10);
  if (*puVar3 != 0) {
    uVar4 = *puVar3 - 1;
    if (*(char *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_2[1] + 0x28))();
      lVar2 = *param_2;
      puVar3 = (uint *)(lVar2 + 0x10);
      uVar4 = *puVar3 - 1;
    }
    *(uint *)(lVar2 + 0x10) = uVar4;
  }
  local_d0[0] = 0;
  local_cc = 0;
  local_b0 = *(undefined8 *)(param_1 + 0x288);
  local_b8 = *(undefined8 *)(param_1 + 0x280);
  local_c0 = *(undefined8 *)(param_1 + 0x278);
  local_c8 = *(undefined8 *)(param_1 + 0x270);
  uVar5 = *(undefined8 *)(param_1 + 0x270);
  uVar4 = *puVar3;
  if (uVar4 != 0) {
    if (*(char *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_2[1] + 0x20))
                ((long *)param_2[1],
                 *(undefined8 *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10));
      lVar2 = *param_2;
      puVar3 = (uint *)(lVar2 + 0x10);
      uVar4 = *puVar3;
      *(undefined1 *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) = 1;
    }
  }
  local_48 = 0;
  local_50 = uVar5;
  if (uVar4 < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10);
    puVar1[1] = (ulong)uStack_47 << 8;
    *puVar1 = uVar5;
    *puVar3 = *puVar3 + 1;
  }
  else {
    FUN_00327960(lVar2,&local_50);
  }
  FUN_0033a510(param_2,local_d0);
  lVar2 = *param_2;
  puVar3 = (uint *)(lVar2 + 0x10);
  if (*puVar3 != 0) {
    uVar4 = *puVar3 - 1;
    if (*(char *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_2[1] + 0x28))();
      lVar2 = *param_2;
      puVar3 = (uint *)(lVar2 + 0x10);
      uVar4 = *puVar3 - 1;
    }
    *(uint *)(lVar2 + 0x10) = uVar4;
  }
  local_d0[0] = 0;
  local_cc = 0;
  local_b0 = *(undefined8 *)(param_1 + 0x2c0);
  local_b8 = *(undefined8 *)(param_1 + 0x2b8);
  local_c0 = *(undefined8 *)(param_1 + 0x2b0);
  local_c8 = *(undefined8 *)(param_1 + 0x2a8);
  uVar5 = *(undefined8 *)(param_1 + 0x2a8);
  uVar4 = *puVar3;
  if (uVar4 != 0) {
    if (*(char *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_2[1] + 0x20))
                ((long *)param_2[1],
                 *(undefined8 *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10));
      lVar2 = *param_2;
      puVar3 = (uint *)(lVar2 + 0x10);
      uVar4 = *puVar3;
      *(undefined1 *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) = 1;
    }
  }
  local_48 = 0;
  local_50 = uVar5;
  if (uVar4 < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10);
    puVar1[1] = (ulong)uStack_47 << 8;
    *puVar1 = uVar5;
    *puVar3 = *puVar3 + 1;
  }
  else {
    FUN_00327960(lVar2,&local_50);
  }
  FUN_0033a610(param_2,local_d0);
  lVar2 = *param_2;
  puVar3 = (uint *)(lVar2 + 0x10);
  if (*puVar3 != 0) {
    uVar4 = *puVar3 - 1;
    if (*(char *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_2[1] + 0x28))();
      lVar2 = *param_2;
      puVar3 = (uint *)(lVar2 + 0x10);
      uVar4 = *puVar3 - 1;
    }
    *(uint *)(lVar2 + 0x10) = uVar4;
  }
  local_d0[0] = 0;
  local_cc = 0;
  local_b0 = *(undefined8 *)(param_1 + 0x2e0);
  local_b8 = *(undefined8 *)(param_1 + 0x2d8);
  local_c0 = *(undefined8 *)(param_1 + 0x2d0);
  local_c8 = *(undefined8 *)(param_1 + 0x2c8);
  uVar5 = *(undefined8 *)(param_1 + 0x2c8);
  uVar4 = *puVar3;
  if (uVar4 != 0) {
    if (*(char *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_2[1] + 0x20))
                ((long *)param_2[1],
                 *(undefined8 *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10));
      lVar2 = *param_2;
      puVar3 = (uint *)(lVar2 + 0x10);
      uVar4 = *puVar3;
      *(undefined1 *)(*(long *)(lVar2 + 8) + (ulong)(uVar4 - 1) * 0x10 + 8) = 1;
    }
  }
  local_48 = 0;
  local_50 = uVar5;
  if (uVar4 < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10);
    puVar1[1] = (ulong)uStack_47 << 8;
    *puVar1 = uVar5;
    *puVar3 = *puVar3 + 1;
  }
  else {
    FUN_00327960(lVar2,&local_50);
  }
  FUN_0033a710(param_2,local_d0);
  puVar3 = (uint *)(*param_2 + 0x10);
  if (*puVar3 != 0) {
    uVar4 = *puVar3 - 1;
    if (*(char *)(*(long *)(*param_2 + 8) + (ulong)uVar4 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_2[1] + 0x28))();
      puVar3 = (uint *)(*param_2 + 0x10);
      uVar4 = *puVar3 - 1;
    }
    *puVar3 = uVar4;
  }
  FUN_00338b90(param_2,param_1 + 0x2e8,param_3 + 0x11);
  FUN_00338d20(param_2,param_1 + 0x308,param_3 + 0x12);
  FUN_00338eb0(param_2,param_1 + 0x328,param_3 + 0x13);
                    /* WARNING: Subroutine does not return */
  memset(local_d0,0,0x80);
}


