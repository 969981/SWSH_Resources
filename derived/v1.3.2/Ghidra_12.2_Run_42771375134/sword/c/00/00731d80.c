/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00731d80; name: FUN_00731d80
 */


void FUN_00731d80(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar4 = *(long *)(param_1 + 0x60);
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0xb8) + 0x260) +
                    (long)*(int *)(param_1 + 0x1d0) * 0x60 + 0x40);
  FUN_00722060(*(undefined8 *)(param_1 + 0x290),lVar4);
  FUN_00734d40(*(undefined8 *)(param_1 + 0x208),lVar4);
  lVar6 = *(long *)(lVar5 + 8);
  lVar5 = *(long *)(lVar5 + 0x10);
  if (lVar6 != lVar5) {
    iVar7 = 0;
    do {
      local_70 = *(undefined8 *)(lVar6 + 0x10);
      uVar3 = (**(code **)(param_1 + 0x210))(param_1 + 0x230,&local_70);
      if ((uVar3 & 1) != 0) {
        FUN_00730240(*(undefined8 *)(param_1 + 0x200),
                     *(undefined4 *)(*(long *)(lVar6 + 0x10) + 0x4a0),lVar4);
        FUN_00734cb0(*(undefined8 *)(param_1 + 0x208),(long)iVar7,lVar4);
        iVar1 = *(int *)(param_1 + 0x1dc);
        lVar9 = *(long *)(lVar6 + 8);
        iVar2 = *(int *)PTR_DAT_02715500;
        lVar8 = *(long *)(lVar4 + 0x58);
        if (iVar1 == 0) {
          local_70 = 0;
          uStack_68 = 0;
          thunk_FUN_0199c850(lVar9 + 0x58,&local_70);
          FUN_0199cce0(lVar8 + (long)iVar2 * 0x170,3,1,&local_70,*(undefined4 *)(lVar9 + 0xc4),0);
        }
        else {
          local_70 = 0;
          uStack_68 = 0;
          thunk_FUN_0199c850(lVar9 + 0x58,&local_70);
          FUN_0199cd60(lVar8 + (long)iVar2 * 0x170,3,1,&local_70,*(undefined4 *)(lVar9 + 0xc4),0,
                       iVar1,0);
        }
        iVar7 = iVar7 + 1;
      }
      lVar6 = lVar6 + 0x18;
    } while (lVar5 != lVar6);
  }
  return;
}


