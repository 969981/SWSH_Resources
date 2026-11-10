/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012233b0; name: FUN_012233b0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_012233b0(byte *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  
  if ((param_2 != (undefined8 *)0x0) && (pbVar3 = (byte *)*param_2, pbVar3 != (byte *)0x0)) {
    if ((param_2[1] & 0x1fffffffffffffff) != 0) {
      bVar2 = *param_1;
      if ((bVar2 & 1) != 0) {
        *pbVar3 = *pbVar3 | 1;
        bVar2 = *param_1;
      }
      if ((bVar2 >> 1 & 1) != 0) {
        *pbVar3 = *pbVar3 | 2;
        bVar2 = *param_1;
      }
      if ((bVar2 >> 2 & 1) != 0) {
        *pbVar3 = *pbVar3 | 4;
        bVar2 = *param_1;
      }
      if ((bVar2 >> 3 & 1) != 0) {
        *pbVar3 = *pbVar3 | 8;
        bVar2 = *param_1;
      }
      if ((bVar2 >> 4 & 1) != 0) {
        *pbVar3 = *pbVar3 | 0x10;
      }
      uVar4 = (ulong)param_2[4] >> 3;
      *(byte *)(param_2[3] + uVar4) =
           *(byte *)(param_2[3] + uVar4) | (byte)(1 << (ulong)((uint)param_2[4] & 7));
      pbVar3 = (byte *)*param_2;
      if (pbVar3 == (byte *)0x0) {
        return;
      }
    }
    bVar2 = param_1[1];
    if ((bVar2 < 8) && ((param_2[1] & 0x1fffffffffffffff) != 0)) {
      if ((bVar2 & 1) != 0) {
        *pbVar3 = *pbVar3 | 0x20;
      }
      if ((bVar2 >> 1 & 1) != 0) {
        *pbVar3 = *pbVar3 | 0x40;
      }
      if ((bVar2 >> 2 & 1) != 0) {
        *pbVar3 = *pbVar3 | 0x80;
      }
      uVar4 = param_2[4] + 1 >> 3;
      *(byte *)(param_2[3] + uVar4) =
           *(byte *)(param_2[3] + uVar4) | (byte)(1 << (ulong)((uint)(param_2[4] + 1) & 7));
      pbVar3 = (byte *)*param_2;
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      if (pbVar3 == (byte *)0x0) {
        return;
      }
      lVar5 = param_2[1];
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      lVar5 = param_2[1];
    }
    if (0x27 < (ulong)(lVar5 * 8)) {
      *(undefined4 *)(pbVar3 + 1) = uVar1;
      uVar4 = param_2[4] + 2 >> 3;
      *(byte *)(param_2[3] + uVar4) =
           *(byte *)(param_2[3] + uVar4) | (byte)(1 << (ulong)((uint)(param_2[4] + 2) & 7));
      pbVar3 = (byte *)*param_2;
      if (pbVar3 == (byte *)0x0) {
        return;
      }
    }
    if ((ulong)(param_2[1] * 8) < 0x48) {
      uVar1 = (undefined4)*(undefined8 *)(param_1 + 0x18);
      lVar5 = param_2[1];
    }
    else {
      *(int *)(pbVar3 + 5) = (int)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
      uVar4 = param_2[4] + 3 >> 3;
      *(byte *)(param_2[3] + uVar4) =
           *(byte *)(param_2[3] + uVar4) | (byte)(1 << (ulong)((uint)(param_2[4] + 3) & 7));
      pbVar3 = (byte *)*param_2;
      if (pbVar3 == (byte *)0x0) {
        return;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      lVar5 = param_2[1];
    }
    if (0x67 < (ulong)(lVar5 << 3)) {
      *(undefined4 *)(pbVar3 + 9) = uVar1;
      uVar4 = param_2[4] + 4 >> 3;
      *(byte *)(param_2[3] + uVar4) =
           *(byte *)(param_2[3] + uVar4) | (byte)(1 << (ulong)((uint)(param_2[4] + 4) & 7));
      pbVar3 = (byte *)*param_2;
      if (pbVar3 == (byte *)0x0) {
        return;
      }
    }
    if (0x87 < (ulong)(param_2[1] << 3)) {
      *(undefined4 *)(pbVar3 + 0xd) = *(undefined4 *)(param_1 + 0x20);
      uVar4 = param_2[4] + 5 >> 3;
      *(byte *)(param_2[3] + uVar4) =
           *(byte *)(param_2[3] + uVar4) | (byte)(1 << (ulong)((uint)(param_2[4] + 5) & 7));
    }
  }
  return;
}


