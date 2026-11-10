/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e72b0; name: FUN_006e72b0
 */


void FUN_006e72b0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)param_1[0x36];
  puVar1 = PTR_DAT_02715588 + 0x68;
  puVar2 = PTR_DAT_02715588 + 0xa8;
  *param_1 = (long)(PTR_DAT_02715588 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (plVar5 != (long *)0x0) {
    if ((long *)param_1[0x37] == plVar5) {
      plVar3 = plVar5;
    }
    else {
      plVar3 = (long *)param_1[0x37];
      do {
        plVar6 = plVar3 + -1;
        if (*plVar6 != 0) {
          (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
          plVar3[-1] = 0;
        }
        plVar3 = plVar6;
      } while (plVar5 != plVar6);
      plVar3 = (long *)param_1[0x36];
    }
    param_1[0x37] = (long)plVar5;
    (**(code **)(*(long *)param_1[0x39] + 0x18))
              ((long *)param_1[0x39],plVar3,param_1[0x38] - (long)plVar3,8);
  }
  puVar1 = PTR_DAT_02715218;
  lVar4 = param_1[0x32];
  param_1[0x32] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x68);
  param_1[10] = (long)(puVar1 + 0xa8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)param_1[0x33] + 0x18))
              ((long *)param_1[0x33],lVar4,param_1[0x34],param_1[0x35]);
  }
  FUN_006e2420(param_1);
  return;
}


