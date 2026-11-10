/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e329d0; name: FUN_00e329d0
 */


void FUN_00e329d0(long param_1,uint *param_2,long param_3,undefined4 param_4,undefined4 param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ushort uVar9;
  ulong uVar10;
  uint uVar11;
  
  FUN_008649f0(*(undefined2 *)(param_3 + 2),0);
  uVar7 = FUN_00864a10(0x1e);
  uVar11 = (uint)*(ushort *)(param_3 + 2);
  if (*(ushort *)(param_3 + 2) == 0x306) {
    puVar8 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    uVar1 = *puVar8;
    uVar10 = puVar8[1] ^ uVar1;
    uVar9 = (short)puVar8[1] + (short)uVar1 & 7;
    *puVar8 = uVar10 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar10 << 0x10;
    puVar8[1] = uVar10 >> 0x1b | uVar10 << 0x25;
    uVar11 = (uint)*(ushort *)(param_3 + 2);
  }
  else {
    uVar9 = *(ushort *)(param_3 + 4);
    if (uVar9 == 0x1f) {
      uVar9 = 0xff;
    }
    else if (uVar9 == 0x1e) {
      uVar9 = (ushort)*(byte *)(param_1 + 0x2a4);
    }
    else if ((int)uVar7 <= (int)(uint)uVar9) {
      uVar9 = 0;
    }
  }
  *param_2 = uVar11;
  *(ushort *)(param_2 + 1) = uVar9;
  bVar4 = FUN_00e32bf0(uVar7,param_4,param_5,param_6);
  *(byte *)((long)param_2 + 6) = bVar4;
  bVar5 = FUN_014ae360();
  if (bVar5 < bVar4) {
    param_2[2] = 2;
  }
  uVar2 = *(uint *)(param_1 + 0x2a8);
  uVar11 = 1;
  do {
    sVar6 = FUN_00e32cd0(param_1);
    if (sVar6 != 0xff) break;
    bVar3 = uVar11 < (uVar2 >> 6 & 2 | 1);
    uVar11 = uVar11 + 1;
  } while (bVar3);
  *(short *)(param_2 + 0x12) = sVar6;
  return;
}


