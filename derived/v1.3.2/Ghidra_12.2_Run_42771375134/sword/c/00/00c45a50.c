/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c45a50; name: FUN_00c45a50
 */


void FUN_00c45a50(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *local_9c0;
  code *local_9b8;
  undefined1 *local_9b0;
  undefined1 *puStack_9a8;
  long *local_9a0;
  undefined4 local_998;
  long local_990;
  undefined1 *local_940;
  code *local_938;
  undefined1 *local_930;
  undefined1 *puStack_928;
  long *local_920;
  undefined4 local_918;
  long local_910;
  long local_8c0;
  int local_8b8 [530];
  long local_70;
  
  FUN_00c1d960();
  FUN_00bd9f00(local_8b8);
  if ((local_8b8[0] == 0) || (local_70 != 0x644)) {
    *(undefined4 *)(param_1 + 0x13) = param_4;
    return;
  }
  (**(code **)(*param_1 + 0x10))(&local_8c0,param_1);
  lVar3 = local_8c0;
  if (local_8c0 == 0) {
    lVar6 = 0;
  }
  else {
    (**(code **)(*(long *)(local_8c0 + 0x48) + 0x10))();
    lVar6 = local_8c0;
    if (local_8c0 != 0) {
      (**(code **)(*(long *)(local_8c0 + 0x48) + 0x10))();
      bVar1 = false;
      goto LAB_00c45afc;
    }
  }
  bVar1 = true;
LAB_00c45afc:
  local_930 = (undefined1 *)0x0;
  puStack_928 = (undefined1 *)0x0;
  local_940 = (undefined1 *)0x0;
  local_938 = (code *)0x0;
  local_910 = lVar3;
  local_920 = param_1;
  local_918 = param_3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_940 = &LAB_00c46bb0;
  local_938 = FUN_00c46cf0;
  local_930 = &LAB_00c46d30;
  puStack_928 = &LAB_00c46d60;
  local_9b0 = (undefined1 *)0x0;
  puStack_9a8 = (undefined1 *)0x0;
  local_9c0 = (undefined1 *)0x0;
  local_9b8 = (code *)0x0;
  local_9a0 = param_1;
  local_998 = param_4;
  local_990 = lVar6;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_9c0 = &LAB_00c46d90;
  local_9b8 = FUN_00c46dc0;
  local_9b0 = &LAB_00c46e00;
  puStack_9a8 = &LAB_00c46e30;
  uVar4 = FUN_0122e2b0(local_8b8[0],&local_940,&local_9c0);
  pcVar2 = local_9b8;
  if (local_9b8 != (code *)0x0) {
    local_9b0 = (undefined1 *)0x0;
    puStack_9a8 = (undefined1 *)0x0;
    local_9c0 = (undefined1 *)0x0;
    local_9b8 = (code *)0x0;
    (*pcVar2)(&local_9a0);
  }
  pcVar2 = local_938;
  if (local_938 != (code *)0x0) {
    local_930 = (undefined1 *)0x0;
    puStack_928 = (undefined1 *)0x0;
    local_940 = (undefined1 *)0x0;
    local_938 = (code *)0x0;
    (*pcVar2)(&local_920);
  }
  puVar7 = *(undefined1 **)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (puVar7 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar7 + 0x48) + 0x10))();
  }
  local_940 = puVar7;
  lVar5 = FUN_00fe2800(&local_940);
  FUN_012ae720(*(undefined8 *)(lVar5 + 0x80));
  if (local_940 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_940 + 0x48) + 0x18))();
    local_940 = (undefined1 *)0x0;
  }
  if ((uVar4 & 1) == 0) {
    param_2 = param_4;
  }
  *(undefined4 *)(param_1 + 0x13) = param_2;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (local_8c0 != 0) {
    (**(code **)(*(long *)(local_8c0 + 0x48) + 0x18))();
  }
  return;
}


