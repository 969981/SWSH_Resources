/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105b5e0; name: FUN_0105b5e0
 */


undefined8 FUN_0105b5e0(long param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar5 + 0x328) - *(long *)(lVar5 + 800);
  if (lVar6 != 0) {
    uVar4 = (lVar6 >> 3) * -0x70a3d70a3d70a3d7;
    uVar3 = 0;
    do {
      lVar6 = *(long *)(*(long *)(lVar5 + 0x218) + 0x290) + uVar3 * 0x4c0;
      plVar1 = *(long **)(lVar6 + 0xa8);
      plVar2 = *(long **)(lVar6 + 0xb0);
      if (plVar2 != plVar1) {
        plVar7 = plVar1;
        if (*plVar1 != *param_2) {
          do {
            plVar7 = plVar7 + 4;
            if (plVar2 == plVar7) goto LAB_0105b684;
          } while (*plVar7 != *param_2);
        }
        if ((plVar7 != plVar2) && (((long)plVar7 - (long)plVar1 & 0x1fffffffe0U) != 0x1fffffffe0)) {
          if ((uVar3 & 0xffffffff) < uVar4) {
            lVar6 = *(long *)(lVar5 + 800) + (uVar3 & 0xffffffff) * 200;
            uVar3 = ((long)plVar7 - (long)plVar1) * 0x8000000 >> 0x20;
            lVar5 = *(long *)(lVar6 + 0x50);
            if (uVar3 < (ulong)(*(long *)(lVar6 + 0x58) - lVar5 >> 2)) {
              *param_3 = *(undefined4 *)(lVar5 + uVar3 * 4);
              return 1;
            }
          }
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
      }
LAB_0105b684:
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return 0;
}


