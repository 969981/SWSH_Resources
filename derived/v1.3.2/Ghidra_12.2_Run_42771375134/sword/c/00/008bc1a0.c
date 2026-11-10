/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008bc1a0; name: FUN_008bc1a0
 */


int FUN_008bc1a0(long param_1,short param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  uVar1 = param_2 - 0x464;
  if (4 < uVar1) {
    if (param_2 != 0x32) {
      return 0;
    }
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar6 = (long *)(**(code **)*puVar9)(puVar9);
    lVar7 = FUN_00897d00();
    for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
    }
    plVar6 = *(long **)(puVar9[0xb] + 0x10);
    uVar8 = (**(code **)(*plVar6 + 0x50))(plVar6,*(undefined4 *)(puVar9[0xb] + 0x1c));
    iVar2 = FUN_0087a5f0();
    uVar3 = FUN_008783b0(uVar8);
    uVar4 = FUN_008783c0(uVar8);
    FUN_00864b10(uVar3,uVar4);
    iVar2 = FUN_00864ba0(iVar2 + (param_3 & 0xffff));
    iVar5 = FUN_0087b350(uVar8);
    return iVar2 - iVar5;
  }
  if (uVar1 < 5) {
    return *(int *)(&DAT_021450f0 + (long)(short)uVar1 * 4) * (param_3 & 0xffff);
  }
  return 0;
}


