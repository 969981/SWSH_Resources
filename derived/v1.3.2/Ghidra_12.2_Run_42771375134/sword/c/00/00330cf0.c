/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00330cf0; name: FUN_00330cf0
 */


int FUN_00330cf0(undefined8 *param_1,long *param_2,int param_3)

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
  local_48 = param_1[3];
  local_50 = param_1[2];
  uVar2 = *param_1;
  local_58 = param_1[1];
  local_60 = *param_1;
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
  FUN_003315b0(param_2,local_68);
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
  FUN_00330e90(param_2,param_1 + 4,param_3 + 1);
  FUN_00331020(param_2,param_1 + 8,param_3 + 2);
  FUN_003311b0(param_2,param_1 + 0xc,param_3 + 3);
  FUN_00331340(param_2,param_1 + 0x10,param_3 + 4);
  return param_3 + 5;
}


