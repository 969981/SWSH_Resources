/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0113c380; name: FUN_0113c380
 */


void FUN_0113c380(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 *local_1e0;
  code *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined1 auStack_1c0 [96];
  undefined1 *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  long alStack_140 [13];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined1 local_a4;
  undefined1 local_90;
  undefined1 local_7c;
  undefined1 local_68;
  undefined1 local_54;
  ulong local_40;
  undefined2 local_38;
  
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0xa0) + 0x60), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)(puVar3);
    uVar2 = FUN_01136750();
    if ((uVar2 & 1) != 0) {
      uVar2 = puVar3[3] & 0xffffffffffffff00;
      local_40 = puVar3[3] & 0xff;
      goto LAB_0113c3d8;
    }
  }
  uVar2 = 0;
  local_40 = 0;
LAB_0113c3d8:
  local_c8 = 0x400000004;
  local_c0 = 0xea66;
  local_40 = local_40 | uVar2;
  local_bc = 8;
  local_b8 = 0;
  local_a4 = 0;
  local_90 = 0;
  local_7c = 0;
  local_68 = 0;
  local_54 = 0;
  local_38 = 0;
  local_d0 = 0;
  uVar2 = FUN_011fe130(*(undefined8 *)PTR_DAT_02718f20,&local_c8,&local_d0);
  if ((uVar2 & 1) != 0) {
    local_d8 = 0x65a873e5d75aba64;
    local_160 = &LAB_0113d730;
    local_158 = FUN_0113d7e0;
    local_150 = &LAB_0113d7f0;
    local_148 = &LAB_0113d800;
    local_1e0 = &LAB_0113d810;
    local_1d8 = FUN_0113d820;
    local_1d0 = &LAB_0113d830;
    local_1c8 = &LAB_0113d840;
    alStack_140[0] = param_1;
    FUN_011354c0(param_1 + 0xc0,0,&local_d8,&local_160,&local_1e0);
    pcVar1 = local_1d8;
    if (local_1d8 != (code *)0x0) {
      local_1d0 = (undefined1 *)0x0;
      local_1c8 = (undefined1 *)0x0;
      local_1e0 = (undefined1 *)0x0;
      local_1d8 = (code *)0x0;
      (*pcVar1)(auStack_1c0);
    }
    pcVar1 = local_158;
    if (local_158 != (code *)0x0) {
      local_150 = (undefined1 *)0x0;
      local_148 = (undefined1 *)0x0;
      local_160 = (undefined1 *)0x0;
      local_158 = (code *)0x0;
      (*pcVar1)(alStack_140);
    }
    *(undefined4 *)(param_1 + 0x7c) = 0xd;
  }
  return;
}


