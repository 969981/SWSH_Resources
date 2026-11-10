/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bd370; name: FUN_010bd370
 */


void FUN_010bd370(long param_1)

{
  void *__src;
  int iVar1;
  long lVar2;
  long lVar3;
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
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x11a00) = 0;
  lVar2 = -8000;
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
    lVar3 = param_1 + lVar2;
    memcpy((void *)(lVar3 + 32000),&local_108,0x9a);
    if (*(int *)(lVar3 + 0x1f44) != -1) {
      memcpy((void *)(param_1 + (long)iVar1 * 0xa0 + 24000),(void *)(lVar3 + 8000),0x9a);
      iVar1 = iVar1 + 1;
    }
    lVar2 = lVar2 + 0xa0;
  } while (lVar2 != 0);
  iVar1 = 0;
  lVar3 = 0x32;
  lVar2 = param_1;
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
    memcpy((void *)(lVar2 + 32000),&local_108,0x9a);
    if (*(int *)(lVar2 + 0x1f44) != -1) {
      memcpy((void *)(param_1 + (long)iVar1 * 0xa0 + 32000),(void *)(lVar2 + 8000),0x9a);
      iVar1 = iVar1 + 1;
    }
    lVar3 = lVar3 + -1;
    lVar2 = lVar2 + 0xa0;
  } while (lVar3 != 0);
  lVar3 = 0x32;
  lVar2 = 16000;
  iVar1 = 0;
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
    __src = (void *)(param_1 + lVar2);
    memcpy((void *)((long)__src + 24000),&local_108,0x9a);
    if (*(int *)((long)__src + 4) != -1) {
      memcpy((void *)(param_1 + (long)iVar1 * 0xa0 + 40000),__src,0x9a);
      iVar1 = iVar1 + 1;
    }
    lVar3 = lVar3 + -1;
    lVar2 = lVar2 + 0xa0;
  } while (lVar3 != 0);
  *(undefined4 *)(param_1 + 0x11a00) = *(undefined4 *)(param_1 + 0x119e4);
  return;
}


