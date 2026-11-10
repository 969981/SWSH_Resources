/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00402b30; name: FUN_00402b30
 */


uint FUN_00402b30(long param_1,ulong param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  
  lVar5 = *(long *)(param_1 + 0x78);
  plVar8 = (long *)(lVar5 + (param_2 & 0xffffffff) * 0x18);
  uVar6 = *(uint *)(plVar8 + 2);
  lVar9 = *plVar8;
  if (lVar9 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(lVar9 + 0x1c);
  }
  if (uVar6 != 0xffffffff) {
    if (iVar4 != 0) {
      bVar10 = false;
      do {
        lVar11 = *(long *)(param_1 + 0x68);
        puVar1 = (uint *)(lVar11 + (ulong)uVar6 * 8);
        uVar7 = (ulong)*puVar1;
        lVar9 = *(long *)(lVar5 + uVar7 * 0x18);
        if ((lVar9 == 0) || (*(int *)(lVar5 + uVar7 * 0x18 + 0xc) != 1)) {
LAB_00402bc8:
          iVar2 = FUN_003ff490(lVar5 + uVar7 * 0x18 + 8);
joined_r0x00402bd4:
          if (iVar2 != 0) goto LAB_00402bd8;
LAB_00402c24:
          uVar3 = FUN_004024a0(param_1,*puVar1,param_3 & 1);
          param_3 = param_3 | uVar3;
          uVar6 = *(uint *)(lVar11 + (ulong)uVar6 * 8 + 4);
        }
        else {
          if (*(int *)(lVar9 + 0x1c) != 0) {
            *(undefined1 *)(lVar9 + 0x20) = 1;
            goto LAB_00402bc8;
          }
          if (bVar10) {
            bVar10 = true;
            *(undefined1 *)(lVar9 + 0x20) = 1;
            iVar2 = FUN_003ff490(lVar5 + uVar7 * 0x18 + 8);
            goto joined_r0x00402bd4;
          }
          *(int *)(lVar9 + 0x1c) = iVar4;
          bVar10 = true;
          iVar2 = FUN_003ff490(lVar5 + uVar7 * 0x18 + 8);
          if (iVar2 == 0) goto LAB_00402c24;
LAB_00402bd8:
          uVar6 = *(uint *)(lVar11 + (ulong)uVar6 * 8 + 4);
        }
        if (uVar6 == 0xffffffff) goto LAB_00402cc0;
        lVar5 = *(long *)(param_1 + 0x78);
      } while( true );
    }
    while( true ) {
      lVar9 = *(long *)(param_1 + 0x68);
      puVar1 = (uint *)(lVar9 + (ulong)uVar6 * 8);
      iVar4 = FUN_003ff490(lVar5 + (ulong)*puVar1 * 0x18 + 8);
      if (iVar4 == 0) {
        uVar3 = FUN_004024a0(param_1,*puVar1,param_3 & 1);
        param_3 = param_3 | uVar3;
        uVar6 = *(uint *)(lVar9 + (ulong)uVar6 * 8 + 4);
      }
      else {
        uVar6 = *(uint *)(lVar9 + (ulong)uVar6 * 8 + 4);
      }
      if (uVar6 == 0xffffffff) break;
      lVar5 = *(long *)(param_1 + 0x78);
    }
  }
LAB_00402cc0:
  FUN_003ff490(param_1 + 0x58);
  return param_3 & 1;
}


