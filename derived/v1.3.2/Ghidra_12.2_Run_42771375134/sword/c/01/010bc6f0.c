/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bc6f0; name: FUN_010bc6f0
 */


void FUN_010bc6f0(long param_1,byte param_2,uint param_3)

{
  byte bVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_010b2a10(*(undefined8 *)(param_1 + 0x90),param_2 & 1);
    FUN_010b1170(*(undefined8 *)(param_1 + 0x90),param_2 & 1);
    return;
  }
  bVar1 = param_2 & 1;
  FUN_010b6c00(*(undefined8 *)(param_1 + 0x88),bVar1);
  if ((param_3 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x88);
    FUN_016b2d70(*(undefined8 *)(lVar2 + 0x5f0),bVar1);
    FUN_016b2d70(*(undefined8 *)(lVar2 + 0x5f8),bVar1);
    FUN_016b2d70(*(undefined8 *)(lVar2 + 0x600),*(char *)(lVar2 + 0x620) != '\0' & param_2);
    FUN_016b2d70(*(undefined8 *)(lVar2 + 0x608),bVar1);
  }
  FUN_010ad950(*(undefined8 *)(param_1 + 0x88),bVar1);
  return;
}


