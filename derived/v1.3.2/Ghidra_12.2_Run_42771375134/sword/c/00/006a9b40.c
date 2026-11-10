/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a9b40; name: FUN_006a9b40
 */


void FUN_006a9b40(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  FUN_006a0050();
  *param_1 = (long)(PTR_DAT_02715130 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) {
    lVar2 = FUN_0075ecb0();
  }
  param_1[4] = lVar2;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_006a9da0(param_1 + 1,
               (*(long *)(param_2 + 0x328) - *(long *)(param_2 + 800) >> 3) * -0x70a3d70a3d70a3d7);
  lVar2 = param_1[1];
  if (param_1[2] != lVar2) {
    uVar10 = 0;
    uVar8 = 1;
    do {
      uVar9 = (ulong)(int)(uVar8 - 1);
      if ((ulong)((*(long *)(param_2 + 0x328) - *(long *)(param_2 + 800) >> 3) * -0x70a3d70a3d70a3d7
                 ) <= uVar9) {
LAB_006a9d94:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar3 = lVar2 + uVar10 * 0xa8;
      uVar5 = (ulong)*(uint *)(*(long *)(param_2 + 800) + uVar9 * 200 + 0x28);
      plVar4 = (long *)(lVar3 + 8);
      lVar6 = *plVar4;
      plVar7 = (long *)(lVar3 + 0x10);
      lVar3 = *plVar7 - lVar6 >> 2;
      bVar1 = uVar5 < (ulong)(lVar3 * -0x5555555555555555);
      lVar3 = uVar5 + lVar3 * 0x5555555555555555;
      if (bVar1 || lVar3 == 0) {
        if (bVar1) {
          *plVar7 = lVar6 + uVar5 * 0xc;
        }
      }
      else {
        FUN_006ab540(plVar4,lVar3);
      }
      if ((ulong)((*(long *)(param_2 + 0x328) - *(long *)(param_2 + 800) >> 3) * -0x70a3d70a3d70a3d7
                 ) <= uVar9) goto LAB_006a9d94;
      lVar3 = *(long *)(param_2 + 800) + uVar9 * 200;
      lVar6 = lVar2 + uVar10 * 0xa8;
      uVar5 = (ulong)(*(long *)(lVar3 + 0x58) - *(long *)(lVar3 + 0x50)) >> 2 & 0xffffffff;
      plVar7 = (long *)(lVar6 + 0x48);
      plVar4 = (long *)(lVar6 + 0x40);
      lVar6 = *plVar4;
      lVar3 = *plVar7 - lVar6 >> 2;
      bVar1 = uVar5 < (ulong)(lVar3 * -0x5555555555555555);
      lVar3 = uVar5 + lVar3 * 0x5555555555555555;
      if (bVar1 || lVar3 == 0) {
        if (bVar1) {
          *plVar7 = lVar6 + uVar5 * 0xc;
        }
      }
      else {
        FUN_006ab540(plVar4,lVar3);
      }
      if ((ulong)((*(long *)(param_2 + 0x328) - *(long *)(param_2 + 800) >> 3) * -0x70a3d70a3d70a3d7
                 ) <= uVar9) goto LAB_006a9d94;
      lVar3 = *(long *)(param_2 + 800) + uVar9 * 200;
      lVar2 = lVar2 + uVar10 * 0xa8;
      uVar10 = (ulong)(*(long *)(lVar3 + 0x88) - *(long *)(lVar3 + 0x80)) >> 4 & 0xffffffff;
      plVar7 = (long *)(lVar2 + 0x80);
      plVar4 = (long *)(lVar2 + 0x78);
      lVar2 = *plVar4;
      uVar9 = *plVar7 - lVar2 >> 5;
      if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
        if (uVar10 < uVar9) {
          *plVar7 = lVar2 + uVar10 * 0x20;
        }
      }
      else {
        FUN_006ab790(plVar4,uVar10 - uVar9);
      }
      lVar2 = param_1[1];
      uVar10 = (ulong)uVar8;
      uVar8 = uVar8 + 1;
    } while (uVar10 < (ulong)((param_1[2] - lVar2 >> 3) * -0x30c30c30c30c30c3));
  }
  return;
}


