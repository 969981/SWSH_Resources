/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e5b10; name: FUN_008e5b10
 */


void FUN_008e5b10(long param_1)

{
  undefined2 uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  *(undefined2 *)(param_1 + 0x298) = 0;
  FUN_008797a0(*(undefined8 *)(param_1 + 0x60),0);
  dVar7 = (double)NEON_ucvtf((ulong)*(ushort *)(param_1 + 0x72));
  dVar7 = (double)((uint)*(ushort *)(param_1 + 0x74) * 100) / dVar7;
  dVar6 = 0.5;
  if (dVar7 <= 0.0) {
    dVar6 = -0.5;
  }
  uVar4 = (uint)(dVar7 * DAT_01cd5438 + dVar6);
  FUN_008e0660(param_1,1,0,0,0);
  uVar1 = *(undefined2 *)(param_1 + 0x72);
  uVar3 = FUN_008ec010(uVar1,uVar4);
  uVar2 = FUN_008ec010(uVar1,uVar4);
  iVar5 = (int)((uVar3 & 0xffffffff) / 100);
  if (uVar2 % 100 != 0) {
    iVar5 = iVar5 + 1;
  }
  dVar7 = 0.0;
  if ((uVar4 & 0xfff) != 0) {
    dVar7 = (double)(uVar4 & 0xfff) * DAT_01cd5200;
  }
  if (dVar7 + (double)((int)uVar4 >> 0xc) != 0.0 && iVar5 == 0) {
    iVar5 = 1;
  }
  *(short *)(param_1 + 0x74) = (short)iVar5;
  return;
}


