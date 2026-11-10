/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00414ea0; name: FUN_00414ea0
 */


int FUN_00414ea0(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 0xe8);
  if (uVar1 == 0) {
    return 0;
  }
  if (*(uint *)(param_1 + 0xc0) == 0) {
    lVar5 = (ulong)uVar1 * 0x18;
    do {
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0xe0);
  lVar4 = lVar5 + (ulong)uVar1 * 0x18;
  iVar3 = 0;
  do {
    plVar6 = (long *)(*(long *)(param_1 + 0xb8) + 8);
    lVar7 = (ulong)*(uint *)(param_1 + 0xc0) << 4;
    do {
      if ((int)plVar6[-1] == *(int *)(lVar5 + 4)) {
        if ((lVar7 != 0) && (lVar7 = *plVar6, lVar7 != 0)) {
          uVar1 = *(int *)(lVar5 + 8) - param_2;
          if ((*(ushort *)(lVar7 + 0xc) & 0x7c) == 4) {
            if ((((int)uVar1 < 0) || ((*(ushort *)(lVar7 + 0xc) >> 1 & 1) == 0)) ||
               (iVar8 = 0, *(int *)(lVar5 + 0x14) != 0)) {
              iVar8 = *(int *)(lVar7 + 0x20);
            }
            uVar2 = *(uint *)(lVar7 + 0x18);
          }
          else {
            iVar8 = 0;
            uVar2 = *(uint *)(lVar7 + 0x18);
          }
          if ((uVar2 & 0xffff0000) == 0x110000) {
            if (*(int *)(lVar5 + 0x14) == 0) {
              iVar8 = (uint)*(ushort *)PTR_DAT_02712ac0 + iVar8;
            }
            else {
              iVar8 = (uint)*(ushort *)PTR_DAT_02712ac0 * 4 + iVar8;
            }
          }
          iVar8 = iVar8 - (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
          if (iVar8 <= iVar3) {
            iVar8 = iVar3;
          }
          iVar3 = iVar8;
        }
        break;
      }
      lVar7 = lVar7 + -0x10;
      plVar6 = plVar6 + 2;
    } while (lVar7 != 0);
    lVar5 = lVar5 + 0x18;
    if (lVar5 == lVar4) {
      return iVar3;
    }
  } while( true );
}


