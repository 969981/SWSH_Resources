/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a1250; name: FUN_010a1250
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010a1250(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 local_70 [4];
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined5 uStack_34;
  undefined3 local_2f;
  undefined5 uStack_2c;
  
  local_70[0] = *param_2;
  local_6c = param_2[4] != '\0';
  if ((bool)local_6c) {
    local_68 = *(undefined8 *)(param_2 + 8);
    local_60 = *(undefined8 *)(param_2 + 0x10);
    uStack_58 = *(undefined8 *)(param_2 + 0x18);
    local_50 = *(undefined4 *)(param_2 + 0x20);
  }
  local_4c = *(undefined8 *)(param_2 + 0x24);
  local_3c = *(undefined8 *)(param_2 + 0x34);
  local_44 = *(undefined8 *)(param_2 + 0x2c);
  uStack_2c = (undefined5)((ulong)*(undefined8 *)(param_2 + 0x41) >> 0x18);
  uStack_34 = (undefined5)*(undefined8 *)(param_2 + 0x3c);
  local_2f = (undefined3)((ulong)*(undefined8 *)(param_2 + 0x3c) >> 0x28);
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 == 0) {
    uVar3 = FUN_01027d40(_DAT_00000790);
    FUN_0121bc30(local_70,uVar3);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = FUN_01027d40(*(undefined8 *)(lVar4 + 0x790));
    FUN_0121bc30(local_70,uVar3);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  *(undefined1 *)(param_1 + 0xb8) = 1;
  if (*(long *)PTR_DAT_02710958 != 0) {
    FUN_01211350(*(long *)PTR_DAT_02710958,local_70);
  }
  lVar4 = *(long *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  lVar2 = *(long *)(param_1 + 0x60);
  while (lVar1 = lVar2, lVar1 != lVar4) {
    lVar2 = lVar1 + -0x4c;
    if (*(char *)(lVar1 + -0x48) != '\0') {
      *(undefined1 *)(lVar1 + -0x48) = 0;
    }
  }
  *(long *)(param_1 + 0x60) = lVar4;
  return;
}


