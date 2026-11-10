/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c3700; name: FUN_005c3700
 */


void FUN_005c3700(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 auStack_30 [16];
  
  *param_1 = (long)(PTR_DAT_02713e90 + 0x10);
  FUN_005c8860(auStack_30,param_1 + 1,1);
  FUN_005c88a0(auStack_30);
  if (param_1[0x50009] != 0) {
    FUN_005c37f0(param_1);
  }
  puVar2 = PTR_DAT_02713ea0;
  *PTR_DAT_02713e98 = 0;
  plVar4 = param_1 + 0x50007;
  do {
    plVar3 = plVar4 + -5;
    *plVar3 = (long)(puVar2 + 0x10);
    if (plVar4[-1] != 0) {
      plVar1 = plVar4 + -3;
      do {
        puVar5 = (undefined8 *)*plVar1;
        if (puVar5 == (undefined8 *)0x0) break;
        puVar7 = (undefined8 *)puVar5[1];
        if (puVar7 == (undefined8 *)0x0) {
          *plVar1 = 0;
          plVar4[-2] = 0;
        }
        else {
          *puVar7 = 0;
          *plVar1 = (long)puVar7;
        }
        *puVar5 = 0;
        puVar5[1] = 0;
        lVar6 = plVar4[-1];
        plVar4[-1] = lVar6 + -1;
      } while (lVar6 + -1 != 0);
    }
    plVar4 = plVar3;
    if (plVar3 == param_1 + 7) {
      FUN_005c8790(param_1 + 1);
      return;
    }
  } while( true );
}


