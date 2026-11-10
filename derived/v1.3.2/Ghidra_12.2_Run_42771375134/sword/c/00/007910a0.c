/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007910a0; name: FUN_007910a0
 */


void FUN_007910a0(long param_1,int param_2,int param_3,undefined8 param_4,int param_5,uint param_6,
                 uint param_7)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (0 < *(int *)(lVar1 + 8)) {
    lVar2 = 0;
    puVar3 = (uint *)(*(long *)(lVar1 + 0x10) + (long)param_5 * 4 + 8);
    do {
      if ((*puVar3 & param_6) != 0) {
        param_3 = param_2 * 3 + param_3;
        FUN_019f3dd0(lVar1,param_3,*(undefined8 *)(*(long *)(param_1 + 0x788) + (long)param_2 * 8));
        FUN_019f3e80(*(undefined8 *)(param_1 + 0x78),param_3,param_4,param_5,param_6,param_7 & 1,1,0
                    );
        return;
      }
      lVar2 = lVar2 + 1;
      puVar3 = puVar3 + 0x27a;
    } while (lVar2 < *(int *)(lVar1 + 8));
  }
  return;
}


