/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01509f80; name: FUN_01509f80
 */


void FUN_01509f80(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  ushort uVar6;
  
  if ((param_3 | param_2) < 0x20) {
    lVar5 = 0;
    uVar2 = (ushort)(param_3 << 8);
    uVar3 = (ushort)(param_2 << 8);
    param_1 = param_1 + 0x524;
    do {
      uVar4 = (uint)(byte)(*(ushort *)(param_1 + lVar5) >> 8);
      uVar6 = uVar2;
      if ((uVar4 == param_2) || (uVar6 = uVar3, uVar4 == param_3)) {
        *(ushort *)(param_1 + lVar5) = *(ushort *)(param_1 + lVar5) & 0xff | uVar6;
      }
      lVar1 = param_1 + lVar5;
      uVar4 = (uint)(byte)(*(ushort *)(lVar1 + 2) >> 8);
      uVar6 = uVar2;
      if ((uVar4 == param_2) || (uVar6 = uVar3, uVar4 == param_3)) {
        *(ushort *)(lVar1 + 2) = *(ushort *)(lVar1 + 2) & 0xff | uVar6;
      }
      uVar4 = (uint)(byte)(*(ushort *)(lVar1 + 4) >> 8);
      uVar6 = uVar2;
      if ((uVar4 == param_2) || (uVar6 = uVar3, uVar4 == param_3)) {
        *(ushort *)(lVar1 + 4) = *(ushort *)(lVar1 + 4) & 0xff | uVar6;
      }
      uVar4 = (uint)(byte)(*(ushort *)(lVar1 + 6) >> 8);
      uVar6 = uVar2;
      if ((uVar4 == param_2) || (uVar6 = uVar3, uVar4 == param_3)) {
        *(ushort *)(lVar1 + 6) = *(ushort *)(lVar1 + 6) & 0xff | uVar6;
      }
      uVar4 = (uint)(byte)(*(ushort *)(lVar1 + 8) >> 8);
      uVar6 = uVar2;
      if ((uVar4 == param_2) || (uVar6 = uVar3, uVar4 == param_3)) {
        *(ushort *)(lVar1 + 8) = *(ushort *)(lVar1 + 8) & 0xff | uVar6;
      }
      uVar4 = (uint)(byte)(*(ushort *)(lVar1 + 10) >> 8);
      uVar6 = uVar2;
      if ((uVar4 == param_2) || (uVar6 = uVar3, uVar4 == param_3)) {
        *(ushort *)(lVar1 + 10) = *(ushort *)(lVar1 + 10) & 0xff | uVar6;
      }
      lVar5 = lVar5 + 0xc;
    } while (lVar5 != 0x48);
  }
  return;
}


