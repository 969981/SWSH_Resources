/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ef4b0; name: FUN_001ef4b0
 */


void FUN_001ef4b0(undefined8 param_1,long *param_2,byte param_3,byte param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_001e1e40();
  fVar2 = *(float *)(lVar1 + 0x2220);
  fVar4 = *(float *)((long)param_2 + 0x114);
  fVar3 = fVar2;
  if ((fVar4 < fVar2 & param_4) == 0) {
    fVar3 = fVar4;
  }
  if (((fVar4 < fVar2 & param_4) == 0) && (((param_3 | param_4) & (int)param_2[0x23] != 0) == 0)) {
    return;
  }
  if (*(uint *)(param_2 + 1) >> 0x1e == 2) {
    lVar1 = *param_2;
    if (*(char *)(lVar1 + 0x1fb9) == '\0') goto LAB_001ef578;
  }
  else {
    if (*(uint *)(param_2 + 1) >> 0x1e != 3) {
LAB_001ef578:
      *(undefined4 *)(param_2 + 0x23) = 0;
      *(float *)((long)param_2 + 0x114) = fVar3;
      FUN_003be770(param_2 + 4,1);
      return;
    }
    lVar1 = *param_2;
  }
  *(undefined4 *)(param_2 + 0x23) = 0;
  *(float *)((long)param_2 + 0x114) = fVar3;
  FUN_001d1850(lVar1,param_2);
  *(uint *)((long)param_2 + 0x11c) =
       *(uint *)((long)param_2 + 0x11c) & 0xf8000000 |
       *(uint *)((long)param_2 + 0x11c) & 0xffffff | 0x5000000;
  return;
}


