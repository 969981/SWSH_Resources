/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0088a630; name: FUN_0088a630
 */


void FUN_0088a630(long param_1,long *param_2)

{
  long *plVar1;
  undefined2 uVar2;
  long *plVar3;
  
  plVar1 = param_2 + 1;
  plVar3 = param_2;
  if (((*(char *)(param_1 + 0x68) != '\0') || (plVar3 = plVar1, *(char *)(param_1 + 0x6e) != '\0'))
     && (*plVar3 != 0)) {
    uVar2 = FUN_00879070(*plVar3,0);
    *(undefined2 *)(param_1 + 0x36) = uVar2;
  }
  plVar3 = param_2;
  if (((*(char *)(param_1 + 0x69) != '\0') || (plVar3 = plVar1, *(char *)(param_1 + 0x6f) != '\0'))
     && (*plVar3 != 0)) {
    uVar2 = FUN_00879070(*plVar3,1);
    *(undefined2 *)(param_1 + 0x38) = uVar2;
  }
  plVar3 = param_2;
  if (((*(char *)(param_1 + 0x6a) != '\0') || (plVar3 = plVar1, *(char *)(param_1 + 0x70) != '\0'))
     && (*plVar3 != 0)) {
    uVar2 = FUN_00879070(*plVar3,2);
    *(undefined2 *)(param_1 + 0x3a) = uVar2;
  }
  plVar3 = param_2;
  if (((*(char *)(param_1 + 0x6b) != '\0') || (plVar3 = plVar1, *(char *)(param_1 + 0x71) != '\0'))
     && (*plVar3 != 0)) {
    uVar2 = FUN_00879070(*plVar3,3);
    *(undefined2 *)(param_1 + 0x3c) = uVar2;
  }
  plVar3 = param_2;
  if (((*(char *)(param_1 + 0x6c) != '\0') || (plVar3 = plVar1, *(char *)(param_1 + 0x72) != '\0'))
     && (*plVar3 != 0)) {
    uVar2 = FUN_00879070(*plVar3,4);
    *(undefined2 *)(param_1 + 0x3e) = uVar2;
  }
  if ((*(char *)(param_1 + 0x6d) != '\0') || (param_2 = plVar1, *(char *)(param_1 + 0x73) != '\0'))
  {
    if (*param_2 != 0) {
      uVar2 = FUN_00879070(*param_2,5);
      *(undefined2 *)(param_1 + 0x40) = uVar2;
    }
  }
  return;
}


