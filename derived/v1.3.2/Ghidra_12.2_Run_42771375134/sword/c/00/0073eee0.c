/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073eee0; name: FUN_0073eee0
 */


void FUN_0073eee0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar5 = PTR_DAT_02715500;
  lVar11 = *(long *)(param_1 + 0x6d0);
  lVar7 = *(long *)(param_1 + 0x6d8);
  do {
    if (lVar11 == lVar7) {
      return;
    }
    while( true ) {
      FUN_0199dfb0(*(undefined4 *)(lVar11 + 0x6a8),
                   *(long *)(param_2 + 0x58) + (long)*(int *)puVar5 * 0x170);
      FUN_0072b360(*(undefined8 *)(lVar11 + 0x5e0),param_2);
      FUN_00734cb0(*(undefined8 *)(lVar11 + 0x5e8),0,param_2);
      FUN_0199ce00(*(long *)(param_2 + 0x58) + (long)*(int *)puVar5 * 0x170,
                   *(long *)(param_1 + 0x878) + (long)*(int *)(lVar11 + 0x610) * 0x30 + 0x1e8);
      FUN_0199cfb0(*(long *)(param_2 + 0x58) + (long)*(int *)puVar5 * 0x170,
                   *(long *)(param_1 + 0x878) + (long)*(int *)(lVar11 + 0x60c) * 0x1c + 0x178);
      FUN_0199cf00(*(long *)(param_2 + 0x58) + (long)*(int *)puVar5 * 0x170,
                   *(long *)(param_1 + 0x878) + (long)*(int *)(lVar11 + 0x608) * 0x28 + 0xd8);
      lVar8 = *(long *)(lVar11 + 0x5d0) * 0x1f0;
      if (lVar8 != 0) {
        lVar10 = lVar11;
        do {
          FUN_006fc5c0(lVar10);
          iVar3 = *(int *)puVar5;
          lVar9 = *(long *)(param_2 + 0x58);
          uVar1 = *(undefined4 *)(lVar10 + 0x1dc);
          uVar2 = *(undefined4 *)(lVar10 + 0x1d8);
          uVar6 = FUN_006fc6f0(lVar10);
          FUN_0199e180(lVar9 + (long)iVar3 * 0x170,uVar1,uVar2,uVar6,
                       *(long *)(lVar10 + 0x168) + 0xd0);
          lVar10 = lVar10 + 0x1f0;
        } while (lVar10 != lVar11 + lVar8);
      }
      FUN_00722060(*(undefined8 *)(lVar11 + 0x5f8),param_2);
      uVar4 = *(uint *)(lVar11 + 0x5f0) % 6;
      if (uVar4 != 4) break;
      lVar8 = *(long *)(lVar11 + 0x600);
      iVar3 = *(int *)puVar5;
      lVar10 = *(long *)(param_2 + 0x58);
      local_70 = 0;
      uStack_68 = 0;
      thunk_FUN_0199c850(lVar8 + 0x58,&local_70);
      FUN_0199cce0(lVar10 + (long)iVar3 * 0x170,3,1,&local_70,*(undefined4 *)(lVar8 + 0xc4),0);
      lVar11 = lVar11 + 0x6b0;
      if (lVar11 == lVar7) {
        return;
      }
    }
    if (uVar4 < 4) {
      FUN_0199cc20(*(long *)(param_2 + 0x58) + (long)*(int *)puVar5 * 0x170,
                   *(undefined4 *)(&DAT_01d4a930 + (ulong)uVar4 * 4),
                   *(undefined4 *)
                    (*(long *)(*(long *)(*(long *)(lVar11 + 0x5f8) + 0x98) + 0x58) + 0x6c),0);
    }
    lVar11 = lVar11 + 0x6b0;
  } while( true );
}


