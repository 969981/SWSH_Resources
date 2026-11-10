/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c45cb0; name: FUN_00c45cb0
 */


void FUN_00c45cb0(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
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
  if (((local_8b8[0] == 0) || (local_70 != 0x644)) ||
     (lVar4 = FUN_007ad1c0(*(undefined8 *)PTR_DAT_02716748), lVar4 == 0)) {
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
      goto LAB_00c45d90;
    }
  }
  bVar1 = true;
LAB_00c45d90:
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  local_930 = (undefined1 *)0x0;
  puStack_928 = (undefined1 *)0x0;
  local_910 = lVar3;
  local_940 = (undefined1 *)0x0;
  local_938 = (code *)0x0;
  local_920 = param_1;
  local_918 = param_3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_940 = &LAB_00c46a00;
  local_938 = FUN_00c46a40;
  local_930 = &LAB_00c46a80;
  puStack_928 = &LAB_00c46ab0;
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
  local_9c0 = &LAB_00c46ae0;
  local_9b8 = FUN_00c46b10;
  local_9b0 = &LAB_00c46b50;
  puStack_9a8 = &LAB_00c46b80;
  uVar5 = FUN_01230520(local_8b8[0],uVar7,&local_940,&local_9c0);
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
  puVar8 = *(undefined1 **)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (puVar8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar8 + 0x48) + 0x10))();
  }
  local_940 = puVar8;
  lVar4 = FUN_00fe2800(&local_940);
  FUN_012ae720(*(undefined8 *)(lVar4 + 0x80));
  if (local_940 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_940 + 0x48) + 0x18))();
    local_940 = (undefined1 *)0x0;
  }
  if ((uVar5 & 1) == 0) {
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


