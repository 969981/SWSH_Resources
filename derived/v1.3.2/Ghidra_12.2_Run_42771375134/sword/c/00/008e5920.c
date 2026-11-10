/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e5920; name: FUN_008e5920
 */


void FUN_008e5920(long param_1)

{
  undefined2 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  
  uVar4 = 1;
  *(undefined2 *)(param_1 + 0x298) = 1;
  *(byte *)(param_1 + 0x35d) = *(byte *)(param_1 + 0x35d) & 0xfe;
  FUN_008e3c50(param_1,0xc);
  if (*(char *)(param_1 + 0x298) != '\0') {
    uVar3 = FUN_009a3d80(*(undefined2 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x33d));
    uVar4 = 1;
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_00879860(*(undefined8 *)(param_1 + 0x60));
      uVar4 = 1;
      if ((uVar3 & 1) != 0) {
        uVar4 = 2;
      }
    }
  }
  FUN_008797a0(*(undefined8 *)(param_1 + 0x60),uVar4);
  dVar8 = (double)NEON_ucvtf((ulong)*(ushort *)(param_1 + 0x72));
  dVar8 = (double)((uint)*(ushort *)(param_1 + 0x74) * 100) / dVar8;
  dVar7 = 0.5;
  if (dVar8 <= 0.0) {
    dVar7 = -0.5;
  }
  uVar5 = (uint)(dVar8 * DAT_01cd5438 + dVar7);
  FUN_008e0660(param_1,1,0,0,0);
  uVar1 = *(undefined2 *)(param_1 + 0x72);
  uVar3 = FUN_008ec010(uVar1,uVar5);
  uVar2 = FUN_008ec010(uVar1,uVar5);
  iVar6 = (int)((uVar3 & 0xffffffff) / 100);
  if (uVar2 % 100 != 0) {
    iVar6 = iVar6 + 1;
  }
  dVar8 = 0.0;
  if ((uVar5 & 0xfff) != 0) {
    dVar8 = (double)(uVar5 & 0xfff) * DAT_01cd5200;
  }
  if (dVar8 + (double)((int)uVar5 >> 0xc) != 0.0 && iVar6 == 0) {
    iVar6 = 1;
  }
  *(short *)(param_1 + 0x74) = (short)iVar6;
  return;
}


