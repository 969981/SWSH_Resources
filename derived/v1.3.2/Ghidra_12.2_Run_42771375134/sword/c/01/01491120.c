/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01491120; name: FUN_01491120
 */


void FUN_01491120(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  uVar2 = FUN_010386c0(*(undefined8 *)(param_1 + 0x98));
  if ((uVar2 & 1) != 0) {
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar3 = (long *)(**(code **)*puVar6)(puVar6);
    lVar4 = FUN_01481a10();
    for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
    }
    lVar4 = puVar6[2];
    iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0x98));
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x7c) = 1;
      FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),1,1);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
      return;
    }
    if (iVar1 == 1) {
      uVar5 = 4;
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      uVar5 = 3;
    }
    *(undefined4 *)(lVar4 + 0xc) = uVar5;
    *(undefined8 *)(param_1 + 0x7c) = 0x500000006;
  }
  return;
}


