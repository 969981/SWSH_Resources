/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2c070; name: FUN_00f2c070
 */


undefined4 FUN_00f2c070(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_18 [8];
  
  lVar4 = *(long *)(param_1 + (long)param_2 * 8 + 0x68);
  if (lVar4 == 0) {
    return 0;
  }
  lVar4 = *(long *)(lVar4 + 0x560);
  if (lVar4 == 0) {
    return 0;
  }
  lVar4 = FUN_007959b0(lVar4,auStack_18);
  if (lVar4 == 0) {
    return 0;
  }
  lVar5 = *(long *)(*(long *)(lVar4 + 0x218) + 0x290);
  plVar1 = *(long **)(lVar5 + 0xa8);
  plVar2 = *(long **)(lVar5 + 0xb0);
  if (plVar1 == plVar2) {
    plVar6 = plVar2;
  }
  else {
    plVar6 = plVar1;
    if (*plVar1 != -0x7812ffddf9db47d3) {
      do {
        plVar6 = plVar6 + 4;
        if (plVar2 == plVar6) {
          lVar5 = *(long *)(lVar4 + 800);
          plVar6 = plVar2;
          plVar7 = plVar2;
          if (*(long *)(lVar4 + 0x328) == lVar5) goto LAB_00f2c178;
          goto LAB_00f2c124;
        }
      } while (*plVar6 != -0x7812ffddf9db47d3);
      lVar5 = *(long *)(lVar4 + 800);
      plVar7 = plVar6;
      if (*(long *)(lVar4 + 0x328) == lVar5) goto LAB_00f2c178;
      goto LAB_00f2c124;
    }
  }
  lVar5 = *(long *)(lVar4 + 800);
  plVar7 = plVar1;
  if (*(long *)(lVar4 + 0x328) == lVar5) {
LAB_00f2c178:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
LAB_00f2c124:
  uVar3 = ((long)plVar7 - (long)plVar1) * 0x8000000 >> 0x20;
  if (plVar6 == plVar2) {
    uVar3 = 0xffffffffffffffff;
  }
  if ((ulong)(*(long *)(lVar5 + 0x58) - *(long *)(lVar5 + 0x50) >> 2) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  return *(undefined4 *)(*(long *)(lVar5 + 0x50) + uVar3 * 4);
}


