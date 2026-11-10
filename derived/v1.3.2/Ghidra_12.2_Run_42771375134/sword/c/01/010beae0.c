/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010beae0; name: FUN_010beae0
 */


void FUN_010beae0(long param_1)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined2 local_d8;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined1 auStack_b0 [80];
  
  iVar2 = 0;
  lVar3 = -8000;
  do {
    local_108 = 0xffffffffffffffff;
    local_100 = 0;
    local_fc = 0;
    local_f8 = 0;
    local_f4 = 0xff;
    local_d8 = 0;
    local_d4 = 0;
    local_d0 = 0;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = 0;
    local_bc = 0xffffffff;
    FUN_0121ad80(auStack_b0);
    memcpy((void *)(param_1 + lVar3 + 8000),&local_108,0x9a);
    if (*(int *)(param_1 + lVar3 + 0x7d04) != -1) {
      memcpy((void *)(param_1 + (long)iVar2 * 0xa0),(void *)(param_1 + lVar3 + 32000),0x9a);
      iVar2 = iVar2 + 1;
    }
    lVar3 = lVar3 + 0xa0;
  } while (lVar3 != 0);
  iVar2 = 0;
  piVar4 = (int *)(param_1 + 0x7d04);
  pvVar1 = (void *)(param_1 + 8000);
  lVar3 = 0x32;
  do {
    local_108 = 0xffffffffffffffff;
    local_100 = 0;
    local_fc = 0;
    local_f8 = 0;
    local_f4 = 0xff;
    local_d8 = 0;
    local_d4 = 0;
    local_d0 = 0;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = 0;
    local_bc = 0xffffffff;
    FUN_0121ad80(auStack_b0);
    memcpy(pvVar1,&local_108,0x9a);
    if (*piVar4 != -1) {
      memcpy((void *)(param_1 + (long)iVar2 * 0xa0 + 8000),piVar4 + -1,0x9a);
      iVar2 = iVar2 + 1;
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 0x28;
    pvVar1 = (void *)((long)pvVar1 + 0xa0);
  } while (lVar3 != 0);
  iVar2 = 0;
  piVar4 = (int *)(param_1 + 0x9c44);
  pvVar1 = (void *)(param_1 + 16000);
  lVar3 = 0x32;
  do {
    local_108 = 0xffffffffffffffff;
    local_100 = 0;
    local_fc = 0;
    local_f8 = 0;
    local_f4 = 0xff;
    local_d8 = 0;
    local_d4 = 0;
    local_d0 = 0;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = 0;
    local_bc = 0xffffffff;
    FUN_0121ad80(auStack_b0);
    memcpy(pvVar1,&local_108,0x9a);
    if (*piVar4 != -1) {
      memcpy((void *)(param_1 + (long)iVar2 * 0xa0 + 16000),piVar4 + -1,0x9a);
      iVar2 = iVar2 + 1;
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 0x28;
    pvVar1 = (void *)((long)pvVar1 + 0xa0);
  } while (lVar3 != 0);
  *(undefined4 *)(param_1 + 0x119e4) = *(undefined4 *)(param_1 + 0x11a00);
  return;
}


