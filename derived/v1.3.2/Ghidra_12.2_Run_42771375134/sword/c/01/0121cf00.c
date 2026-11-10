/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121cf00; name: FUN_0121cf00
 */


void FUN_0121cf00(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined6 uStack_50;
  undefined2 local_4a;
  undefined6 uStack_48;
  
  puVar6 = (undefined8 *)(param_1 + 0x26);
  *puVar6 = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  puVar1 = PTR_DAT_02710798;
  lVar7 = *(long *)PTR_DAT_02710798;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  lVar4 = *(long *)(lVar7 + 0x1e8);
  if (lVar4 == 0) {
    FUN_01524ba0(0,param_1);
    lVar4 = *(long *)(*(long *)puVar1 + 0x1e8);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_01524ba0(lVar4,param_1);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *(long *)(*(long *)puVar1 + 0x1e8);
  }
  if (lVar4 == 0) {
    cVar2 = FUN_01524bf0(0);
    *(uint *)(param_1 + 0x1c) = (uint)(cVar2 != '\0');
    *(undefined4 *)(param_1 + 0x20) = 0;
    lVar4 = *(long *)(lVar7 + 0x1e8);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    cVar2 = FUN_01524bf0(lVar4);
    *(uint *)(param_1 + 0x1c) = (uint)(cVar2 != '\0');
    (**(code **)(*plVar5 + 0x18))(plVar5);
    *(undefined4 *)(param_1 + 0x20) = 0;
    lVar4 = *(long *)(lVar7 + 0x1e8);
  }
  if (lVar4 == 0) {
    uVar3 = FUN_01524c00(0);
    *(undefined1 *)(param_1 + 0x24) = uVar3;
    lVar4 = *(long *)(lVar7 + 0x1e8);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = FUN_01524c00(lVar4);
    *(undefined1 *)(param_1 + 0x24) = uVar3;
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *(long *)(lVar7 + 0x1e8);
  }
  if (lVar4 == 0) {
    uVar3 = FUN_01524de0(0);
    *(undefined1 *)(param_1 + 0x25) = uVar3;
    lVar4 = *(long *)(lVar7 + 0x1e8);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = FUN_01524de0(lVar4);
    *(undefined1 *)(param_1 + 0x25) = uVar3;
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *(long *)(lVar7 + 0x1e8);
  }
  if (lVar4 == 0) {
    lVar4 = FUN_01524df0(0);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = FUN_01524df0(lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x44) = 0;
    *(undefined8 *)(param_1 + 0x36) = 0;
    *(undefined8 *)(param_1 + 0x3e) = 0;
    *puVar6 = 0;
    *(undefined8 *)(param_1 + 0x2e) = 0;
  }
  else {
    FUN_0121dd30(&local_68,lVar4);
    *(ulong *)(param_1 + 0x44) = CONCAT62(uStack_48,local_4a);
    *(undefined8 *)(param_1 + 0x36) = local_58;
    *(ulong *)(param_1 + 0x3e) = CONCAT26(local_4a,uStack_50);
    *puVar6 = local_68;
    *(undefined8 *)(param_1 + 0x2e) = uStack_60;
  }
  return;
}


