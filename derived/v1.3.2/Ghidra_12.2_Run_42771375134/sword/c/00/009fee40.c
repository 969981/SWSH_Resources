/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fee40; name: FUN_009fee40
 */


void FUN_009fee40(long param_1,byte param_2,char param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = (uint)param_2;
  if (uVar1 < 2) {
    lVar2 = *(long *)(param_1 + 0x180);
  }
  else {
    if ((1 < uVar1 - 2) && (uVar1 != 4)) goto LAB_009fee64;
    lVar2 = *(long *)(param_1 + 0x188);
  }
  if (lVar2 == 0) {
    return;
  }
LAB_009fee64:
  if ((byte)(param_3 - 2U) < 9) {
    lVar2 = *(long *)(&DAT_021535a0 + (long)(char)(param_3 - 2U) * 8);
  }
  else {
    lVar2 = 0;
  }
  if (4 < param_2) {
    return;
  }
  switch(param_2) {
  case 0:
    FUN_0077d520(*param_4,*(long *)(param_1 + 0x180) + lVar2 * 0x1d8 + 0x1104);
    return;
  case 1:
    FUN_0077d520(*param_4,*(long *)(param_1 + 0x180) + lVar2 * 0x1d8 + 0x114e);
    return;
  case 2:
    FUN_0077d520(*param_4,*(long *)(param_1 + 0x188) + lVar2 * 0x94 + 100);
    return;
  case 3:
    FUN_0077d520(*param_4,*(long *)(param_1 + 0x188) + lVar2 * 0x94 + 0xae);
    return;
  case 4:
    FUN_0077d520(*param_4,*(long *)(param_1 + 0x188) + 0x5f0);
    return;
  }
}


