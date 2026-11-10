/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131f4b0; name: FUN_0131f4b0
 */


void FUN_0131f4b0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong *puVar8;
  ulong uVar9;
  
  puVar7 = PTR_DAT_02727ae0;
  puVar6 = PTR_DAT_027152c0;
  puVar5 = PTR_DAT_02710848;
  *(undefined4 *)(param_1 + 0xb) = 2;
  lVar1 = *(long *)puVar6;
  lVar3 = *(long *)(puVar6 + 8);
  *(undefined8 *)((long)param_1 + 0xd) = 0;
  *param_1 = (long)(puVar7 + 0x10);
  param_1[1] = 0;
  param_1[8] = lVar1;
  param_1[9] = lVar3;
  param_1[10] = 0x3f8000003f800000;
  param_1[6] = lVar1;
  param_1[7] = lVar3;
  puVar8 = *(ulong **)(*(long *)puVar5 + 0x98);
  uVar2 = *puVar8;
  uVar4 = puVar8[1];
  uVar9 = uVar4 ^ uVar2;
  *puVar8 = uVar9 ^ (uVar2 >> 0x28 | uVar2 << 0x18) ^ uVar9 << 0x10;
  puVar8[1] = uVar9 >> 0x1b | uVar9 << 0x25;
  *(byte *)((long)param_1 + 0x5c) = ~((char)uVar4 + (char)uVar2) & 1;
  param_1[0xc] = 0;
  return;
}


