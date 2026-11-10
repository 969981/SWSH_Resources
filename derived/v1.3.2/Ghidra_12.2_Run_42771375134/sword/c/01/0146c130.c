/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0146c130; name: FUN_0146c130
 */


void FUN_0146c130(long param_1,byte param_2,undefined4 param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x90) == -0x340d631b7bddd9bb) {
    return;
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    return;
  }
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 8));
  uVar3 = FUN_0087d610(*(undefined8 *)(param_1 + 0x18),2);
  bVar1 = *(byte *)(lVar2 + 0x58) & 0xfe;
  if ((uVar3 & 1) != 0) {
    *(byte *)(lVar2 + 0x58) = bVar1;
    return;
  }
  *(byte *)(lVar2 + 0x58) = bVar1 | param_2 & 1;
  if ((param_2 & 1) == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 == -0x340d631b7bddd9bb) {
    return;
  }
  if (lVar2 == 0) {
    return;
  }
  local_38 = *(undefined8 *)(param_1 + 0x1a8);
  uVar3 = FUN_0087b910(*(undefined8 *)(param_1 + 0x18),param_3);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_0087c540(*(undefined8 *)(param_1 + 0x18),param_3);
    if (((uVar3 & 1) == 0) &&
       (uVar3 = FUN_0087c630(*(undefined8 *)(param_1 + 0x18),param_3), (uVar3 & 1) == 0))
    goto LAB_0146c210;
    puVar4 = (undefined8 *)(param_1 + 0x1a0);
  }
  else {
    puVar4 = (undefined8 *)(param_1 + 0x1b0);
  }
  local_38 = *puVar4;
LAB_0146c210:
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x2e8);
  if (lVar2 == 0) {
    FUN_0077eb10(uVar5,&local_38,0);
  }
  else {
    plVar6 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0077eb10(uVar5,&local_38,lVar2);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN_0167cce0(*(undefined8 *)(param_1 + 8),(long *)(param_1 + 0x98),10);
  return;
}


