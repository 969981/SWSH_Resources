/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b4d20; name: FUN_008b4d20
 */


bool FUN_008b4d20(long param_1,uint param_2)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar2 = (long *)(**(code **)*puVar5)(puVar5);
  lVar3 = FUN_00897d00();
  for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
  }
  plVar2 = *(long **)(puVar5[0xb] + 0x10);
  uVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(puVar5[0xb] + 0x1c));
  uVar1 = FUN_008783c0();
  if (uVar1 != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5d8);
    FUN_014c7bf0(uVar6,0,uVar4);
    FUN_014c9660(uVar6,1,*(undefined4 *)(PTR_DAT_02717a80 + (ulong)uVar1 * 4));
    FUN_008a6c20(puVar5 + -10,0x2f90d9e06cb6ad25,param_2 & 1);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
    *(undefined4 *)(param_1 + 0x78) = 8;
  }
  return uVar1 != 0;
}


