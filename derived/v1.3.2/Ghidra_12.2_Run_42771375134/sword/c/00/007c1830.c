/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c1830; name: FUN_007c1830
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_007c1830(ushort *param_1,undefined8 *param_2)

{
  ushort uVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  if ((param_2 != (undefined8 *)0x0) && (pbVar3 = (byte *)*param_2, pbVar3 != (byte *)0x0)) {
    uVar1 = *param_1;
    if ((param_2[1] & 0x1fffffffffffffff) != 0) {
      if ((uVar1 & 1) != 0) {
        *pbVar3 = *pbVar3 | 1;
      }
      if (((uVar1 & 7) >> 1 & 1) != 0) {
        *pbVar3 = *pbVar3 | 2;
      }
      if ((uVar1 & 7) >> 2 != 0) {
        *pbVar3 = *pbVar3 | 4;
      }
      uVar4 = (ulong)param_2[4] >> 3;
      *(byte *)(param_2[3] + uVar4) =
           *(byte *)(param_2[3] + uVar4) | (byte)(1 << (ulong)((uint)param_2[4] & 7));
      pbVar3 = (byte *)*param_2;
      if (pbVar3 == (byte *)0x0) {
        return;
      }
      uVar1 = *param_1;
    }
    if ((param_2[1] & 0x1fffffffffffffff) != 0) {
      if ((uVar1 >> 3 & 1) != 0) {
        *pbVar3 = *pbVar3 | 8;
      }
      uVar4 = param_2[4] + 1 >> 3;
      *(byte *)(param_2[3] + uVar4) =
           *(byte *)(param_2[3] + uVar4) | (byte)(1 << (ulong)((uint)(param_2[4] + 1) & 7));
      pbVar3 = (byte *)*param_2;
      if (pbVar3 == (byte *)0x0) {
        return;
      }
      uVar1 = *param_1;
    }
    if ((param_2[1] & 0x1fffffffffffffff) != 0) {
      uVar2 = uVar1 >> 4 & 0xf;
      if ((uVar1 >> 4 & 1) != 0) {
        *pbVar3 = *pbVar3 | 0x10;
      }
      if ((uVar2 >> 1 & 1) != 0) {
        *pbVar3 = *pbVar3 | 0x20;
      }
      if ((uVar2 >> 2 & 1) != 0) {
        *pbVar3 = *pbVar3 | 0x40;
      }
      if (uVar2 >> 3 != 0) {
        *pbVar3 = *pbVar3 | 0x80;
      }
      uVar4 = param_2[4] + 2 >> 3;
      *(byte *)(param_2[3] + uVar4) =
           *(byte *)(param_2[3] + uVar4) | (byte)(1 << (ulong)((uint)(param_2[4] + 2) & 7));
      pbVar3 = (byte *)*param_2;
      if (pbVar3 == (byte *)0x0) {
        return;
      }
      uVar1 = *param_1;
    }
    if (0xb < (ulong)(param_2[1] << 3)) {
      uVar2 = uVar1 >> 8 & 0xf;
      if ((uVar1 >> 8 & 1) != 0) {
        pbVar3[1] = pbVar3[1] | 1;
      }
      if ((uVar2 >> 1 & 1) != 0) {
        pbVar3[1] = pbVar3[1] | 2;
      }
      if ((uVar2 >> 2 & 1) != 0) {
        pbVar3[1] = pbVar3[1] | 4;
      }
      if (uVar2 >> 3 != 0) {
        pbVar3[1] = pbVar3[1] | 8;
      }
      uVar4 = param_2[4] + 3 >> 3;
      *(byte *)(param_2[3] + uVar4) =
           *(byte *)(param_2[3] + uVar4) | (byte)(1 << (ulong)((uint)(param_2[4] + 3) & 7));
    }
  }
  return;
}


