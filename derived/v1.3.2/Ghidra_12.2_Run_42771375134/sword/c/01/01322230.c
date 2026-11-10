/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01322230; name: FUN_01322230
 */


undefined8 FUN_01322230(long param_1,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  long local_28;
  
  uVar3 = FUN_01321fd0(param_1,0);
  uVar4 = 0;
  if ((uVar3 & 1) != 0) {
    plVar1 = (long *)(param_1 + 0x88);
    FUN_01320fc0(&local_28,plVar1);
    lVar5 = local_28;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    if ((code *)param_2[2] != (code *)0x0) {
      (*(code *)param_2[2])(param_2 + 4,auStack_90);
      local_b0 = *param_2;
      local_a8 = (code *)param_2[1];
      local_a0 = param_2[2];
      uStack_98 = param_2[3];
    }
    FUN_01324190(lVar5,&local_b0);
    pcVar2 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      local_a8 = (code *)0x0;
      (*pcVar2)(auStack_90);
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    lVar5 = *plVar1;
    *plVar1 = 0;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
    uVar4 = 1;
  }
  return uVar4;
}


