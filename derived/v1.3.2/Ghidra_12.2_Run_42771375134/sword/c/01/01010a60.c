/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01010a60; name: FUN_01010a60
 */


void FUN_01010a60(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  
  if (param_2 != (long *)0x0) {
    puVar1 = PTR_DAT_0271e730 + 0x10;
    puVar2 = PTR_DAT_02710a48 + 0x10;
    do {
      plVar5 = (long *)*param_2;
      pcVar4 = (code *)param_2[0x2b];
      param_2[4] = (long)puVar1;
      if (pcVar4 != (code *)0x0) {
        param_2[0x2c] = 0;
        param_2[0x2d] = 0;
        param_2[0x2a] = 0;
        param_2[0x2b] = 0;
        (*pcVar4)(param_2 + 0x2e);
      }
      if (param_2[0x29] != 0) {
        (**(code **)(*(long *)(param_2[0x29] + 0x48) + 0x18))();
        param_2[0x29] = 0;
      }
      param_2[6] = (long)puVar2;
      if (param_2[7] == 0) {
        param_2[7] = 0;
        pcVar4 = (code *)param_2[0x19];
      }
      else {
        FUN_006e2100();
        lVar3 = param_2[7];
        param_2[7] = 0;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
        }
        pcVar4 = (code *)param_2[0x19];
      }
      if (pcVar4 != (code *)0x0) {
        param_2[0x1a] = 0;
        param_2[0x1b] = 0;
        param_2[0x18] = 0;
        param_2[0x19] = 0;
        (*pcVar4)(param_2 + 0x1c);
      }
      pcVar4 = (code *)param_2[9];
      if (pcVar4 != (code *)0x0) {
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[8] = 0;
        param_2[9] = 0;
        (*pcVar4)(param_2 + 0xc);
      }
      if (param_2[7] != 0) {
        (**(code **)(*(long *)(param_2[7] + 0x48) + 0x18))();
        param_2[7] = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
                (*(long **)(param_1 + 0x30),param_2,0x1d0,0x10);
      param_2 = plVar5;
    } while (plVar5 != (long *)0x0);
  }
  return;
}


