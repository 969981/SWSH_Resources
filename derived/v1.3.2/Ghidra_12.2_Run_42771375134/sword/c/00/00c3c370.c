/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c3c370; name: FUN_00c3c370
 */


void FUN_00c3c370(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *local_1a0;
  code *local_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  long *local_180;
  undefined4 local_178;
  long local_170;
  undefined1 *local_120;
  code *local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  long *local_100;
  undefined4 local_f8;
  long local_f0;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 local_94;
  undefined1 local_8c;
  undefined1 local_84;
  undefined1 local_7c;
  undefined1 local_74;
  undefined8 local_6c;
  long local_58;
  
  (**(code **)(*param_1 + 0x10))(&local_58);
  lVar3 = local_58;
  if (local_58 == 0) {
    lVar6 = 0;
  }
  else {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    lVar6 = local_58;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
      bVar1 = false;
      goto LAB_00c3c3f0;
    }
  }
  bVar1 = true;
LAB_00c3c3f0:
  local_6c = 0xa00000000;
  local_9c = 0;
  local_94 = 0;
  local_8c = 0;
  local_84 = 0;
  local_7c = 0;
  local_74 = 0;
  local_a0 = 3;
  local_f0 = lVar3;
  local_110 = (undefined1 *)0x0;
  puStack_108 = (undefined1 *)0x0;
  local_120 = (undefined1 *)0x0;
  local_118 = (code *)0x0;
  local_100 = param_1;
  local_f8 = param_3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_120 = &LAB_00c3e890;
  local_118 = FUN_00c3e9b0;
  local_110 = &LAB_00c3e9f0;
  puStack_108 = &LAB_00c3ea20;
  local_190 = (undefined1 *)0x0;
  puStack_188 = (undefined1 *)0x0;
  local_1a0 = (undefined1 *)0x0;
  local_198 = (code *)0x0;
  local_180 = param_1;
  local_178 = param_4;
  local_170 = lVar6;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_1a0 = &LAB_00c3ea50;
  local_198 = FUN_00c3ea80;
  local_190 = &LAB_00c3eac0;
  puStack_188 = &LAB_00c3eaf0;
  uVar4 = FUN_0122c390(&local_a0,&local_120,&local_1a0);
  pcVar2 = local_198;
  if (local_198 != (code *)0x0) {
    local_190 = (undefined1 *)0x0;
    puStack_188 = (undefined1 *)0x0;
    local_1a0 = (undefined1 *)0x0;
    local_198 = (code *)0x0;
    (*pcVar2)(&local_180);
  }
  pcVar2 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = (undefined1 *)0x0;
    puStack_108 = (undefined1 *)0x0;
    local_120 = (undefined1 *)0x0;
    local_118 = (code *)0x0;
    (*pcVar2)(&local_100);
  }
  puVar7 = *(undefined1 **)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (puVar7 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar7 + 0x48) + 0x10))();
  }
  local_120 = puVar7;
  lVar5 = FUN_00fe2800(&local_120);
  FUN_012ae720(*(undefined8 *)(lVar5 + 0x80));
  if (local_120 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
    local_120 = (undefined1 *)0x0;
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
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


