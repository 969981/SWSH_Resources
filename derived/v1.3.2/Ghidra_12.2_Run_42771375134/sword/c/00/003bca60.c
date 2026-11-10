/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bca60; name: FUN_003bca60
 */


void FUN_003bca60(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  
  lVar2 = FUN_003bd8a0(param_2);
  if (*(uint *)(param_1 + 0x30) != 0) {
    uVar3 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x28) + uVar3 * 8) == lVar2) goto LAB_003bcac4;
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x30));
  }
  uVar3 = 0x80000000;
LAB_003bcac4:
  local_80 = *param_6;
  uStack_78 = (ulong)*(uint *)(param_6 + 1);
  uStack_70 = *param_7;
  uStack_68 = (ulong)*(uint *)(param_7 + 1);
  thunk_FUN_0015d1f0(param_5,uVar3,&local_80,&local_60);
  *param_3 = local_60;
  *(undefined4 *)(param_3 + 1) = uStack_58;
  *param_4 = local_50;
  *(undefined4 *)(param_4 + 1) = uStack_48;
  return;
}


