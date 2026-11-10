/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00842cf0; name: FUN_00842cf0
 */


undefined8 FUN_00842cf0(undefined4 *param_1)

{
  if (param_1[0x2a] == 1) {
    if (*(char *)(param_1 + 0x1c) != '#') {
      return 3;
    }
  }
  else {
    if (param_1[0x2a] != 0) {
      return 3;
    }
    if (*(char *)(param_1 + 0x1c) != '/') {
      return 3;
    }
    FUN_00841d30(param_1);
    if (*(char *)(param_1 + 0x1c) == '*') {
      FUN_00841d30(param_1);
      return 1;
    }
    if (*(char *)(param_1 + 0x1c) != '/') {
      *param_1 = 6;
      std::string::assign((char *)(param_1 + 2));
      param_1[8] = param_1[0x23];
      param_1[9] = param_1[0x24] + -1;
      param_1[10] = param_1[0x24];
      return 2;
    }
  }
  FUN_00841d30(param_1);
  return 0;
}


