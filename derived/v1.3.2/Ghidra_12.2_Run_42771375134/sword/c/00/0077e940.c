/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077e940; name: FUN_0077e940
 */


void FUN_0077e940(long param_1,long param_2,uint param_3,int param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  FUN_0077d490(param_5);
  FUN_0077d660(param_5);
  if (*(int *)(*(long *)(param_1 + 0x90) + 8) == 0) {
    if (param_3 != 0) {
      uVar2 = param_4 * 0x2983 + 0x7c89;
      lVar3 = 0;
      do {
        uVar1 = FUN_0077d5c0(param_5,*(ushort *)(param_2 + lVar3 * 2) ^ uVar2);
        if ((uVar1 & 1) == 0) goto LAB_0077ea04;
        uVar2 = uVar2 << 3 | uVar2 >> 0xd & 7;
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < param_3);
    }
  }
  else if (param_3 != 0) {
    lVar3 = 0;
    do {
      uVar1 = FUN_0077d5c0(param_5,*(undefined2 *)(param_2 + lVar3 * 2));
      if ((uVar1 & 1) == 0) {
LAB_0077ea04:
        FUN_0077d660(param_5);
        return;
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < param_3);
  }
  FUN_0077d630(param_5);
  return;
}


