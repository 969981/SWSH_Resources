/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00453750; name: FUN_00453750
 */


ulong FUN_00453750(long *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = param_1[0xc];
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 4) != 0) {
      return 1;
    }
    if (*(int *)(lVar2 + 0xc) != 0) {
      return 1;
    }
    if (*(int *)(lVar2 + 0x14) != 0) {
      return 1;
    }
    if (*(int *)(lVar2 + 0x1c) != 0) {
      return 1;
    }
  }
  iVar1 = (**(code **)(*param_1 + 0x88))(param_1);
  if (iVar1 == 10) {
    return 1;
  }
  if (*(char *)((long)param_1 + 0xcc) != '\0') {
    return 1;
  }
  if ((*(uint *)((long)param_1 + 0x9c) & 0x1080000) == 0) {
    if (param_1[0x10] == 0) {
      return 1;
    }
    if ((*(byte *)((long)param_1 + 0x9a) & 0xe) != 0) {
      return 1;
    }
    if (param_1[0x16] != 0) {
      return 1;
    }
    if (((*(uint *)((long)param_1 + 0x9c) >> 0x12 & 1) == 0) && (param_1[0x11] == 0)) {
      if ((ulong *)param_1[7] == (ulong *)0x0) {
        return 0;
      }
      uVar3 = *(ulong *)param_1[7];
      if ((uVar3 & 0x280000000020) == 0) {
        return uVar3 >> 0x2c & 1;
      }
      return 1;
    }
  }
  return 1;
}


