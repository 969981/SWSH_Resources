/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00606b90; name: FUN_00606b90
 */


ushort FUN_00606b90(long *param_1,undefined4 *param_2)

{
  ushort uVar1;
  long lVar2;
  ushort *puVar3;
  ushort local_24 [2];
  
  *param_2 = 0;
  lVar2 = param_1[2];
  if ((ulong)param_1[1] <= lVar2 + 1U) {
LAB_00606be8:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    puVar3 = (ushort *)(*param_1 + lVar2);
    if (puVar3 == (ushort *)0x0) {
      uVar1 = 0;
      goto LAB_00606c24;
    }
  }
  else {
    lVar2 = (*(code *)param_1[5])(param_1,lVar2,local_24,2);
    if (lVar2 != 2) goto LAB_00606be8;
    lVar2 = param_1[2];
    puVar3 = local_24;
  }
  uVar1 = *puVar3 >> 8 | *puVar3 << 8;
LAB_00606c24:
  param_1[2] = lVar2 + 2;
  return uVar1;
}


