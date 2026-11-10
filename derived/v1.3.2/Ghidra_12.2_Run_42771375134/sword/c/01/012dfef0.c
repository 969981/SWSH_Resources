/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012dfef0; name: FUN_012dfef0
 */


void FUN_012dfef0(long param_1,undefined8 param_2,long *param_3,long param_4,undefined8 *param_5)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_350;
  long local_348;
  long local_340;
  long lStack_338;
  long local_330;
  long local_328;
  undefined4 local_320;
  undefined *local_310;
  long local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [96];
  undefined8 local_280;
  code *local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [96];
  undefined *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_f0;
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [96];
  undefined4 local_60;
  
  iVar1 = FUN_012df020();
  if (iVar1 == 0) {
    local_270 = 0;
    uStack_268 = 0;
    local_280 = 0;
    local_278 = (code *)0x0;
    local_308 = 0;
    local_2f0 = 0;
    uStack_2e8 = 0;
    local_300 = 0;
    uStack_2f8 = 0;
    local_310 = PTR_DAT_027194a8 + 0x10;
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_200 = PTR_DAT_027164d8 + 0x10;
    local_f0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = (code *)0x0;
    local_e0 = 0;
    local_348 = 0;
    uStack_1f8 = 0;
    local_60 = 0x3f800000;
    local_340 = param_3[1];
    lStack_338 = param_3[2];
    local_330 = param_3[3];
    lVar5 = param_3[4];
    local_320 = 0;
    local_328 = 0;
    local_350 = param_2;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_320 = (undefined4)param_3[5];
    local_328 = lVar5;
    if (param_3[3] == 0) {
      lVar5 = *(long *)(param_4 + 8);
      local_348 = *param_3;
    }
    else {
      lVar3 = *param_3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(param_4 + 8);
      local_348 = lVar3;
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_308 = lVar5;
    if (*(code **)(param_4 + 0x20) == (code *)0x0) {
      pcVar2 = *(code **)(param_4 + 0xa0);
    }
    else {
      (**(code **)(param_4 + 0x20))(param_4 + 0x30,auStack_2e0);
      pcVar2 = local_278;
      local_300 = *(undefined8 *)(param_4 + 0x10);
      uStack_2f8 = *(undefined8 *)(param_4 + 0x18);
      local_2f0 = *(undefined8 *)(param_4 + 0x20);
      uStack_2e8 = *(undefined8 *)(param_4 + 0x28);
      if (local_278 != (code *)0x0) {
        local_270 = 0;
        uStack_268 = 0;
        local_280 = 0;
        local_278 = (code *)0x0;
        (*pcVar2)(auStack_260);
      }
      pcVar2 = *(code **)(param_4 + 0xa0);
    }
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(param_4 + 0xb0,auStack_260);
      local_280 = *(undefined8 *)(param_4 + 0x90);
      local_278 = *(code **)(param_4 + 0x98);
      local_270 = *(undefined8 *)(param_4 + 0xa0);
      uStack_268 = *(undefined8 *)(param_4 + 0xa8);
    }
    pcVar2 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = 0;
      local_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      (*pcVar2)(auStack_c0);
    }
    if ((code *)param_5[2] != (code *)0x0) {
      (*(code *)param_5[2])(param_5 + 4,auStack_c0);
      local_e0 = *param_5;
      local_d8 = (code *)param_5[1];
      local_d0 = param_5[2];
      local_c8 = param_5[3];
    }
    lVar5 = *(long *)(param_1 + 0xb0);
    if (lVar5 == *(long *)(param_1 + 0xb8)) {
      FUN_012e17f0(param_1 + 0xa8,&local_350);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0xc0);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      FUN_012e1560(lVar5,&local_350);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 0x300;
    }
    FUN_012e0180(&local_350);
  }
  return;
}


