/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066e590; name: FUN_0066e590
 */


undefined8 *
FUN_0066e590(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_1 == (long *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)
             (**(code **)(*param_1 + 0x40))(param_1,0x60,param_2,param_3,param_4,param_5);
    if ((puVar1 != (undefined8 *)0x0) && (0 < param_2)) {
      puVar4 = puVar1;
      do {
        while( true ) {
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          lVar2 = FUN_005bc740();
          if (lVar2 == 0) {
            uVar3 = FUN_005bc6f0();
          }
          else {
            uVar3 = FUN_005bc740();
          }
          *puVar4 = uVar3;
          puVar4[10] = 0;
          puVar4[0xb] = 0;
          puVar4[8] = 0;
          puVar4[9] = 0;
          puVar4[6] = 0;
          puVar4[7] = 0;
          lVar2 = FUN_005bc740();
          if (lVar2 == 0) break;
          uVar3 = FUN_005bc740();
          puVar4[6] = uVar3;
          param_2 = param_2 + -1;
          puVar4 = puVar4 + 0xc;
          if (param_2 == 0) {
            return puVar1;
          }
        }
        uVar3 = FUN_005bc6f0();
        puVar4[6] = uVar3;
        param_2 = param_2 + -1;
        puVar4 = puVar4 + 0xc;
      } while (param_2 != 0);
    }
  }
  return puVar1;
}


