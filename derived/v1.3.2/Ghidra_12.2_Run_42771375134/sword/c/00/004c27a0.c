/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c27a0; name: FUN_004c27a0
 */


void FUN_004c27a0(long param_1,int param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  if (((param_3 != -1) && (param_2 != 0)) && (*(long *)PTR_DAT_02712de8 != 0)) {
    for (lVar2 = *(long *)(param_1 + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      if (*(int *)(lVar2 + 0x3c) == param_2) {
        if (*(long *)(lVar2 + 0x10) == 0) {
          if (param_3 == -1) goto LAB_004c2828;
        }
        else if (*(long *)(*(long *)(lVar2 + 0x10) + 0x48) == param_3) goto LAB_004c2828;
      }
    }
    lVar2 = FUN_004c2660();
    if (lVar2 != 0) {
LAB_004c2828:
      if (param_5 != 0) {
        uVar3 = 0;
        do {
          lVar1 = param_4 + (ulong)(uVar3 & 0xffff) * 8;
          FUN_004c4350(lVar2,lVar1,*(undefined4 *)(lVar1 + 4));
          uVar3 = uVar3 + 1;
        } while ((uVar3 & 0xffff) < param_5);
      }
    }
  }
  return;
}


