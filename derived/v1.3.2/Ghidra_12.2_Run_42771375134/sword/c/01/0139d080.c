/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0139d080; name: FUN_0139d080
 */


void FUN_0139d080(undefined4 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  long local_148;
  undefined1 *local_140;
  code *local_138;
  code *local_130;
  undefined1 *local_128;
  long alStack_120 [12];
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  
  if ((*(long *)(param_2 + 0x68) == 0) ||
     (puVar8 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar8 == (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)*puVar8)(puVar8);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715078), iVar2 != 0)) {
      uVar6 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar6;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar4 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      do {
        if (puVar3 == (undefined8 *)PTR_DAT_02715080) {
          puVar4 = puVar8 + -10;
          goto LAB_0139d0fc;
        }
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != (undefined8 *)0x0);
      puVar4 = (undefined8 *)0x0;
    }
  }
LAB_0139d0fc:
  lVar5 = FUN_01380080(puVar4,&local_160);
  *(undefined4 *)(lVar5 + 0x7c) = param_1;
  puVar8 = (undefined8 *)FUN_012dcaa0(param_2);
  *(undefined4 *)(lVar5 + 0x204) = 5;
  *(undefined8 *)(lVar5 + 0x218) = puVar8[1];
  *(undefined8 *)(lVar5 + 0x210) = *puVar8;
  uVar6 = *param_3;
  uVar1 = param_3[1];
  *(undefined8 *)(lVar5 + 0x230) = 0x3f19999a00000000;
  *(undefined8 *)(lVar5 + 0x220) = uVar6;
  *(undefined8 *)(lVar5 + 0x228) = uVar1;
  *(undefined1 *)(lVar5 + 0x200) = 1;
  local_c0 = &LAB_0139de40;
  local_b8 = FUN_0139df10;
  local_a8 = &LAB_0139df30;
  local_b0 = FUN_0139df20;
  pcVar7 = *(code **)(lVar5 + 0x248);
  alStack_a0[0] = param_2;
  if (pcVar7 == (code *)0x0) {
LAB_0139d1a8:
    (*local_b0)(alStack_a0,lVar5 + 0x260);
    *(undefined1 **)(lVar5 + 600) = local_a8;
    *(code **)(lVar5 + 0x248) = local_b8;
    *(code **)(lVar5 + 0x250) = local_b0;
    *(undefined8 *)(lVar5 + 0x240) = local_c0;
  }
  else {
    *(undefined8 *)(lVar5 + 0x250) = 0;
    *(undefined8 *)(lVar5 + 600) = 0;
    *(undefined8 *)(lVar5 + 0x240) = 0;
    *(undefined8 *)(lVar5 + 0x248) = 0;
    (*pcVar7)(lVar5 + 0x260);
    if (local_b0 != (code *)0x0) goto LAB_0139d1a8;
  }
  pcVar7 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar7)(alStack_a0);
  }
  local_140 = &LAB_0139df40;
  local_138 = FUN_0139df80;
  local_130 = FUN_0139df90;
  local_128 = &LAB_0139dfa0;
  pcVar7 = *(code **)(lVar5 + 0x2c8);
  alStack_120[0] = param_2;
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x2d0) = 0;
    *(undefined8 *)(lVar5 + 0x2d8) = 0;
    *(undefined8 *)(lVar5 + 0x2c0) = 0;
    *(undefined8 *)(lVar5 + 0x2c8) = 0;
    (*pcVar7)(lVar5 + 0x2e0);
    if (local_130 == (code *)0x0) goto LAB_0139d274;
  }
  (*local_130)(alStack_120,lVar5 + 0x2e0);
  *(undefined1 **)(lVar5 + 0x2d8) = local_128;
  *(code **)(lVar5 + 0x2c8) = local_138;
  *(code **)(lVar5 + 0x2d0) = local_130;
  *(undefined8 *)(lVar5 + 0x2c0) = local_140;
LAB_0139d274:
  pcVar7 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (code *)0x0;
    local_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar7)(alStack_120);
  }
  local_160 = 0xd258898291f9ca00;
  local_158 = "Play_Camp_Cooking_NutsIntoPot";
  local_150 = 0x1d;
  local_148 = 0;
  FUN_012d6d40(&local_160);
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
  }
  return;
}


