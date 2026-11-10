/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013da90; name: FUN_0013da90
 */


void FUN_0013da90(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint *puVar3;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  local_40 = *(undefined8 *)(param_1 + 0x158);
  local_38 = *(undefined4 *)(param_1 + 0x160);
  local_34 = *(undefined4 *)(param_1 + 0x164);
  uVar2 = (ulong)*(uint *)(param_1 + 0x210);
  lVar1 = param_1 + 0x168;
  if (*(uint *)(param_1 + 0x210) != 0) {
    puVar3 = (uint *)(*(long *)(param_1 + 0x208) + 4);
    do {
      while( true ) {
        if (puVar3[-1] <= *puVar3) break;
        FUN_00140960();
        puVar3 = puVar3 + 2;
        uVar2 = uVar2 - 1;
        if (uVar2 == 0) goto LAB_0013db0c;
      }
      FUN_00140a60(puVar3[-1],*puVar3,*(undefined8 *)(param_1 + 8),lVar1,&local_40);
      puVar3 = puVar3 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
LAB_0013db0c:
  uVar2 = (ulong)*(uint *)(param_1 + 600);
  if (*(uint *)(param_1 + 600) != 0) {
    puVar3 = (uint *)(*(long *)(param_1 + 0x250) + 4);
    do {
      while( true ) {
        if (puVar3[-1] <= *puVar3) break;
        FUN_00140960();
        uVar2 = uVar2 - 1;
        puVar3 = puVar3 + 2;
        if (uVar2 == 0) goto LAB_0013db58;
      }
      FUN_00140a60(puVar3[-1],*puVar3,*(undefined8 *)(param_1 + 8),lVar1,&local_40);
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 2;
    } while (uVar2 != 0);
  }
LAB_0013db58:
  uVar2 = (ulong)*(uint *)(param_1 + 0x2a0);
  if (*(uint *)(param_1 + 0x2a0) != 0) {
    puVar3 = (uint *)(*(long *)(param_1 + 0x298) + 4);
    do {
      while( true ) {
        if (puVar3[-1] <= *puVar3) break;
        FUN_00140960();
        uVar2 = uVar2 - 1;
        puVar3 = puVar3 + 2;
        if (uVar2 == 0) goto LAB_0013dba4;
      }
      FUN_00140a60(puVar3[-1],*puVar3,*(undefined8 *)(param_1 + 8),lVar1,&local_40);
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 2;
    } while (uVar2 != 0);
  }
LAB_0013dba4:
  *(undefined8 *)(param_1 + 0x158) = local_40;
  *(undefined4 *)(param_1 + 0x160) = local_38;
  *(undefined4 *)(param_1 + 0x164) = local_34;
  FUN_0013dc20(param_1);
  FUN_001405c0(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x158),
               *(undefined4 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 8),param_1 + 0x1a8,
               param_1 + 0x1b0,param_1 + 0x1b4,param_1 + 0x1b8,param_1 + 0x1c0,param_1 + 0x1c4,
               param_1 + 0x1c8,lVar1);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x148);
  return;
}


