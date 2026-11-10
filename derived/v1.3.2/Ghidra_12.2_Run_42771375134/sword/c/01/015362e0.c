/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015362e0; name: FUN_015362e0
 */


undefined8 FUN_015362e0(long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x9ae0) != '\0') {
    return 0;
  }
  piVar3 = (int *)(param_1 + 0x9a58);
  if (*piVar3 == 0) {
    lVar4 = 0;
  }
  else {
    piVar3 = (int *)(param_1 + 0x9a78);
    if (*piVar3 == 0) {
      lVar4 = 1;
    }
    else {
      piVar3 = (int *)(param_1 + 0x9a98);
      if (*piVar3 == 0) {
        lVar4 = 2;
      }
      else {
        piVar3 = (int *)(param_1 + 0x9ab8);
        if (*piVar3 != 0) {
          return 0;
        }
        lVar4 = 3;
      }
    }
  }
  uVar1 = *param_2;
  uVar5 = param_2[2];
  iVar2 = *(int *)(param_2 + 3);
  *(undefined8 *)(piVar3 + 2) = param_2[1];
  *(undefined8 *)(piVar3 + 4) = uVar5;
  piVar3[6] = iVar2;
  *(undefined8 *)piVar3 = uVar1;
  *(undefined4 *)(param_1 + lVar4 * 0x20 + 0x9a74) = param_3;
  return 1;
}


