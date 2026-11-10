/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00113c30; name: FUN_00113c30
 */


uint FUN_00113c30(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_58;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar3 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar3 + 1;
    uVar4 = uVar3 * 2;
    if (*(uint *)(param_1 + 0x88) != uVar4) goto LAB_00113cd0;
  }
  else {
    uVar4 = *(int *)(param_1 + 0x20) - 1;
    uVar3 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar4 * 4);
    *(uint *)(param_1 + 0x20) = uVar4;
    uVar4 = uVar3 * 2;
    if (*(uint *)(param_1 + 0x88) != uVar4) goto LAB_00113cd0;
  }
  local_58 = CONCAT44(local_58._4_4_,0xffffffc0);
  FUN_00113990(param_1 + 0x80,uVar3 * 4 + 4,&local_58);
  local_58 = 0;
  FUN_00113a70(param_1 + 0x90,uVar4 + 2,&local_58);
  local_58 = 0;
  FUN_00113b50(param_1 + 0x40,uVar4 + 2,&local_58);
LAB_00113cd0:
  *(undefined4 *)(*(long *)(param_1 + 0x80) + (ulong)uVar4 * 4) = param_3;
  *(undefined4 *)(*(long *)(param_1 + 0x80) + (ulong)(uVar4 | 1) * 4) = param_4;
  *(undefined8 *)(*(long *)(param_1 + 0x90) + (ulong)uVar3 * 8) = param_2;
  *(undefined8 *)(*(long *)(param_1 + 0x40) + (ulong)uVar3 * 8) = param_5;
  FUN_001161b0(param_1 + 0xb0,param_2,param_3,param_4,uVar3);
  FUN_001161b0(param_1 + 0x310,param_2,param_3,param_4,uVar3);
  if (*(int *)(param_1 + 0xa8) * 0x20 == uVar3) {
    FUN_00190b50((long *)(param_1 + 0xa0),*(int *)(param_1 + 0xa8) << 6 | 2);
  }
  if ((*(uint *)(param_1 + 0x6c) & 0x7fffffff) == uVar3) {
    local_58 = 0;
    FUN_00112d20(param_1 + 0x60,*(uint *)(param_1 + 0x6c) * 2 + 2,&local_58);
  }
  lVar1 = *(long *)(param_1 + 0xa0);
  lVar2 = (ulong)(uVar3 >> 5) * 4;
  *(uint *)(lVar1 + lVar2) = *(uint *)(lVar1 + lVar2) | 1 << (ulong)(uVar3 & 0x1f);
  return uVar3;
}


