/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0086cf80; name: FUN_0086cf80
 */


undefined1 FUN_0086cf80(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  uint *puVar6;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00867850(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
    if (*(long *)(param_1 + 8) != 0) {
      FUN_00867850(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar3 = *(short *)(*(long *)(param_1 + 0x10) + 6);
    sVar4 = FUN_00867720(*(long *)(param_1 + 0x10) + 8,0x140);
    if (sVar3 != sVar4) {
      *(ushort *)(*(long *)(param_1 + 0x10) + 4) = *(ushort *)(*(long *)(param_1 + 0x10) + 4) | 4;
    }
  }
  puVar6 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar6[1] >> 2 & 1) == 0) {
    uVar2 = (undefined1)
            puVar6[(ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar6 >> 0xd) & 0x1f) * 4] * 0x14 + 0xd];
    cVar1 = *(char *)(param_1 + 0x18);
  }
  else {
    uVar2 = PTR_DAT_02717398[0x2c];
    cVar1 = *(char *)(param_1 + 0x18);
  }
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    if (puVar6 != (uint *)0x0) {
      uVar5 = FUN_00867720(puVar6 + 2,0x140);
      *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar5;
      FUN_008677c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
    }
    if ((*(long *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0)) {
      FUN_008677c0(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return uVar2;
}


