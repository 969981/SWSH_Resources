/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009aaff0; name: FUN_009aaff0
 */


void FUN_009aaff0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [48];
  
  lVar1 = FUN_009425f0(param_1,0);
  if ((lVar1 != 0) && (uVar3 = (ulong)*(byte *)(param_3 + 0x1e), uVar3 != 0)) {
    puVar4 = param_3;
    do {
      FUN_00943e60(auStack_70);
      local_a8 = *puVar4;
      uVar2 = FUN_009ab320(param_1,auStack_a0,&local_a8,0);
      if ((uVar2 & 1) != 0) {
        FUN_00946020(param_2,auStack_a0);
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
  }
  lVar1 = FUN_009425f0(param_1,1);
  if ((lVar1 != 0) && (uVar3 = (ulong)*(byte *)((long)param_3 + 0xf1), uVar3 != 0)) {
    puVar4 = param_3 + 6;
    do {
      FUN_00943e60(auStack_70);
      local_a8 = *puVar4;
      uVar2 = FUN_009ab320(param_1,auStack_a0,&local_a8,1);
      if ((uVar2 & 1) != 0) {
        FUN_00946020(param_2,auStack_a0);
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
  }
  lVar1 = FUN_009425f0(param_1,2);
  if ((lVar1 != 0) && (uVar3 = (ulong)*(byte *)((long)param_3 + 0xf2), uVar3 != 0)) {
    puVar4 = param_3 + 0xc;
    do {
      FUN_00943e60(auStack_70);
      local_a8 = *puVar4;
      uVar2 = FUN_009ab320(param_1,auStack_a0,&local_a8,2);
      if ((uVar2 & 1) != 0) {
        FUN_00946020(param_2,auStack_a0);
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
  }
  lVar1 = FUN_009425f0(param_1,3);
  if ((lVar1 != 0) && (uVar3 = (ulong)*(byte *)((long)param_3 + 0xf3), uVar3 != 0)) {
    puVar4 = param_3 + 0x12;
    do {
      FUN_00943e60(auStack_70);
      local_a8 = *puVar4;
      uVar2 = FUN_009ab320(param_1,auStack_a0,&local_a8,3);
      if ((uVar2 & 1) != 0) {
        FUN_00946020(param_2,auStack_a0);
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
  }
  lVar1 = FUN_009425f0(param_1,4);
  if ((lVar1 != 0) && (uVar3 = (ulong)*(byte *)((long)param_3 + 0xf4), uVar3 != 0)) {
    param_3 = param_3 + 0x18;
    do {
      FUN_00943e60(auStack_70);
      local_a8 = *param_3;
      uVar2 = FUN_009ab320(param_1,auStack_a0,&local_a8,4);
      if ((uVar2 & 1) != 0) {
        FUN_00946020(param_2,auStack_a0);
      }
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}


