/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ead7c0; name: FUN_00ead7c0
 */


void FUN_00ead7c0(undefined4 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_50 [24];
  long local_38;
  
  FUN_006cf0a0(auStack_50,param_3);
  iVar1 = FUN_0072c700(param_2 + 0x210,auStack_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (-1 < iVar1) {
    lVar2 = *(long *)(*(long *)(param_2 + 0x218) + 0x290) + (long)iVar1 * 0x4c0;
    plVar5 = *(long **)(lVar2 + 0xa8);
    plVar3 = *(long **)(lVar2 + 0xb0);
    if (plVar3 != plVar5) {
      plVar7 = plVar5;
      if (*plVar5 != -0x430c1ea084c8c51c) {
        do {
          plVar7 = plVar7 + 4;
          if (plVar3 == plVar7) {
            return;
          }
        } while (*plVar7 != -0x430c1ea084c8c51c);
      }
      iVar4 = (int)((ulong)((long)plVar7 - (long)plVar5) >> 5);
      if (plVar7 == plVar3) {
        iVar4 = -1;
      }
      if (-1 < iVar4) {
        if ((ulong)(long)iVar1 <
            (ulong)((*(long *)(param_2 + 0x328) - *(long *)(param_2 + 800) >> 3) *
                   -0x70a3d70a3d70a3d7)) {
          lVar2 = *(long *)(param_2 + 800) + (long)iVar1 * 200;
          lVar6 = *(long *)(lVar2 + 0x50);
          if ((ulong)(long)iVar4 < (ulong)(*(long *)(lVar2 + 0x58) - lVar6 >> 2)) {
            *(undefined4 *)(lVar6 + (long)iVar4 * 4) = param_1;
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
    }
  }
  return;
}


