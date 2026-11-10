/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039af00; name: FUN_0039af00
 */


void FUN_0039af00(long param_1,long param_2,long param_3,undefined8 param_4,uint param_5,
                 long *param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  
  if (param_5 != 0) {
    if ((*(uint *)(param_6 + 1) & 0x7fffffff) == 0) {
      uVar5 = 0;
    }
    else {
      lVar3 = *param_6;
      uVar4 = 0;
      iVar2 = 0;
      do {
        uVar5 = *(uint *)(lVar3 + uVar4 * 4);
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
        uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
        iVar2 = iVar2 + ((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
      } while ((*(uint *)(param_6 + 1) & 0x7fffffff) != uVar4);
      uVar5 = 0;
      if (iVar2 != 0) {
        lVar6 = 0;
        uVar5 = 0;
        iVar2 = 0;
        while( true ) {
          uVar1 = *(uint *)(param_3 + lVar6 * 4);
          if ((*(uint *)(lVar3 + (ulong)(uVar1 >> 5) * 4) & 1 << ((ulong)uVar1 & 0x1f)) == 0) {
            iVar2 = iVar2 + 1;
          }
          else {
            (**(code **)(**(long **)(param_1 + 8) + 0x18))
                      (*(long **)(param_1 + 8),param_2 + (ulong)uVar5 * 4,param_3 + (ulong)uVar5 * 4
                       ,param_4,iVar2);
            uVar5 = (int)lVar6 + 1;
            iVar2 = 0;
          }
          if (lVar6 + 1U == (ulong)param_5) break;
          lVar6 = lVar6 + 1;
          lVar3 = *param_6;
        }
      }
    }
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),param_2 + (ulong)uVar5 * 4,param_3 + (ulong)uVar5 * 4,param_4
              );
    **(int **)(param_1 + 0x10) = **(int **)(param_1 + 0x10) + 1;
  }
  return;
}


