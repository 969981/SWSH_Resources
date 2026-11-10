/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f9bc0; name: FUN_008f9bc0
 */


void FUN_008f9bc0(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (**(int **)(param_1 + 0x88) == 4) {
    iVar2 = 1;
  }
  else if ((*(byte *)(param_1 + 0x183) & 1) == 0) {
    if (*(char *)((long)*(int **)(param_1 + 0x88) + 0xaee) == '\x06') {
      uVar1 = *(undefined1 *)(param_1 + 0x174);
      piVar3 = (int *)FUN_00931ab0(*(undefined8 *)(param_1 + 0x610));
      if (*piVar3 == 0) {
        iVar2 = *(int *)(param_1 + 0x16c);
        if (iVar2 == 8) {
          iVar2 = 1;
          *(undefined4 *)(param_1 + 0x16c) = 1;
        }
      }
      else {
        uVar4 = FUN_00931ab0(*(undefined8 *)(param_1 + 0x610));
        iVar2 = FUN_00932310(uVar4,param_1,uVar1,**(undefined4 **)(param_1 + 0x88));
      }
    }
    else {
      iVar2 = 5;
    }
  }
  else {
    iVar2 = 6;
  }
  *(int *)(*(long *)(param_1 + 0x88) + 0xae8) = iVar2;
  return;
}


