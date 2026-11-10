/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c333e0; name: FUN_00c333e0
 */


void FUN_00c333e0(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  long *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  long local_140;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  long local_b8;
  long local_70 [2];
  
  (**(code **)(*param_1 + 0x10))(local_70);
  lVar3 = local_70[0];
  if (local_70[0] == 0) {
    lVar5 = 0;
  }
  else {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
    lVar5 = local_70[0];
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
      bVar1 = false;
      goto LAB_00c33468;
    }
  }
  bVar1 = true;
LAB_00c33468:
  local_e0 = (undefined1 *)0x0;
  local_d8 = (undefined1 *)0x0;
  local_b8 = lVar3;
  local_f0 = (undefined1 *)0x0;
  local_e8 = (code *)0x0;
  local_d0 = param_1;
  local_c8 = param_3;
  uStack_c4 = param_5;
  local_c0 = param_4;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_f0 = &LAB_00c34ee0;
  local_e8 = FUN_00c35060;
  local_e0 = &LAB_00c350a0;
  local_d8 = &LAB_00c350d0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_150 = param_1;
  local_148 = param_5;
  uStack_144 = param_4;
  local_140 = lVar5;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_170 = &LAB_00c35100;
  local_168 = FUN_00c35140;
  local_160 = &LAB_00c35180;
  puStack_158 = &LAB_00c351b0;
  uVar4 = FUN_0122cc90(param_6,&local_f0,&local_170);
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
    local_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar2)(&local_d0);
  }
  if ((uVar4 & 1) == 0) {
    param_2 = param_5;
  }
  *(undefined4 *)(param_1 + 0x11) = param_2;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  return;
}


