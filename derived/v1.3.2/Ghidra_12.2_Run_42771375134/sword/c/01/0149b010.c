/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0149b010; name: FUN_0149b010
 */


void FUN_0149b010(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  uVar2 = FUN_010386c0(*(undefined8 *)(param_1 + 0x90));
  if ((uVar2 & 1) != 0) {
    iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0x90));
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar3 = (long *)(**(code **)*puVar6)(puVar6);
    lVar4 = FUN_01481a10();
    for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
    }
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x78) = 1;
      FUN_00ffa160(*(undefined8 *)(param_1 + 0x80),1,1);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x80),0);
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
    *(undefined4 *)(puVar6[2] + 0xc) = uVar5;
    *(undefined8 *)(param_1 + 0x78) = 0x500000006;
  }
  return;
}


