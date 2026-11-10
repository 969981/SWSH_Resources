/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003be660; name: FUN_003be660
 */


void FUN_003be660(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (lVar3 != 0) {
    FUN_003bf8a0(lVar3);
    FUN_003bf980(lVar3);
  }
  puVar2 = (undefined8 *)param_1[0x16];
  if ((puVar2 == (undefined8 *)0x0) || (*(char *)((long)puVar2 + 0x1f) != '\0')) {
    *(undefined4 *)((long)param_1 + 0x9c) = 0;
    lVar4 = *param_1;
  }
  else {
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined4 *)((long)param_1 + 0x9c) = 0;
    lVar4 = *param_1;
  }
  if (lVar4 != 0) {
    plVar1 = *(long **)(*(long *)(lVar4 + 0x48) + 0x760);
    (**(code **)(*plVar1 + 0x30))(plVar1,lVar4 + 0x60,*(uint *)(lVar4 + 0xb0) >> 6);
    FUN_003bfac0(0,lVar4,0);
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_003bffa0(lVar3);
  return;
}


