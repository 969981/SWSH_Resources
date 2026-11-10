/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00faa640; name: FUN_00faa640
 */


void FUN_00faa640(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined1 *local_280;
  code *local_278;
  code *local_270;
  undefined1 *local_268;
  long alStack_260 [12];
  undefined1 *local_200;
  code *local_1f8;
  code *local_1f0;
  undefined1 *local_1e8;
  long alStack_1e0 [12];
  undefined *local_180;
  long local_178;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [112];
  
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_178 = *(long *)(lVar6 + 0x968);
  local_180 = PTR_DAT_0271dee8 + 0x10;
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x10))();
  }
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  local_168 = (code *)0x0;
  if (*(code **)(lVar6 + 0x980) != (code *)0x0) {
    (**(code **)(lVar6 + 0x980))(lVar6 + 0x990,auStack_150);
    local_170 = *(undefined8 *)(lVar6 + 0x970);
    local_168 = *(code **)(lVar6 + 0x978);
    local_160 = *(undefined8 *)(lVar6 + 0x980);
    uStack_158 = *(undefined8 *)(lVar6 + 0x988);
  }
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  if (*(code **)(lVar6 + 0xa00) != (code *)0x0) {
    (**(code **)(lVar6 + 0xa00))(lVar6 + 0xa10,auStack_d0);
    local_f0 = *(undefined8 *)(lVar6 + 0x9f0);
    local_e8 = *(code **)(lVar6 + 0x9f8);
    local_e0 = *(undefined8 *)(lVar6 + 0xa00);
    uStack_d8 = *(undefined8 *)(lVar6 + 0xa08);
  }
  local_180 = PTR_DAT_0271d378 + 0x10;
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  plVar7 = *(long **)(param_1 + 8);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_00faae30:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar7;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar2 = (**(code **)(*plVar7 + 0x10))(plVar7,0x200,0x10);
  if (lVar2 == 0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  FUN_0167e1b0(lVar2,plVar7,&local_180);
  *(long **)(lVar2 + 8) = plVar7;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x200;
  *(undefined8 *)(lVar2 + 0x20) = 0x10;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  *(undefined1 *)(lVar2 + 0x1f0) = 1;
  FUN_00d98680(&local_200,lVar2,*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 400) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 400) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 400) = 0;
  }
  lVar6 = param_1 + 0xb0;
  *(undefined1 **)(param_1 + 400) = local_200;
  FUN_00ffb950(lVar6);
  lVar8 = *(long *)(param_1 + 400);
  FUN_0167c600(lVar8,*(undefined8 *)(param_1 + 0x60));
  if (*(long *)(lVar8 + 0x188) != 0) {
    lVar10 = *(long *)(lVar8 + 0x188) << 4;
    plVar7 = (long *)(*(long *)(lVar8 + 0x180) + 8);
    do {
      while (lVar8 = *plVar7, lVar8 == 0) {
        FUN_007868f0(0,lVar6);
        lVar10 = lVar10 + -0x10;
        plVar7 = plVar7 + 2;
        if (lVar10 == 0) goto LAB_00faa8b4;
      }
      plVar9 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_007868f0(lVar8,lVar6);
      (**(code **)(*plVar9 + 0x18))(plVar9);
      lVar10 = lVar10 + -0x10;
      plVar7 = plVar7 + 2;
    } while (lVar10 != 0);
  }
