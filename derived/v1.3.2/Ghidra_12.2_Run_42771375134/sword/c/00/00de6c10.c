/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de6c10; name: FUN_00de6c10
 */


void FUN_00de6c10(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_0271ecb0 + 0x48;
  *param_1 = (long)(PTR_DAT_0271ecb0 + 0x10);
  param_1[9] = (long)puVar1;
  lVar2 = param_1[0xd];
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x170) != '\0')) {
    FUN_006e2100(lVar2,param_1 + 0xc);
    lVar2 = param_1[0xd];
    param_1[0xd] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  puVar4 = (undefined8 *)param_1[0x51];
  *(undefined1 *)(param_1 + 0x56) = 0;
  param_1[0x51] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(*(long *)param_1[0x52] + 0x18))
              ((long *)param_1[0x52],puVar4,param_1[0x53],param_1[0x54]);
  }
  lVar2 = param_1[0x4d];
  param_1[0x4d] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x4e] + 0x18))
              ((long *)param_1[0x4e],lVar2,param_1[0x4f],param_1[0x50]);
  }
  puVar4 = (undefined8 *)param_1[0x47];
  param_1[0x47] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(*(long *)param_1[0x48] + 0x18))
              ((long *)param_1[0x48],puVar4,param_1[0x49],param_1[0x4a]);
  }
  lVar2 = param_1[0x43];
  param_1[0x43] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x44] + 0x18))
              ((long *)param_1[0x44],lVar2,param_1[0x45],param_1[0x46]);
  }
  pcVar3 = (code *)param_1[0x33];
  if (pcVar3 != (code *)0x0) {
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    (*pcVar3)(param_1 + 0x36);
  }
  lVar2 = param_1[0x2e];
  param_1[0x2e] = 0;
  if (lVar2 != 0) {
    FUN_0075cc50(lVar2);
    (**(code **)(*(long *)param_1[0x2f] + 0x18))
              ((long *)param_1[0x2f],lVar2,param_1[0x30],param_1[0x31]);
  }
  param_1[0xc] = (long)(PTR_DAT_02710a48 + 0x10);
  if (param_1[0xd] == 0) {
    param_1[0xd] = 0;
    pcVar3 = (code *)param_1[0x1f];
  }
  else {
    FUN_006e2100();
    lVar2 = param_1[0xd];
    param_1[0xd] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x1f];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    (*pcVar3)(param_1 + 0x22);
  }
  pcVar3 = (code *)param_1[0xf];
  if (pcVar3 != (code *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (*pcVar3)(param_1 + 0x12);
  }
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  return;
}


