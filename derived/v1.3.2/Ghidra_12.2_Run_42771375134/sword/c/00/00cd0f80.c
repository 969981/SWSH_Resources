/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd0f80; name: FUN_00cd0f80
 */


void FUN_00cd0f80(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_0087afd0(*param_2);
  if (iVar1 == 0) {
    iVar1 = 6;
  }
  else if (*(char *)(param_1 + 0x118) == '\0') {
    iVar1 = FUN_0087b560(*param_2);
    if (iVar1 - 1U < 5) {
      iVar1 = *(int *)(&DAT_0215de70 + (long)(int)(iVar1 - 1U) * 4);
    }
    else {
      iVar1 = 7;
    }
  }
  else {
    iVar1 = 2;
  }
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x10),param_1 + 0x50);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | iVar1 != 7;
  if (iVar1 != 7) {
    FUN_0167ba30(*(undefined8 *)(param_1 + 0x10),param_1 + 0xc0);
    FUN_0167bdb0((float)iVar1,*(undefined8 *)(param_1 + 0x10),param_1 + 0xc0);
    return;
  }
  return;
}


