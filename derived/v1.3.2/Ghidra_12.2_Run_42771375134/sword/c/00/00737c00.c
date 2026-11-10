/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00737c00; name: FUN_00737c00
 */


void FUN_00737c00(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar7 = *(long *)(param_1 + 0x60);
  lVar4 = *(long *)(param_1 + 0x218);
  plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0xb8) + 0x260) +
                      (long)*(int *)(param_1 + 0x1d0) * 0x60 + 0x40);
  if (lVar4 == 0) {
    lVar4 = *plVar8;
  }
  FUN_00722060(lVar4,lVar7);
  FUN_00734d40(*(undefined8 *)(param_1 + 0x208),lVar7);
  lVar4 = plVar8[1];
  lVar1 = plVar8[2];
  if (lVar4 != lVar1) {
    iVar9 = 0;
    do {
      piVar5 = *(int **)(*(long *)(lVar4 + 0x10) + 0x40);
      if (((0x24 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
          (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x12], uVar6 != 0)) &&
         (*(char *)((long)piVar5 + uVar6) != '\0')) {
        FUN_00730240(*(undefined8 *)(param_1 + 0x200),
                     *(undefined4 *)(*(long *)(lVar4 + 0x10) + 0x4a0),lVar7);
        FUN_00734cb0(*(undefined8 *)(param_1 + 0x208),(long)iVar9,lVar7);
        iVar2 = *(int *)(param_1 + 0x1dc);
        lVar11 = *(long *)(lVar4 + 8);
        iVar3 = *(int *)PTR_DAT_02715500;
        lVar10 = *(long *)(lVar7 + 0x58);
        if (iVar2 == 0) {
          local_70 = 0;
          uStack_68 = 0;
          thunk_FUN_0199c850(lVar11 + 0x58,&local_70);
          FUN_0199cce0(lVar10 + (long)iVar3 * 0x170,3,1,&local_70,*(undefined4 *)(lVar11 + 0xc4),0);
        }
        else {
          local_70 = 0;
          uStack_68 = 0;
          thunk_FUN_0199c850(lVar11 + 0x58,&local_70);
          FUN_0199cd60(lVar10 + (long)iVar3 * 0x170,3,1,&local_70,*(undefined4 *)(lVar11 + 0xc4),0,
                       iVar2,0);
        }
        iVar9 = iVar9 + 1;
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar1 != lVar4);
  }
  return;
}


