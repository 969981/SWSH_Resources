/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00118150; name: FUN_00118150
 */


uint FUN_00118150(long *param_1,uint param_2,uint param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  uint local_38;
  uint local_34;
  
  uVar3 = (undefined4)param_5;
  uVar2 = (undefined4)param_4;
  lVar1 = param_1[0xb] + (ulong)param_2 * 0x2c;
  lVar4 = param_1[0xb] + (ulong)param_3 * 0x2c;
  if ((uint)(*(int *)(lVar4 + 0xc) + *(int *)(lVar4 + 8)) <
      (uint)(*(int *)(lVar1 + 0xc) + *(int *)(lVar1 + 8))) {
    FUN_0011a250(param_1,lVar1,lVar4,param_2,param_3,param_4 & 0xffffffff,param_5 & 0xffffffff);
    lVar1 = (ulong)(param_3 >> 5) * 4;
    *(uint *)(param_1[0x20] + lVar1) =
         *(uint *)(param_1[0x20] + lVar1) & (1 << (ulong)(param_3 & 0x1f) ^ 0xffffffffU);
    if (*(uint *)(param_1 + 2) == param_3) {
      *(uint *)(param_1 + 2) = param_3 - 1;
    }
    else if (*(uint *)(param_1 + 1) < (*(uint *)((long)param_1 + 0xc) & 0x7fffffff)) {
      *(uint *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 4) = param_3;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    }
    else {
      local_34 = param_3;
      FUN_001b4230(param_1,&local_34);
    }
    param_4 = param_5;
    param_3 = param_2;
    uVar3 = uVar2;
  }
  else {
    FUN_0011a250(param_1,lVar4,lVar1,param_3,param_2,param_5 & 0xffffffff,param_4 & 0xffffffff);
    lVar1 = (ulong)(param_2 >> 5) * 4;
    *(uint *)(param_1[0x20] + lVar1) =
         *(uint *)(param_1[0x20] + lVar1) & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
    if (*(uint *)(param_1 + 2) == param_2) {
      *(uint *)(param_1 + 2) = param_2 - 1;
    }
    else if (*(uint *)(param_1 + 1) < (*(uint *)((long)param_1 + 0xc) & 0x7fffffff)) {
      *(uint *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 4) = param_2;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    }
    else {
      local_38 = param_2;
      FUN_001b4230(param_1,&local_38);
    }
  }
  *(undefined4 *)(param_1[0x1c] + (param_4 >> 6 & 0x3ffffff) * 4) = uVar3;
  return param_3;
}


