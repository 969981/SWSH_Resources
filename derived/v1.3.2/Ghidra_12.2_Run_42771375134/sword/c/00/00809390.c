/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00809390; name: FUN_00809390
 */


undefined8 FUN_00809390(long param_1,byte *param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte local_48 [16];
  void *local_38;
  
  if (*(int *)(param_1 + 0x28) == 5) {
    if ((*param_2 & 1) == 0) {
      param_2[0] = 0;
      param_2[1] = 0;
      iVar1 = *(int *)(param_1 + 0x28);
    }
    else {
      **(undefined1 **)(param_2 + 0x10) = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      iVar1 = *(int *)(param_1 + 0x28);
    }
    if (iVar1 == 5) {
      do {
        FUN_008434c0(param_1 + 0x30,param_2);
        FUN_00842de0(param_1 + 0x28);
      } while (*(int *)(param_1 + 0x28) == 5);
    }
    uVar2 = 1;
  }
  else {
    std::operator+("Expected string, got: ",(string *)(param_1 + 0x30));
    FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),local_48);
    if ((local_48[0] & 1) != 0) {
      operator_delete(local_38);
    }
    uVar2 = 0;
  }
  return uVar2;
}


