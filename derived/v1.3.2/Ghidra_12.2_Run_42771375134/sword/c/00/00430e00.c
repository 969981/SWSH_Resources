/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00430e00; name: FUN_00430e00
 */


undefined8
FUN_00430e00(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,int param_6,undefined8 param_7,undefined4 param_8)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int *local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  if (param_6 == 0) {
    uVar4 = FUN_00431060(param_1,param_2,param_3,param_4,param_5,0,param_8);
  }
  else {
    local_50 = 0;
    local_48 = 0;
    local_58 = (int *)FUN_00430f20(param_6,param_7);
    uVar4 = 0;
    if ((local_58 != (int *)0x0) &&
       (uVar4 = FUN_00431060(param_1,param_2,param_3,param_4,param_5,&local_58,param_8),
       piVar3 = local_58, (int)uVar4 == 0)) {
      iVar1 = *local_58;
      *local_58 = iVar1 + -1;
      puVar2 = PTR_DAT_02712a90;
      if (iVar1 + -1 == 0) {
        uVar5 = (ulong)(uint)local_58[1];
        if (local_58[1] != 0) {
          uVar6 = 0;
          plVar7 = (long *)(local_58 + 4);
          do {
            if (*plVar7 != 0) {
              FUN_00404870(*(undefined4 *)puVar2);
              uVar5 = (ulong)(uint)piVar3[1];
            }
            uVar6 = uVar6 + 1;
            plVar7 = plVar7 + 4;
          } while (uVar6 < uVar5);
        }
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,piVar3);
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}


