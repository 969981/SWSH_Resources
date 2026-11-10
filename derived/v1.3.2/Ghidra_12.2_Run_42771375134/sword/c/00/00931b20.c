/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00931b20; name: FUN_00931b20
 */


void FUN_00931b20(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = param_1[0x59];
  *param_1 = (long)(PTR_DAT_02717da0 + 0x10);
  param_1[0x59] = 0;
  if (lVar2 != 0) {
    FUN_00932240(lVar2);
    (**(code **)(*(long *)param_1[0x5a] + 0x18))
              ((long *)param_1[0x5a],lVar2,param_1[0x5b],param_1[0x5c]);
  }
  puVar3 = (undefined8 *)param_1[0x55];
  param_1[0x55] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[0x56] + 0x18))
              ((long *)param_1[0x56],puVar3,param_1[0x57],param_1[0x58]);
  }
  puVar3 = (undefined8 *)param_1[0x51];
  param_1[0x51] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[0x52] + 0x18))
              ((long *)param_1[0x52],puVar3,param_1[0x53],param_1[0x54]);
  }
  lVar2 = param_1[0x4d];
  param_1[0x4d] = 0;
  if (lVar2 != 0) {
    FUN_0092fbd0(lVar2);
    (**(code **)(*(long *)param_1[0x4e] + 0x18))
              ((long *)param_1[0x4e],lVar2,param_1[0x4f],param_1[0x50]);
  }
  lVar2 = param_1[0x49];
  param_1[0x49] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x4a] + 0x18))
              ((long *)param_1[0x4a],lVar2,param_1[0x4b],param_1[0x4c]);
  }
  lVar2 = param_1[0x45];
  param_1[0x45] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x46] + 0x18))
              ((long *)param_1[0x46],lVar2,param_1[0x47],param_1[0x48]);
  }
  lVar2 = param_1[0x41];
  param_1[0x41] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x42] + 0x18))
              ((long *)param_1[0x42],lVar2,param_1[0x43],param_1[0x44]);
  }
  lVar2 = param_1[0x3d];
  param_1[0x3d] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x3e] + 0x18))
              ((long *)param_1[0x3e],lVar2,param_1[0x3f],param_1[0x40]);
  }
  lVar2 = param_1[0x39];
  param_1[0x39] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x3a] + 0x18))
              ((long *)param_1[0x3a],lVar2,param_1[0x3b],param_1[0x3c]);
  }
  lVar2 = param_1[0x35];
  param_1[0x35] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x36] + 0x18))
              ((long *)param_1[0x36],lVar2,param_1[0x37],param_1[0x38]);
  }
  lVar2 = param_1[0x31];
  param_1[0x31] = 0;
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = 0;
    if (lVar1 != 0) {
      (**(code **)(**(long **)(lVar2 + 0x30) + 0x18))
                (*(long **)(lVar2 + 0x30),lVar1,*(undefined8 *)(lVar2 + 0x38),
                 *(undefined8 *)(lVar2 + 0x40));
    }
    lVar1 = *(long *)(lVar2 + 8);
    *(undefined8 *)(lVar2 + 8) = 0;
    if (lVar1 != 0) {
      (**(code **)(**(long **)(lVar2 + 0x10) + 0x18))
                (*(long **)(lVar2 + 0x10),lVar1,*(undefined8 *)(lVar2 + 0x18),
                 *(undefined8 *)(lVar2 + 0x20));
    }
    (**(code **)(*(long *)param_1[0x32] + 0x18))
              ((long *)param_1[0x32],lVar2,param_1[0x33],param_1[0x34]);
  }
  lVar2 = param_1[0x2d];
  param_1[0x2d] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x2e] + 0x18))
              ((long *)param_1[0x2e],lVar2,param_1[0x2f],param_1[0x30]);
  }
  puVar3 = (undefined8 *)param_1[0x29];
  param_1[0x29] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[0x2a] + 0x18))
              ((long *)param_1[0x2a],puVar3,param_1[0x2b],param_1[0x2c]);
  }
  puVar3 = (undefined8 *)param_1[0x25];
  param_1[0x25] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[0x26] + 0x18))
              ((long *)param_1[0x26],puVar3,param_1[0x27],param_1[0x28]);
  }
  lVar2 = param_1[0x21];
  param_1[0x21] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x22] + 0x18))
              ((long *)param_1[0x22],lVar2,param_1[0x23],param_1[0x24]);
  }
  lVar2 = param_1[0x1d];
  param_1[0x1d] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x1e] + 0x18))
              ((long *)param_1[0x1e],lVar2,param_1[0x1f],param_1[0x20]);
  }
  lVar2 = param_1[0x19];
  param_1[0x19] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x1a] + 0x18))
              ((long *)param_1[0x1a],lVar2,param_1[0x1b],param_1[0x1c]);
  }
  lVar2 = param_1[0x15];
  param_1[0x15] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x16] + 0x18))
              ((long *)param_1[0x16],lVar2,param_1[0x17],param_1[0x18]);
  }
  puVar3 = (undefined8 *)param_1[0x11];
  param_1[0x11] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[0x12] + 0x18))
              ((long *)param_1[0x12],puVar3,param_1[0x13],param_1[0x14]);
  }
  puVar3 = (undefined8 *)param_1[0xd];
  param_1[0xd] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[0xe] + 0x18))
              ((long *)param_1[0xe],puVar3,param_1[0xf],param_1[0x10]);
  }
  puVar3 = (undefined8 *)param_1[9];
  param_1[9] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[10] + 0x18))((long *)param_1[10],puVar3,param_1[0xb],param_1[0xc])
    ;
  }
  lVar2 = param_1[5];
  param_1[5] = 0;
  if (lVar2 != 0) {
    FUN_00932730(lVar2);
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],lVar2,param_1[7],param_1[8]);
  }
  lVar2 = param_1[1];
  param_1[1] = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_008de470(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00931f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar2,param_1[3],param_1[4]);
  return;
}


