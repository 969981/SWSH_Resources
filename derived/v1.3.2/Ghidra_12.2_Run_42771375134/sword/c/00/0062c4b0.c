/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062c4b0; name: FUN_0062c4b0
 */


void FUN_0062c4b0(undefined8 param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_2 + 2);
  if (lVar1 != 0) {
    if (*param_2 != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        FUN_006028c0(param_1,*(undefined8 *)(lVar1 + lVar2 + 8));
        *(undefined8 *)(*(long *)(param_2 + 2) + lVar2 + 8) = 0;
        FUN_006028c0(param_1,*(undefined8 *)(*(long *)(param_2 + 2) + lVar2 + 0x10));
        lVar1 = *(long *)(param_2 + 2) + lVar2;
        lVar2 = lVar2 + 0x18;
        *(undefined8 *)(lVar1 + 0x10) = 0;
        lVar1 = *(long *)(param_2 + 2);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *param_2);
    }
    FUN_006028c0(param_1);
    param_2[2] = 0;
    param_2[3] = 0;
  }
  lVar1 = *(long *)(param_2 + 6);
  if (lVar1 != 0) {
    if (param_2[5] != 0) {
      uVar3 = 0;
      do {
        FUN_006028c0(param_1,*(undefined8 *)(lVar1 + uVar3 * 8));
        *(undefined8 *)(*(long *)(param_2 + 6) + uVar3 * 8) = 0;
        lVar1 = *(long *)(param_2 + 6);
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_2[5]);
    }
    FUN_006028c0(param_1);
    param_2[6] = 0;
    param_2[7] = 0;
  }
  return;
}


