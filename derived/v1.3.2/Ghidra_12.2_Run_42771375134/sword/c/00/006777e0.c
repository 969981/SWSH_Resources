/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006777e0; name: FUN_006777e0
 */


void FUN_006777e0(long *param_1,long param_2,long param_3,long param_4,undefined4 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  param_1[2] = 0;
  puVar2 = PTR_DAT_02714600;
  puVar1 = PTR_DAT_02714328;
  param_1[3] = 0;
  *param_1 = param_2;
  param_1[1] = (long)(puVar2 + 0x10);
  param_1[4] = (long)(puVar1 + 0x10);
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  if (param_2 == 0) {
    lVar3 = FUN_005bc6f0();
    param_1[5] = lVar3;
  }
  param_1[0x11] = (long)(puVar1 + 0x10);
  param_1[0xe] = (long)(puVar2 + 0x10);
  param_1[0x12] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 1;
  if (param_2 == 0) {
    lVar3 = FUN_005bc6f0();
    param_1[0x12] = lVar3;
  }
  *(undefined4 *)(param_1 + 0x1b) = *param_5;
  *(undefined4 *)((long)param_1 + 0xdc) = param_5[1];
  *(undefined4 *)(param_1 + 0x1c) = param_5[2];
  *(undefined4 *)((long)param_1 + 0xe4) = param_5[3];
  *(undefined4 *)(param_1 + 0x1d) = param_5[4];
  *(undefined4 *)((long)param_1 + 0xec) = param_5[5];
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 4;
  param_1[0x2c] = 0;
  *(undefined8 *)((long)param_1 + 0x156) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  uVar5 = (ulong)*(int *)(param_3 + 0xc);
  if (0 < *(int *)(param_3 + 0xc)) {
    if (param_1[6] != uVar5) {
      if ((uVar5 < (ulong)param_1[7]) ||
         (uVar4 = FUN_005ea2b0(param_1 + 4,uVar5,1), (uVar4 & 1) != 0)) {
        param_1[6] = uVar5;
        param_1[10] = param_1[9];
        param_1[0xb] = param_1[9] + uVar5;
      }
      else {
        param_1[6] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
      }
    }
    *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_3 + 0xc);
    param_1[3] = param_1[9];
  }
  uVar5 = (ulong)*(int *)(param_4 + 0xc);
  if (0 < *(int *)(param_4 + 0xc)) {
    if (param_1[0x13] != uVar5) {
      if ((uVar5 < (ulong)param_1[0x14]) ||
         (uVar4 = FUN_005ea2b0(param_1 + 0x11,uVar5,1), (uVar4 & 1) != 0)) {
        param_1[0x13] = uVar5;
        param_1[0x17] = param_1[0x16];
        param_1[0x18] = param_1[0x16] + uVar5;
      }
      else {
        param_1[0x13] = 0;
        param_1[0x17] = 0;
        param_1[0x18] = 0;
      }
    }
    *(undefined4 *)((long)param_1 + 0x7c) = *(undefined4 *)(param_4 + 0xc);
    param_1[0x10] = param_1[0x16];
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 8);
  if (0 < *(int *)((long)param_1 + 0x14)) {
    memcpy((void *)param_1[3],*(void **)(param_3 + 0x10),(long)*(int *)((long)param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_4 + 8);
  if (*(int *)((long)param_1 + 0x7c) < 1) {
    return;
  }
  memcpy((void *)param_1[0x10],*(void **)(param_4 + 0x10),(long)*(int *)((long)param_1 + 0x7c));
  return;
}


