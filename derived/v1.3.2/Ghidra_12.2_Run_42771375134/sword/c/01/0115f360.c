/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115f360; name: FUN_0115f360
 */


void FUN_0115f360(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  code *pcVar2;
  undefined **local_b0;
  undefined8 uStack_a8;
  undefined ***local_90;
  undefined **local_80;
  undefined8 uStack_78;
  undefined ***local_60;
  undefined **local_50;
  undefined8 uStack_48;
  undefined ***local_30;
  
  if ((int)param_2 == 1) {
    local_b0 = &PTR_LAB_02678848;
    uStack_a8 = param_1;
    local_90 = &local_b0;
    FUN_011593a0(param_1,param_2,&local_b0);
    pppuVar1 = local_90;
    if (&local_b0 == local_90) goto LAB_0115f438;
LAB_0115f3ec:
    if (pppuVar1 == (undefined ***)0x0) goto LAB_0115f444;
    pcVar2 = (code *)(*pppuVar1)[5];
  }
  else {
    if ((int)param_2 != 0) {
      return;
    }
    local_50 = &PTR_LAB_026787b8;
    uStack_48 = param_1;
    local_30 = &local_50;
    FUN_011593a0(param_1,1,&local_50);
    if (&local_50 == local_30) {
      pcVar2 = (code *)(*local_30)[4];
LAB_0115f404:
      (*pcVar2)();
    }
    else if (local_30 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_30)[5];
      goto LAB_0115f404;
    }
    local_80 = &PTR_LAB_02678800;
    uStack_78 = param_1;
    local_60 = &local_80;
    FUN_011593a0(param_1,0,&local_80);
    pppuVar1 = local_60;
    if (&local_80 != local_60) goto LAB_0115f3ec;
LAB_0115f438:
    pcVar2 = (code *)(*pppuVar1)[4];
  }
  (*pcVar2)();
LAB_0115f444:
  FUN_01159450(param_1);
  return;
}


