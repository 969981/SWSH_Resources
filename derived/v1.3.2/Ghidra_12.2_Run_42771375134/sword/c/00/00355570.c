/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00355570; name: FUN_00355570
 */


int FUN_00355570(long param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  uint7 uStack_37;
  
  FUN_00356d00(param_2,param_1 + 0x150);
  FUN_00356e90(param_2,param_1 + 0x170,param_3 + 1);
  local_68[0] = 0;
  local_64 = 0;
  local_48 = *(undefined8 *)(param_1 + 0x1c0);
  local_50 = *(undefined8 *)(param_1 + 0x1b8);
  local_40 = *(undefined8 *)(param_1 + 0x1a8);
  local_58 = *(undefined8 *)(param_1 + 0x1b0);
  local_60 = *(undefined8 *)(param_1 + 0x1a8);
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
  local_38 = 0;
  if (uVar4 < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10);
    puVar1[1] = (ulong)uStack_37 << 8;
    *puVar1 = local_40;
    *puVar3 = *puVar3 + 1;
  }
  else {
    FUN_00327960(lVar2,&local_40);
  }
  FUN_00357950(param_2,local_68);
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
  local_68[0] = 0;
  local_64 = 0;
  local_48 = *(undefined8 *)(param_1 + 0x1f8);
  local_50 = *(undefined8 *)(param_1 + 0x1f0);
  uVar5 = *(undefined8 *)(param_1 + 0x1e0);
  local_58 = *(undefined8 *)(param_1 + 0x1e8);
  local_60 = *(undefined8 *)(param_1 + 0x1e0);
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
  local_38 = 0;
  local_40 = uVar5;
  if (uVar4 < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10);
    puVar1[1] = (ulong)uStack_37 << 8;
    *puVar1 = uVar5;
    *puVar3 = *puVar3 + 1;
  }
  else {
    FUN_00327960(lVar2,&local_40);
  }
  FUN_00357a50(param_2,local_68);
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
  local_68[0] = 0;
  local_64 = 0;
  local_48 = *(undefined8 *)(param_1 + 0x218);
  local_50 = *(undefined8 *)(param_1 + 0x210);
  local_58 = *(undefined8 *)(param_1 + 0x208);
  local_60 = *(undefined8 *)(param_1 + 0x200);
  uVar5 = *(undefined8 *)(param_1 + 0x200);
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
  local_38 = 0;
  local_40 = uVar5;
  if (uVar4 < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 8) + (ulong)uVar4 * 0x10);
    puVar1[1] = (ulong)uStack_37 << 8;
    *puVar1 = uVar5;
    *puVar3 = *puVar3 + 1;
  }
  else {
    FUN_00327960(lVar2,&local_40);
  }
  FUN_00357b50(param_2,local_68);
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
  FUN_00357020(param_2,param_1 + 0x220,param_3 + 7);
  FUN_00357290(param_2,param_1 + 0x240,param_3 + 8);
  FUN_00357420(param_2,param_1 + 0x260,param_3 + 9);
  FUN_003575b0(param_2,param_1 + 0x280,param_3 + 10);
  return param_3 + 0xb;
}


