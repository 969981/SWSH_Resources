/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008bb350; name: FUN_008bb350
 */


int FUN_008bb350(long param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  uVar2 = FUN_008c8330(*(undefined8 *)(param_1 + 0x78));
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar7 = (long *)(**(code **)*puVar10)(puVar10);
  lVar8 = FUN_00897d00();
  for (; plVar7 != (long *)lVar8; plVar7 = (long *)*plVar7) {
  }
  plVar7 = *(long **)(puVar10[0xb] + 0x10);
  uVar9 = (**(code **)(*plVar7 + 0x50))(plVar7,*(undefined4 *)(puVar10[0xb] + 0x1c));
  if (uVar2 == 0x32) {
    iVar3 = FUN_0087a5f0(uVar9);
    if (iVar3 == 100) {
      return 1;
    }
    iVar3 = FUN_0087a5f0(uVar9);
    return 100 - iVar3;
  }
  if ((uVar2 - 0x464 & 0xffff) < 5) {
    uVar1 = FUN_008bc1a0(param_1,uVar2,1);
    uVar4 = FUN_008783b0(uVar9);
    uVar5 = FUN_008783c0(uVar9);
    FUN_00864b10(uVar4,uVar5);
    iVar3 = FUN_00864ba0(100);
    iVar6 = FUN_0087b350(uVar9);
    return (int)((float)(uint)(iVar3 - iVar6) / (float)uVar1);
  }
  if (uVar2 == 0x469) {
    uVar2 = FUN_00879890(uVar9);
    return 10 - (uVar2 & 0xff);
  }
  if ((((uVar2 & 0xffff) - 0x2d < 5) || ((uVar2 & 0xffff) == 0x34)) ||
     ((uVar2 - 0x235 & 0xffff) < 6)) {
    iVar3 = FUN_014b7450(uVar9,uVar2);
  }
  else {
    if (5 < (uVar2 - 0xa9 & 0xffff)) {
      return 0;
    }
    iVar3 = FUN_014b76b0(uVar9,uVar2);
  }
  iVar6 = 0;
  if (iVar3 != -1) {
    iVar6 = iVar3;
  }
  return iVar6;
}


