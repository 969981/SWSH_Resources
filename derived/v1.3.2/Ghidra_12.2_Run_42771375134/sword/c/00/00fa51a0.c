/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa51a0; name: FUN_00fa51a0
 */


undefined8
FUN_00fa51a0(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  undefined2 uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  uint *puVar11;
  
  uVar5 = FUN_012229c0(param_3);
  uVar3 = FUN_012229d0(param_3);
  uVar9 = FUN_00fcb4c0(uVar5,uVar3);
  if (((((uVar9 & 1) != 0) ||
       (piVar10 = (int *)FUN_00fa5fc0(*(undefined8 *)(param_1 + 0x60),param_2,param_4),
       piVar10 == (int *)0x0)) ||
      (puVar11 = (uint *)((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (8 - (long)*piVar10))),
      puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11), *puVar11 <= param_5)) ||
     (puVar11 = puVar11 + (ulong)param_5 + 1, piVar10 = (int *)((long)puVar11 + (ulong)*puVar11),
     piVar10 == (int *)0x0)) goto LAB_00fa531c;
  if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 0xf) ||
     (uVar9 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[7], uVar9 == 0)) {
    iVar6 = FUN_01222a10(param_3);
LAB_00fa5274:
    bVar2 = iVar6 == 1;
  }
  else {
    iVar7 = *(int *)((long)piVar10 + uVar9);
    iVar6 = FUN_01222a10(param_3);
    bVar2 = iVar6 == 2;
    if (iVar7 == 0) goto LAB_00fa5274;
  }
  if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 7) ||
     (uVar9 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3], uVar9 == 0)) {
    iVar6 = FUN_012229c0(param_3);
    if (iVar6 != 0) goto LAB_00fa531c;
  }
  else {
    iVar6 = *(int *)((long)piVar10 + uVar9);
    iVar7 = FUN_012229c0(param_3);
    if (iVar6 != iVar7) goto LAB_00fa531c;
  }
  if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 9) ||
     (uVar9 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar9 == 0)) {
    sVar4 = FUN_012229d0(param_3);
    if (sVar4 != 0) goto LAB_00fa531c;
  }
  else {
    uVar1 = *(uint *)((long)piVar10 + uVar9);
    uVar8 = FUN_012229d0(param_3);
    if (uVar1 != (uVar8 & 0xffff)) goto LAB_00fa531c;
  }
  if (!(bool)(bVar2 ^ 1)) {
    return 1;
  }
LAB_00fa531c:
  FUN_01222d50(param_3,"LocalNestHolePokemon",2);
  return 0;
}


