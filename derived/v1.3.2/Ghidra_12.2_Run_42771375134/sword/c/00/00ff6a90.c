/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff6a90; name: FUN_00ff6a90
 */


void FUN_00ff6a90(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar2 = PTR_DAT_02710a38;
  puVar3 = (undefined8 *)param_1[0x2b];
  puVar1 = PTR_DAT_02710a38 + 0x10;
  *param_1 = (long)(PTR_DAT_02723370 + 0x10);
  param_1[0x1f] = (long)puVar1;
  param_1[0x2b] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[0x2c] + 0x18))
              ((long *)param_1[0x2c],puVar3,param_1[0x2d],param_1[0x2e]);
  }
  puVar3 = (undefined8 *)param_1[0x27];
  param_1[0x27] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[0x28] + 0x18))
              ((long *)param_1[0x28],puVar3,param_1[0x29],param_1[0x2a]);
  }
  puVar3 = (undefined8 *)param_1[0x23];
  param_1[0x23] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[0x24] + 0x18))
              ((long *)param_1[0x24],puVar3,param_1[0x25],param_1[0x26]);
  }
  puVar3 = (undefined8 *)param_1[0xe];
  param_1[2] = (long)(puVar2 + 0x10);
  param_1[0xe] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[0xf] + 0x18))
              ((long *)param_1[0xf],puVar3,param_1[0x10],param_1[0x11]);
  }
  puVar3 = (undefined8 *)param_1[10];
  param_1[10] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[0xb] + 0x18))
              ((long *)param_1[0xb],puVar3,param_1[0xc],param_1[0xd]);
  }
  puVar3 = (undefined8 *)param_1[6];
  param_1[6] = 0;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar3)(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00ff6c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[7] + 0x18))((long *)param_1[7],puVar3,param_1[8],param_1[9]);
  return;
}


