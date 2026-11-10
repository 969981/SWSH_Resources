/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fe730; name: FUN_003fe730
 */


void FUN_003fe730(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long local_28;
  
  uVar1 = *(uint *)(param_2 + 0x4c);
  uVar3 = (ulong)uVar1;
  if (*(int *)(param_1[2] + uVar3 * 4) == -1) {
    local_28 = param_2;
    FUN_003fee60(param_1 + 6,&local_28);
  }
  *(undefined4 *)(param_2 + 0x4c) = 0xffffffff;
  *(undefined8 *)(*param_1 + uVar3 * 8) =
       *(undefined8 *)(*param_1 + (ulong)((int)param_1[1] - 1) * 8);
  *(undefined4 *)(param_1[4] + uVar3 * 4) =
       *(undefined4 *)(param_1[4] + (ulong)((int)param_1[5] - 1) * 4);
  *(undefined4 *)(param_1[2] + uVar3 * 4) =
       *(undefined4 *)(param_1[2] + (ulong)((int)param_1[3] - 1) * 4);
  lVar2 = param_1[1];
  if (uVar1 + 1 != (int)lVar2) {
    *(uint *)(*(long *)(*param_1 + uVar3 * 8) + 0x4c) = uVar1;
  }
  *(int *)(param_1 + 1) = (int)lVar2 + -1;
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  *(int *)(param_1 + 5) = (int)param_1[5] + -1;
  return;
}


