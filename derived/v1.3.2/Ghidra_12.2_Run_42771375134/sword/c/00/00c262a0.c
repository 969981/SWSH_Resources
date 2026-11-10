/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c262a0; name: FUN_00c262a0
 */


void FUN_00c262a0(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  long *local_160;
  undefined4 local_158;
  long local_150;
  undefined1 *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  long *local_e0;
  undefined4 local_d8;
  long local_d0;
  undefined4 local_78 [2];
  long *local_70;
  undefined8 uStack_68;
  long local_58;
  
  local_70 = param_1 + 0x15;
  *(undefined1 *)local_70 = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  local_78[0] = 0;
  uStack_68 = 0x10;
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
      goto LAB_00c26340;
    }
  }
  bVar1 = true;
LAB_00c26340:
  local_f0 = (undefined1 *)0x0;
  puStack_e8 = (undefined1 *)0x0;
  local_d0 = lVar3;
  local_100 = (undefined1 *)0x0;
  local_f8 = (code *)0x0;
  local_e0 = param_1;
  local_d8 = param_3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_100 = &LAB_00c28f20;
  local_f8 = FUN_00c29050;
  local_f0 = &LAB_00c29090;
  puStack_e8 = &LAB_00c290c0;
  local_170 = (undefined1 *)0x0;
  puStack_168 = (undefined1 *)0x0;
  local_180 = (undefined1 *)0x0;
  local_178 = (code *)0x0;
  local_160 = param_1;
  local_158 = param_4;
  local_150 = lVar6;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_180 = &LAB_00c290f0;
  local_178 = FUN_00c29120;
  local_170 = &LAB_00c29160;
  puStack_168 = &LAB_00c29190;
  uVar4 = FUN_01299050(1,local_78,&local_100,&local_180);
  pcVar2 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (undefined1 *)0x0;
    puStack_168 = (undefined1 *)0x0;
    local_180 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar2)(&local_160);
  }
  pcVar2 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined1 *)0x0;
    puStack_e8 = (undefined1 *)0x0;
    local_100 = (undefined1 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar2)(&local_e0);
  }
  puVar7 = *(undefined1 **)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (puVar7 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar7 + 0x48) + 0x10))();
  }
  local_100 = puVar7;
  lVar5 = FUN_00fe2800(&local_100);
  FUN_012ae720(*(undefined8 *)(lVar5 + 0x80));
  if (local_100 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
    local_100 = (undefined1 *)0x0;
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


