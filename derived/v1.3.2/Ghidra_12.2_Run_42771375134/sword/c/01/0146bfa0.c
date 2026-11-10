/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0146bfa0; name: FUN_0146bfa0
 */


void FUN_0146bfa0(long param_1,byte param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x90) == -0x340d631b7bddd9bb) {
    return;
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    return;
  }
  lVar5 = FUN_0167b6b0(*(undefined8 *)(param_1 + 8));
  uVar6 = FUN_0087d610(*(undefined8 *)(param_1 + 0x18),2);
  bVar1 = *(byte *)(lVar5 + 0x58) & 0xfe;
  if ((uVar6 & 1) != 0) {
    *(byte *)(lVar5 + 0x58) = bVar1;
    return;
  }
  *(byte *)(lVar5 + 0x58) = bVar1 | param_2 & 1;
  if ((param_2 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x98);
  if (lVar5 == -0x340d631b7bddd9bb) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  uVar3 = FUN_00888e20(param_3);
  iVar4 = FUN_00888e60(param_3);
  local_48 = *(undefined8 *)(param_1 + 0x1a8);
  uVar6 = FUN_00888f20(param_3);
  iVar2 = iVar4 + -100;
  if ((uVar6 & 1) == 0) {
    iVar2 = iVar4;
  }
  uVar7 = FUN_0087b910(iVar4 + -100,*(undefined8 *)(param_1 + 0x18),uVar3);
  if ((uVar7 & 1) == 0) {
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_0087c450(*(undefined8 *)(param_1 + 0x18),iVar2);
    }
    else {
      uVar6 = FUN_0087c4a0();
    }
    if ((uVar6 & 1) != 0) {
      local_48 = *(undefined8 *)(param_1 + 0x1a0);
    }
  }
  else {
    local_48 = *(undefined8 *)(param_1 + 0x1b0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x2e8);
  if (lVar5 == 0) {
    FUN_0077eb10(uVar8,&local_48,0);
  }
  else {
    plVar9 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_0077eb10(uVar8,&local_48,lVar5);
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  FUN_0167cce0(*(undefined8 *)(param_1 + 8),(long *)(param_1 + 0x98),10);
  return;
}


