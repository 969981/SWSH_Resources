/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00730100; name: FUN_00730100
 */


void FUN_00730100(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  lVar2 = *(long *)(param_1 + 0x170);
  lVar3 = *(long *)(param_1 + 0x178);
  if (lVar3 != lVar2) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)(lVar2 + uVar5 * 0x10);
      if (*(long *)(lVar4 + 0x758) != *(long *)(lVar4 + 0x750)) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x68) + 0x290) + uVar5 * 0x4c0;
        plVar6 = *(long **)(lVar4 + 0x48);
        plVar1 = *(long **)(lVar4 + 0x50);
        if (plVar6 != plVar1) {
          do {
            if (*plVar6 == *param_2) {
              FUN_0072b690(*(undefined8 *)(*(long *)(param_1 + 0x170) + uVar5 * 0x10),plVar6 + 4,
                           param_3,param_4 & 1);
            }
            plVar6 = plVar6 + 0x48;
          } while (plVar1 != plVar6);
          lVar2 = *(long *)(param_1 + 0x170);
          lVar3 = *(long *)(param_1 + 0x178);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)(lVar3 - lVar2 >> 4));
  }
  return;
}


