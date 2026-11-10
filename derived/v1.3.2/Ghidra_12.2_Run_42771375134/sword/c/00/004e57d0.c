/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e57d0; name: FUN_004e57d0
 */


void FUN_004e57d0(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if ((*(long *)(param_1 + 0x80) != 0) && (*(char *)(param_1 + 0x88) != '\0')) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  *(long *)(param_1 + 0x80) = lVar3;
  *(int *)(param_1 + 0x90) = (int)param_2[2];
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)((long)param_2 + 0x14);
  *(int *)(param_1 + 0x98) = (int)param_2[3];
  uVar1 = *(uint *)((long)param_2 + 0x1c);
  *(uint *)(param_1 + 0x9c) = uVar1;
  *(int *)(param_1 + 0xa0) = (int)param_2[4];
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)((long)param_2 + 0x24);
  uVar2 = uVar1;
  if (3 < uVar1) {
    uVar2 = 4;
  }
  *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) & 0xfe | *(byte *)(param_2 + 5) & 1;
  if (uVar1 == 0) {
    uVar2 = 1;
  }
  *(uint *)(param_1 + 0x9c) = uVar2;
  if ((lVar3 != 0) && (*(char *)(param_1 + 0x88) != '\0')) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640,lVar3);
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  lVar3 = *param_2;
  *(undefined1 *)(param_1 + 0x88) = 1;
  *(long *)(param_1 + 0x80) = lVar3;
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined1 *)(param_1 + 0x69) = 1;
  return;
}


