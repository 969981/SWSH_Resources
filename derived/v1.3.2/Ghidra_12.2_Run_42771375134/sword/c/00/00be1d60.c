/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00be1d60; name: FUN_00be1d60
 */


bool FUN_00be1d60(int *param_1,long param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined1 auStack_58 [8];
  
  if (((*(long *)(param_2 + 0x10) == 0) || (*param_1 == 0)) || (*(long *)(param_1 + 0x212) != 0x644)
     ) {
    return false;
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_3;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar9 = (**(code **)(*param_3 + 0x10))(param_3,400,0x10);
  if (lVar9 == 0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
  }
  FUN_009fe380(lVar9,param_3);
  *(long **)(lVar9 + 8) = param_3;
  *(long *)(lVar9 + 0x10) = lVar9;
  *(undefined8 *)(lVar9 + 0x18) = 400;
  *(undefined8 *)(lVar9 + 0x20) = 0x10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  if (lVar9 == 0) {
    return false;
  }
  plVar12 = (long *)(lVar9 + 0x48);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  if (*(long *)(param_1 + 0x212) == 0x644) {
    uVar10 = FUN_009fe850(lVar9,param_1 + 0x12);
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))(plVar12);
    if ((((uVar10 & 1) != 0) && (*(long *)PTR_DAT_02716748 != 0)) &&
       (lVar8 = FUN_007ad1e0(), lVar8 != 0)) {
      FUN_017cbe80(auStack_58);
      uVar10 = FUN_0185c210(lVar8,auStack_58);
      if ((uVar10 & 1) != 0) {
        lVar8 = FUN_017cc550(auStack_58);
        iVar2 = *(int *)(param_2 + 0x4c);
        iVar3 = *(int *)(param_2 + 0x50);
        iVar4 = *(int *)(param_2 + 0x54);
        uVar6 = FUN_009fe1a0(lVar9,0xe);
        uVar7 = FUN_009fe1a0(lVar9,0xf);
        uVar11 = (lVar8 - *(long *)(param_1 + 0xe)) * 1000000000;
        uVar10 = ((long)uVar11 >> 0x20) * 0x48f948e3 + ((uVar11 & 0xfffffe00) * 0x48f948e3 >> 0x20);
        lVar8 = (((long)uVar11 >> 0x20) * 0x683fff6f + ((long)uVar10 >> 0x20) +
                 ((long)((uVar11 & 0xfffffe00) * 0x683fff6f + (uVar10 & 0xffffffff)) >> 0x20) >>
                0x2d) - ((long)uVar11 >> 0x3f);
        if (-1 < lVar8) {
          if (uVar7 == 0 && uVar6 == 0) {
            bVar5 = true;
          }
          else {
            uVar1 = iVar3 + iVar2 + iVar4;
            if ((uVar6 == 0) || (uVar7 != 0)) {
              lVar8 = (lVar8 + 1) * (ulong)uVar7;
              if ((uVar6 == 0) && (uVar7 != 0)) {
                bVar5 = (long)(ulong)uVar1 < lVar8;
              }
              else {
                bVar5 = uVar1 < uVar6 && (long)(ulong)uVar1 < lVar8;
              }
            }
            else {
              bVar5 = uVar1 < uVar6;
            }
          }
          goto LAB_00be1f9c;
        }
      }
    }
  }
  else {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  bVar5 = false;
LAB_00be1f9c:
  (**(code **)(*plVar12 + 0x18))(plVar12);
  return bVar5;
}


