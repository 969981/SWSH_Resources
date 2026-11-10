/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014aba20; name: FUN_014aba20
 */


void FUN_014aba20(uint *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar9;
  ulong uVar8;
  uint uVar10;
  
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar10 = param_3[2];
  uVar6 = param_3[3];
  cVar2 = *(char *)((long)param_3 + 0xd);
  uVar8 = FUN_014ab7f0();
  uVar9 = (uint)(uVar8 >> 0x20);
  uVar7 = (uint)uVar8;
  *param_1 = *param_3;
  *(short *)(param_1 + 1) = (short)param_3[1];
  uVar1 = param_3[2];
  param_1[2] = uVar1;
  *(char *)(param_1 + 3) = (char)param_3[3];
  *(undefined1 *)((long)param_1 + 0xd) = *(undefined1 *)((long)param_3 + 0xd);
  param_1[4] = param_3[4];
  param_1[5] = param_3[5];
  param_1[6] = param_3[6];
  uVar3 = (undefined2)(uVar8 >> 0x10);
  if ((uint)(ushort)uVar4 == (uVar7 & 0xffff)) {
    if (((((uint)(ushort)uVar5 == uVar7 >> 0x10) && ((uint)(uVar10 == 1) == (uVar9 & 1))) &&
        ((uint)((char)uVar6 != '\0') == (uVar9 >> 1 & 1))) &&
       ((uint)(cVar2 != '\0') == (uVar9 >> 2 & 1))) {
      return;
    }
    *param_1 = uVar7 & 0xffff;
    *(undefined2 *)(param_1 + 1) = uVar3;
    if ((uVar8 & 0x100000000) == 0) {
      uVar10 = (uint)(uVar1 == 2) << 1;
    }
    else {
      uVar10 = 1;
    }
  }
  else {
    *(undefined2 *)(param_1 + 1) = uVar3;
    uVar10 = uVar9 & 1;
    *param_1 = uVar7 & 0xffff;
  }
  param_1[2] = uVar10;
  *(byte *)(param_1 + 3) = (byte)(uVar9 >> 1) & 1;
  *(byte *)((long)param_1 + 0xd) = (byte)(uVar9 >> 2) & 1;
  return;
}