LAB_00faa8b4:
  lVar6 = FUN_00fff3c0(&local_200,*(undefined8 *)(param_1 + 8),(undefined8 *)(param_1 + 400));
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  plVar7 = *(long **)(param_1 + 8);
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00faae30;
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar7;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar10 = (**(code **)(*plVar7 + 0x10))(plVar7,0x90,8);
  if (lVar10 == 0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  FUN_016d1e30(lVar10,plVar7);
  *(long **)(lVar10 + 8) = plVar7;
  *(long *)(lVar10 + 0x10) = lVar10;
  *(undefined8 *)(lVar10 + 0x18) = 0x90;
  *(undefined8 *)(lVar10 + 0x20) = 8;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x198) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x198) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  *(long *)(param_1 + 0x198) = lVar10;
  plVar7 = *(long **)(lVar10 + 0x58);
  if (plVar7 != (long *)0x0) {
    (**(code **)(plVar7[9] + 0x10))();
  }
  puVar3 = (undefined1 *)FUN_00fabf70(&local_200,*(undefined8 *)(param_1 + 8));
  if (puVar3 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar3 + 0x48) + 0x10))();
  }
  *(undefined8 *)(puVar3 + 0x60) = 0x60dd9a51c30b7a73;
  local_200 = puVar3;
  (**(code **)(*plVar7 + 0xd0))(plVar7,&local_200);
  if (local_200 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_200 + 0x48) + 0x18))();
    local_200 = (undefined1 *)0x0;
  }
  (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(puVar3 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(puVar3 + 0x98) + 0x48) + 0x18))();
    *(undefined8 *)(puVar3 + 0x98) = 0;
  }
  *(undefined8 *)(puVar3 + 0x88) = 0x7c12258c26ae9b5;
  *(undefined8 *)(puVar3 + 0x90) = 0xcbf29ce484222645;
  *(long *)(puVar3 + 0x98) = lVar6;
  uVar4 = DAT_02161cc8;
  *(undefined8 *)(puVar3 + 0xa8) = DAT_02161cc0;
  *(undefined8 *)(puVar3 + 0xb0) = uVar4;
  uVar4 = DAT_02161ce8;
  *(undefined8 *)(puVar3 + 200) = DAT_02161ce0;
  *(undefined8 *)(puVar3 + 0xd0) = uVar4;
  uVar4 = DAT_02161cd8;
  *(undefined8 *)(puVar3 + 0xb8) = DAT_02161cd0;
  *(undefined8 *)(puVar3 + 0xc0) = uVar4;
  uVar4 = DAT_02161d08;
  *(undefined8 *)(puVar3 + 0xe8) = DAT_02161d00;
  *(undefined8 *)(puVar3 + 0xf0) = uVar4;
  uVar4 = DAT_02161cf8;
  *(undefined8 *)(puVar3 + 0xd8) = DAT_02161cf0;
  *(undefined8 *)(puVar3 + 0xe0) = uVar4;
  uVar4 = DAT_02161d28;
  *(undefined8 *)(puVar3 + 0x108) = DAT_02161d20;
  *(undefined8 *)(puVar3 + 0x110) = uVar4;
  uVar4 = DAT_02161d18;
  *(undefined8 *)(puVar3 + 0xf8) = DAT_02161d10;
  *(undefined8 *)(puVar3 + 0x100) = uVar4;
  *(undefined8 *)(puVar3 + 0x118) = 0xa76046bb27a29b01;
  *(undefined8 *)(puVar3 + 0x120) = 0x69b70be3fafcc53a;
  *(undefined8 *)(puVar3 + 0x128) = 0x69b70ce3fafcc6ed;
  *(undefined8 *)(puVar3 + 0x130) = 0x40550a211a46679c;
  *(undefined8 *)(puVar3 + 0x138) = 0x5ca35cae4e20004;
  *(undefined8 *)(puVar3 + 0x140) = 0x244a7f4535d68bed;
  *(undefined8 *)(puVar3 + 0x148) = 0x92d81f9a85b43436;
  *(undefined8 *)(puVar3 + 0x150) = 0x45d2cbddc5cfd808;
  *(undefined8 *)(puVar3 + 0x158) = 0x33bc076dd9516ad7;
  pcVar5 = *(code **)(puVar3 + 0x168);
  local_1e8 = &LAB_00fac080;
  local_200 = &LAB_00fac050;
  local_1f8 = FUN_00fac060;
  local_1f0 = FUN_00fac070;
  alStack_1e0[0] = param_1;
  if (pcVar5 == (code *)0x0) {
LAB_00faabb4:
    (*local_1f0)(alStack_1e0,puVar3 + 0x180);
    *(undefined1 **)(puVar3 + 0x178) = local_1e8;
    *(code **)(puVar3 + 0x168) = local_1f8;
    *(code **)(puVar3 + 0x170) = local_1f0;
    *(undefined1 **)(puVar3 + 0x160) = local_200;
  }
  else {
    *(undefined8 *)(puVar3 + 0x170) = 0;
    *(undefined8 *)(puVar3 + 0x178) = 0;
    *(undefined8 *)(puVar3 + 0x160) = 0;
    *(undefined8 *)(puVar3 + 0x168) = 0;
    (*pcVar5)(puVar3 + 0x180);
    if (local_1f0 != (code *)0x0) goto LAB_00faabb4;
  }
  local_280 = (undefined1 *)0x61459802c149500e;
  uVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 400),&local_280);
  lVar8 = FUN_019c1410(uVar4,"color_select");
  lVar10 = FUN_019c1410(uVar4,"color_unselect");
  *(char *)(param_1 + 0x1d0) = (char)*(undefined4 *)(lVar8 + (ulong)*(uint *)(lVar8 + 4));
  *(char *)(param_1 + 0x1d4) = (char)*(undefined4 *)(lVar10 + (ulong)*(uint *)(lVar10 + 4));
  *(char *)(param_1 + 0x1d1) = (char)*(undefined4 *)(lVar8 + (ulong)*(uint *)(lVar8 + 4) + 4);
  *(char *)(param_1 + 0x1d5) = (char)*(undefined4 *)(lVar10 + (ulong)*(uint *)(lVar10 + 4) + 4);
  *(char *)(param_1 + 0x1d2) = (char)*(undefined4 *)(lVar8 + (ulong)*(uint *)(lVar8 + 4) + 8);
  *(char *)(param_1 + 0x1d6) = (char)*(undefined4 *)(lVar10 + (ulong)*(uint *)(lVar10 + 4) + 8);
  *(undefined1 *)(param_1 + 0x1d3) = 0xff;
  *(undefined1 *)(param_1 + 0x1d7) = 0xff;
  pcVar5 = *(code **)(puVar3 + 0x498);
  local_280 = &LAB_00fac090;
  local_278 = FUN_00fac2a0;
  local_268 = &LAB_00fac2c0;
  local_270 = FUN_00fac2b0;
  alStack_260[0] = param_1;
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(puVar3 + 0x4a0) = 0;
    *(undefined8 *)(puVar3 + 0x4a8) = 0;
    *(undefined8 *)(puVar3 + 0x490) = 0;
    *(undefined8 *)(puVar3 + 0x498) = 0;
    (*pcVar5)(puVar3 + 0x4b0);
    if (local_270 == (code *)0x0) goto LAB_00faad10;
  }
  (*local_270)(alStack_260,puVar3 + 0x4b0);
  *(undefined1 **)(puVar3 + 0x4a8) = local_268;
  *(code **)(puVar3 + 0x498) = local_278;
  *(code **)(puVar3 + 0x4a0) = local_270;
  *(undefined1 **)(puVar3 + 0x490) = local_280;
LAB_00faad10:
  FUN_016d2150(*(undefined8 *)(param_1 + 0x198));
  pcVar5 = local_278;
  if (local_278 != (code *)0x0) {
    local_270 = (code *)0x0;
    local_268 = (undefined1 *)0x0;
    local_280 = (undefined1 *)0x0;
    local_278 = (code *)0x0;
    (*pcVar5)(alStack_260);
  }
  pcVar5 = local_1f8;
  puVar1 = PTR_DAT_0271dee8;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = (code *)0x0;
    local_1e8 = (undefined1 *)0x0;
    local_200 = (undefined1 *)0x0;
    local_1f8 = (code *)0x0;
    (*pcVar5)(alStack_1e0);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  local_180 = puVar1 + 0x10;
  if (local_178 == 0) {
    local_178 = 0;
    pcVar5 = local_e8;
  }
  else {
    FUN_006e2100(local_178,&local_180);
    lVar6 = local_178;
    local_178 = 0;
    pcVar5 = local_e8;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      pcVar5 = local_e8;
    }
  }
  local_e8 = pcVar5;
  if (pcVar5 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar5)(auStack_d0);
  }
  pcVar5 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar5)(auStack_150);
  }
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
  }
  return;
}


