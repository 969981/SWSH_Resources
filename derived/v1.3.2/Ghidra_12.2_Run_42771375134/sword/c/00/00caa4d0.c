/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00caa4d0; name: FUN_00caa4d0
 */


void FUN_00caa4d0(undefined8 param_1,undefined8 param_2,long *param_3,undefined1 (*param_4) [16],
                 undefined4 *param_5,undefined8 param_6,undefined4 *param_7)

{
  bool bVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  
  auVar5 = FUN_014a9f30(param_2);
  *param_4 = auVar5;
  plVar2 = (long *)FUN_00c79e90(param_1,0x19);
  if (*param_3 != *plVar2) {
    plVar2 = (long *)FUN_00c79e90(param_1,0x1e);
    if (*param_3 != *plVar2) {
      plVar2 = (long *)FUN_00c79e90(param_1,0x1a);
      if (*param_3 == *plVar2) {
        bVar1 = true;
        uVar4 = 1;
        uVar3 = 1;
      }
      else {
        plVar2 = (long *)FUN_00c79e90(param_1,0x18);
        if (*param_3 == *plVar2) {
          uVar4 = 2;
          bVar1 = true;
          uVar3 = 2;
        }
        else {
          plVar2 = (long *)FUN_00c79e90(param_1,0x1f);
          if (*param_3 == *plVar2) {
            bVar1 = false;
            uVar4 = 0;
            uVar3 = 0;
          }
          else {
            plVar2 = (long *)FUN_00c79e90(param_1,0x20);
            bVar1 = *param_3 != *plVar2;
            uVar4 = 0;
            uVar3 = 0;
          }
        }
      }
      goto LAB_00caa54c;
    }
  }
  uVar3 = 0;
  bVar1 = true;
  uVar4 = 1;
LAB_00caa54c:
  *(bool *)param_6 = bVar1;
  *param_5 = uVar4;
  *param_7 = uVar3;
  return;
}


