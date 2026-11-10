/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01063160; name: FUN_01063160
 */


long * FUN_01063160(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  uVar5 = (param_1[0x65] - param_1[100] >> 3) * -0x70a3d70a3d70a3d7;
  iVar4 = (int)uVar5;
  plVar3 = param_1;
  if (0 < iVar4) {
    plVar3 = param_1 + 100;
    uVar6 = 0;
    do {
      lVar7 = *(long *)(param_1[0x43] + 0x290) + uVar6 * 0x4c0;
      plVar1 = *(long **)(lVar7 + 0xd8);
      plVar2 = *(long **)(lVar7 + 0xe0);
      if (plVar2 != plVar1) {
        plVar8 = plVar1;
        if (*plVar1 != *param_2) {
          do {
            plVar8 = plVar8 + 4;
            if (plVar2 == plVar8) goto LAB_01063210;
          } while (*plVar8 != *param_2);
        }
        if ((plVar8 != plVar2) && (((long)plVar8 - (long)plVar1 & 0x1fffffffe0U) != 0x1fffffffe0)) {
          if ((uVar5 <= (uVar6 & 0xffffffff)) ||
             (lVar7 = param_1[100] + (uVar6 & 0xffffffff) * 200, plVar3 = (long *)(lVar7 + 0x80),
             (ulong)(*(long *)(lVar7 + 0x88) - *plVar3 >> 4) <=
             (ulong)(((long)plVar8 - (long)plVar1) * 0x8000000 >> 0x20))) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          return plVar3;
        }
      }
LAB_01063210:
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)iVar4);
  }
  return plVar3;
}


