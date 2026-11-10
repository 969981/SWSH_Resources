/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054af80; name: FUN_0054af80
 */


void FUN_0054af80(long *param_1)

{
  *param_1 = (long)(PTR_DAT_02713be0 + 0x10);
  FUN_0054b050();
  FUN_00551380(param_1 + 0x76);
  FUN_00551380(param_1 + 0x74);
  FUN_00551380(param_1 + 0x72);
  FUN_00551380(param_1 + 0x6b);
  if (param_1[0x65] != 0) {
    param_1[0x66] = param_1[0x65];
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
  }
  if (param_1[0x62] != 0) {
    param_1[99] = param_1[0x62];
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
  }
  if (param_1[0x5f] != 0) {
    param_1[0x60] = param_1[0x5f];
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
  }
  FUN_00551380(param_1 + 0xc);
  FUN_00551380(param_1 + 10);
  FUN_00551380(param_1 + 8);
  FUN_00551380(param_1 + 6);
  FUN_00551380(param_1 + 4);
  FUN_00551380(param_1 + 2);
  return;
}


