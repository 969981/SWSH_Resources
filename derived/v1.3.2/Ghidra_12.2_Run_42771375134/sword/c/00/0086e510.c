/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0086e510; name: FUN_0086e510
 */


bool FUN_0086e510(long param_1,uint param_2)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00867850(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
    if (*(long *)(param_1 + 8) != 0) {
      FUN_00867850(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar2 = *(short *)(*(long *)(param_1 + 0x10) + 6);
    sVar3 = FUN_00867720(*(long *)(param_1 + 0x10) + 8,0x140);
    if (sVar2 != sVar3) {
      *(ushort *)(*(long *)(param_1 + 0x10) + 4) = *(ushort *)(*(long *)(param_1 + 0x10) + 4) | 4;
    }
  }
  if (0x6f < (param_2 & 0xff)) {
    return false;
  }
  puVar5 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar5[1] >> 2 & 1) == 0) {
    puVar6 = puVar5 + (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar5 >> 0xd) & 0x1f) * 4] * 0x14 + 2;
  }
  else {
    puVar6 = (uint *)PTR_DAT_02717398;
  }
  bVar1 = *(byte *)((long)puVar6 + (ulong)(param_2 >> 3 & 0x1f) + 0x2f);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    uVar4 = FUN_00867720(puVar5 + 2,0x140);
    *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar4;
    FUN_008677c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
    if ((*(long *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0)) {
      FUN_008677c0(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return ((uint)bVar1 & 1 << (ulong)(param_2 & 7)) != 0;
}


