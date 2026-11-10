/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d9170; name: FUN_001d9170
 */


void FUN_001d9170(float param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_2 + 1) >> 0x1e;
  *(float *)((long)param_2 + 0x114) = param_1;
  if (uVar1 == 2) {
    lVar2 = *param_2;
    if (*(char *)(lVar2 + 0x1fb9) == '\0') goto LAB_001d91d4;
  }
  else if (uVar1 != 3) {
    lVar2 = *param_2;
LAB_001d91d4:
    if ((0.0 < param_1) && (lVar2 != 0)) {
      *(undefined4 *)(param_2 + 0x23) = 0;
    }
    FUN_003be770(param_2 + 4,0);
    return;
  }
  if (param_1 <= 0.0) {
    FUN_001d1850(*param_2,param_2);
    *(uint *)((long)param_2 + 0x11c) = *(uint *)((long)param_2 + 0x11c) | 0x1000000;
    return;
  }
  if (uVar1 == 2) {
    lVar2 = *param_2;
    if (*(char *)(lVar2 + 0x1fb9) == '\0') goto LAB_001d9258;
  }
  else {
    if (uVar1 != 3) {
LAB_001d9258:
      *(undefined4 *)(param_2 + 0x23) = 0;
      *(float *)((long)param_2 + 0x114) = param_1;
      FUN_003be770(param_2 + 4,1);
      return;
    }
    lVar2 = *param_2;
  }
  *(undefined4 *)(param_2 + 0x23) = 0;
  *(float *)((long)param_2 + 0x114) = param_1;
  FUN_001d1850(lVar2,param_2);
  *(uint *)((long)param_2 + 0x11c) =
       *(uint *)((long)param_2 + 0x11c) & 0xf8000000 |
       *(uint *)((long)param_2 + 0x11c) & 0xffffff | 0x5000000;
  return;
}


