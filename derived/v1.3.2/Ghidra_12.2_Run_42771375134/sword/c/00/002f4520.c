/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f4520; name: FUN_002f4520
 */


void FUN_002f4520(long param_1,uint param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  
  uVar1 = nn::os::GetThreadAvailableCoreMask();
  if (param_2 != 0) {
    uVar5 = (ulong)param_2;
    if (uVar5 - 1 < 3) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      puVar4 = (undefined4 *)(param_1 + 8);
      do {
        lVar3 = lVar3 + 4;
        puVar4[-2] = uVar1;
        puVar4[-1] = uVar1;
        *puVar4 = uVar1;
        puVar4[1] = uVar1;
        puVar4 = puVar4 + 4;
      } while (uVar5 - (uVar5 & 3) != lVar3);
    }
    if ((param_2 & 3) != 0) {
      lVar2 = -(uVar5 & 3);
      puVar4 = (undefined4 *)(param_1 + lVar3 * 4);
      do {
        lVar2 = lVar2 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while (lVar2 != 0);
    }
  }
  return;
}


