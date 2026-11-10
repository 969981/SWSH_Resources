/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00807310; name: FUN_00807310
 */


undefined8 FUN_00807310(long param_1,string *param_2)

{
  int iVar1;
  byte local_38 [16];
  void *local_28;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 2) {
    if (*(char *)(param_1 + 0xe7) == '\0') {
      if ((iVar1 != 3) || (*(char *)(param_1 + 0xe5) == '\0')) goto LAB_00807384;
    }
    else if (iVar1 != 3) {
LAB_00807384:
      std::operator+("Expected identifier, got: ",(string *)(param_1 + 0x30));
      FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),local_38)
      ;
      if ((local_38[0] & 1) != 0) {
        operator_delete(local_28);
      }
      return 0;
    }
  }
  std::string::operator=(param_2,(string *)(param_1 + 0x30));
  FUN_00842de0(param_1 + 0x28);
  return 1;
}


