/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e348e0; name: FUN_00e348e0
 */


void FUN_00e348e0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_18 [8];
  
  if (*(char *)(param_1 + 0x60) != '\0') {
    lVar2 = FUN_00706c40(*(undefined8 *)(param_1 + 0x2c0),auStack_18);
    lVar2 = *(long *)(lVar2 + 0x78);
    uVar3 = *(undefined8 *)(param_1 + 0x158);
    uVar1 = *(undefined4 *)(param_1 + 0x170);
    *(undefined8 *)(lVar2 + 0x2c8) = *(undefined8 *)(param_1 + 0x168);
    *(undefined8 *)(lVar2 + 0x2c0) = *(undefined8 *)(param_1 + 0x160);
    *(undefined8 *)(lVar2 + 0x2a8) = *(undefined8 *)(param_1 + 0x148);
    *(undefined4 *)(lVar2 + 0x2d0) = uVar1;
    *(undefined8 *)(lVar2 + 0x2b8) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x140);
    *(undefined8 *)(lVar2 + 0x2b0) = *(undefined8 *)(param_1 + 0x150);
    *(undefined8 *)(lVar2 + 0x2a0) = uVar3;
    FUN_01052f20(*(undefined8 *)(param_1 + 0x2c8),*(undefined1 *)(param_1 + 0x140));
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}


