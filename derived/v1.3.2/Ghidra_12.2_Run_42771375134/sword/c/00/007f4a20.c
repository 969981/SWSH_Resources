/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f4a20; name: FUN_007f4a20
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_007f4a20(undefined8 param_1,long param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte local_a0 [16];
  void *local_90;
  ulong local_88;
  ulong local_80;
  void *local_78;
  ulong local_70;
  ulong local_68;
  void *local_60;
  undefined *local_58;
  code *local_50;
  void *local_48;
  
  if (*(char *)(param_2 + 0x44) != '\0') {
    uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x50) + 8);
    if (DAT_029f55b8 != 2) {
      local_48 = (void *)((ulong)local_48 & 0xffffffffffffff00);
      local_58 = PTR_DAT_02716670 + 0x10;
      local_50 = FUN_007f8e20;
      FUN_00801c10(&DAT_029f55b8,&local_58);
      FUN_00801390(&local_58);
    }
    lVar3 = FUN_007f97c0(DAT_029f55c0,uVar7);
    if (DAT_029f55c0 + 8 == lVar3) {
      FUN_007eac10(param_1,*(undefined8 *)(param_2 + 8),param_3,9,
                   "Extensions in proto3 are only allowed for defining options.");
      iVar2 = *(int *)(param_2 + 0x40);
      goto joined_r0x007f4ac4;
    }
  }
  iVar2 = *(int *)(param_2 + 0x40);
joined_r0x007f4ac4:
  if (iVar2 == 2) {
    FUN_007eac10(param_1,*(undefined8 *)(param_2 + 8),param_3,9,
                 "Required fields are not allowed in proto3.");
  }
  if (*(char *)(param_2 + 0x80) != '\0') {
    FUN_007eac10(param_1,*(undefined8 *)(param_2 + 8),param_3,9,
                 "Explicit default values are not allowed in proto3.");
  }
  iVar2 = *(int *)(param_2 + 0x3c);
  if (iVar2 == 0xe) {
    lVar3 = *(long *)(param_2 + 0x70);
    if (lVar3 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x10) + 0x7c) == 3) {
      return;
    }
    uVar7 = *(undefined8 *)(param_2 + 8);
    std::operator+("Enum type \"",*(string **)(lVar3 + 8));
    puVar4 = (ulong *)std::string::append((char *)local_a0);
    local_88 = *puVar4;
    local_80 = puVar4[1];
    local_78 = (void *)puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    pbVar6 = *(byte **)(*(long *)(param_2 + 0x50) + 8);
    pbVar1 = *(byte **)(pbVar6 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar1 = pbVar6 + 1;
    }
    puVar4 = (ulong *)std::string::append((char *)&local_88,(ulong)pbVar1);
    local_70 = *puVar4;
    local_68 = puVar4[1];
    local_60 = (void *)puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar5 = (undefined8 *)std::string::append((char *)&local_70);
    local_58 = (undefined *)*puVar5;
    local_50 = (code *)puVar5[1];
    local_48 = (void *)puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_007eaaf0(param_1,uVar7,param_3,2,&local_58);
    if (((ulong)local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    iVar2 = *(int *)(param_2 + 0x3c);
  }
  if (iVar2 == 10) {
    FUN_007eac10(param_1,*(undefined8 *)(param_2 + 8),param_3,2,
                 "Groups are not supported in proto3 syntax.");
  }
  return;
}


