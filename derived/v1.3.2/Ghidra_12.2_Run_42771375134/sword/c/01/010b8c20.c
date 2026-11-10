/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b8c20; name: FUN_010b8c20
 */


void FUN_010b8c20(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = FUN_010ae0a0(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x80));
  uVar2 = FUN_010b1310(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x80));
  if (((uVar1 & 1) == 0) || ((uVar2 & 1) == 0)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x7c) = 1;
  FUN_010b2a10(*(undefined8 *)(param_1 + 0x90),1);
  FUN_010b1170(*(undefined8 *)(param_1 + 0x90),1);
  FUN_010b20e0(*(undefined8 *)(param_1 + 0x90));
  lVar3 = *(long *)(param_1 + 0x90);
  lVar4 = *(long *)PTR_DAT_027108d8;
  FUN_016b2d70(*(undefined8 *)(lVar3 + 0x1a70),*(int *)(lVar4 + 0x11aec) != 0);
  FUN_016b2d70(*(undefined8 *)(lVar3 + 0x1a78),*(int *)(lVar4 + 0x11aec) != 0);
  lVar3 = *(long *)(param_1 + 0x90);
  FUN_016b2d70(*(undefined8 *)(lVar3 + 0x1a80),1);
  FUN_016b2d70(*(undefined8 *)(lVar3 + 0x1a88),1);
  FUN_016b2d70(*(undefined8 *)(lVar3 + 0x1a90),1);
  FUN_016b2d70(*(undefined8 *)(lVar3 + 0x1a98),1);
  FUN_016b2d70(*(undefined8 *)(lVar3 + 0x1aa0),1);
  return;
}


