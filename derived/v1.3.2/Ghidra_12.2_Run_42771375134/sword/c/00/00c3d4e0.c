/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c3d4e0; name: FUN_00c3d4e0
 */


void FUN_00c3d4e0(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  long *local_140;
  undefined4 local_138;
  long local_130;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  long *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  long local_b0;
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
      goto LAB_00c3d560;
    }
  }
  bVar1 = true;
LAB_00c3d560:
  local_d0 = (undefined1 *)0x0;
  puStack_c8 = (undefined1 *)0x0;
  local_b0 = lVar3;
  local_e0 = (undefined1 *)0x0;
  local_d8 = (code *)0x0;
  local_c0 = param_1;
  local_b8 = param_3;
  uStack_b4 = param_4;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_e0 = &LAB_00c3ed20;
  local_d8 = FUN_00c3eed0;
  local_d0 = &LAB_00c3f700;
  puStack_c8 = &LAB_00c3f730;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_140 = param_1;
  local_138 = param_4;
  local_130 = lVar6;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_160 = &LAB_00c3f760;
  local_158 = FUN_00c3f790;
  local_150 = &LAB_00c3f7d0;
  puStack_148 = &LAB_00c3f800;
  uVar4 = FUN_01268780(0,&local_e0,&local_160);
  pcVar2 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar2)(&local_140);
  }
  pcVar2 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (undefined1 *)0x0;
    puStack_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar2)(&local_c0);
  }
  puVar7 = *(undefined1 **)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (puVar7 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar7 + 0x48) + 0x10))();
  }
  local_e0 = puVar7;
  lVar5 = FUN_00fe2800(&local_e0);
  FUN_012ae720(*(undefined8 *)(lVar5 + 0x80));
  if (local_e0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = (undefined1 *)0x0;
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


