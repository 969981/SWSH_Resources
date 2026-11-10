/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01086ac0; name: FUN_01086ac0
 */


void FUN_01086ac0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long local_270;
  long local_268;
  long local_260;
  long local_258;
  long local_250;
  undefined1 *puStack_248;
  undefined8 local_240;
  undefined5 uStack_238;
  undefined3 local_233;
  undefined5 uStack_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined1 *puStack_1e8;
  undefined8 local_1e0;
  long local_1d8;
  undefined *local_1d0;
  long local_1c8;
  undefined8 local_1c0;
  code *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [96];
  undefined8 local_140;
  code *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [96];
  undefined1 local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined1 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar8 = *(long *)(*(long *)(param_1 + 0x58) + 0x60);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  local_50 = 0;
  uStack_48 = 0;
  FUN_0101cb00(lVar8,&local_50);
  plVar10 = *(long **)(param_1 + 8);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar10;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,0x7b0,0x10);
  if (lVar7 == 0) {
    (**(code **)(*plVar10 + 0xb8))(plVar10);
  }
  FUN_0074bce0(lVar7,plVar10);
  *(long **)(lVar7 + 8) = plVar10;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 0x7b0;
  *(undefined8 *)(lVar7 + 0x20) = 0x10;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(long *)(param_1 + 0x70) = lVar7;
  local_250 = -0x340d631b7bddd9bb;
  puStack_248 = &DAT_01d38550;
  uStack_230 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_233 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1c8 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_1f0 = 0xcbf29ce484222645;
  puStack_1e8 = &DAT_01d38550;
  local_1e0 = 0;
  local_1d8 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  local_138 = (code *)0x0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0 = 0;
  local_1b8 = (code *)0x0;
  local_1d0 = PTR_DAT_02710818 + 0x10;
  local_c0 = 0;
  local_bc = 2;
  local_b4 = 0;
  local_90 = 0x3f800000;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_74 = 0;
  local_7c = 0;
  FUN_0074be30(lVar7,&local_250,*(undefined8 *)(param_1 + 8));
  uVar9 = *(undefined8 *)(param_1 + 0x68);
  local_258 = *(long *)(param_1 + 0x70);
  if (local_258 != 0) {
    (**(code **)(*(long *)(local_258 + 0x48) + 0x10))();
  }
  local_260 = *(long *)(param_1 + 0x80);
  if (local_260 != 0) {
    (**(code **)(*(long *)(local_260 + 0x48) + 0x10))();
  }
  local_268 = 0;
  FUN_00da60e0(uVar9,0,&local_258,&local_260,&local_268,0,*(undefined8 *)(param_1 + 8));
  if (local_268 != 0) {
    (**(code **)(*(long *)(local_268 + 0x48) + 0x18))();
    local_268 = 0;
  }
  if (local_260 != 0) {
    (**(code **)(*(long *)(local_260 + 0x48) + 0x18))();
    local_260 = 0;
  }
  if (local_258 != 0) {
    (**(code **)(*(long *)(local_258 + 0x48) + 0x18))();
    local_258 = 0;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x80);
  local_270 = *(long *)(param_1 + 0x70);
  if (local_270 != 0) {
    (**(code **)(*(long *)(local_270 + 0x48) + 0x10))();
  }
  FUN_00702940(uVar9,&local_270);
  if (local_270 != 0) {
    (**(code **)(*(long *)(local_270 + 0x48) + 0x18))();
    local_270 = 0;
  }
  local_1d0 = PTR_DAT_02710808 + 0x10;
  if (local_1c8 == 0) {
    local_1c8 = 0;
    pcVar5 = local_138;
  }
  else {
    FUN_006e2100(local_1c8,&local_1d0);
    lVar6 = local_1c8;
    local_1c8 = 0;
    pcVar5 = local_138;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      pcVar5 = local_138;
    }
  }
  local_138 = pcVar5;
  if (pcVar5 != (code *)0x0) {
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar5)(auStack_120);
  }
  pcVar5 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1c0 = 0;
    local_1b8 = (code *)0x0;
    (*pcVar5)(auStack_1a0);
  }
  if (local_1c8 != 0) {
    (**(code **)(*(long *)(local_1c8 + 0x48) + 0x18))();
    local_1c8 = 0;
  }
  if (local_1d8 != 0) {
    (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
    local_1d8 = 0;
  }
  if (CONCAT35(local_233,uStack_238) != 0) {
    (**(code **)(*(long *)(CONCAT35(local_233,uStack_238) + 0x48) + 0x18))();
    uStack_238 = 0;
    local_233 = 0;
  }
  FUN_01051350(&local_250,&local_50,*(undefined8 *)(param_1 + 8),PTR_DAT_02719520);
  plVar10 = *(long **)(param_1 + 0x78);
  if (plVar10 != (long *)0x0) {
    lVar6 = plVar10[0xb];
    piVar1 = (int *)(lVar6 + 0x54);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x60) = 0;
      (**(code **)(*plVar10 + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(long *)(param_1 + 0x78) = local_250;
  *(undefined1 *)(*(long *)(*(long *)(local_250 + 0x1a8) + 0xa0) + 0xd8) = 1;
  FUN_0070cf00(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
  lVar6 = *(long *)(*(long *)(param_1 + 0x78) + 0x1a8);
  *(undefined8 *)(lVar6 + 0xf8) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(lVar6 + 0xf0) = *(undefined8 *)(param_1 + 0xb0);
  lVar6 = *(long *)(*(long *)(param_1 + 0x78) + 0x1a8);
  uVar9 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(lVar6 + 0xe0) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(lVar6 + 0xe8) = uVar9;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


