/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b5510; name: FUN_008b5510
 */


void FUN_008b5510(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  uVar2 = FUN_010384a0(*(undefined8 *)(param_1 + 0x88));
  if ((uVar2 & 1) != 0) {
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar3 = (long *)(**(code **)*puVar8)(puVar8);
    lVar4 = FUN_00897d00();
    for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
    }
    lVar4 = puVar8[0xb];
    uVar5 = (**(code **)(**(long **)(lVar4 + 0x10) + 0x50))
                      (*(long **)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x1c));
    uVar2 = FUN_008783c0();
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5d8);
    iVar1 = FUN_010386e0();
    if (iVar1 == 0) {
      *(undefined4 *)(lVar4 + 0x68) = *(undefined4 *)(PTR_DAT_02717a80 + (uVar2 & 0xffff) * 4);
      FUN_01038270(*(undefined8 *)(param_1 + 0x88),1);
      uVar6 = 9;
      uVar7 = 7;
    }
    else {
      FUN_014c7bf0(uVar9,0,uVar5);
      FUN_014c9660(uVar9,1,*(undefined4 *)(PTR_DAT_02717a80 + (uVar2 & 0xffff) * 4));
      FUN_008a6b70(puVar8 + -10,0x2f90dbe06cb6b08b,0,0);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
      uVar7 = 0;
      uVar6 = 0;
    }
    *(undefined4 *)(param_1 + 0x78) = uVar6;
    *(undefined4 *)(param_1 + 0x7c) = uVar7;
  }
  return;
}


