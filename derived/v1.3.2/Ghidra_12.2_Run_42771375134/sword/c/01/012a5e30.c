/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a5e30; name: FUN_012a5e30
 */


ulong FUN_012a5e30(char *param_1,char *param_2)

{
  ulong uVar1;
  uint uVar2;
  
  if (param_1[0x120] == '\0') {
    if (param_2[0x120] != '\0') {
      return 0;
    }
  }
  else {
    if (param_2[0x120] == '\0') {
      return 0;
    }
    uVar1 = FUN_0121ae60(param_1 + 0x128,param_2 + 0x128);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if (param_1[0x110] == '\0') {
    if (param_2[0x110] != '\0') {
      return 0;
    }
  }
  else {
    if (param_2[0x110] == '\0') {
      return 0;
    }
    uVar1 = FUN_01218890(param_1 + 0x114,param_2 + 0x114);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if (param_1[0xc0] == '\0') {
    if (param_2[0xc0] != '\0') {
      return 0;
    }
  }
  else {
    if (param_2[0xc0] == '\0') {
      return 0;
    }
    uVar1 = FUN_0121d130(param_1 + 0xc4,param_2 + 0xc4);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if (param_1[0x70] == '\0') {
    if (param_2[0x70] != '\0') {
      return 0;
    }
  }
  else {
    if (param_2[0x70] == '\0') {
      return 0;
    }
    uVar1 = FUN_0121b9e0(param_1 + 0x74,param_2 + 0x74);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if (param_1[0x34] == '\0') {
    if (param_2[0x34] != '\0') {
      return 0;
    }
  }
  else {
    if (param_2[0x34] == '\0') {
      return 0;
    }
    uVar1 = FUN_0121c430(param_1 + 0x38,param_2 + 0x38);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if (param_1[0x10] == '\0') {
    if (param_2[0x10] != '\0') {
      return 0;
    }
  }
  else {
    if (param_2[0x10] == '\0') {
      return 0;
    }
    uVar1 = FUN_011f5190(param_1 + 0x12,param_2 + 0x12);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if (*param_1 == '\0') {
    uVar2 = (uint)(*param_2 != '\0');
  }
  else {
    uVar2 = 0;
    if (*param_2 != '\0') {
      uVar1 = FUN_0121ac60(param_1 + 8,param_2 + 8);
      return uVar1;
    }
  }
  return (ulong)(*param_1 != '\0' ^ uVar2 ^ 1);
}


