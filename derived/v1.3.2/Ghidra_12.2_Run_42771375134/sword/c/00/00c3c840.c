/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c3c840; name: FUN_00c3c840
 */


void FUN_00c3c840(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  long *local_150;
  undefined4 local_148;
  long local_140;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  long *local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  long local_b8;
  long local_70 [2];
  
  (**(code **)(*param_1 + 0x10))(local_70);
  lVar3 = local_70[0];
  if (local_70[0] == 0) {
    lVar6 = 0;
  }
  else {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
    lVar6 = local_70[0];
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
      bVar1 = false;
      goto LAB_00c3c8c8;
    }
  }
  bVar1 = true;
LAB_00c3c8c8:
  local_e0 = (undefined1 *)0x0;
  puStack_d8 = (undefined1 *)0x0;
  local_b8 = lVar3;
  local_f0 = (undefined1 *)0x0;
  local_e8 = (code *)0x0;
  local_d0 = param_1;
  uStack_c8 = param_6;
  local_c0 = param_3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_f0 = &LAB_00c3eb20;
  local_e8 = FUN_00c3ebb0;
  local_e0 = &LAB_00c3ebf0;
  puStack_d8 = &LAB_00c3ec20;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_150 = param_1;
  local_148 = param_4;
  local_140 = lVar6;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_170 = &LAB_00c3ec50;
  local_168 = FUN_00c3ec80;
  local_160 = &LAB_00c3ecc0;
  puStack_158 = &LAB_00c3ecf0;
  uVar4 = FUN_0122cc90(param_5,&local_f0,&local_170);
  pcVar2 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar2)(&local_150);
  }
  pcVar2 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar2)(&local_d0);
  }
  puVar7 = *(undefined1 **)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (puVar7 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar7 + 0x48) + 0x10))();
  }
  local_f0 = puVar7;
  lVar5 = FUN_00fe2800(&local_f0);
  FUN_012ae720(*(undefined8 *)(lVar5 + 0x80));
  if (local_f0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
    local_f0 = (undefined1 *)0x0;
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
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  return;
}


