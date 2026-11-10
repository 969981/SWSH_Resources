/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01415fe0; name: FUN_01415fe0
 */


void FUN_01415fe0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 1) {
    lVar2 = *(long *)(param_1 + 0x20);
joined_r0x01416020:
    if (lVar2 != 0) {
      FUN_00ffa3f0();
    }
  }
  else if (iVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    goto joined_r0x01416020;
  }
  *(int *)(param_1 + 0x10) = param_2;
  if (param_2 == 1) {
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    if (param_2 != 0) goto LAB_01416064;
    lVar2 = *(long *)(param_1 + 0x18);
  }
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
  }
LAB_01416064:
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}


