/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01476160; name: FUN_01476160
 */


void FUN_01476160(long param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  int local_18 [2];
  
  if (param_2 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x5f8);
    local_18[0] = *(int *)(*(long *)(param_1 + 0x5d0) + 0x10);
  }
  else {
    piVar3 = *(int **)(param_1 + 0x5d0);
    if (*piVar3 == 2) {
      uVar1 = piVar3[4];
      if ((uint)piVar3[0x42] <= uVar1) {
        uVar1 = (piVar3[0x42] + uVar1) - 3;
      }
    }
    else {
      uVar1 = piVar3[4];
    }
    (**(code **)(**(long **)(piVar3 + 2) + 0x50))(*(long **)(piVar3 + 2),uVar1);
    uVar1 = FUN_0087b890();
    local_18[0] = *(int *)(param_1 + 0x6f0);
    if ((int)(uVar1 & 0xff) <= local_18[0]) {
      local_18[0] = 0;
      *(undefined4 *)(param_1 + 0x6f0) = 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x600);
  }
  local_18[1] = 0;
  FUN_016b7990(uVar2,local_18,1,0);
  return;
}


