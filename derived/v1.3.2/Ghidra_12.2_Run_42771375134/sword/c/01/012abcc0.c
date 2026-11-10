/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012abcc0; name: FUN_012abcc0
 */


void FUN_012abcc0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(char *)param_1[1] != '\0') {
    FUN_01861020(*(undefined8 *)(lVar1 + 0x58),*param_2,*(undefined4 *)(lVar1 + 0xfc),param_1[2]);
    return;
  }
  if (*(char *)(lVar1 + 0xf9) == '\0') {
    FUN_01860b90(*(undefined8 *)(lVar1 + 0x58),*param_2,*(undefined4 *)(lVar1 + 0xfc),param_1[2]);
    return;
  }
  FUN_01860ff0();
  return;
}


