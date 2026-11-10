/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006be390; name: FUN_006be390
 */


void FUN_006be390(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[0xc];
  *param_1 = (long)(PTR_DAT_02715208 + 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    if ((undefined8 *)param_1[0xd] == puVar4) {
      puVar1 = puVar4;
    }
    else {
      puVar1 = (undefined8 *)param_1[0xd];
      do {
        puVar5 = puVar1 + -5;
        puVar3 = (undefined8 *)*puVar5;
        *puVar5 = 0;
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3);
          (**(code **)(*(long *)puVar1[-4] + 0x18))((long *)puVar1[-4],puVar3,puVar1[-3],puVar1[-2])
          ;
        }
        puVar1 = puVar5;
      } while (puVar4 != puVar5);
      puVar1 = (undefined8 *)param_1[0xc];
    }
    param_1[0xd] = (long)puVar4;
    (**(code **)(*(long *)param_1[0xf] + 0x18))
              ((long *)param_1[0xf],puVar1,param_1[0xe] - (long)puVar1,8);
  }
  if (param_1[9] != 0) {
    (**(code **)(*(long *)(param_1[9] + 0x48) + 0x18))();
    param_1[9] = 0;
  }
  lVar2 = param_1[2];
  *param_1 = (long)(PTR_DAT_027151d8 + 0x10);
  if (lVar2 == 0) {
    return;
  }
  param_1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x006be490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],lVar2,param_1[4] - lVar2,8);
  return;
}


