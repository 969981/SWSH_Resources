/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c41d60; name: FUN_00c41d60
 */


void FUN_00c41d60(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
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
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  long lStack_b0;
  long local_70 [2];
  
  if ((char)param_1[0x15] == '\0') {
    *(undefined4 *)(param_1 + 0x11) = param_4;
    return;
  }
  uVar1 = (undefined4)param_1[0x16];
  (**(code **)(*param_1 + 0x10))(local_70,param_1);
  lVar4 = local_70[0];
  if (local_70[0] == 0) {
    lVar6 = 0;
  }
  else {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
    lVar6 = local_70[0];
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
      bVar2 = false;
      goto LAB_00c41dfc;
    }
  }
  bVar2 = true;
LAB_00c41dfc:
  local_e0 = (undefined1 *)0x0;
  puStack_d8 = (undefined1 *)0x0;
  local_f0 = (undefined1 *)0x0;
  local_e8 = (code *)0x0;
  lStack_b0 = lVar4;
  local_d0 = param_1;
  local_c8 = param_3;
  uStack_c4 = param_4;
  local_c0 = uVar1;
  local_b8 = param_5;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_f0 = &LAB_00c43fb0;
  local_e8 = FUN_00c441f0;
  local_e0 = &LAB_00c44230;
  puStack_d8 = &LAB_00c44260;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_150 = param_1;
  local_148 = param_4;
  local_140 = lVar6;
  if (!bVar2) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_170 = &LAB_00c44290;
  local_168 = FUN_00c442c0;
  local_160 = &LAB_00c44300;
  puStack_158 = &LAB_00c44330;
  uVar5 = FUN_0122e2b0(uVar1,&local_f0,&local_170);
  pcVar3 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar3)(&local_150);
  }
  pcVar3 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar3)(&local_d0);
  }
  if ((uVar5 & 1) == 0) {
    param_2 = param_4;
  }
  *(undefined4 *)(param_1 + 0x11) = param_2;
  if (!bVar2) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  return;
}


