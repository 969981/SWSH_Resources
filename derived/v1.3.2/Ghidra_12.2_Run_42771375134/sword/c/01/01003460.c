/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01003460; name: FUN_01003460
 */


void FUN_01003460(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    lVar1 = *(long *)(param_1 + 0x168);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x58),param_1 + 0x50);
    lVar1 = *(long *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x168);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x168) = 0;
    lVar1 = *(long *)(param_1 + 0x278);
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0x160);
    lVar1 = *(long *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x168) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x278);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x278) = 0;
    lVar1 = *(long *)(param_1 + 0x388);
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0x270);
    lVar1 = *(long *)(param_1 + 0x278);
    *(undefined8 *)(param_1 + 0x278) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x388);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x388) = 0;
    lVar1 = *(long *)(param_1 + 0x498);
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0x380);
    lVar1 = *(long *)(param_1 + 0x388);
    *(undefined8 *)(param_1 + 0x388) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x498);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x498) = 0;
  }
  else {
    FUN_006e2100(lVar1,param_1 + 0x490);
    lVar1 = *(long *)(param_1 + 0x498);
    *(undefined8 *)(param_1 + 0x498) = 0;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0100353c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


