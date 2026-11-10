/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bed5f0; name: FUN_00bed5f0
 */


void FUN_00bed5f0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long local_38;
  long local_28;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *param_3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_28 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_38 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_00ff5fc0(param_1,&local_28,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  puVar2 = PTR_DAT_0271b9c0;
  puVar1 = PTR_DAT_0271b9c0 + 0x10;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = (long)puVar1;
  param_1[9] = (long)(puVar2 + 0x78);
  param_1[10] = (long)(puVar2 + 0xb8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  *(undefined4 *)((long)param_1 + 0xa4) = 0;
  puVar1 = PTR_DAT_0271ba10;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x78);
  param_1[10] = (long)(puVar1 + 0xb8);
  *(undefined8 *)((long)param_1 + 0xdc) = 0x100000000;
  *(undefined4 *)((long)param_1 + 0xe4) = 1;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((long)param_1 + 0x95) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x22c) = 0;
  *(undefined1 *)(param_1 + 0x337) = 0;
  *(undefined1 *)(param_1 + 0x442) = 0;
  *(undefined1 *)(param_1 + 0x54d) = 0;
  *(undefined1 *)(param_1 + 0x55c) = 0;
  *(undefined1 *)(param_1 + 0x55e) = 0;
  *(undefined1 *)(param_1 + 0x56d) = 0;
  *(undefined2 *)(param_1 + 0x56f) = 0;
  *(undefined1 *)((long)param_1 + 0x2b7c) = 0;
  *(undefined1 *)((long)param_1 + 0x2b84) = 0;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x1d,0,0x821);
}


