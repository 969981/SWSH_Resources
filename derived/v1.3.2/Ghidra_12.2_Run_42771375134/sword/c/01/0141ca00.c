/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141ca00; name: FUN_0141ca00
 */


void FUN_0141ca00(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *local_28;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar1 = (long *)(**(code **)*puVar6)(puVar6);
  lVar2 = FUN_01410b60();
  for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
  }
  uVar3 = FUN_01420150(puVar6[2],0xd6753ba6262af948,&local_28);
  if ((uVar3 & 1) != 0) {
    uVar5 = *local_28;
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(local_28 + 1);
    *(undefined8 *)(param_1 + 0x3c8) = uVar5;
    lVar2 = local_28[2];
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(param_1 + 0x3d8);
    *(long *)(param_1 + 0x3d8) = lVar2;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    uVar5 = local_28[3];
    *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(local_28 + 4);
    *(undefined8 *)(param_1 + 0x3e0) = uVar5;
    lVar2 = local_28[5];
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(param_1 + 0x3f0);
    *(long *)(param_1 + 0x3f0) = lVar2;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    uVar5 = local_28[6];
    *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(local_28 + 7);
    *(undefined8 *)(param_1 + 0x3f8) = uVar5;
    lVar2 = local_28[8];
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(param_1 + 0x408);
    *(long *)(param_1 + 0x408) = lVar2;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    uVar5 = local_28[9];
    *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(local_28 + 10);
    *(undefined8 *)(param_1 + 0x410) = uVar5;
    lVar2 = local_28[0xb];
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(param_1 + 0x420);
    *(long *)(param_1 + 0x420) = lVar2;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    FUN_01420720(*(undefined8 *)(param_1 + 0x428),param_1 + 0x3c8);
  }
  return;
}


