/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f3e40; name: FUN_007f3e40
 */


void FUN_007f3e40(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  byte local_60 [16];
  void *local_50;
  ulong local_48;
  ulong local_40;
  void *local_38;
  
  if (*(long *)(param_2 + 0x28) == 0) {
    uVar2 = FUN_008530e0();
    *(undefined8 *)(param_2 + 0x28) = uVar2;
  }
  iVar1 = FUN_007f31b0(param_1,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_2 + 8),0,0);
  if (iVar1 == 1) {
    *(undefined8 *)(param_2 + 0x18) = extraout_x1;
  }
  else if (iVar1 == 0) {
    FUN_007ead00(param_1,*(undefined8 *)(param_2 + 8),param_3,5,*(undefined8 *)(param_3 + 0x20));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
    std::operator+("\"",*(string **)(param_3 + 0x20));
    puVar3 = (ulong *)std::string::append((char *)local_60);
    local_48 = *puVar3;
    local_40 = puVar3[1];
    local_38 = (void *)puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_007eaaf0(param_1,uVar2,param_3,5,&local_48);
    if ((local_48 & 1) != 0) {
      operator_delete(local_38);
    }
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  iVar1 = FUN_007f31b0(param_1,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_2 + 8),0,0);
  if (iVar1 == 1) {
    *(undefined8 *)(param_2 + 0x20) = extraout_x1_00;
  }
  else if (iVar1 == 0) {
    FUN_007ead00(param_1,*(undefined8 *)(param_2 + 8),param_3,6,*(undefined8 *)(param_3 + 0x28));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
    std::operator+("\"",*(string **)(param_3 + 0x28));
    puVar3 = (ulong *)std::string::append((char *)local_60);
    local_48 = *puVar3;
    local_40 = puVar3[1];
    local_38 = (void *)puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_007eaaf0(param_1,uVar2,param_3,6,&local_48);
    if ((local_48 & 1) != 0) {
      operator_delete(local_38);
    }
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  return;
}


