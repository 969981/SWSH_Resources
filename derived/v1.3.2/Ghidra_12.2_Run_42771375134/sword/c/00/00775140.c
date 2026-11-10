/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00775140; name: FUN_00775140
 */


void FUN_00775140(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],puVar1,param_1[2],param_1[3]);
  }
  lVar2 = param_1[4];
  param_1[4] = 0;
  if (lVar2 != 0) {
    FUN_0077b8a0(lVar2);
    (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],lVar2,param_1[6],param_1[7]);
  }
  puVar1 = (undefined8 *)param_1[8];
  param_1[8] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],puVar1,param_1[10],param_1[0xb]);
  }
  puVar1 = (undefined8 *)param_1[0xc];
  param_1[0xc] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[0xd] + 0x18))
              ((long *)param_1[0xd],puVar1,param_1[0xe],param_1[0xf]);
  }
  puVar1 = (undefined8 *)param_1[0x10];
  param_1[0x10] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[0x11] + 0x18))
              ((long *)param_1[0x11],puVar1,param_1[0x12],param_1[0x13]);
  }
  puVar1 = (undefined8 *)param_1[0x14];
  param_1[0x14] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[0x15] + 0x18))
              ((long *)param_1[0x15],puVar1,param_1[0x16],param_1[0x17]);
  }
  plVar3 = (long *)param_1[0x18];
  param_1[0x18] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
    (**(code **)(*(long *)param_1[0x19] + 0x18))
              ((long *)param_1[0x19],plVar3,param_1[0x1a],param_1[0x1b]);
  }
  puVar1 = (undefined8 *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[0x1d] + 0x18))
              ((long *)param_1[0x1d],puVar1,param_1[0x1e],param_1[0x1f]);
  }
  plVar3 = (long *)param_1[0x18];
  param_1[0x18] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
    (**(code **)(*(long *)param_1[0x19] + 0x18))
              ((long *)param_1[0x19],plVar3,param_1[0x1a],param_1[0x1b]);
  }
  puVar1 = (undefined8 *)param_1[0x14];
  param_1[0x14] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[0x15] + 0x18))
              ((long *)param_1[0x15],puVar1,param_1[0x16],param_1[0x17]);
  }
  puVar1 = (undefined8 *)param_1[0x10];
  param_1[0x10] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[0x11] + 0x18))
              ((long *)param_1[0x11],puVar1,param_1[0x12],param_1[0x13]);
  }
  puVar1 = (undefined8 *)param_1[0xc];
  param_1[0xc] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[0xd] + 0x18))
              ((long *)param_1[0xd],puVar1,param_1[0xe],param_1[0xf]);
  }
  puVar1 = (undefined8 *)param_1[8];
  param_1[8] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],puVar1,param_1[10],param_1[0xb]);
  }
  lVar2 = param_1[4];
  param_1[4] = 0;
  if (lVar2 != 0) {
    FUN_0077b8a0(lVar2);
    (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],lVar2,param_1[6],param_1[7]);
  }
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar1)(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00775450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],puVar1,param_1[2],param_1[3]);
  return;
}


