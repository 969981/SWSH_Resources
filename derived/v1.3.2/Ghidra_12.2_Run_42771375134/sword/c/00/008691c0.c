/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008691c0; name: FUN_008691c0
 */


undefined1 FUN_008691c0(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  undefined2 uVar6;
  uint *puVar7;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00867850(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
    if (*(long *)(param_1 + 8) != 0) {
      FUN_00867850(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar3 = *(short *)(*(long *)(param_1 + 0x10) + 6);
    sVar5 = FUN_00867720(*(long *)(param_1 + 0x10) + 8,0x140);
    if (sVar3 != sVar5) {
      *(ushort *)(*(long *)(param_1 + 0x10) + 4) = *(ushort *)(*(long *)(param_1 + 0x10) + 4) | 4;
    }
  }
  puVar7 = *(uint **)(param_1 + 0x10);
  uVar4 = (ushort)puVar7[1];
  if ((uVar4 >> 2 & 1) == 0) {
    cVar1 = (char)puVar7[(ulong)(byte)(&DAT_0214394a)[((ulong)(*puVar7 >> 0xd) & 0x1f) * 4] * 0x14 +
                         9];
  }
  else {
    cVar1 = PTR_DAT_02717388[0x1c];
  }
  if (cVar1 == '\0') {
    if ((uVar4 >> 2 & 1) == 0) {
      uVar2 = *(undefined1 *)
               ((long)puVar7 +
               (ulong)(byte)(&DAT_0214394b)[((ulong)(*puVar7 >> 0xd) & 0x1f) * 4] * 0x50 + 0x22);
      cVar1 = *(char *)(param_1 + 0x18);
    }
    else {
      uVar2 = PTR_DAT_02717398[0x1a];
      cVar1 = *(char *)(param_1 + 0x18);
    }
  }
  else if ((uVar4 >> 2 & 1) == 0) {
    uVar2 = (undefined1)
            puVar7[(ulong)(byte)(&DAT_0214394a)[((ulong)(*puVar7 >> 0xd) & 0x1f) * 4] * 0x14 + 10];
    cVar1 = *(char *)(param_1 + 0x18);
  }
  else {
    uVar2 = PTR_DAT_02717388[0x20];
    cVar1 = *(char *)(param_1 + 0x18);
  }
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
    if (puVar7 != (uint *)0x0) {
      uVar6 = FUN_00867720(puVar7 + 2,0x140);
      *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar6;
      FUN_008677c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
    }
    if ((*(long *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0)) {
      FUN_008677c0(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return uVar2;
}


