/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fbcc0; name: FUN_004fbcc0
 */


void FUN_004fbcc0(long *param_1,int param_2)

{
  char cVar1;
  ulong uVar2;
  
  *(int *)(param_1 + 0x15) = param_2;
  if (((char)param_1[0xd] == '\0') ||
     (uVar2 = (**(code **)(*param_1 + 0x10))(param_1), (uVar2 & 1) == 0)) {
    if (param_2 != 2) {
      *(undefined1 *)((long)param_1 + 0x6c) = 0;
      if (*(char *)((long)param_1 + 0x6a) == '\0') {
        return;
      }
      *(undefined1 *)((long)param_1 + 0x6a) = 0;
      FUN_004ffd60(param_1[10]);
      return;
    }
    cVar1 = *(char *)((long)param_1 + 0x6a);
    *(undefined1 *)((long)param_1 + 0x6c) = 1;
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x6a);
  }
  if (cVar1 == '\0') {
    *(undefined1 *)((long)param_1 + 0x6a) = 1;
    FUN_004ffd00(param_1[10]);
    return;
  }
  return;
}


