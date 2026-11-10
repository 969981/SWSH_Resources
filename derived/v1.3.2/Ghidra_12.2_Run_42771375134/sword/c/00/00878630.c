/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00878630; name: FUN_00878630
 */


void FUN_00878630(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = param_1[0xb];
  puVar1 = PTR_DAT_027173d0 + 0x50;
  *param_1 = (long)(PTR_DAT_027173d0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[0xb] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],lVar2,param_1[0xd],param_1[0xe]);
  }
  lVar2 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x10] + 0x18))
              ((long *)param_1[0x10],lVar2,param_1[0x11],param_1[0x12]);
  }
  puVar3 = (undefined8 *)param_1[0x13];
  param_1[0x13] = 0;
  if (puVar3 == (undefined8 *)0x0) {
    param_1[0x13] = 0;
    lVar2 = param_1[0xf];
    param_1[0xf] = 0;
  }
  else {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[0x14] + 0x18))
              ((long *)param_1[0x14],puVar3,param_1[0x15],param_1[0x16]);
    puVar3 = (undefined8 *)param_1[0x13];
    param_1[0x13] = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      (**(code **)(*(long *)param_1[0x14] + 0x18))
                ((long *)param_1[0x14],puVar3,param_1[0x15],param_1[0x16]);
    }
    lVar2 = param_1[0xf];
    param_1[0xf] = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x10] + 0x18))
              ((long *)param_1[0x10],lVar2,param_1[0x11],param_1[0x12]);
  }
  lVar2 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00878744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0xc] + 0x18))((long *)param_1[0xc],lVar2,param_1[0xd],param_1[0xe]);
  return;
}


