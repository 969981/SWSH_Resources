/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041dc00; name: FUN_0041dc00
 */


undefined8 FUN_0041dc00(long param_1,long param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((*(byte *)(param_1 + 0x5a) & 0xe) == 0) {
    lVar7 = *(long *)(param_2 + 0x1f8);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    if ((*(ushort *)(lVar7 + 0xc) & 0x7c) == 4) {
      iVar5 = *(int *)(lVar7 + 0x20);
    }
    else {
      iVar5 = 0;
    }
    *param_3 = iVar5;
    lVar9 = *(long *)(param_2 + 0x2d8);
    if ((*(uint *)(lVar7 + 0x18) & 0xffff0000) == 0x110000) {
      uVar3 = (uint)*(ushort *)PTR_DAT_02712ac0;
      if (*(int *)(lVar9 + 0x14) != 0) {
        uVar3 = (uint)*(ushort *)PTR_DAT_02712ac0 * 4;
      }
      iVar5 = uVar3 + iVar5;
      *param_3 = iVar5;
    }
    uVar2 = *(ushort *)PTR_DAT_02712ac0;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = ((iVar5 + (uint)uVar2) - 1) / (uint)uVar2;
    }
    *param_3 = uVar3 * uVar2;
    iVar5 = FUN_0041b150(uVar8);
    iVar6 = FUN_0041b110(uVar8);
    if (*param_3 + (iVar6 - iVar5) < *(int *)(lVar9 + 0xc) + *(int *)(lVar9 + 8)) {
      uVar1 = *(uint *)(lVar9 + 0x10);
      uVar3 = ((iVar6 - iVar5) - *(int *)(lVar9 + 8)) + *param_3 + *(int *)(lVar9 + 0x14);
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar3 / uVar1;
      }
      uVar3 = uVar3 - uVar4 * uVar1;
      *param_4 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
      return 1;
    }
  }
  return 0;
}


