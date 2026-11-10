/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fe610; name: FUN_003fe610
 */


void FUN_003fe610(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 local_30;
  char local_24 [4];
  
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_2 + 0x4c) = uVar1;
  local_30 = param_2;
  if (uVar1 < (*(uint *)((long)param_1 + 0xc) & 0x7fffffff)) {
    *(long *)(*param_1 + (ulong)uVar1 * 8) = param_2;
    *(uint *)(param_1 + 1) = uVar1 + 1;
  }
  else {
    FUN_003feb60(param_1,&local_30);
  }
  local_30._0_4_ = 0xffffffff;
  if (*(uint *)(param_1 + 3) < (*(uint *)((long)param_1 + 0x1c) & 0x7fffffff)) {
    *(undefined4 *)(param_1[2] + (ulong)*(uint *)(param_1 + 3) * 4) = 0xffffffff;
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  }
  else {
    FUN_001b4230(param_1 + 2,&local_30);
  }
  local_30 = CONCAT44(local_30._4_4_,*(uint *)(param_2 + 0x18)) & 0xffffffff1fffffff;
  if (*(uint *)(param_1 + 5) < (*(uint *)((long)param_1 + 0x2c) & 0x7fffffff)) {
    *(uint *)(param_1[4] + (ulong)*(uint *)(param_1 + 5) * 4) =
         *(uint *)(param_2 + 0x18) & 0x1fffffff;
    *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  }
  else {
    FUN_001b4230(param_1 + 4,&local_30);
  }
  local_30 = param_2;
  plVar2 = (long *)FUN_003fecf0(param_1 + 6,&local_30,local_24);
  if (local_24[0] == '\0') {
    *plVar2 = local_30;
    return;
  }
  return;
}


