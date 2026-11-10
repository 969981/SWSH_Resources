/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bbf20; name: FUN_004bbf20
 */


undefined4 FUN_004bbf20(long *param_1,uint param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  float fVar5;
  undefined1 auStack_50 [48];
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = param_2 / uVar1;
  }
  puVar4 = *(uint **)(*param_1 + (ulong)(param_2 - uVar2 * uVar1) * 8);
  if (puVar4 != (uint *)0x0) {
    while (*puVar4 != param_2) {
      puVar4 = *(uint **)(puVar4 + 2);
      if (puVar4 == (uint *)0x0) {
        return 0;
      }
    }
    memcpy(auStack_50,param_3,0x30);
    if (puVar4[8] != 0) {
      fVar5 = (float)FUN_0049d600(*(undefined8 *)PTR_DAT_02712b50,puVar4,auStack_50);
      if ((uint)(int)fVar5 < puVar4[6]) {
        return *(undefined4 *)(*(long *)(puVar4 + 4) + (ulong)(uint)(int)fVar5 * 4);
      }
      return 0;
    }
    puVar3 = (undefined4 *)FUN_00465870(puVar4 + 0xe,auStack_50);
    if (puVar3 != (undefined4 *)0x0) {
      return *puVar3;
    }
  }
  return 0;
}


