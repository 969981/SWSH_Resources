/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01479310; name: FUN_01479310
 */


void FUN_01479310(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar10 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar10)(puVar10);
    lVar5 = FUN_0146e370();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        puVar10 = puVar10 + -10;
        goto LAB_01479368;
      }
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_01479368:
  uVar1 = *(undefined4 *)(puVar10 + 0xd);
  uVar2 = *(undefined4 *)((long)puVar10 + 0x6c);
  uVar6 = FUN_01470b00(*(undefined8 *)(param_1 + 0x90),uVar1,1);
  uVar7 = FUN_01470b00(*(undefined8 *)(param_1 + 0x90),uVar2,1);
  if (((uVar6 & 1) != 0) && ((uVar7 & 1) != 0)) {
    FUN_01471470(*(undefined8 *)(param_1 + 0x90),1);
    uVar8 = (**(code **)(**(long **)(puVar10[0xc] + 8) + 0x50))(*(long **)(puVar10[0xc] + 8),uVar1);
    uVar9 = (**(code **)(**(long **)(puVar10[0xc] + 8) + 0x50))(*(long **)(puVar10[0xc] + 8),uVar2);
    sVar3 = FUN_008787f0(uVar8);
    if (sVar3 != 0) {
      FUN_01470ad0(*(undefined8 *)(param_1 + 0x90),uVar1,0);
    }
    sVar3 = FUN_008787f0(uVar9);
    if (sVar3 != 0) {
      FUN_01470ad0(*(undefined8 *)(param_1 + 0x90),uVar2,0);
    }
    *(undefined4 *)(param_1 + 0x7c) = 0xe;
  }
  return;
}


