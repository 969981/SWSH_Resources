/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0037b2a0; name: FUN_0037b2a0
 */


int FUN_0037b2a0(long param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  uint7 uStack_37;
  
  FUN_0037bd40(param_2,param_1);
  local_68[0] = 0;
  FUN_0037c1d0(param_2,param_3 + 1,param_1 + 0x30,&PTR_s_eACTOR0_025e7b30,local_68);
  FUN_0037c580(param_2,param_1 + 0x98,param_3 + 5);
  FUN_0037b490(param_2,param_1 + 200,param_3 + 6);
  FUN_0037b700(param_2,param_1 + 0xe8,param_3 + 7);
  FUN_0037b890(param_2,param_1 + 0x108,param_3 + 8);
  FUN_0037ba20(param_2,param_1 + 0x128,param_3 + 9);
  FUN_0037bbb0(param_2,param_1 + 0x148,param_3 + 10);
  local_68[0] = 0;
  local_64 = 0;
  local_48 = *(undefined8 *)(param_1 + 0x198);
  local_50 = *(undefined8 *)(param_1 + 400);
  local_58 = *(undefined8 *)(param_1 + 0x188);
  local_60 = *(undefined8 *)(param_1 + 0x180);
  lVar2 = *param_2;
  local_40 = *(undefined8 *)(param_1 + 0x180);
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
  FUN_0037ce20(param_2,local_68);
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
  return param_3 + 0xf;
}


