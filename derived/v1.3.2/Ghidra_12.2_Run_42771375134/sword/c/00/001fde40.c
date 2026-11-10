/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001fde40; name: FUN_001fde40
 */


void FUN_001fde40(undefined8 param_1,long *param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((*(uint *)((long)param_2 + 0xc) & 0x7fffffff) < (int)param_2[1] + param_4) {
    FUN_001fe340(param_2);
  }
  if (param_4 != 0) {
    puVar3 = param_3 + (ulong)param_4 * 0xc;
    do {
      while( true ) {
        uVar1 = *(uint *)(param_2 + 1);
        if ((*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= uVar1) break;
        puVar2 = (undefined4 *)(*param_2 + (ulong)uVar1 * 0x30);
        *puVar2 = *param_3;
        puVar2[1] = param_3[1];
        puVar2[2] = param_3[2];
        puVar2[3] = param_3[3];
        puVar2[4] = param_3[4];
        puVar2[5] = param_3[5];
        puVar2[6] = param_3[6];
        puVar2[7] = param_3[7];
        puVar2[8] = param_3[8];
        puVar2[9] = param_3[9];
        puVar2[10] = param_3[10];
        puVar2[0xb] = param_3[0xb];
        *(uint *)(param_2 + 1) = uVar1 + 1;
        param_3 = param_3 + 0xc;
        if (puVar3 <= param_3) {
          return;
        }
      }
      FUN_001fe4a0(param_2,param_3);
      param_3 = param_3 + 0xc;
    } while (param_3 < puVar3);
  }
  return;
}


