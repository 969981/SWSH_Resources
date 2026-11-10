/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd25b0; name: FUN_00fd25b0
 */


void FUN_00fd25b0(undefined4 *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)PTR_DAT_02710798;
  if (param_1[1] == 1) {
    uVar2 = FUN_0153d370(uVar3,*param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar1 = FUN_0153d3e0(uVar3,*param_1);
    param_1[2] = uVar1;
    FUN_0153d450(uVar3,*param_1);
    FUN_0153d4c0(uVar3,*param_1);
    uVar1 = 2;
  }
  else {
    if (param_1[1] != 0) {
      return;
    }
    uVar2 = FUN_0153d1b0(uVar3,*param_1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    FUN_0153d300(uVar3,*param_1);
    uVar1 = 1;
  }
  param_1[1] = uVar1;
  return;
}


