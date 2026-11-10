/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a2330; name: FUN_009a2330
 */


void FUN_009a2330(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined4 local_48;
  char local_44;
  
  *param_2 = 0;
  piVar2 = (int *)param_3[1];
  if (*piVar2 != 0xa5) {
    uVar3 = *param_3;
    uVar4 = param_3[2];
    uVar1 = FUN_009423e0();
    local_44 = FUN_0092ac00(uVar1,uVar3,*piVar2,0x21,piVar2,uVar4);
    if (local_44 != '\0') {
      local_50 = *param_3;
      local_48 = *(undefined4 *)param_3[1];
      FUN_00942450(param_1);
      uVar1 = FUN_00925dd0();
      FUN_009a1090(uVar1,auStack_58,&local_50);
      *param_2 = 1;
    }
  }
  return;
}


