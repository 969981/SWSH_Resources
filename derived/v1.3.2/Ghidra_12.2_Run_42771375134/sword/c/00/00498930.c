/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00498930; name: FUN_00498930
 */


void FUN_00498930(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  uint local_44;
  
  local_44 = param_4;
  lVar3 = FUN_00498330(param_2);
  if (lVar3 != 0) {
    if (param_4 != 0) {
      uVar6 = 0;
LAB_00498978:
      do {
        lVar4 = *(long *)(param_3 + uVar6 * 0x10);
        if ((lVar4 != -1) && (uVar1 = *(uint *)(param_1 + 0x38), uVar1 != 0)) {
          uVar2 = 0;
          if (uVar1 != 0) {
            uVar2 = (uint)lVar4 / uVar1;
          }
          for (plVar5 = *(long **)(*(long *)(param_1 + 0x30) +
                                  (ulong)((uint)lVar4 - uVar2 * uVar1) * 8); plVar5 != (long *)0x0;
              plVar5 = (long *)*plVar5) {
            if (plVar5[1] == lVar4) {
              FUN_0045b180(plVar5[2]);
              uVar6 = uVar6 + 1;
              if (param_4 <= uVar6) goto LAB_004989dc;
              goto LAB_00498978;
            }
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_4);
    }
LAB_004989dc:
    FUN_0045a9a0(lVar3,param_3,&local_44);
    lVar4 = FUN_004e9f10(param_2);
    if (lVar4 != 0) {
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      FUN_00498470(lVar4 + 0x20,lVar3 + 0xa0);
    }
  }
  return;
}


