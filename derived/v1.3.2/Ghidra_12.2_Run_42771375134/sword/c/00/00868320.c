/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00868320; name: FUN_00868320
 */


undefined2 FUN_00868320(long param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  long lVar5;
  undefined2 uVar6;
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar6 = 0;
  }
  else {
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
    lVar5 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar5 + 4) >> 2 & 1) == 0) {
      uVar6 = *(undefined2 *)(*(long *)(param_1 + 8) + 4);
      cVar1 = *(char *)(param_1 + 0x18);
    }
    else {
      uVar6 = *(undefined2 *)(PTR_DAT_02717380 + 4);
      cVar1 = *(char *)(param_1 + 0x18);
    }
    if ((cVar1 == '\0') && (*(char *)(param_1 + 0x19) == '\0')) {
      if (lVar5 != 0) {
        uVar4 = FUN_00867720(lVar5 + 8,0x140);
        *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar4;
        FUN_008677c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
      }
      if ((*(long *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0))
      {
        FUN_008677c0(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
  }
  return uVar6;
}


