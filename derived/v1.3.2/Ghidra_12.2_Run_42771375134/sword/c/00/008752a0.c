/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008752a0; name: FUN_008752a0
 */


void FUN_008752a0(long param_1,uint param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  byte bVar5;
  short sVar6;
  undefined2 uVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00867850(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
    if (*(long *)(param_1 + 8) != 0) {
      FUN_00867850(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar4 = *(short *)(*(long *)(param_1 + 0x10) + 6);
    sVar6 = FUN_00867720(*(long *)(param_1 + 0x10) + 8,0x140);
    if (sVar4 != sVar6) {
      *(ushort *)(*(long *)(param_1 + 0x10) + 4) = *(ushort *)(*(long *)(param_1 + 0x10) + 4) | 4;
    }
  }
  if ((param_2 & 0xff) < 0x70) {
    puVar9 = *(uint **)(param_1 + 0x10);
    uVar8 = (ulong)(param_2 >> 3 & 0x1f);
    if (((ushort)puVar9[1] >> 2 & 1) == 0) {
      puVar10 = puVar9 + (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar9 >> 0xd) & 0x1f) * 4] * 0x14 +
                         2;
    }
    else {
      puVar10 = (uint *)PTR_DAT_02717398;
    }
    bVar2 = *(byte *)((long)puVar10 + uVar8 + 0x2f);
    bVar5 = (byte)(1 << (ulong)(param_2 & 7));
    bVar1 = bVar2 | bVar5;
    if ((param_3 & 1) == 0) {
      bVar1 = bVar2 & (bVar5 ^ 0xff);
    }
    if (((ushort)puVar9[1] >> 2 & 1) == 0) {
      *(byte *)((long)puVar9 +
               uVar8 + (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar9 >> 0xd) & 0x1f) * 4] * 0x50 +
               0x37) = bVar1;
      cVar3 = *(char *)(param_1 + 0x18);
    }
    else {
      PTR_DAT_027173a0[uVar8 + 0x2f] = bVar1;
      cVar3 = *(char *)(param_1 + 0x18);
    }
    if ((cVar3 == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar7 = FUN_00867720(*(long *)(param_1 + 0x10) + 8,0x140);
        *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar7;
        FUN_008677c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
      }
      if ((*(long *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0))
      {
        FUN_008677c0(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
      return;
    }
  }
  return;
}


