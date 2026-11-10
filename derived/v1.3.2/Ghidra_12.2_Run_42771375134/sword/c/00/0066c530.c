/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066c530; name: FUN_0066c530
 */


undefined8 FUN_0066c530(undefined8 param_1,long *param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  
  if (param_2 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0xd8))(param_2,1);
    *param_3 = iVar1;
    iVar1 = (**(code **)(*param_2 + 0xd8))(param_2,1);
    param_3[0x201] = iVar1;
    iVar1 = (**(code **)(*param_2 + 0xd8))(param_2,1);
    param_3[0x206] = iVar1;
    if (0 < *param_3) {
      lVar2 = 0;
      piVar4 = param_3 + 3;
      do {
        iVar1 = (**(code **)(*param_2 + 0xd8))(param_2,1);
        piVar4[-2] = iVar1;
        iVar1 = (**(code **)(*param_2 + 0xd8))(param_2,1);
        piVar4[-1] = iVar1;
        iVar1 = (**(code **)(*param_2 + 0xd8))(param_2,1);
        *piVar4 = iVar1;
        iVar1 = (**(code **)(*param_2 + 0xd8))(param_2,1);
        piVar4[1] = iVar1;
        iVar1 = (**(code **)(*param_2 + 0xd8))(param_2,1);
        piVar4[2] = iVar1;
        iVar1 = (**(code **)(*param_2 + 0xd8))(param_2,1);
        piVar4[3] = iVar1;
        lVar2 = lVar2 + 1;
        piVar4 = piVar4 + 8;
      } while (lVar2 < *param_3);
    }
    if (param_3[0x201] < 1) {
      uVar3 = 1;
    }
    else {
      lVar2 = 0;
      uVar3 = 1;
      do {
        iVar1 = (**(code **)(*param_2 + 0xd8))(param_2,1);
        param_3[lVar2 + 0x202] = iVar1;
        lVar2 = lVar2 + 1;
      } while (lVar2 < param_3[0x201]);
    }
  }
  return uVar3;
}


