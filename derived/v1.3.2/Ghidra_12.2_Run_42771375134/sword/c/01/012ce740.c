/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ce740; name: FUN_012ce740
 */


void FUN_012ce740(undefined8 param_1,long *param_2,int param_3)

{
  code **ppcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined1 *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  long *local_130;
  long *plStack_128;
  long local_d0;
  long local_c8;
  code *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined1 *local_a0 [12];
  
  local_c8 = FUN_012cc840();
  lVar3 = *(long *)(local_c8 + 0x358);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (param_3 == 1) {
    lVar2 = FUN_012d52c0(*param_2,&local_c0);
    if (lVar2 != 0) {
      FUN_014bb440(&local_c0,PTR_DAT_02727808 + 0x30);
      ppcVar1 = &local_c0;
      if (local_a8 != (undefined *)0x0) {
        ppcVar1 = &local_b8;
      }
      pcVar5 = *ppcVar1;
      if ((local_a8 != (undefined *)0x0) && (local_c0 != (code *)0x0)) {
        (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
      }
      local_c0 = (code *)0x0;
      local_b8 = (code *)0xcbf29ce484222645;
      local_b0 = &DAT_01d38550;
      local_a8 = (undefined *)0x0;
      if (local_a0[0] != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_a0[0] + 0x48) + 0x18))();
        local_a0[0] = (undefined1 *)0x0;
      }
      FUN_012e0340(0,lVar2,pcVar5);
    }
  }
  lVar2 = *(long *)(local_c8 + 0x3e0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_d0 = *param_2;
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x10))();
  }
  FUN_01336080(lVar2,&local_d0);
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    local_d0 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  local_150 = &LAB_012d5720;
  local_148 = FUN_012d58e0;
  local_140 = &LAB_012d58f0;
  plStack_128 = &local_c8;
  local_138 = &LAB_012d5900;
  local_c0 = (code *)PTR_LAB_02727810;
  local_b8 = (code *)PTR_FUN_02727818;
  local_b0 = PTR_LAB_02727820;
  local_a8 = PTR_LAB_02727828;
  local_130 = param_2;
  local_a0[0] = (undefined1 *)&local_150;
  FUN_01306a00(lVar3,&local_c0);
  pcVar5 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined *)0x0;
    local_a8 = (undefined *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar5)(local_a0);
  }
  pcVar5 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (undefined1 *)0x0;
    local_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar5)(&local_130);
  }
  lVar2 = *(long *)(local_c8 + 0x3e0);
  if (lVar2 == 0) {
    FUN_013363c0(0,param_3);
  }
  else {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_013363c0(lVar2,param_3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


