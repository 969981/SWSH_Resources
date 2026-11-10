/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003496b0; name: FUN_003496b0
 */


int FUN_003496b0(long param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  uint7 uStack_37;
  
  local_68[0] = 0;
  local_64 = 0;
  local_48 = *(undefined8 *)(param_1 + 0x30);
  local_50 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  local_58 = *(undefined8 *)(param_1 + 0x20);
  local_60 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *param_2;
  puVar4 = (uint *)(lVar3 + 0x10);
  uVar5 = *puVar4;
  if (uVar5 != 0) {
    if (*(char *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_2[1] + 0x20))
                ((long *)param_2[1],
                 *(undefined8 *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - 1) * 0x10));
      lVar3 = *param_2;
      puVar4 = (uint *)(lVar3 + 0x10);
      uVar5 = *puVar4;
      *(undefined1 *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - 1) * 0x10 + 8) = 1;
    }
  }
  local_38 = 0;
  local_40 = uVar2;
  if (uVar5 < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 8) + (ulong)uVar5 * 0x10);
    puVar1[1] = (ulong)uStack_37 << 8;
    *puVar1 = uVar2;
    *puVar4 = *puVar4 + 1;
  }
  else {
    FUN_00327960(lVar3,&local_40);
  }
  FUN_0034a050(param_2,local_68);
  puVar4 = (uint *)(*param_2 + 0x10);
  if (*puVar4 != 0) {
    uVar5 = *puVar4 - 1;
    if (*(char *)(*(long *)(*param_2 + 8) + (ulong)uVar5 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_2[1] + 0x28))();
      puVar4 = (uint *)(*param_2 + 0x10);
      uVar5 = *puVar4 - 1;
    }
    *puVar4 = uVar5;
  }
  FUN_00349850(param_2,param_1 + 0x38,param_3 + 2);
  FUN_00349ac0(param_2,param_1 + 0x58,param_3 + 3);
  FUN_00349c50(param_2,param_1 + 0x78,param_3 + 4);
  FUN_00349de0(param_2,param_1 + 0x98,param_3 + 5);
  return param_3 + 8;
}


