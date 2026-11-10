/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00867cc0; name: FUN_00867cc0
 */


void FUN_00867cc0(long param_1,void *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  short sVar5;
  
  cVar2 = *(char *)(param_1 + 0x19);
  if ((cVar2 != '\0') && (*(undefined1 *)(param_1 + 0x19) = 0, *(char *)(param_1 + 0x18) == '\0')) {
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar4 = FUN_00867720(*(long *)(param_1 + 0x10) + 8,0x140);
      *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar4;
      FUN_008677c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10));
    }
    if ((*(long *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0)) {
      FUN_008677c0(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if (param_2 != (void *)0x0) {
    memcpy(param_2,*(void **)(param_1 + 0x10),0x148);
  }
  if (param_3 != (undefined8 *)0x0) {
    uVar1 = (*(undefined8 **)(param_1 + 8))[1];
    *param_3 = **(undefined8 **)(param_1 + 8);
    param_3[1] = uVar1;
  }
  if (cVar2 != '\0') {
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
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  return;
}


