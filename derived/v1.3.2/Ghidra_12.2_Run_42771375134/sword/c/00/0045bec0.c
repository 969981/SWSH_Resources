/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045bec0; name: FUN_0045bec0
 */


uint * FUN_0045bec0(long param_1,long param_2,uint *param_3,int param_4,undefined4 param_5,
                   code *param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 8);
  if (lVar10 != 0) {
    uVar3 = *(ushort *)(param_2 + 4);
    puVar9 = (uint *)(lVar10 + (ulong)uVar3 * 0xc);
    uVar1 = *param_3;
    iVar7 = 0;
    iVar8 = *(ushort *)(param_2 + 6) - 1;
    do {
      while( true ) {
        iVar4 = iVar8 - iVar7;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        iVar4 = iVar7 + (iVar4 >> 1);
        puVar6 = puVar9 + (long)iVar4 * 3;
        uVar2 = *puVar6;
        if (uVar1 > uVar2 || uVar2 == uVar1) break;
        iVar8 = iVar4 + -1;
        if (iVar8 < iVar7) goto LAB_0045bf58;
      }
      if (uVar1 <= uVar2) {
        if (param_4 + -1 == 0) {
          if (param_6 == (code *)0x0) {
            return puVar6;
          }
          uVar5 = (*param_6)(param_5,puVar6[1],param_7);
          if ((uVar5 & 1) == 0) {
            puVar6 = (uint *)0x0;
          }
          return puVar6;
        }
        puVar6 = (uint *)FUN_0045bec0(param_1,puVar6,param_3 + 1,param_4 + -1,param_5,param_6,
                                      param_7);
        if (puVar6 != (uint *)0x0) {
          return puVar6;
        }
        break;
      }
      iVar7 = iVar4 + 1;
    } while (iVar7 <= iVar8);
LAB_0045bf58:
    if ((*puVar9 == 0) && (*param_3 != 0)) {
      if (param_4 + -1 == 0) {
        if (param_6 == (code *)0x0) {
          return puVar9;
        }
        uVar5 = (*param_6)(param_5,*(undefined4 *)(lVar10 + (ulong)uVar3 * 0xc + 4),param_7);
        if ((uVar5 & 1) == 0) {
          puVar9 = (uint *)0x0;
        }
        return puVar9;
      }
      puVar9 = (uint *)FUN_0045bec0(param_1,puVar9,param_3 + 1,param_4 + -1,param_5,param_6,param_7)
      ;
      if (puVar9 != (uint *)0x0) {
        return puVar9;
      }
    }
  }
  return (uint *)0x0;
}


