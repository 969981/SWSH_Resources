/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0139ce60; name: FUN_0139ce60
 */


void FUN_0139ce60(undefined4 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  long local_c8;
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
          goto LAB_0139cedc;
        }
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != (undefined8 *)0x0);
      puVar4 = (undefined8 *)0x0;
    }
  }
LAB_0139cedc:
  lVar5 = FUN_01380080(puVar4,&local_e0);
  *(undefined4 *)(lVar5 + 0x7c) = param_1;
  *(undefined4 *)(lVar5 + 0x204) = 0x1b;
  *(undefined8 *)(lVar5 + 0x218) = param_3[1];
  *(undefined8 *)(lVar5 + 0x210) = *param_3;
  uVar6 = *param_4;
  uVar1 = param_4[1];
  *(undefined8 *)(lVar5 + 0x230) = 0x3f66666600000000;
  *(undefined1 *)(lVar5 + 0x200) = 1;
  *(undefined8 *)(lVar5 + 0x220) = uVar6;
  *(undefined8 *)(lVar5 + 0x228) = uVar1;
  local_c0 = &LAB_0139de00;
  local_b8 = FUN_0139de10;
  local_a8 = &LAB_0139de30;
  local_b0 = FUN_0139de20;
  pcVar7 = *(code **)(lVar5 + 0x2c8);
  alStack_a0[0] = param_2;
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x2d0) = 0;
    *(undefined8 *)(lVar5 + 0x2d8) = 0;
    *(undefined8 *)(lVar5 + 0x2c0) = 0;
    *(undefined8 *)(lVar5 + 0x2c8) = 0;
    (*pcVar7)(lVar5 + 0x2e0);
    if (local_b0 == (code *)0x0) goto LAB_0139cfac;
  }
  (*local_b0)(alStack_a0,lVar5 + 0x2e0);
  *(undefined1 **)(lVar5 + 0x2d8) = local_a8;
  *(code **)(lVar5 + 0x2c8) = local_b8;
  *(code **)(lVar5 + 0x2d0) = local_b0;
  *(undefined8 *)(lVar5 + 0x2c0) = local_c0;
LAB_0139cfac:
  pcVar7 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar7)(alStack_a0);
  }
  local_e0 = 0x5c275021d3ddd7be;
  local_d8 = "Play_Camp_Cooking_ReadyNuts";
  local_d0 = 0x1b;
  local_c8 = 0;
  FUN_012d6d40(&local_e0);
  if (local_c8 != 0) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
  }
  return;
}


