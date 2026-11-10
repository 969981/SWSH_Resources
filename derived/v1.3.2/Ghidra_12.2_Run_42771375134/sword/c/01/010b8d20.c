/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b8d20; name: FUN_010b8d20
 */


void FUN_010b8d20(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 local_28;
  
  *(undefined4 *)(param_1 + 0x7c) = 0x24;
  FUN_010ad950(*(undefined8 *)(param_1 + 0x88),0);
  FUN_010b1170(*(undefined8 *)(param_1 + 0x90),0);
  uVar3 = 3;
  if (*(int *)(param_1 + 0x84) == 5) {
    uVar3 = 1;
  }
  FUN_010364c0(*(undefined8 *)(param_1 + 0x90),uVar3);
  if (*(int *)(param_1 + 0x80) == 0) {
    FUN_010adf80(*(undefined8 *)(param_1 + 0x88),1);
    FUN_010b12f0(*(undefined8 *)(param_1 + 0x90),1);
    iVar1 = *(int *)(param_1 + 0x84);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x84);
  }
  if (iVar1 == 5) {
    return;
  }
  FUN_010364c0(*(undefined8 *)(param_1 + 0x88),3);
  lVar4 = *(long *)(param_1 + 0x88);
  if (*(char *)(lVar4 + 0x620) != '\0') {
    *(undefined1 *)(lVar4 + 0x620) = 0;
    FUN_00ffcf80(lVar4 + 0x100,"anime_new_out");
  }
  local_28 = 0xaa9746b0d29093b6;
  uVar2 = FUN_0167b6b0(*(undefined8 *)(lVar4 + 0x2b0),&local_28);
  FUN_00ffd840(lVar4 + 0x100,uVar2);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x600),*(undefined1 *)(lVar4 + 0x620));
  lVar4 = *(long *)(param_1 + 0x88);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x618),0);
  FUN_016b2eb0(*(undefined8 *)(lVar4 + 0x618));
  FUN_016b2da0(*(undefined8 *)(lVar4 + 0x618),0);
  lVar4 = *(long *)(param_1 + 0x88);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5f0),0);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5f8),0);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x600),0);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x608),0);
  lVar4 = *(long *)(param_1 + 0x88);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5e0),0);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5e8),0);
  FUN_010b2a10(*(undefined8 *)(param_1 + 0x90),0);
  return;
}


