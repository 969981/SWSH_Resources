/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e72c50; name: FUN_00e72c50
 */


void FUN_00e72c50(long *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  
  uVar4 = (**(code **)(*(long *)param_1[0xf] + 0x208))
                    ((long *)param_1[0xf],*(undefined4 *)((long)param_1 + 0x294));
  if ((int)param_1[0x52] == 4) {
    if (((char)param_1[0x59] != '\0') &&
       (uVar5 = FUN_00dbfcc0(param_1[0xf],PTR_DAT_0271fde0), (uVar5 & 1) != 0)) {
      *(int *)((long)param_1 + 0x2cc) = *(int *)((long)param_1 + 0x2cc) + 1;
    }
    iVar1 = *(int *)((long)param_1 + 0x2cc);
    iVar2 = *(int *)((long)param_1 + 0x294);
    bVar3 = FUN_00dbfcc0(param_1[0xf],PTR_DAT_0271fde8);
    *(byte *)(param_1 + 0x59) = bVar3 & 1;
    if ((uVar4 & 1) == 0 && iVar1 < iVar2) {
      return;
    }
  }
  else if ((uVar4 & 1) == 0) {
    return;
  }
  (**(code **)(*(long *)param_1[0xf] + 400))((long *)param_1[0xf],PTR_DAT_0271e898,0);
  if ((*(float *)(param_1 + 0x1d) != 0.0) ||
     (ABS(*(float *)((long)param_1 + 0x28c)) <= DAT_01d4c708)) {
    if (*(float *)(param_1 + 0x1d) == 0.0) {
      (**(code **)(*param_1 + 0x90))(param_1);
      uVar6 = 2;
    }
    else {
      uVar6 = 8;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 2;
    uVar6 = 6;
    *(float *)((long)param_1 + 0x28c) = -*(float *)((long)param_1 + 0x28c);
  }
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  return;
}


