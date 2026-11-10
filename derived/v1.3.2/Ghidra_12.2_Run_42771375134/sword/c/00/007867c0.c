/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007867c0; name: FUN_007867c0
 */


void FUN_007867c0(float param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_2 + 0x2a8) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar1 = FUN_00788660(*(long *)(param_2 + 0x288) + lVar3);
      if (((((uVar1 & 1) != 0) &&
           (uVar1 = FUN_00788780(*(long *)(param_2 + 0x288) + lVar3), (uVar1 & 1) != 0)) &&
          (uVar1 = FUN_00788930(*(long *)(param_2 + 0x288) + lVar3), (uVar1 & 1) != 0)) &&
         (uVar1 = FUN_007887d0(*(float *)(*(long *)(param_2 + 0x288) + lVar3 + 0x30) * param_1),
         (uVar1 & 1) != 0)) {
        lVar2 = *(long *)(param_2 + 0x288);
        if (*(char *)(lVar2 + lVar3 + 4) != '\0') {
          if (((uVar4 < *(uint *)(param_2 + 0x2a8)) && (uVar1 = FUN_00788660(), (uVar1 & 1) != 0))
             && ((FUN_00788790(*(long *)(param_2 + 0x288) + lVar3,0),
                 uVar4 < *(uint *)(param_2 + 0x2a8) &&
                 (uVar1 = FUN_00788660(*(long *)(param_2 + 0x288) + lVar3), (uVar1 & 1) != 0)))) {
            FUN_00788950(*(long *)(param_2 + 0x288) + lVar3);
            FUN_019a9320();
            lVar2 = FUN_00788950(*(long *)(param_2 + 0x288) + lVar3);
            *(undefined4 *)(lVar2 + 0x20) = 0;
          }
          *(undefined1 *)(*(long *)(param_2 + 0x288) + lVar3 + 4) = 0;
          lVar2 = *(long *)(param_2 + 0x288);
        }
        FUN_00788940(lVar2 + lVar3,0);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x40;
    } while (uVar4 < *(uint *)(param_2 + 0x2a8));
  }
  return;
}


