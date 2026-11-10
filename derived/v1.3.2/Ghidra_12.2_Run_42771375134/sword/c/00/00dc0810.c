/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc0810; name: FUN_00dc0810
 */


void FUN_00dc0810(long param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_1d0 [2];
  undefined *local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  code *local_1a8;
  code *local_1a0;
  undefined8 local_198;
  undefined1 auStack_190 [96];
  undefined8 local_130;
  code *local_128;
  code *local_120;
  undefined8 local_118;
  undefined1 auStack_110 [96];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined7 local_68;
  undefined1 uStack_61;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  
  puVar2 = PTR_DAT_027164d8;
  local_120 = (code *)0x0;
  local_118 = 0;
  local_130 = 0;
  local_128 = (code *)0x0;
  local_1a0 = (code *)0x0;
  local_198 = 0;
  local_1b0 = 0;
  local_1a8 = (code *)0x0;
  local_1c0 = PTR_DAT_027164d8 + 0x10;
  local_b0 = 0;
  local_90 = 0;
  local_1b8 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = *(undefined8 *)PTR_DAT_02715420;
  local_5c = 0;
  local_5a = 0;
  local_68 = (undefined7)*(undefined8 *)(PTR_DAT_02715420 + 8);
  uStack_61 = (undefined1)((ulong)*(undefined8 *)(PTR_DAT_02715420 + 8) >> 0x38);
  local_60 = 0xffffffff;
  local_1d0[0] = *param_2;
  local_a8 = *param_3;
  local_a0 = param_3[1];
  local_98 = param_3[2];
  lVar3 = param_3[3];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  puVar4 = *(undefined8 **)(param_1 + 0x460);
  local_90 = lVar3;
  local_60 = param_4;
  if (puVar4 == *(undefined8 **)(param_1 + 0x468)) {
    FUN_00dc2bf0(param_1 + 0x458,local_1d0);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x470);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *puVar4 = local_1d0[0];
    puVar4[2] = PTR_DAT_027164e0 + 0x10;
    puVar4[3] = local_1b8;
    if (local_1b8 != 0) {
      (**(code **)(*(long *)(local_1b8 + 0x48) + 0x10))();
    }
    puVar4[4] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[5] = 0;
    if (local_1a0 != (code *)0x0) {
      (*local_1a0)(auStack_190,puVar4 + 8);
      puVar4[7] = local_198;
      puVar4[5] = local_1a8;
      puVar4[6] = local_1a0;
      puVar4[4] = local_1b0;
    }
    puVar4[0x14] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x15] = 0;
    if (local_120 != (code *)0x0) {
      (*local_120)(auStack_110,puVar4 + 0x18);
      puVar4[0x17] = local_118;
      puVar4[0x15] = local_128;
      puVar4[0x16] = local_120;
      puVar4[0x14] = local_130;
    }
    puVar4[2] = puVar2 + 0x10;
    puVar4[0x24] = local_b0;
    puVar4[0x25] = local_a8;
    puVar4[0x26] = local_a0;
    puVar4[0x27] = local_98;
    puVar4[0x28] = local_90;
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
    }
    puVar4[0x2a] = local_80;
    *(ulong *)((long)puVar4 + 0x16f) =
         CONCAT17(local_5a,CONCAT25(local_5c,CONCAT41(local_60,uStack_61)));
    puVar4[0x2d] = CONCAT17(uStack_61,local_68);
    puVar4[0x2b] = local_78;
    puVar4[0x2c] = local_70;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    *(long *)(param_1 + 0x460) = *(long *)(param_1 + 0x460) + 0x180;
  }
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  local_1c0 = PTR_DAT_027164e0 + 0x10;
  if (local_1b8 == 0) {
    local_1b8 = 0;
    pcVar1 = local_128;
  }
  else {
    FUN_006e2100(local_1b8,&local_1c0);
    lVar3 = local_1b8;
    local_1b8 = 0;
    pcVar1 = local_128;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      pcVar1 = local_128;
    }
  }
  local_128 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_120 = (code *)0x0;
    local_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    (*pcVar1)(auStack_110);
  }
  pcVar1 = local_1a8;
  if (local_1a8 != (code *)0x0) {
    local_1a0 = (code *)0x0;
    local_198 = 0;
    local_1b0 = 0;
    local_1a8 = (code *)0x0;
    (*pcVar1)(auStack_190);
  }
  if (local_1b8 != 0) {
    (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
  }
  return;
}


