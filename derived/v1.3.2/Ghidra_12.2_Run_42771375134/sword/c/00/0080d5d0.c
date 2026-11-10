/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080d5d0; name: FUN_0080d5d0
 */


ulong FUN_0080d5d0(ulong *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [12];
  
  uVar2 = *param_1;
  if (((int)param_1[1] - (int)uVar2 < 10) && (param_1[1] <= uVar2)) {
    auVar3 = FUN_0080d3e0();
    uVar2 = auVar3._0_8_ & 0xffffffff;
    if ((auVar3._8_4_ & 1) == 0) {
      uVar2 = 0xffffffffffffffff;
    }
    return uVar2;
  }
  uVar1 = (param_2 + (uint)*(byte *)(uVar2 + 1) * 0x80) - 0x80;
  if (-1 < (char)*(byte *)(uVar2 + 1)) {
    *param_1 = uVar2 + 2;
    return (ulong)uVar1;
  }
  uVar1 = (uVar1 + (uint)*(byte *)(uVar2 + 2) * 0x4000) - 0x4000;
  if (-1 < (char)*(byte *)(uVar2 + 2)) {
    *param_1 = uVar2 + 3;
    return (ulong)uVar1;
  }
  uVar1 = (uVar1 + (uint)*(byte *)(uVar2 + 3) * 0x200000) - 0x200000;
  if (-1 < (char)*(byte *)(uVar2 + 3)) {
    *param_1 = uVar2 + 4;
    return (ulong)uVar1;
  }
  uVar1 = uVar1 + (uint)*(byte *)(uVar2 + 4) * 0x10000000 + 0xf0000000;
  if (-1 < (char)*(byte *)(uVar2 + 4)) {
    *param_1 = uVar2 + 5;
    return (ulong)uVar1;
  }
  if (-1 < *(char *)(uVar2 + 5)) {
    *param_1 = uVar2 + 6;
    return (ulong)uVar1;
  }
  if (-1 < *(char *)(uVar2 + 6)) {
    *param_1 = uVar2 + 7;
    return (ulong)uVar1;
  }
  if (-1 < *(char *)(uVar2 + 7)) {
    *param_1 = uVar2 + 8;
    return (ulong)uVar1;
  }
  if (-1 < *(char *)(uVar2 + 8)) {
    *param_1 = uVar2 + 9;
    return (ulong)uVar1;
  }
  if (*(char *)(uVar2 + 9) < '\0') {
    return 0xffffffffffffffff;
  }
  *param_1 = uVar2 + 10;
  return (ulong)uVar1;
}


