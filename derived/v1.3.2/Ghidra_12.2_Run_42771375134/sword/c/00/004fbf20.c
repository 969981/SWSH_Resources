/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fbf20; name: FUN_004fbf20
 */


void FUN_004fbf20(long *param_1,int param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x15) = 4;
    cVar1 = (char)param_1[0xd];
joined_r0x004fbf70:
    if ((cVar1 == '\0') || (uVar2 = (**(code **)(*param_1 + 0x10))(param_1), (uVar2 & 1) == 0)) {
      *(undefined1 *)((long)param_1 + 0x6c) = 0;
      if (*(char *)((long)param_1 + 0x6a) != '\0') {
        *(undefined1 *)((long)param_1 + 0x6a) = 0;
        FUN_004ffd60(param_1[10]);
      }
    }
    else if (*(char *)((long)param_1 + 0x6a) == '\0') {
      *(undefined1 *)((long)param_1 + 0x6a) = 1;
      FUN_004ffd00(param_1[10]);
      lVar3 = param_1[1];
      goto joined_r0x004fbfc8;
    }
  }
  else if (*(char *)((long)param_1 + 0xac) != '\0') {
    param_1[0xf] = param_1[0xf] + (ulong)*(uint *)(param_1 + 0x12);
    *(undefined4 *)(param_1 + 0x15) = 1;
    cVar1 = (char)param_1[0xd];
    goto joined_r0x004fbf70;
  }
  lVar3 = param_1[1];
joined_r0x004fbfc8:
  if ((lVar3 == 0) || ((*(uint *)(param_1 + 0x15) | 2) == 2)) {
    return;
  }
  FUN_004fff50(param_1[10],param_1);
  return;
}


