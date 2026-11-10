/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbd9b0; name: FUN_00dbd9b0
 */


void FUN_00dbd9b0(long *param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  FUN_00db5fa0();
  uVar2 = (**(code **)(*param_1 + 0x78))(param_1);
  if ((uVar2 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x4bc) != '\0') {
      FUN_00dbda60(param_1);
      return;
    }
  }
  else {
    FUN_00db7ea0(param_1);
    if (param_1[0x83] == param_1[0x84]) {
      FUN_00dbda60(param_1);
      cVar1 = *(char *)((long)param_1 + 0x44c);
    }
    else {
      cVar1 = *(char *)((long)param_1 + 0x44c);
    }
    if (cVar1 == '\0') {
      uVar3 = (**(code **)(*param_1 + 0x1b8))(param_1,PTR_DAT_0271e870);
      *(undefined8 *)((long)param_1 + 0x44c) = uVar3;
      return;
    }
  }
  return;
}


