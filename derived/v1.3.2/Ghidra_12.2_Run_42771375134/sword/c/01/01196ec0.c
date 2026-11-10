/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01196ec0; name: FUN_01196ec0
 */


void FUN_01196ec0(long param_1,byte param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  
  if ((*(char *)(param_1 + 0x80) == '\0') && ((param_2 & 1) != 0)) {
    cVar1 = FUN_007a9cb0();
    if ((cVar1 == '\x04') && (*(int *)(param_1 + 0x7c) != 0x10)) {
      *(undefined4 *)(param_1 + 0x7c) = 0x10;
    }
    uVar2 = FUN_012092f0(*(undefined8 *)PTR_DAT_02710880);
    if ((uVar2 & 1) == 0) {
      FUN_011faf40(*(undefined8 *)PTR_DAT_02710940);
    }
    *(byte *)(param_1 + 0x81) = *(byte *)(param_1 + 0x83);
    *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x83) ^ 1;
    lVar3 = *(long *)PTR_DAT_02720700;
    if ((((lVar3 != 0) && (uVar2 = FUN_012a4260(lVar3), (uVar2 & 1) != 0)) &&
        (*(long *)PTR_DAT_02717c48 != 0)) && (*(char *)(*(long *)PTR_DAT_02717c48 + 0x350) != '\0'))
    {
      FUN_012a5590(lVar3);
    }
  }
  if ((*(char *)(param_1 + 0x80) != '\0') && ((param_2 & 1) == 0)) {
    *(undefined2 *)(param_1 + 0x81) = 0x100;
    lVar3 = *(long *)PTR_DAT_02720700;
    if ((lVar3 != 0) && (uVar2 = FUN_012a4260(lVar3), (uVar2 & 1) != 0)) {
      FUN_012a5570(lVar3);
    }
  }
  *(byte *)(param_1 + 0x80) = param_2 & 1;
  FUN_01195ee0(param_1);
  return;
}


